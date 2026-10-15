/**
 * nhl_07_recomp - Recompiled code chunk 91
 * Functions: 250 (0x000CEF30 - 0x000D10F0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000CEF30
 * Original: 0x000CEF30 - 0x000CEF39 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEF30(void)
{

loc_000CEF30: ;
    eax = ecx;
    MEM32(eax) = 0x7C7028;
    esp += 4; return; /* ret */

}

/**
 * sub_000CEF40
 * Original: 0x000CEF40 - 0x000CEF43 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEF40(void)
{

loc_000CEF40: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CEF50
 * Original: 0x000CEF50 - 0x000CEF5D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEF50(void)
{

loc_000CEF50: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7038;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CEF60
 * Original: 0x000CEF60 - 0x000CEF84 (36 bytes, 12 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000CEF60(void)
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

loc_000CEF60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, 0x000CEF70u); RECOMP_ABI_CALL(0x0001EB79u, sub_0001EB79); /* call 0x0001EB79 */

loc_000CEF70: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CEF77u); RECOMP_ABI_CALL(0x00019D9Au, sub_00019D9A); /* call 0x00019D9A */

loc_000CEF77: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CEF90
 * Original: 0x000CEF90 - 0x000CEF99 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEF90(void)
{

loc_000CEF90: ;
    eax = ecx;
    MEM32(eax) = 0x7C7050;
    esp += 4; return; /* ret */

}

/**
 * sub_000CEFA0
 * Original: 0x000CEFA0 - 0x000CEFA3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEFA0(void)
{

loc_000CEFA0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CEFB0
 * Original: 0x000CEFB0 - 0x000CEFBD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEFB0(void)
{

loc_000CEFB0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7060;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CEFC0
 * Original: 0x000CEFC0 - 0x000CEFE4 (36 bytes, 12 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000CEFC0(void)
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

loc_000CEFC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, 0x000CEFD0u); RECOMP_ABI_CALL(0x0001EB79u, sub_0001EB79); /* call 0x0001EB79 */

loc_000CEFD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CEFD7u); RECOMP_ABI_CALL(0x0002776Au, sub_0002776A); /* call 0x0002776A */

loc_000CEFD7: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CEFF0
 * Original: 0x000CEFF0 - 0x000CEFF9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CEFF0(void)
{

loc_000CEFF0: ;
    eax = ecx;
    MEM32(eax) = 0x7C707C;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF000
 * Original: 0x000CF000 - 0x000CF003 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF000(void)
{

loc_000CF000: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF010
 * Original: 0x000CF010 - 0x000CF01D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF010(void)
{

loc_000CF010: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C708C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF020
 * Original: 0x000CF020 - 0x000CF036 (22 bytes, 7 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000CF020(void)
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

loc_000CF020: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF02Au); RECOMP_ABI_CALL(0x0001BB18u, sub_0001BB18); /* call 0x0001BB18 */

loc_000CF02A: ;
    eax = MEM32(esp + 8);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CF040
 * Original: 0x000CF040 - 0x000CF049 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF040(void)
{

loc_000CF040: ;
    eax = ecx;
    MEM32(eax) = 0x7C70A8;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF050
 * Original: 0x000CF050 - 0x000CF053 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF050(void)
{

loc_000CF050: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF060
 * Original: 0x000CF060 - 0x000CF06D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF060(void)
{

loc_000CF060: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C70B8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF070
 * Original: 0x000CF070 - 0x000CF086 (22 bytes, 7 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000CF070(void)
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

loc_000CF070: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF07Au); RECOMP_ABI_CALL(0x00029709u, sub_00029709); /* call 0x00029709 */

loc_000CF07A: ;
    eax = MEM32(esp + 8);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CF090
 * Original: 0x000CF090 - 0x000CF099 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF090(void)
{

loc_000CF090: ;
    eax = ecx;
    MEM32(eax) = 0x7C70D0;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF0A0
 * Original: 0x000CF0A0 - 0x000CF0A3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF0A0(void)
{

loc_000CF0A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF0B0
 * Original: 0x000CF0B0 - 0x000CF0BD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF0B0(void)
{

loc_000CF0B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C70E0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF0C0
 * Original: 0x000CF0C0 - 0x000CF0D8 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000CF0C0(void)
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

loc_000CF0C0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF0CCu); RECOMP_ABI_CALL(0x00019D9Au, sub_00019D9A); /* call 0x00019D9A */

loc_000CF0CC: ;
    eax = MEM32(esp + 0xC);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CF0E0
 * Original: 0x000CF0E0 - 0x000CF0E9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF0E0(void)
{

loc_000CF0E0: ;
    eax = ecx;
    MEM32(eax) = 0x7C70F4;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF0F0
 * Original: 0x000CF0F0 - 0x000CF0F3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF0F0(void)
{

loc_000CF0F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF100
 * Original: 0x000CF100 - 0x000CF10D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF100(void)
{

loc_000CF100: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7104;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF110
 * Original: 0x000CF110 - 0x000CF128 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000CF110(void)
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

loc_000CF110: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF11Cu); RECOMP_ABI_CALL(0x0002776Au, sub_0002776A); /* call 0x0002776A */

loc_000CF11C: ;
    eax = MEM32(esp + 0xC);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CF130
 * Original: 0x000CF130 - 0x000CF139 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF130(void)
{

loc_000CF130: ;
    eax = ecx;
    MEM32(eax) = 0x7C711C;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF140
 * Original: 0x000CF140 - 0x000CF143 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF140(void)
{

loc_000CF140: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF150
 * Original: 0x000CF150 - 0x000CF15D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF150(void)
{

loc_000CF150: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C712C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF160
 * Original: 0x000CF160 - 0x000CF176 (22 bytes, 7 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000CF160(void)
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

loc_000CF160: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF16Au); RECOMP_ABI_CALL(0x0001BB18u, sub_0001BB18); /* call 0x0001BB18 */

loc_000CF16A: ;
    eax = MEM32(esp + 8);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CF180
 * Original: 0x000CF180 - 0x000CF189 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF180(void)
{

loc_000CF180: ;
    eax = ecx;
    MEM32(eax) = 0x7C7144;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF190
 * Original: 0x000CF190 - 0x000CF193 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF190(void)
{

loc_000CF190: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF1A0
 * Original: 0x000CF1A0 - 0x000CF1AD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF1A0(void)
{

loc_000CF1A0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7154;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF1B0
 * Original: 0x000CF1B0 - 0x000CF1C6 (22 bytes, 7 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000CF1B0(void)
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

loc_000CF1B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF1BAu); RECOMP_ABI_CALL(0x00029709u, sub_00029709); /* call 0x00029709 */

loc_000CF1BA: ;
    eax = MEM32(esp + 8);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000CF1D0
 * Original: 0x000CF1D0 - 0x000CF1D9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF1D0(void)
{

loc_000CF1D0: ;
    eax = ecx;
    MEM32(eax) = 0x7C7168;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF1E0
 * Original: 0x000CF1E0 - 0x000CF1E3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF1E0(void)
{

loc_000CF1E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF1F0
 * Original: 0x000CF1F0 - 0x000CF1FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF1F0(void)
{

loc_000CF1F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7178;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF200
 * Original: 0x000CF200 - 0x000CF22D (45 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF200: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x1B0);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000CF226; /* jne: not equal / not zero */

loc_000CF223: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CF226: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF240
 * Original: 0x000CF240 - 0x000CF249 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF240(void)
{

loc_000CF240: ;
    eax = ecx;
    MEM32(eax) = 0x7C7190;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF250
 * Original: 0x000CF250 - 0x000CF253 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF250(void)
{

loc_000CF250: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF260
 * Original: 0x000CF260 - 0x000CF26D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF260(void)
{

loc_000CF260: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C71A0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF270
 * Original: 0x000CF270 - 0x000CF279 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF270(void)
{

loc_000CF270: ;
    eax = ecx;
    MEM32(eax) = 0x7C71BC;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF280
 * Original: 0x000CF280 - 0x000CF283 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF280(void)
{

loc_000CF280: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF290
 * Original: 0x000CF290 - 0x000CF29D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF290(void)
{

loc_000CF290: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C71CC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF2A0
 * Original: 0x000CF2A0 - 0x000CF313 (115 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000CF2A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF2AAu); RECOMP_ABI_CALL(0x00023E2Bu, sub_00023E2B); /* call 0x00023E2B */

loc_000CF2AA: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF308; /* je: equal / zero */

loc_000CF2B4: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF2C3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000CF2C1: ;
    goto loc_000CF2CB;

loc_000CF2C3: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_000CF2CB: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C71E8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF308; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7C71E8)) */

loc_000CF2D4: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF2E0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000CF2DE: ;
    goto loc_000CF2E8;

loc_000CF2E0: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */

loc_000CF2E8: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AF57C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF308; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000CF2F5: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CF308: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm1.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF330
 * Original: 0x000CF330 - 0x000CF339 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF330(void)
{

loc_000CF330: ;
    eax = ecx;
    MEM32(eax) = 0x7C71EC;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF340
 * Original: 0x000CF340 - 0x000CF343 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF340(void)
{

loc_000CF340: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF350
 * Original: 0x000CF350 - 0x000CF35D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF350(void)
{

loc_000CF350: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C71FC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF360
 * Original: 0x000CF360 - 0x000CF3E7 (135 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF360(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000CF360: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF376; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000CF374: ;
    goto loc_000CF37E;

loc_000CF376: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_000CF37E: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C720C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF3DC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7C720C)) */

loc_000CF387: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF393; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000CF391: ;
    goto loc_000CF39B;

loc_000CF393: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */

loc_000CF39B: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AF57C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF3DC; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000CF3A8: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF3B4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000CF3B2: ;
    goto loc_000CF3BC;

loc_000CF3B4: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_000CF3BC: ;
    xmm2 = XMM_SCALAR(MEMF(0x7C6A80)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF3DC; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000CF3C9: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CF3DC: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm1.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF410
 * Original: 0x000CF410 - 0x000CF419 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF410(void)
{

loc_000CF410: ;
    eax = ecx;
    MEM32(eax) = 0x7C7210;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF420
 * Original: 0x000CF420 - 0x000CF423 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF420(void)
{

loc_000CF420: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF430
 * Original: 0x000CF430 - 0x000CF43D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF430(void)
{

loc_000CF430: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7220;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF440
 * Original: 0x000CF440 - 0x000CF479 (57 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF440: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000CF44Bu); RECOMP_ABI_CALL(0x00023E2Bu, sub_00023E2B); /* call 0x00023E2B */

loc_000CF44B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF46A; /* je: equal / zero */

loc_000CF452: ;
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CF45Eu); RECOMP_ABI_CALL(0x0003462Cu, sub_0003462C); /* call 0x0003462C */

loc_000CF45E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000CF46D; /* jne: not equal / not zero */

loc_000CF46A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CF46D: ;
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF490
 * Original: 0x000CF490 - 0x000CF499 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF490(void)
{

loc_000CF490: ;
    eax = ecx;
    MEM32(eax) = 0x7C7240;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF4A0
 * Original: 0x000CF4A0 - 0x000CF4A3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF4A0(void)
{

loc_000CF4A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF4B0
 * Original: 0x000CF4B0 - 0x000CF4BD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF4B0(void)
{

loc_000CF4B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7250;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF4C0
 * Original: 0x000CF4C0 - 0x000CF4F9 (57 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF4C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000CF4CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000CF4C9u); } /* indirect call */
    }

loc_000CF4CC: ;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, 0x000CF4DEu); RECOMP_ABI_CALL(0x0001B50Fu, sub_0001B50F); /* call 0x0001B50F */

loc_000CF4DE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000CF4F2; /* jne: not equal / not zero */

loc_000CF4EF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CF4F2: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF510
 * Original: 0x000CF510 - 0x000CF519 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF510(void)
{

loc_000CF510: ;
    eax = ecx;
    MEM32(eax) = 0x7C726C;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF520
 * Original: 0x000CF520 - 0x000CF523 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF520(void)
{

loc_000CF520: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF530
 * Original: 0x000CF530 - 0x000CF53D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF530(void)
{

loc_000CF530: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C727C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF540
 * Original: 0x000CF540 - 0x000CF5AE (110 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000CF540: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0xF0);
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000CF5A0; /* jne: not equal / not zero */

loc_000CF550: ;
    PUSH32(esp, 0x000CF555u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000CF555: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CF58D; /* je: equal / zero */

loc_000CF559: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF571; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000CF56F: ;
    goto loc_000CF579;

loc_000CF571: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_000CF579: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C6A80); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF58D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7C6A80)) */

loc_000CF582: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm1.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CF58D: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CF5A0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF5D0
 * Original: 0x000CF5D0 - 0x000CF5D9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF5D0(void)
{

loc_000CF5D0: ;
    eax = ecx;
    MEM32(eax) = 0x7C7294;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF5E0
 * Original: 0x000CF5E0 - 0x000CF5E3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF5E0(void)
{

loc_000CF5E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF5F0
 * Original: 0x000CF5F0 - 0x000CF5FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF5F0(void)
{

loc_000CF5F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C72A4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF600
 * Original: 0x000CF600 - 0x000CF628 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF600: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CF621; /* je: equal / zero */

loc_000CF61E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CF621: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF640
 * Original: 0x000CF640 - 0x000CF649 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF640(void)
{

loc_000CF640: ;
    eax = ecx;
    MEM32(eax) = 0x7C72BC;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF650
 * Original: 0x000CF650 - 0x000CF653 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF650(void)
{

loc_000CF650: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF660
 * Original: 0x000CF660 - 0x000CF66D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF660(void)
{

loc_000CF660: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C72CC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF670
 * Original: 0x000CF670 - 0x000CF698 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF670: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CF691; /* je: equal / zero */

loc_000CF68E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CF691: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF6B0
 * Original: 0x000CF6B0 - 0x000CF6B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF6B0(void)
{

loc_000CF6B0: ;
    eax = ecx;
    MEM32(eax) = 0x7C72E0;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF6C0
 * Original: 0x000CF6C0 - 0x000CF6C3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF6C0(void)
{

loc_000CF6C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF6D0
 * Original: 0x000CF6D0 - 0x000CF6DD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF6D0(void)
{

loc_000CF6D0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C72F0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF6E0
 * Original: 0x000CF6E0 - 0x000CF735 (85 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000CF6E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    _fa = (uint32_t)(MEM32(ecx + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x4C), 4 (32-bit) */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_000CF72A; /* jne: not equal / not zero */

loc_000CF6F3: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF702; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000CF700: ;
    goto loc_000CF70A;

loc_000CF702: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_000CF70A: ;
    xmm2 = XMM_SCALAR(MEMF(0x7C730C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF72A; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_000CF717: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CF72A: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm1.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF750
 * Original: 0x000CF750 - 0x000CF759 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF750(void)
{

loc_000CF750: ;
    eax = ecx;
    MEM32(eax) = 0x7C7310;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF760
 * Original: 0x000CF760 - 0x000CF763 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF760(void)
{

loc_000CF760: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF770
 * Original: 0x000CF770 - 0x000CF77D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF770(void)
{

loc_000CF770: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7320;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF780
 * Original: 0x000CF780 - 0x000CF7D1 (81 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000CF780: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    _fa = (uint32_t)(MEM32(ecx + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x4C), 4 (32-bit) */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_000CF7C6; /* jne: not equal / not zero */

loc_000CF793: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF7A2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000CF7A0: ;
    goto loc_000CF7AA;

loc_000CF7A2: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_000CF7AA: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C730C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000CF7C6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7C730C)) */

loc_000CF7B3: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CF7C6: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm1.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF7F0
 * Original: 0x000CF7F0 - 0x000CF7F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF7F0(void)
{

loc_000CF7F0: ;
    eax = ecx;
    MEM32(eax) = 0x7C733C;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF800
 * Original: 0x000CF800 - 0x000CF803 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF800(void)
{

loc_000CF800: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF810
 * Original: 0x000CF810 - 0x000CF81D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF810(void)
{

loc_000CF810: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C734C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF820
 * Original: 0x000CF820 - 0x000CF848 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF820: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CF841; /* je: equal / zero */

loc_000CF83E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CF841: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF850
 * Original: 0x000CF850 - 0x000CF860 (16 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF850(void)
{

loc_000CF850: ;
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
 * sub_000CF860
 * Original: 0x000CF860 - 0x000CF869 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF860(void)
{

loc_000CF860: ;
    eax = ecx;
    MEM32(eax) = 0x7C7360;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF870
 * Original: 0x000CF870 - 0x000CF873 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF870(void)
{

loc_000CF870: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF880
 * Original: 0x000CF880 - 0x000CF88D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF880(void)
{

loc_000CF880: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7370;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF890
 * Original: 0x000CF890 - 0x000CF8B8 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF890: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CF8B1; /* je: equal / zero */

loc_000CF8AE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CF8B1: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF8D0
 * Original: 0x000CF8D0 - 0x000CF8D9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF8D0(void)
{

loc_000CF8D0: ;
    eax = ecx;
    MEM32(eax) = 0x7C7380;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF8E0
 * Original: 0x000CF8E0 - 0x000CF8E3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF8E0(void)
{

loc_000CF8E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF8F0
 * Original: 0x000CF8F0 - 0x000CF8FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF8F0(void)
{

loc_000CF8F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7390;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF900
 * Original: 0x000CF900 - 0x000CF928 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF900: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CF921; /* je: equal / zero */

loc_000CF91E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CF921: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF940
 * Original: 0x000CF940 - 0x000CF949 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF940(void)
{

loc_000CF940: ;
    eax = ecx;
    MEM32(eax) = 0x7C73A0;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF950
 * Original: 0x000CF950 - 0x000CF953 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF950(void)
{

loc_000CF950: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF960
 * Original: 0x000CF960 - 0x000CF96D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF960(void)
{

loc_000CF960: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C73B0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF970
 * Original: 0x000CF970 - 0x000CF997 (39 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF970: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CF990; /* je: equal / zero */

loc_000CF98D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CF990: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CF9A0
 * Original: 0x000CF9A0 - 0x000CF9A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF9A0(void)
{

loc_000CF9A0: ;
    eax = ecx;
    MEM32(eax) = 0x7C73C8;
    esp += 4; return; /* ret */

}

/**
 * sub_000CF9B0
 * Original: 0x000CF9B0 - 0x000CF9B3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF9B0(void)
{

loc_000CF9B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF9C0
 * Original: 0x000CF9C0 - 0x000CF9CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF9C0(void)
{

loc_000CF9C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C73D8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CF9D0
 * Original: 0x000CF9D0 - 0x000CF9F8 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CF9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CF9D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CF9F1; /* je: equal / zero */

loc_000CF9EE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CF9F1: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFA10
 * Original: 0x000CFA10 - 0x000CFA19 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFA10(void)
{

loc_000CFA10: ;
    eax = ecx;
    MEM32(eax) = 0x7C73F0;
    esp += 4; return; /* ret */

}

/**
 * sub_000CFA20
 * Original: 0x000CFA20 - 0x000CFA23 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFA20(void)
{

loc_000CFA20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFA30
 * Original: 0x000CFA30 - 0x000CFA3D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFA30(void)
{

loc_000CFA30: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7400;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFA40
 * Original: 0x000CFA40 - 0x000CFA68 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFA40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFA61; /* je: equal / zero */

loc_000CFA5E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CFA61: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFA80
 * Original: 0x000CFA80 - 0x000CFA89 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFA80(void)
{

loc_000CFA80: ;
    eax = ecx;
    MEM32(eax) = 0x7C7420;
    esp += 4; return; /* ret */

}

/**
 * sub_000CFA90
 * Original: 0x000CFA90 - 0x000CFA93 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFA90(void)
{

loc_000CFA90: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFAA0
 * Original: 0x000CFAA0 - 0x000CFAAD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFAA0(void)
{

loc_000CFAA0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7430;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFAB0
 * Original: 0x000CFAB0 - 0x000CFAD8 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFAB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFAD1; /* je: equal / zero */

loc_000CFACE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CFAD1: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFAF0
 * Original: 0x000CFAF0 - 0x000CFAF9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFAF0(void)
{

loc_000CFAF0: ;
    eax = ecx;
    MEM32(eax) = 0x7C744C;
    esp += 4; return; /* ret */

}

/**
 * sub_000CFB00
 * Original: 0x000CFB00 - 0x000CFB03 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFB00(void)
{

loc_000CFB00: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFB10
 * Original: 0x000CFB10 - 0x000CFB1D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFB10(void)
{

loc_000CFB10: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C745C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFB20
 * Original: 0x000CFB20 - 0x000CFB48 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFB20: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFB41; /* je: equal / zero */

loc_000CFB3E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CFB41: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFB60
 * Original: 0x000CFB60 - 0x000CFB69 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFB60(void)
{

loc_000CFB60: ;
    eax = ecx;
    MEM32(eax) = 0x7C747C;
    esp += 4; return; /* ret */

}

/**
 * sub_000CFB70
 * Original: 0x000CFB70 - 0x000CFB73 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFB70(void)
{

loc_000CFB70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFB80
 * Original: 0x000CFB80 - 0x000CFB8D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFB80(void)
{

loc_000CFB80: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C748C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFB90
 * Original: 0x000CFB90 - 0x000CFBB8 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFB90: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFBB1; /* je: equal / zero */

loc_000CFBAE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CFBB1: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFBD0
 * Original: 0x000CFBD0 - 0x000CFBD9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFBD0(void)
{

loc_000CFBD0: ;
    eax = ecx;
    MEM32(eax) = 0x7C74A4;
    esp += 4; return; /* ret */

}

/**
 * sub_000CFBE0
 * Original: 0x000CFBE0 - 0x000CFBE3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFBE0(void)
{

loc_000CFBE0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFBF0
 * Original: 0x000CFBF0 - 0x000CFBFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFBF0(void)
{

loc_000CFBF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C74B4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFC00
 * Original: 0x000CFC00 - 0x000CFC28 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFC00: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFC21; /* je: equal / zero */

loc_000CFC1E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CFC21: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFC40
 * Original: 0x000CFC40 - 0x000CFC49 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFC40(void)
{

loc_000CFC40: ;
    eax = ecx;
    MEM32(eax) = 0x7C74D4;
    esp += 4; return; /* ret */

}

/**
 * sub_000CFC50
 * Original: 0x000CFC50 - 0x000CFC53 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFC50(void)
{

loc_000CFC50: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFC60
 * Original: 0x000CFC60 - 0x000CFC6D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFC60(void)
{

loc_000CFC60: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C74E4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFC70
 * Original: 0x000CFC70 - 0x000CFC98 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFC70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFC91; /* je: equal / zero */

loc_000CFC8E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CFC91: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFCB0
 * Original: 0x000CFCB0 - 0x000CFCB9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFCB0(void)
{

loc_000CFCB0: ;
    eax = ecx;
    MEM32(eax) = 0x7C7508;
    esp += 4; return; /* ret */

}

/**
 * sub_000CFCC0
 * Original: 0x000CFCC0 - 0x000CFCC3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFCC0(void)
{

loc_000CFCC0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFCD0
 * Original: 0x000CFCD0 - 0x000CFCDD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFCD0(void)
{

loc_000CFCD0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7518;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFCE0
 * Original: 0x000CFCE0 - 0x000CFD08 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFCE0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFD01; /* je: equal / zero */

loc_000CFCFE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CFD01: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFD20
 * Original: 0x000CFD20 - 0x000CFD29 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFD20(void)
{

loc_000CFD20: ;
    eax = ecx;
    MEM32(eax) = 0x7C7538;
    esp += 4; return; /* ret */

}

/**
 * sub_000CFD30
 * Original: 0x000CFD30 - 0x000CFD33 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFD30(void)
{

loc_000CFD30: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFD40
 * Original: 0x000CFD40 - 0x000CFD4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFD40(void)
{

loc_000CFD40: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7548;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFD50
 * Original: 0x000CFD50 - 0x000CFD78 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFD50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFD71; /* je: equal / zero */

loc_000CFD6E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CFD71: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFD90
 * Original: 0x000CFD90 - 0x000CFD99 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFD90(void)
{

loc_000CFD90: ;
    eax = ecx;
    MEM32(eax) = 0x7C7568;
    esp += 4; return; /* ret */

}

/**
 * sub_000CFDA0
 * Original: 0x000CFDA0 - 0x000CFDA3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFDA0(void)
{

loc_000CFDA0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFDB0
 * Original: 0x000CFDB0 - 0x000CFDBD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFDB0(void)
{

loc_000CFDB0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7578;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFDC0
 * Original: 0x000CFDC0 - 0x000CFDE8 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFDC0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFDE1; /* je: equal / zero */

loc_000CFDDE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000CFDE1: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFE00
 * Original: 0x000CFE00 - 0x000CFE09 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFE00(void)
{

loc_000CFE00: ;
    eax = ecx;
    MEM32(eax) = 0x7C759C;
    esp += 4; return; /* ret */

}

/**
 * sub_000CFE10
 * Original: 0x000CFE10 - 0x000CFE13 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFE10(void)
{

loc_000CFE10: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFE20
 * Original: 0x000CFE20 - 0x000CFE2D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFE20(void)
{

loc_000CFE20: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C75AC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFE30
 * Original: 0x000CFE30 - 0x000CFE9A (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFE30: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CFE3Cu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000CFE3C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFE8C; /* je: equal / zero */

loc_000CFE43: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFE63; /* je: equal / zero */

loc_000CFE50: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CFE63: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFE7D; /* je: equal / zero */

loc_000CFE6E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CFE7D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CFE8C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFEC0
 * Original: 0x000CFEC0 - 0x000CFEC9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFEC0(void)
{

loc_000CFEC0: ;
    eax = ecx;
    MEM32(eax) = 0x7C75C4;
    esp += 4; return; /* ret */

}

/**
 * sub_000CFED0
 * Original: 0x000CFED0 - 0x000CFED3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFED0(void)
{

loc_000CFED0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFEE0
 * Original: 0x000CFEE0 - 0x000CFEED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFEE0(void)
{

loc_000CFEE0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C75D4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFEF0
 * Original: 0x000CFEF0 - 0x000CFF5A (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFEF0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CFEFCu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000CFEFC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFF4C; /* je: equal / zero */

loc_000CFF03: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFF23; /* je: equal / zero */

loc_000CFF10: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CFF23: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFF3D; /* je: equal / zero */

loc_000CFF2E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CFF3D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CFF4C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFF80
 * Original: 0x000CFF80 - 0x000CFF89 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFF80(void)
{

loc_000CFF80: ;
    eax = ecx;
    MEM32(eax) = 0x7C75F0;
    esp += 4; return; /* ret */

}

/**
 * sub_000CFF90
 * Original: 0x000CFF90 - 0x000CFF93 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFF90(void)
{

loc_000CFF90: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFFA0
 * Original: 0x000CFFA0 - 0x000CFFAD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFFA0(void)
{

loc_000CFFA0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7600;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFFAA
 * Original: 0x000CFFAA - 0x000CFFAD (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFFAA(void)
{

loc_000CFFAA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000CFFB0
 * Original: 0x000CFFB0 - 0x000D001A (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFFB0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CFFBCu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000CFFBC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D000C; /* je: equal / zero */

loc_000CFFC3: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFFE3; /* je: equal / zero */

loc_000CFFD0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CFFE3: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFFFD; /* je: equal / zero */

loc_000CFFEE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CFFFD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D000C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFFC1
 * Original: 0x000CFFC1 - 0x000D001A (89 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFFC1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFFC1: ;
    if (_flags /* je: equal / zero */) goto loc_000D000C;

loc_000CFFC3: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFFE3; /* je: equal / zero */

loc_000CFFD0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CFFE3: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFFFD; /* je: equal / zero */

loc_000CFFEE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CFFFD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D000C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFFC3
 * Original: 0x000CFFC3 - 0x000D001A (87 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFFC3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFFC3: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CFFE3; /* je: equal / zero */

loc_000CFFD0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CFFE3: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFFFD; /* je: equal / zero */

loc_000CFFEE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CFFFD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000CFFE3
 * Original: 0x000CFFE3 - 0x000D001A (55 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000CFFE3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CFFE3: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000CFFFD; /* je: equal / zero */

loc_000CFFEE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000CFFFD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0009
 * Original: 0x000D0009 - 0x000D001A (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0009(void)
{

loc_000D0009: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D000C
 * Original: 0x000D000C - 0x000D001A (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D000C(void)
{

loc_000D000C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0010
 * Original: 0x000D0010 - 0x000D001A (10 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0010(void)
{

loc_000D0010: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0013
 * Original: 0x000D0013 - 0x000D001A (7 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0013(void)
{

loc_000D0013: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0017
 * Original: 0x000D0017 - 0x000D001A (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0017(void)
{

loc_000D0017: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0040
 * Original: 0x000D0040 - 0x000D0049 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0040(void)
{

loc_000D0040: ;
    eax = ecx;
    MEM32(eax) = 0x7C7618;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0050
 * Original: 0x000D0050 - 0x000D0053 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0050(void)
{

loc_000D0050: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0060
 * Original: 0x000D0060 - 0x000D006D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0060(void)
{

loc_000D0060: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7628;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0070
 * Original: 0x000D0070 - 0x000D00DA (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0070: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D007Cu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D007C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D00CC; /* je: equal / zero */

loc_000D0083: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D00A3; /* je: equal / zero */

loc_000D0090: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D00A3: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D00BD; /* je: equal / zero */

loc_000D00AE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D00BD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D00CC: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0083
 * Original: 0x000D0083 - 0x000D00DA (87 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0083(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0083: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D00A3; /* je: equal / zero */

loc_000D0090: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D00A3: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D00BD; /* je: equal / zero */

loc_000D00AE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D00BD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0100
 * Original: 0x000D0100 - 0x000D0109 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0100(void)
{

loc_000D0100: ;
    eax = ecx;
    MEM32(eax) = 0x7C7644;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0110
 * Original: 0x000D0110 - 0x000D0113 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0110(void)
{

loc_000D0110: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0120
 * Original: 0x000D0120 - 0x000D012D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0120(void)
{

loc_000D0120: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7654;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0130
 * Original: 0x000D0130 - 0x000D019A (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0130: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D013Cu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D013C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D018C; /* je: equal / zero */

loc_000D0143: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0163; /* je: equal / zero */

loc_000D0150: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D0163: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D017D; /* je: equal / zero */

loc_000D016E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D017D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D018C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D01C0
 * Original: 0x000D01C0 - 0x000D01C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D01C0(void)
{

loc_000D01C0: ;
    eax = ecx;
    MEM32(eax) = 0x7C7668;
    esp += 4; return; /* ret */

}

/**
 * sub_000D01D0
 * Original: 0x000D01D0 - 0x000D01D3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D01D0(void)
{

loc_000D01D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D01E0
 * Original: 0x000D01E0 - 0x000D01ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D01E0(void)
{

loc_000D01E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7678;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D01F0
 * Original: 0x000D01F0 - 0x000D025A (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D01F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D01F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D01FCu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D01FC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D024C; /* je: equal / zero */

loc_000D0203: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0223; /* je: equal / zero */

loc_000D0210: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D0223: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D023D; /* je: equal / zero */

loc_000D022E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D023D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D024C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0280
 * Original: 0x000D0280 - 0x000D0289 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0280(void)
{

loc_000D0280: ;
    eax = ecx;
    MEM32(eax) = 0x7C768C;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0290
 * Original: 0x000D0290 - 0x000D0293 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0290(void)
{

loc_000D0290: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D02A0
 * Original: 0x000D02A0 - 0x000D02AD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D02A0(void)
{

loc_000D02A0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C769C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D02B0
 * Original: 0x000D02B0 - 0x000D031A (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D02B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D02B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D02BCu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D02BC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D030C; /* je: equal / zero */

loc_000D02C3: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D02E3; /* je: equal / zero */

loc_000D02D0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D02E3: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D02FD; /* je: equal / zero */

loc_000D02EE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D02FD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D030C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0340
 * Original: 0x000D0340 - 0x000D0349 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0340(void)
{

loc_000D0340: ;
    eax = ecx;
    MEM32(eax) = 0x7C76B4;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0350
 * Original: 0x000D0350 - 0x000D0353 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0350(void)
{

loc_000D0350: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0360
 * Original: 0x000D0360 - 0x000D036D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0360(void)
{

loc_000D0360: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C76C4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0370
 * Original: 0x000D0370 - 0x000D03DA (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0370: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D037Cu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D037C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D03CC; /* je: equal / zero */

loc_000D0383: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D03A3; /* je: equal / zero */

loc_000D0390: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D03A3: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D03BD; /* je: equal / zero */

loc_000D03AE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D03BD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D03CC: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0400
 * Original: 0x000D0400 - 0x000D0409 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0400(void)
{

loc_000D0400: ;
    eax = ecx;
    MEM32(eax) = 0x7C76E0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0410
 * Original: 0x000D0410 - 0x000D0413 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0410(void)
{

loc_000D0410: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0420
 * Original: 0x000D0420 - 0x000D042D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0420(void)
{

loc_000D0420: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C76F0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0430
 * Original: 0x000D0430 - 0x000D049A (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0430: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D043Cu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D043C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D048C; /* je: equal / zero */

loc_000D0443: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0463; /* je: equal / zero */

loc_000D0450: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D0463: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D047D; /* je: equal / zero */

loc_000D046E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D047D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D048C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D04C0
 * Original: 0x000D04C0 - 0x000D04C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D04C0(void)
{

loc_000D04C0: ;
    eax = ecx;
    MEM32(eax) = 0x7C7710;
    esp += 4; return; /* ret */

}

/**
 * sub_000D04D0
 * Original: 0x000D04D0 - 0x000D04D3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D04D0(void)
{

loc_000D04D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D04E0
 * Original: 0x000D04E0 - 0x000D04ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D04E0(void)
{

loc_000D04E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7720;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D04F0
 * Original: 0x000D04F0 - 0x000D055A (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D04F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D04F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D04FCu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D04FC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D054C; /* je: equal / zero */

loc_000D0503: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0523; /* je: equal / zero */

loc_000D0510: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D0523: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D053D; /* je: equal / zero */

loc_000D052E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D053D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D054C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0580
 * Original: 0x000D0580 - 0x000D0589 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0580(void)
{

loc_000D0580: ;
    eax = ecx;
    MEM32(eax) = 0x7C7748;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0590
 * Original: 0x000D0590 - 0x000D0593 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0590(void)
{

loc_000D0590: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D05A0
 * Original: 0x000D05A0 - 0x000D05AD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D05A0(void)
{

loc_000D05A0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7758;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D05B0
 * Original: 0x000D05B0 - 0x000D061A (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D05B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D05B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D05BCu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D05BC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D060C; /* je: equal / zero */

loc_000D05C3: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D05E3; /* je: equal / zero */

loc_000D05D0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D05E3: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D05FD; /* je: equal / zero */

loc_000D05EE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D05FD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D060C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0640
 * Original: 0x000D0640 - 0x000D0649 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0640(void)
{

loc_000D0640: ;
    eax = ecx;
    MEM32(eax) = 0x7C7778;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0650
 * Original: 0x000D0650 - 0x000D0653 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0650(void)
{

loc_000D0650: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0660
 * Original: 0x000D0660 - 0x000D066D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0660(void)
{

loc_000D0660: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7788;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0670
 * Original: 0x000D0670 - 0x000D06DA (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0670: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D067Cu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D067C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D06CC; /* je: equal / zero */

loc_000D0683: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D06A3; /* je: equal / zero */

loc_000D0690: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D06A3: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D06BD; /* je: equal / zero */

loc_000D06AE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D06BD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D06CC: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0700
 * Original: 0x000D0700 - 0x000D0709 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0700(void)
{

loc_000D0700: ;
    eax = ecx;
    MEM32(eax) = 0x7C77B0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0710
 * Original: 0x000D0710 - 0x000D0713 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0710(void)
{

loc_000D0710: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0720
 * Original: 0x000D0720 - 0x000D072D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0720(void)
{

loc_000D0720: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C77C0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0730
 * Original: 0x000D0730 - 0x000D079A (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0730: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0xB);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D073Cu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D073C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D078C; /* je: equal / zero */

loc_000D0743: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0763; /* je: equal / zero */

loc_000D0750: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D0763: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D077D; /* je: equal / zero */

loc_000D076E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D077D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D078C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D07C0
 * Original: 0x000D07C0 - 0x000D07C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D07C0(void)
{

loc_000D07C0: ;
    eax = ecx;
    MEM32(eax) = 0x7C77DC;
    esp += 4; return; /* ret */

}

/**
 * sub_000D07D0
 * Original: 0x000D07D0 - 0x000D07D3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D07D0(void)
{

loc_000D07D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D07E0
 * Original: 0x000D07E0 - 0x000D07ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D07E0(void)
{

loc_000D07E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C77EC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D07F0
 * Original: 0x000D07F0 - 0x000D085A (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D07F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D07F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D07FCu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D07FC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D084C; /* je: equal / zero */

loc_000D0803: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0823; /* je: equal / zero */

loc_000D0810: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D0823: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D083D; /* je: equal / zero */

loc_000D082E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D083D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D084C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0880
 * Original: 0x000D0880 - 0x000D0889 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0880(void)
{

loc_000D0880: ;
    eax = ecx;
    MEM32(eax) = 0x7C7810;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0890
 * Original: 0x000D0890 - 0x000D0893 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0890(void)
{

loc_000D0890: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D08A0
 * Original: 0x000D08A0 - 0x000D08AD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D08A0(void)
{

loc_000D08A0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7820;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D08B0
 * Original: 0x000D08B0 - 0x000D091A (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D08B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D08B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D08BCu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D08BC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D090C; /* je: equal / zero */

loc_000D08C3: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D08E3; /* je: equal / zero */

loc_000D08D0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D08E3: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D08FD; /* je: equal / zero */

loc_000D08EE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D08FD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D090C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0940
 * Original: 0x000D0940 - 0x000D0949 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0940(void)
{

loc_000D0940: ;
    eax = ecx;
    MEM32(eax) = 0x7C7848;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0950
 * Original: 0x000D0950 - 0x000D0953 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0950(void)
{

loc_000D0950: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0960
 * Original: 0x000D0960 - 0x000D096D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0960(void)
{

loc_000D0960: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7858;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0970
 * Original: 0x000D0970 - 0x000D09DA (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0970: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0xD);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D097Cu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D097C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D09CC; /* je: equal / zero */

loc_000D0983: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D09A3; /* je: equal / zero */

loc_000D0990: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D09A3: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D09BD; /* je: equal / zero */

loc_000D09AE: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D09BD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D09CC: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0A00
 * Original: 0x000D0A00 - 0x000D0A09 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0A00(void)
{

loc_000D0A00: ;
    eax = ecx;
    MEM32(eax) = 0x7C7880;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0A10
 * Original: 0x000D0A10 - 0x000D0A13 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0A10(void)
{

loc_000D0A10: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0A20
 * Original: 0x000D0A20 - 0x000D0A2D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0A20(void)
{

loc_000D0A20: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7890;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0A30
 * Original: 0x000D0A30 - 0x000D0A9A (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0A30: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0A3Cu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D0A3C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0A8C; /* je: equal / zero */

loc_000D0A43: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0A63; /* je: equal / zero */

loc_000D0A50: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D0A63: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D0A7D; /* je: equal / zero */

loc_000D0A6E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D0A7D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D0A8C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0AC0
 * Original: 0x000D0AC0 - 0x000D0AC9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0AC0(void)
{

loc_000D0AC0: ;
    eax = ecx;
    MEM32(eax) = 0x7C78B8;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0AD0
 * Original: 0x000D0AD0 - 0x000D0AD3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0AD0(void)
{

loc_000D0AD0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0AE0
 * Original: 0x000D0AE0 - 0x000D0AED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0AE0(void)
{

loc_000D0AE0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C78C8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0AF0
 * Original: 0x000D0AF0 - 0x000D0B5A (106 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0AF0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D0AFCu); RECOMP_ABI_CALL(0x00013FA3u, sub_00013FA3); /* call 0x00013FA3 */

loc_000D0AFC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0B4C; /* je: equal / zero */

loc_000D0B03: ;
    eax = MEM32(eax + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0B23; /* je: equal / zero */

loc_000D0B10: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D0B23: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D0B3D; /* je: equal / zero */

loc_000D0B2E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D0B3D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000D0B4C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0B80
 * Original: 0x000D0B80 - 0x000D0B89 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0B80(void)
{

loc_000D0B80: ;
    eax = ecx;
    MEM32(eax) = 0x7C78E8;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0B90
 * Original: 0x000D0B90 - 0x000D0B93 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0B90(void)
{

loc_000D0B90: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0BA0
 * Original: 0x000D0BA0 - 0x000D0BAD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0BA0(void)
{

loc_000D0BA0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C78F8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0BB0
 * Original: 0x000D0BB0 - 0x000D0CDA (298 bytes, 86 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_000D0BB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D0BBCu); RECOMP_ABI_CALL(0x00023E2Bu, sub_00023E2B); /* call 0x00023E2B */

loc_000D0BBC: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0CCA; /* je: equal / zero */

loc_000D0BC9: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D0BDB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000D0BD9: ;
    goto loc_000D0BE3;

loc_000D0BDB: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */

loc_000D0BE3: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AA7D8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D0CCD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D0BF4: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D0C03; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000D0BFE: ;
    xmm1 = xmm0; /* movaps */
    goto loc_000D0C0B;

loc_000D0C03: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x38); /* subss */

loc_000D0C0B: ;
    ecx = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D0C1A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000D0C18: ;
    goto loc_000D0C22;

loc_000D0C1A: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */

loc_000D0C22: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7B04A0); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D0CCD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D0C33: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    if ((_fca >= _fcb)) goto loc_000D0C50; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000D0C4D: ;
    xmm1 = xmm0; /* movaps */

loc_000D0C50: ;
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D0C62; /* jb: below (unsigned <) (xmm3.f[0] vs xmm2.f[0]) */

loc_000D0C5A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_000D0C62: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000D0CCD; /* jnp: not parity */

loc_000D0C6B: ;
    ecx = MEM32(edi + 0xF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D0C77u); RECOMP_ABI_CALL(0x0003462Cu, sub_0003462C); /* call 0x0003462C */

loc_000D0C77: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D0CCA; /* jne: not equal / not zero */

loc_000D0C7B: ;
    eax = MEM32(esi + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x52));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0C9D; /* je: equal / zero */

loc_000D0C88: ;
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    POP32(esp, edi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D0C9D: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_000D0CB9; /* je: equal / zero */

loc_000D0CA8: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD33C)); /* movss */
    POP32(esp, edi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D0CB9: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    POP32(esp, edi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000D0CCA: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */

loc_000D0CCD: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEMF(eax) = xmm2.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0D30
 * Original: 0x000D0D30 - 0x000D0D39 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0D30(void)
{

loc_000D0D30: ;
    eax = ecx;
    MEM32(eax) = 0x7C790C;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0D40
 * Original: 0x000D0D40 - 0x000D0D43 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0D40(void)
{

loc_000D0D40: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0D50
 * Original: 0x000D0D50 - 0x000D0D5D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0D50(void)
{

loc_000D0D50: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C791C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0D60
 * Original: 0x000D0D60 - 0x000D0D8C (44 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0D60(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D0D60: ;
    eax = MEM32(0x8E8F84);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA820); /* comiss */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000D0D85; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AA820)) */

loc_000D0D82: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000D0D85: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0DA0
 * Original: 0x000D0DA0 - 0x000D0DA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0DA0(void)
{

loc_000D0DA0: ;
    eax = ecx;
    MEM32(eax) = 0x7C793C;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0DB0
 * Original: 0x000D0DB0 - 0x000D0DB3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0DB0(void)
{

loc_000D0DB0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0DC0
 * Original: 0x000D0DC0 - 0x000D0DCD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0DC0(void)
{

loc_000D0DC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C794C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0DD0
 * Original: 0x000D0DD0 - 0x000D0DFC (44 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0DD0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D0DD0: ;
    eax = MEM32(0x8E8F84);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C6E30); /* comiss */
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000D0DF5; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7C6E30)) */

loc_000D0DF2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000D0DF5: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0E10
 * Original: 0x000D0E10 - 0x000D0E19 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0E10(void)
{

loc_000D0E10: ;
    eax = ecx;
    MEM32(eax) = 0x7C7978;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0E20
 * Original: 0x000D0E20 - 0x000D0E23 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0E20(void)
{

loc_000D0E20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0E30
 * Original: 0x000D0E30 - 0x000D0E3D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0E30(void)
{

loc_000D0E30: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C7988;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0E40
 * Original: 0x000D0E40 - 0x000D0E68 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0E40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xF0);
    eax = MEM32(ecx + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000D0E61; /* je: equal / zero */

loc_000D0E5E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000D0E61: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D0E80
 * Original: 0x000D0E80 - 0x000D0E89 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0E80(void)
{

loc_000D0E80: ;
    eax = ecx;
    MEM32(eax) = 0x7C79B0;
    esp += 4; return; /* ret */

}

/**
 * sub_000D0E90
 * Original: 0x000D0E90 - 0x000D0E93 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0E90(void)
{

loc_000D0E90: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0EA0
 * Original: 0x000D0EA0 - 0x000D0EAD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0EA0(void)
{

loc_000D0EA0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7C79C0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D0EB0
 * Original: 0x000D0EB0 - 0x000D0EF7 (71 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D0EB0(void)
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

loc_000D0EB0: ;
    SET_LO8(eax, MEM8(0x8F0109));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0EE9; /* jne: not equal / not zero */

loc_000D0EB9: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0xF0);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0ED0; /* je: equal / zero */

loc_000D0ECB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D0EE9; /* jne: not equal / not zero */

loc_000D0ED0: ;
    PUSH32(esp, 0x000D0ED5u); RECOMP_ABI_CALL(0x0001C94Bu, sub_0001C94B); /* call 0x0001C94B */

loc_000D0ED5: ;
    fp_push(MEMF(0x7B8DF4)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000D0EEC; /* ja: above (unsigned >) */

loc_000D0EE9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000D0EEC: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D0F10
 * Original: 0x000D0F10 - 0x000D0F2A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D0F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0F10: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D0F19u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D0F19: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0F27; /* je: equal / zero */

loc_000D0F20: ;
    MEM32(eax) = 0x7C6EF8;
    esp += 4; return; /* ret */

loc_000D0F27: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D0F30
 * Original: 0x000D0F30 - 0x000D0F4A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D0F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0F30: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D0F39u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D0F39: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0F47; /* je: equal / zero */

loc_000D0F40: ;
    MEM32(eax) = 0x7C6F20;
    esp += 4; return; /* ret */

loc_000D0F47: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D0F50
 * Original: 0x000D0F50 - 0x000D0F6A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D0F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0F50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D0F59u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D0F59: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0F67; /* je: equal / zero */

loc_000D0F60: ;
    MEM32(eax) = 0x7C6F48;
    esp += 4; return; /* ret */

loc_000D0F67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D0F70
 * Original: 0x000D0F70 - 0x000D0F8A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D0F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0F70: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D0F79u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D0F79: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0F87; /* je: equal / zero */

loc_000D0F80: ;
    MEM32(eax) = 0x7C6F74;
    esp += 4; return; /* ret */

loc_000D0F87: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D0F90
 * Original: 0x000D0F90 - 0x000D0FAA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D0F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0F90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D0F99u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D0F99: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0FA7; /* je: equal / zero */

loc_000D0FA0: ;
    MEM32(eax) = 0x7C6FA0;
    esp += 4; return; /* ret */

loc_000D0FA7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D0FB0
 * Original: 0x000D0FB0 - 0x000D0FCA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D0FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0FB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D0FB9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D0FB9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0FC7; /* je: equal / zero */

loc_000D0FC0: ;
    MEM32(eax) = 0x7C6FCC;
    esp += 4; return; /* ret */

loc_000D0FC7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D0FD0
 * Original: 0x000D0FD0 - 0x000D0FEA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D0FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0FD0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D0FD9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D0FD9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D0FE7; /* je: equal / zero */

loc_000D0FE0: ;
    MEM32(eax) = 0x7C6FFC;
    esp += 4; return; /* ret */

loc_000D0FE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D0FF0
 * Original: 0x000D0FF0 - 0x000D100A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D0FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D0FF0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D0FF9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D0FF9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1007; /* je: equal / zero */

loc_000D1000: ;
    MEM32(eax) = 0x7C7028;
    esp += 4; return; /* ret */

loc_000D1007: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1010
 * Original: 0x000D1010 - 0x000D102A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1010: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1019u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1019: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1027; /* je: equal / zero */

loc_000D1020: ;
    MEM32(eax) = 0x7C7050;
    esp += 4; return; /* ret */

loc_000D1027: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1030
 * Original: 0x000D1030 - 0x000D104A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1030: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1039u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1039: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1047; /* je: equal / zero */

loc_000D1040: ;
    MEM32(eax) = 0x7C707C;
    esp += 4; return; /* ret */

loc_000D1047: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1050
 * Original: 0x000D1050 - 0x000D106A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1050: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1059u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1059: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1067; /* je: equal / zero */

loc_000D1060: ;
    MEM32(eax) = 0x7C70A8;
    esp += 4; return; /* ret */

loc_000D1067: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1070
 * Original: 0x000D1070 - 0x000D108A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1070: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1079u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1079: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1087; /* je: equal / zero */

loc_000D1080: ;
    MEM32(eax) = 0x7C70D0;
    esp += 4; return; /* ret */

loc_000D1087: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D1090
 * Original: 0x000D1090 - 0x000D10AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D1090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D1090: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D1099u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D1099: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D10A7; /* je: equal / zero */

loc_000D10A0: ;
    MEM32(eax) = 0x7C70F4;
    esp += 4; return; /* ret */

loc_000D10A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D10B0
 * Original: 0x000D10B0 - 0x000D10CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D10B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D10B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D10B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D10B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D10C7; /* je: equal / zero */

loc_000D10C0: ;
    MEM32(eax) = 0x7C711C;
    esp += 4; return; /* ret */

loc_000D10C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D10D0
 * Original: 0x000D10D0 - 0x000D10EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D10D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D10D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D10D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D10D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D10E7; /* je: equal / zero */

loc_000D10E0: ;
    MEM32(eax) = 0x7C7144;
    esp += 4; return; /* ret */

loc_000D10E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D10F0
 * Original: 0x000D10F0 - 0x000D110A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D10F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D10F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000D10F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D10F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D1107; /* je: equal / zero */

loc_000D1100: ;
    MEM32(eax) = 0x7C7168;
    esp += 4; return; /* ret */

loc_000D1107: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}
