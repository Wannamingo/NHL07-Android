/**
 * nhl_07_recomp - Recompiled code chunk 239
 * Functions: 250 (0x0055839C - 0x0055F78E)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0055839C
 * Original: 0x0055839C - 0x00558464 (200 bytes, 68 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055839C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0055839C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x74));
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    eax = MEM32(ebx);
    esi = eax + 0x44;
    edi = esp + 0x1C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    edi = ebx + 0x10;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 4); /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 8); /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xC); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    esi = esp + 0x28;
    edi = esp + 0x34;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558407u); RECOMP_ABI_CALL(0x0002DB24u, sub_0002DB24); /* call 0x0002DB24 */

loc_00558407: ;
    POP32(esp, ecx);
    fp_push(MEMF(0x7AD340)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00558427; /* jbe: below or equal (unsigned <=) */

loc_00558414: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB2D0); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_00558427: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    eax = ebx + 4;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055843Eu); RECOMP_ABI_CALL(0x005A1B73u, sub_005A1B73); /* call 0x005A1B73 */

loc_0055843E: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558452u); RECOMP_ABI_CALL(0x00557FF4u, sub_00557FF4); /* call 0x00557FF4 */

loc_00558452: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00558464
 * Original: 0x00558464 - 0x0055852D (201 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558464(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00558464: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x74));
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    ebx = ecx;
    ecx = MEM32(ebx);
    eax = ebx + 4;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = ecx + 0x44;
    edi = esp + 0x1C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    esi = esp + 0x28;
    edi = esp + 0x34;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005584D0u); RECOMP_ABI_CALL(0x0002DB24u, sub_0002DB24); /* call 0x0002DB24 */

loc_005584D0: ;
    POP32(esp, ecx);
    fp_push(MEMF(0x7AD340)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_005584F0; /* jbe: below or equal (unsigned <=) */

loc_005584DD: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB2D0); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_005584F0: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    eax = ebx + 4;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558507u); RECOMP_ABI_CALL(0x005A1B73u, sub_005A1B73); /* call 0x005A1B73 */

loc_00558507: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055851Bu); RECOMP_ABI_CALL(0x00557FF4u, sub_00557FF4); /* call 0x00557FF4 */

loc_0055851B: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0055852D
 * Original: 0x0055852D - 0x00558673 (326 bytes, 117 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055852D(void)
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

loc_0055852D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055853Cu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0055853C: ;
    edi = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055854Du); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_0055854D: ;
    eax = ebp + -1;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055855Cu); RECOMP_ABI_CALL(0x0055E04Fu, sub_0055E04F); /* call 0x0055E04F */

loc_0055855C: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00558577; /* je: equal / zero */

loc_00558562: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00558577; /* jne: not equal / not zero */

loc_0055856A: ;
    eax = MEM32(ebp + 0x10);
    { uint32_t _sv=(uint32_t)(MEM32(ebp + 0x18)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        MEM32(ebp + 0x18) = _sv >> _sc;
        _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_0055857A;

loc_00558577: ;
    eax = MEM32(ebp + 0x10);

loc_0055857A: ;
    ecx = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(esi) = ecx;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    ecx = esi;
    MEM32(esi + 0xC) = eax;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005585A9u); RECOMP_ABI_CALL(0x00565D92u, sub_00565D92); /* call 0x00565D92 */

loc_005585A9: ;
    eax = MEM32(esi + 0x3C);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 1);
    POP32(esp, edi);
    if ((_fa == 0)) goto loc_0055863F; /* je: equal / zero */

loc_005585B8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055861B; /* je: equal / zero */

loc_005585BB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005585FF; /* je: equal / zero */

loc_005585BE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00558668; /* jne: not equal / not zero */

loc_005585C5: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + 0x18;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    ecx = esi;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x30)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005585FDu); RECOMP_ABI_CALL(0x00557B14u, sub_00557B14); /* call 0x00557B14 */

loc_005585FD: ;
    goto loc_00558668;

loc_005585FF: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + 0x10;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558619u); RECOMP_ABI_CALL(0x00557D90u, sub_00557D90); /* call 0x00557D90 */

loc_00558619: ;
    goto loc_00558668;

loc_0055861B: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + 0xC;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    ecx = esi;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055863Du); RECOMP_ABI_CALL(0x00557CA0u, sub_00557CA0); /* call 0x00557CA0 */

loc_0055863D: ;
    goto loc_00558668;

loc_0055863F: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + 0x14;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    ecx = esi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558668u); RECOMP_ABI_CALL(0x00557A00u, sub_00557A00); /* call 0x00557A00 */

loc_00558668: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00558673
 * Original: 0x00558673 - 0x00558770 (253 bytes, 76 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558673(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00558673: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    ebx = ecx;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055868Cu); RECOMP_ABI_CALL(0x00565D58u, sub_00565D58); /* call 0x00565D58 */

loc_0055868C: ;
    fp_push(1.0); /* fld1 */
    xmm0 = XMM_SCALAR(MEMF(0x7AD3DC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebx + 0x18) = xmm0.f[0]; /* movss */
    fp_push(0.0); /* fldz */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebx + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x24) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x34) = xmm0.f[0]; /* movss */
    MEM32(ebx + 0x38) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005586E3u); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_005586E3: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005586ECu); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_005586EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005586FCu); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_005586FC: ;
    fp_push(MEMF(0x8260A8)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + 0x10;
    fp_push(MEMF(0x7B0478)); /* fld float */
    ecx = ebx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8769F4)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AD3DC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558731u); RECOMP_ABI_CALL(0x00557A00u, sub_00557A00); /* call 0x00557A00 */

loc_00558731: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    edi = ebx + 0x50;
    esi = 0x87DB50;
    eax = ebp + 0x10;
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
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558767u); RECOMP_ABI_CALL(0x00557F2Cu, sub_00557F2C); /* call 0x00557F2C */

loc_00558767: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0055881C
 * Original: 0x0055881C - 0x00558844 (40 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055881C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055881C: ;
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00558837; /* je: equal / zero */

loc_00558822: ;
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    goto loc_00558841;

loc_00558837: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFD7F6u;

loc_00558841: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005588C9
 * Original: 0x005588C9 - 0x00558918 (79 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005588C9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005588C9: ;
    eax = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = MEM32(esi + edx);
    _fa = (uint32_t)(MEM8(esi + 0x35)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x35), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005588FC; /* jne: not equal / not zero */

loc_005588DE: ;
    esi = MEM32(ecx + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(0x9153DC);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(ecx + 0x20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x18));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x18)); }
    MEM32(ecx + 0x20) = edx;
    MEM32(esi) = edi;
    POP32(esp, edi);

loc_005588FC: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(ecx + 0x10);
    esi = MEM32(ecx + eax * 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x00558910u); RECOMP_ABI_CALL(0x0055BC77u, sub_0055BC77); /* call 0x0055BC77 */

loc_00558910: ;
    MEM8(esi + 0x35) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00558918
 * Original: 0x00558918 - 0x0055895D (69 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558918(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558918: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00558929; /* jne: not equal / not zero */

loc_00558921: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00558929: ;
    eax = MEM32(ebp + 0xC);
    ecx = eax + 1;

loc_0055892F: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055892F; /* jne: not equal / not zero */

loc_00558936: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558946u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_00558946: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;

loc_00558951: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00558951; /* jne: not equal / not zero */

loc_0055895B: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0055895D
 * Original: 0x0055895D - 0x00558980 (35 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055895D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055895D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055897E; /* je: equal / zero */

loc_00558966: ;
    eax = esi;
    edx = eax + 1;

loc_0055896B: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055896B; /* jne: not equal / not zero */

loc_00558972: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055897Cu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055897C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055897E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00558983
 * Original: 0x00558983 - 0x005589A9 (38 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558983(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558983: ;
    PUSH32(esp, esi);
    esi = ecx + 0x20;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0055898Eu); RECOMP_ABI_CALL(0x0055895Du, sub_0055895D); /* call 0x0055895D */

loc_0055898E: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00558998u); RECOMP_ABI_CALL(0x00558918u, sub_00558918); /* call 0x00558918 */

loc_00558998: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005589AD
 * Original: 0x005589AD - 0x005589BD (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005589AD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005589AD: ;
    eax = MEM32(ecx + 4);
    eax = eax ^ MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 4) = MEM32(ecx + 4) ^ eax;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005589D4
 * Original: 0x005589D4 - 0x005589FB (39 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005589D4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005589D4: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005589EE; /* je: equal / zero */

loc_005589D9: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    goto loc_005589F8;

loc_005589EE: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFD7F6u;

loc_005589F8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00558A06
 * Original: 0x00558A06 - 0x00558A33 (45 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558A06(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558A06: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00558A1F; /* je: equal / zero */

loc_00558A0D: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    goto loc_00558A30;

loc_00558A1F: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFD7F7u;

loc_00558A30: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00558A33
 * Original: 0x00558A33 - 0x00558A36 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558A33(void)
{

loc_00558A33: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00558A61
 * Original: 0x00558A61 - 0x00558A65 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558A61(void)
{

loc_00558A61: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00558AB1
 * Original: 0x00558AB1 - 0x00558B93 (226 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558AB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558AB1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x814) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x814;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = 0x100;
    edi = ebp + -2068;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebp + -8) = edx;
    edi = 0xFF;
    if (CMP_BE(_fa, _fb)) goto loc_00558B11; /* jbe: below or equal (unsigned <=) */

loc_00558ADA: ;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebp + -8);
    edx = MEM32(esi);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ebp + -4) = eax;

loc_00558AE8: ;
    ecx = MEM32(edx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558AF7u); RECOMP_ABI_CALL(0x005589D4u, sub_005589D4); /* call 0x005589D4 */

loc_00558AF7: ;
    eax = MEM32(ebp + -12);
    ecx = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + eax * 4 + -2068;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00558AE8; /* jne: not equal / not zero */

loc_00558B11: ;
    MEM32(ebp + -1044) = MEM32(ebp + -1044) & 0;
    _fa = (uint32_t)(MEM32(ebp + -1044)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 4);
    POP32(esp, eax);

loc_00558B1B: ;
    ecx = MEM32(ebp + eax + -1048);
    _fb = (uint32_t)(MEM32(ebp + eax + -2072)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + eax + -2072);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    MEM32(ebp + eax + -1048) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00558B1B; /* jb: below (unsigned <) */

loc_00558B3A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00558B8F; /* jbe: below or equal (unsigned <=) */

loc_00558B44: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ebp + -16) = ecx;

loc_00558B4D: ;
    ecx = MEM32(esi);
    edx = ecx + eax * 4;
    ecx = MEM32(edx);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558B61u); RECOMP_ABI_CALL(0x005589D4u, sub_005589D4); /* call 0x005589D4 */

loc_00558B61: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -12);
    edx = MEM32(edx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + eax * 4 + -1044;
    ecx = MEM32(eax);
    ebx = ecx + 1;
    MEM32(eax) = ebx;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    MEM32(eax + ecx * 4) = edx;
    eax = MEM32(ebp + -4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00558B4D; /* jb: below (unsigned <) */

loc_00558B8F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00558B93
 * Original: 0x00558B93 - 0x00558C73 (224 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558B93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558B93: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x814) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x814;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = 0x100;
    edi = ebp + -2068;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebp + -16) = edx;
    edi = 0xFF;
    if (CMP_BE(_fa, _fb)) goto loc_00558BF1; /* jbe: below or equal (unsigned <=) */

loc_00558BBC: ;
    esi = MEM32(ebx);
    MEM32(ebp + -4) = edx;

loc_00558BC1: ;
    ecx = MEM32(esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558BD0u); RECOMP_ABI_CALL(0x0055881Cu, sub_0055881C); /* call 0x0055881C */

loc_00558BD0: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -8);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + eax * 4 + -2068;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00558BC1; /* jne: not equal / not zero */

loc_00558BEE: ;
    edx = MEM32(ebp + -16);

loc_00558BF1: ;
    MEM32(ebp + -1044) = MEM32(ebp + -1044) & 0;
    _fa = (uint32_t)(MEM32(ebp + -1044)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 4);
    POP32(esp, eax);

loc_00558BFB: ;
    ecx = MEM32(ebp + eax + -1048);
    _fb = (uint32_t)(MEM32(ebp + eax + -2072)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + eax + -2072);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    MEM32(ebp + eax + -1048) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00558BFB; /* jb: below (unsigned <) */

loc_00558C1A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00558C6F; /* jbe: below or equal (unsigned <=) */

loc_00558C22: ;
    eax = MEM32(ebp + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ebp + -12) = eax;

loc_00558C2B: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebp + -4);
    esi = eax + ecx * 4;
    ecx = MEM32(esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558C42u); RECOMP_ABI_CALL(0x0055881Cu, sub_0055881C); /* call 0x0055881C */

loc_00558C42: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebp + eax * 4 + -1044;
    ecx = MEM32(eax);
    edx = ecx + 1;
    MEM32(eax) = edx;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    edx = MEM32(esi);
    MEM32(eax + ecx * 4) = edx;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00558C2B; /* jb: below (unsigned <) */

loc_00558C6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00558C77
 * Original: 0x00558C77 - 0x00558CAB (52 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558C77(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558C77: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x28) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00558C98; /* jae: above or equal (unsigned >=) */

loc_00558C82: ;
    ecx = MEM32(ecx + 0x24);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_00558CA7;

loc_00558C98: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7F4u;

loc_00558CA7: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00558CAB
 * Original: 0x00558CAB - 0x00558D3C (145 bytes, 62 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558CAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00558CAB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    edx = ecx;
    eax = MEM32(edx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00558D16; /* jle: less or equal (signed <=) */

loc_00558CC1: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558CD7u); RECOMP_ABI_CALL(0x00558C77u, sub_00558C77); /* call 0x00558C77 */

loc_00558CD7: ;
    edi = MEM32(ebp + -8);
    eax = MEM32(edi + 0x20);
    esi = MEM32(ebp + 0xC);

loc_00558CE0: ;
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00558D02; /* jne: not equal / not zero */

loc_00558CE8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00558CFE; /* je: equal / zero */

loc_00558CEC: ;
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00558D02; /* jne: not equal / not zero */

loc_00558CF6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00558CE0; /* jne: not equal / not zero */

loc_00558CFE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00558D07;

loc_00558D02: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00558D07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00558D2C; /* je: equal / zero */

loc_00558D0B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00558CC1; /* jl: less (signed <) */

loc_00558D16: ;
    eax = MEM32(ebp + 0x10);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7F5u;

loc_00558D25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_00558D2C: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = edi;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_00558D25;

}

/**
 * sub_00558D3C
 * Original: 0x00558D3C - 0x00558D73 (55 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558D3C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558D3C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = ZX16(MEM16(ecx + 0x34));
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00558D60; /* jae: above or equal (unsigned >=) */

loc_00558D4A: ;
    ecx = MEM32(ecx + 0x30);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_00558D6F;

loc_00558D60: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7F4u;

loc_00558D6F: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00558D73
 * Original: 0x00558D73 - 0x00558DFB (136 bytes, 52 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558D73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558D73: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = ZX16(MEM16(ebx + 0x48));
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_00558DE5; /* jae: above or equal (unsigned >=) */

loc_00558D87: ;
    eax = ZX16(MEM16(ebx + 0x34));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00558DCA; /* jbe: below or equal (unsigned <=) */

loc_00558D9A: ;
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(ebp + -4);
    esi = MEM32(eax + ecx * 4);
    edi = MEM32(esi + 8);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558DADu); RECOMP_ABI_CALL(0x00567475u, sub_00567475); /* call 0x00567475 */

loc_00558DAD: ;
    POP32(esp, ecx);
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00558DBF; /* jne: not equal / not zero */

loc_00558DB4: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00558DD2; /* je: equal / zero */

loc_00558DBC: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00558DBF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00558D9A; /* jb: below (unsigned <) */

loc_00558DCA: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00558DF4;

loc_00558DD2: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_00558DF4;

loc_00558DE5: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7F4u;

loc_00558DF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00558DFB
 * Original: 0x00558DFB - 0x00558E83 (136 bytes, 52 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558DFB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558DFB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = ZX16(MEM16(ebx + 0x4A));
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_00558E6D; /* jae: above or equal (unsigned >=) */

loc_00558E0F: ;
    eax = ZX16(MEM16(ebx + 0x34));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00558E52; /* jbe: below or equal (unsigned <=) */

loc_00558E22: ;
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(ebp + -4);
    esi = MEM32(eax + ecx * 4);
    edi = MEM32(esi + 8);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558E35u); RECOMP_ABI_CALL(0x0056747Bu, sub_0056747B); /* call 0x0056747B */

loc_00558E35: ;
    POP32(esp, ecx);
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00558E47; /* jne: not equal / not zero */

loc_00558E3C: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00558E5A; /* je: equal / zero */

loc_00558E44: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00558E47: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00558E22; /* jb: below (unsigned <) */

loc_00558E52: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00558E7C;

loc_00558E5A: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_00558E7C;

loc_00558E6D: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7F4u;

loc_00558E7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00558E83
 * Original: 0x00558E83 - 0x00558F0B (136 bytes, 52 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558E83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558E83: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = ZX16(MEM16(ebx + 0x4C));
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_00558EF5; /* jae: above or equal (unsigned >=) */

loc_00558E97: ;
    eax = ZX16(MEM16(ebx + 0x34));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00558EDA; /* jbe: below or equal (unsigned <=) */

loc_00558EAA: ;
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(ebp + -4);
    esi = MEM32(eax + ecx * 4);
    edi = MEM32(esi + 8);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558EBDu); RECOMP_ABI_CALL(0x00567481u, sub_00567481); /* call 0x00567481 */

loc_00558EBD: ;
    POP32(esp, ecx);
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00558ECF; /* jne: not equal / not zero */

loc_00558EC4: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00558EE2; /* je: equal / zero */

loc_00558ECC: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00558ECF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00558EAA; /* jb: below (unsigned <) */

loc_00558EDA: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00558F04;

loc_00558EE2: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_00558F04;

loc_00558EF5: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7F4u;

loc_00558F04: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00558F0B
 * Original: 0x00558F0B - 0x00558F93 (136 bytes, 52 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558F0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558F0B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = ZX16(MEM16(ebx + 0x4E));
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_00558F7D; /* jae: above or equal (unsigned >=) */

loc_00558F1F: ;
    eax = ZX16(MEM16(ebx + 0x34));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00558F62; /* jbe: below or equal (unsigned <=) */

loc_00558F32: ;
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(ebp + -4);
    esi = MEM32(eax + ecx * 4);
    edi = MEM32(esi + 8);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558F45u); RECOMP_ABI_CALL(0x00567493u, sub_00567493); /* call 0x00567493 */

loc_00558F45: ;
    POP32(esp, ecx);
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00558F57; /* jne: not equal / not zero */

loc_00558F4C: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00558F6A; /* je: equal / zero */

loc_00558F54: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00558F57: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00558F32; /* jb: below (unsigned <) */

loc_00558F62: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00558F8C;

loc_00558F6A: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_00558F8C;

loc_00558F7D: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7F4u;

loc_00558F8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00558F93
 * Original: 0x00558F93 - 0x0055901B (136 bytes, 52 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558F93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558F93: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = ZX16(MEM16(ebx + 0x50));
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_00559005; /* jae: above or equal (unsigned >=) */

loc_00558FA7: ;
    eax = ZX16(MEM16(ebx + 0x34));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00558FEA; /* jbe: below or equal (unsigned <=) */

loc_00558FBA: ;
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(ebp + -4);
    esi = MEM32(eax + ecx * 4);
    edi = MEM32(esi + 8);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558FCDu); RECOMP_ABI_CALL(0x00567487u, sub_00567487); /* call 0x00567487 */

loc_00558FCD: ;
    POP32(esp, ecx);
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00558FDF; /* jne: not equal / not zero */

loc_00558FD4: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00558FF2; /* je: equal / zero */

loc_00558FDC: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00558FDF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00558FBA; /* jb: below (unsigned <) */

loc_00558FEA: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00559014;

loc_00558FF2: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_00559014;

loc_00559005: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7F4u;

loc_00559014: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055901B
 * Original: 0x0055901B - 0x005590A3 (136 bytes, 52 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055901B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055901B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = ZX16(MEM16(ebx + 0x52));
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_0055908D; /* jae: above or equal (unsigned >=) */

loc_0055902F: ;
    eax = ZX16(MEM16(ebx + 0x34));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00559072; /* jbe: below or equal (unsigned <=) */

loc_00559042: ;
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(ebp + -4);
    esi = MEM32(eax + ecx * 4);
    edi = MEM32(esi + 8);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559055u); RECOMP_ABI_CALL(0x0056748Du, sub_0056748D); /* call 0x0056748D */

loc_00559055: ;
    POP32(esp, ecx);
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00559067; /* jne: not equal / not zero */

loc_0055905C: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055907A; /* je: equal / zero */

loc_00559064: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00559067: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559042; /* jb: below (unsigned <) */

loc_00559072: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0055909C;

loc_0055907A: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_0055909C;

loc_0055908D: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7F4u;

loc_0055909C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005590A3
 * Original: 0x005590A3 - 0x005590A7 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005590A3(void)
{

loc_005590A3: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_005590DA
 * Original: 0x005590DA - 0x00559119 (63 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005590DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005590DA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = ZX16(MEM16(ebx + 0x34));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0055910E; /* jbe: below or equal (unsigned <=) */

loc_005590EC: ;
    eax = MEM32(ebx + 0x30);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 2 (8-bit) */
    edi = MEM32(eax + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_00559115; /* jne: not equal / not zero */

loc_005590FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00559102u); RECOMP_ABI_CALL(0x00567475u, sub_00567475); /* call 0x00567475 */

loc_00559102: ;
    POP32(esp, ecx);
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00559115; /* jne: not equal / not zero */

loc_00559109: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005590EC; /* jb: below (unsigned <) */

loc_0055910E: ;
    SET_LO8(eax, 1);

loc_00559110: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00559115: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00559110;

}

/**
 * sub_00559119
 * Original: 0x00559119 - 0x00559169 (80 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559119(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559119: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = ZX16(MEM16(esi + 0x34));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_00559144; /* jbe: below or equal (unsigned <=) */

loc_0055912F: ;
    edx = MEM32(esi + 0x30);
    edx = MEM32(edx + eax * 4);
    edx = MEM32(edx + 8);
    SET_LO16(edx, MEM16(edx + 0x14));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(ebx) = MEM16(ebx) + LO16(edx);
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055912F; /* jb: below (unsigned <) */

loc_00559144: ;
    eax = MEM32(esi + 0x28);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00559164; /* jbe: below or equal (unsigned <=) */

loc_00559150: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(eax + edi * 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055915Cu); RECOMP_ABI_CALL(0x00559119u, sub_00559119); /* call 0x00559119 */

loc_0055915C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 8) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_B(_fa, _fb)) goto loc_00559150; /* jb: below (unsigned <) */

loc_00559164: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00559169
 * Original: 0x00559169 - 0x00559212 (169 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559169(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559169: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(edi + 0x34));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_005591E9; /* jbe: below or equal (unsigned <=) */

loc_0055918E: ;
    eax = MEM32(edi + 0x30);
    eax = MEM32(eax + ecx * 4);
    MEM32(ebp + -12) = eax;
    eax = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_005591DD; /* jbe: below or equal (unsigned <=) */

loc_005591A4: ;
    MEM32(ebp + 0xC) = ecx;

loc_005591A7: ;
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX16(MEM16(esi));
    MEM32(edx + ebx * 4) = ecx;
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005591CB; /* je: equal / zero */

loc_005591BC: ;
    ecx = ZX16(MEM16(esi));
    ebx = MEM32(ebp + 8);
    ebx = MEM32(ebx + 0x10);
    ecx = ebx + ecx * 4;
    MEM32(ecx) = MEM32(ecx) | 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_005591CB: ;
    MEM16(esi) = MEM16(esi) + 1;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x30;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005591A7; /* jb: below (unsigned <) */

loc_005591DD: ;
    ecx = MEM32(ebp + -8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -16) (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0055918E; /* jb: below (unsigned <) */

loc_005591E9: ;
    eax = MEM32(edi + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0055920D; /* jbe: below or equal (unsigned <=) */

loc_005591F5: ;
    eax = MEM32(edi + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + ebx * 4));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559204u); RECOMP_ABI_CALL(0x00559169u, sub_00559169); /* call 0x00559169 */

loc_00559204: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005591F5; /* jb: below (unsigned <) */

loc_0055920D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00559212
 * Original: 0x00559212 - 0x0055929D (139 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559212(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559212: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0055929B; /* jbe: below or equal (unsigned <=) */

loc_00559222: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055922B;

loc_00559229: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055922B: ;
    ecx = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = MEM32(eax + ecx);
    esi = esi & 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = edx;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), edx (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0055928C; /* jbe: below or equal (unsigned <=) */

loc_0055924B: ;
    ebx = ecx;

loc_0055924D: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559254u); RECOMP_ABI_CALL(0x0056748Du, sub_0056748D); /* call 0x0056748D */

loc_00559254: ;
    POP32(esp, ecx);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055927C; /* jne: not equal / not zero */

loc_0055925B: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559264u); RECOMP_ABI_CALL(0x00036571u, sub_00036571); /* call 0x00036571 */

loc_00559264: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055927C; /* je: equal / zero */

loc_00559268: ;
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559277u); RECOMP_ABI_CALL(0x00564D86u, sub_00564D86); /* call 0x00564D86 */

loc_00559277: ;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055927C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x24) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055924D; /* jb: below (unsigned <) */

loc_0055928C: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(MEM16(ebp + -8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559229; /* jb: below (unsigned <) */

loc_00559298: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0055929B: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055929D
 * Original: 0x0055929D - 0x005594FB (606 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055929D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055929D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x834) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x834;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = esi;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x876A62);
    PUSH32(esp, edi);
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -44) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005592CBu); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_005592CB: ;
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 1);
    eax = esi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x876A63);
    PUSH32(esp, eax);
    MEM32(ebp + -48) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005592E3u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_005592E3: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -12));
    MEM32(ebp + -36) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005592F2u); RECOMP_ABI_CALL(0x00559212u, sub_00559212); /* call 0x00559212 */

loc_005592F2: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + -20);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -8) = ebx;
    ebx = ebp + -1076;
    eax = ebp + -2100;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -52) = eax;
    edi = 0xFF;

loc_0055932A: ;
    PUSH32(esp, 0x400);
    eax = ebp + -2100;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055933Du); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0055933D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00559361; /* jbe: below or equal (unsigned <=) */

loc_00559346: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + edx * 4);
    ecx = MEM32(ebp + -4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + eax * 4 + -2100;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559346; /* jb: below (unsigned <) */

loc_00559361: ;
    MEM32(ebp + -1076) = MEM32(ebp + -1076) & 0;
    _fa = (uint32_t)(MEM32(ebp + -1076)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 4);
    POP32(esp, eax);

loc_0055936B: ;
    ecx = MEM32(ebp + -52);
    ecx = MEM32(ecx + eax);
    _fb = (uint32_t)(MEM32(ebx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebx + eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    MEM32(ebp + eax + -1080) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0055936B; /* jb: below (unsigned <) */

loc_00559385: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005593D7; /* jbe: below or equal (unsigned <=) */

loc_00559389: ;
    edx = MEM32(ebp + -8);
    ebx = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -40) = esi;
    goto loc_0055939C;

loc_00559399: ;
    ebx = MEM32(ebp + -32);

loc_0055939C: ;
    eax = MEM32(edx);
    ecx = MEM32(ebp + -4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebx + edx);
    ebx = MEM32(ebp + -16);
    eax = ebp + eax * 4 + -1076;
    ecx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + ebx) = edi;
    edi = MEM32(edx);
    ebx = MEM32(ebp + -28);
    MEM32(ecx + ebx) = edi;
    ecx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    edi = 0xFF;
    if ((_fa != 0)) goto loc_00559399; /* jne: not equal / not zero */

loc_005593D4: ;
    ebx = MEM32(ebp + -24);

loc_005593D7: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x20 (32-bit) */
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -28) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0055932A; /* jb: below (unsigned <) */

loc_005593FD: ;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + -20);
    MEM32(ebp + 8) = eax;
    eax = ebp + -1076;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -32) = eax;
    eax = ebp + -2100;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -24) = eax;

loc_00559422: ;
    PUSH32(esp, 0x400);
    eax = ebp + -2100;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559435u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00559435: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055945E; /* jbe: below or equal (unsigned <=) */

loc_0055943E: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + edx * 4);
    ecx = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + eax * 4 + -2100;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055943E; /* jb: below (unsigned <) */

loc_0055945E: ;
    MEM32(ebp + -1076) = MEM32(ebp + -1076) & 0;
    _fa = (uint32_t)(MEM32(ebp + -1076)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 4);
    POP32(esp, eax);

loc_00559468: ;
    ecx = MEM32(ebp + -24);
    ecx = MEM32(ecx + eax);
    edx = MEM32(ebp + -32);
    _fb = (uint32_t)(MEM32(edx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(edx + eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    MEM32(ebp + eax + -1080) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00559468; /* jb: below (unsigned <) */

loc_00559485: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005594BB; /* jbe: below or equal (unsigned <=) */

loc_0055948D: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + ecx * 4);
    ecx = MEM32(ebp + -4);
    eax = edx;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + eax * 4 + -1076;
    ecx = MEM32(eax);
    MEM32(ebx + ecx * 4) = edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), esi (32-bit) */
    MEM32(eax) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0055948D; /* jb: below (unsigned <) */

loc_005594BB: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 8;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x20 (32-bit) */
    MEM32(ebp + 8) = ebx;
    ebx = eax;
    if (CMP_B(_fa, _fb)) goto loc_00559422; /* jb: below (unsigned <) */

loc_005594D1: ;
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005594DDu); RECOMP_ABI_CALL(0x00559212u, sub_00559212); /* call 0x00559212 */

loc_005594DD: ;
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, MEM32(ebp + -20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005594E8u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_005594E8: ;
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, MEM32(ebp + -36));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005594F3u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_005594F3: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005594FB
 * Original: 0x005594FB - 0x005595E8 (237 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005594FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005594FB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(eax + 0x34));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_005595BB; /* jbe: below or equal (unsigned <=) */

loc_00559521: ;
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(ecx + 0x30);
    eax = MEM32(ecx + eax * 4);
    edx = MEM32(eax + 8);
    SET_LO16(ecx, MEM16(edx + 0x14));
    MEM16(eax + 0x24) = LO16(ecx);
    MEM32(eax + 0x28) = esi;
    ecx = ZX16(MEM16(edi));
    ebx = MEM32(esi + 0x14);
    ecx = ebx + ecx * 2;
    MEM32(eax + 0x20) = ecx;
    SET_LO16(ecx, MEM16(eax + 0x24));
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edi) = MEM16(edi) + LO16(ecx);
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x24), LO16(ecx) (16-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_005595AB; /* jbe: below or equal (unsigned <=) */

loc_00559556: ;
    MEM32(ebp + -12) = ecx;

loc_00559559: ;
    ecx = MEM32(edx + 0x18);
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 0x18)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x18), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055959B; /* jbe: below or equal (unsigned <=) */

loc_0055956A: ;
    ebx = ZX16(MEM16(ebp + -4));
    edi = MEM32(esi + 0x10);
    edi = MEM32(edi + ebx * 4);
    edi = edi & 0xFFFFFFFEu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055958A; /* je: equal / zero */

loc_0055957B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(edi, MEM16(ebp + -4));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x18)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(esi + 0x18) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055956A; /* jb: below (unsigned <) */

loc_00559588: ;
    goto loc_00559598;

loc_0055958A: ;
    ecx = MEM32(eax + 0x20);
    SET_LO16(edi, MEM16(ebp + -4));
    ebx = MEM32(ebp + -8);
    MEM16(ecx + ebx * 2) = LO16(edi);

loc_00559598: ;
    edi = MEM32(ebp + 0x10);

loc_0055959B: ;
    ecx = ZX16(MEM16(eax + 0x24));
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0x30;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559559; /* jb: below (unsigned <) */

loc_005595AB: ;
    eax = MEM32(ebp + -16);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00559521; /* jb: below (unsigned <) */

loc_005595BB: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_005595E3; /* jbe: below or equal (unsigned <=) */

loc_005595CA: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax + ebx * 4));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005595DAu); RECOMP_ABI_CALL(0x005594FBu, sub_005594FB); /* call 0x005594FB */

loc_005595DA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005595CA; /* jb: below (unsigned <) */

loc_005595E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005595E8
 * Original: 0x005595E8 - 0x00559688 (160 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005595E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005595E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055966B; /* je: equal / zero */

loc_005595FA: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(ebp + 8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559607u); RECOMP_ABI_CALL(0x00559119u, sub_00559119); /* call 0x00559119 */

loc_00559607: ;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), LO16(edi) (16-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_BE(_fa, _fb)) goto loc_00559683; /* jbe: below or equal (unsigned <=) */

loc_0055960F: ;
    eax = ZX16(MEM16(ebp + 8));
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x876A64);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559622u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_00559622: ;
    ebx = eax;
    eax = ZX16(MEM16(ebp + 8));
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x876A65);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559636u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_00559636: ;
    MEM32(esi + 0x14) = eax;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(esi + 0x18) = LO16(eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(esi + 0x10) = ebx;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559652u); RECOMP_ABI_CALL(0x00559169u, sub_00559169); /* call 0x00559169 */

loc_00559652: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559658u); RECOMP_ABI_CALL(0x0055929Du, sub_0055929D); /* call 0x0055929D */

loc_00559658: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559666u); RECOMP_ABI_CALL(0x005594FBu, sub_005594FB); /* call 0x005594FB */

loc_00559666: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00559683;

loc_0055966B: ;
    ebx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00559683; /* jbe: below or equal (unsigned <=) */

loc_00559672: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, MEM32(eax + edi * 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055967Du); RECOMP_ABI_CALL(0x005595E8u, sub_005595E8); /* call 0x005595E8 */

loc_0055967D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_B(_fa, _fb)) goto loc_00559672; /* jb: below (unsigned <) */

loc_00559683: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00559688
 * Original: 0x00559688 - 0x005596FA (114 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559688(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559688: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005596C0; /* je: equal / zero */

loc_00559696: ;
    ecx = ZX16(MEM16(esi + 0x18));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005596A4u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_005596A4: ;
    eax = ZX16(MEM16(esi + 0x18));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0x005596B3u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_005596B3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM16(esi + 0x18) = LO16(edi);

loc_005596C0: ;
    edx = ZX16(MEM16(esi + 0x34));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005596DF; /* jbe: below or equal (unsigned <=) */

loc_005596CA: ;
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax + ecx * 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM16(eax + 0x24) = LO16(edi);
    MEM32(eax + 0x28) = edi;
    MEM32(eax + 0x20) = edi;
    if (CMP_B(_fa, _fb)) goto loc_005596CA; /* jb: below (unsigned <) */

loc_005596DF: ;
    ebx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005596F6; /* jbe: below or equal (unsigned <=) */

loc_005596E6: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, 0x005596F1u); RECOMP_ABI_CALL(0x00559688u, sub_00559688); /* call 0x00559688 */

loc_005596F1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005596E6; /* jb: below (unsigned <) */

loc_005596F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005596FA
 * Original: 0x005596FA - 0x005596FE (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005596FA(void)
{

loc_005596FA: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_005596FE
 * Original: 0x005596FE - 0x0055972F (49 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005596FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005596FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055971F; /* jae: above or equal (unsigned >=) */

loc_00559709: ;
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_0055972B;

loc_0055971F: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055972B: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055972F
 * Original: 0x0055972F - 0x0055973E (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055972F(void)
{

loc_0055972F: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + ecx * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0055973E
 * Original: 0x0055973E - 0x00559772 (52 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055973E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055973E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x40) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055975F; /* jae: above or equal (unsigned >=) */

loc_00559749: ;
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_0055976E;

loc_0055975F: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7F4u;

loc_0055976E: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00559772
 * Original: 0x00559772 - 0x005597AC (58 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559772(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559772: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    edx = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005597A2; /* jbe: below or equal (unsigned <=) */

loc_00559784: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559794u); RECOMP_ABI_CALL(0x0055973Eu, sub_0055973E); /* call 0x0055973E */

loc_00559794: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005597A8; /* je: equal / zero */

loc_0055979D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559784; /* jb: below (unsigned <) */

loc_005597A2: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_005597A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_005597A8: ;
    SET_LO8(eax, 1);
    goto loc_005597A4;

}

/**
 * sub_005597AC
 * Original: 0x005597AC - 0x0055981D (113 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005597AC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005597AC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM8(esi + 8) = MEM8(esi + 8) | 1;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005597BCu); RECOMP_ABI_CALL(0x00559772u, sub_00559772); /* call 0x00559772 */

loc_005597BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005597D2; /* jne: not equal / not zero */

loc_005597C1: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 7 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005597D2; /* jne: not equal / not zero */

loc_005597C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005597CDu); RECOMP_ABI_CALL(0x005590DAu, sub_005590DA); /* call 0x005590DA */

loc_005597CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005597D6; /* jne: not equal / not zero */

loc_005597D2: ;
    MEM8(esi + 8) = MEM8(esi + 8) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_005597D6: ;
    edi = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005597F9; /* jbe: below or equal (unsigned <=) */

loc_005597E0: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, MEM32(eax + ebx * 4));
    PUSH32(esp, 0x005597EBu); RECOMP_ABI_CALL(0x005597ACu, sub_005597AC); /* call 0x005597AC */

loc_005597EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005597F4; /* jne: not equal / not zero */

loc_005597F0: ;
    MEM8(esi + 8) = MEM8(esi + 8) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_005597F4: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005597E0; /* jb: below (unsigned <) */

loc_005597F9: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00559815; /* je: equal / zero */

loc_00559800: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00559815; /* jbe: below or equal (unsigned <=) */

loc_00559806: ;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + ecx * 4);
    MEM8(eax + 8) = MEM8(eax + 8) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559806; /* jb: below (unsigned <) */

loc_00559815: ;
    SET_LO8(eax, MEM8(esi + 8));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055981D
 * Original: 0x0055981D - 0x00559878 (91 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055981D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055981D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x25);
    POP32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    edi = ecx;
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055983Du); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0055983D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559844u); RECOMP_ABI_CALL(0x0055E017u, sub_0055E017); /* call 0x0055E017 */

loc_00559844: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055984Bu); RECOMP_ABI_CALL(0x00559688u, sub_00559688); /* call 0x00559688 */

loc_0055984B: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559851u); RECOMP_ABI_CALL(0x005597ACu, sub_005597AC); /* call 0x005597AC */

loc_00559851: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559857u); RECOMP_ABI_CALL(0x005595E8u, sub_005595E8); /* call 0x005595E8 */

loc_00559857: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055986Du); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0055986D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559874u); RECOMP_ABI_CALL(0x0055E033u, sub_0055E033); /* call 0x0055E033 */

loc_00559874: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00559878
 * Original: 0x00559878 - 0x005598A4 (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559878(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00559878: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055989A; /* jbe: below or equal (unsigned <=) */

loc_00559883: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559894; /* je: equal / zero */

loc_0055988D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00559894u); RECOMP_ABI_CALL(0x0055A94Cu, sub_0055A94C); /* call 0x0055A94C */

loc_00559894: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x18) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559883; /* jb: below (unsigned <) */

loc_0055989A: ;
    POP32(esp, edi);
    ecx = esi + 0x14;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0055ADC9(); return; /* tail jmp 0x0055ADC9 */

}

/**
 * sub_005598A4
 * Original: 0x005598A4 - 0x005598DF (59 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005598A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005598A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, esi);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005598B8u); RECOMP_ABI_CALL(0x0055B2A7u, sub_0055B2A7); /* call 0x0055B2A7 */

loc_005598B8: ;
    edi = ebp + -12;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005598BD: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005598C4u); RECOMP_ABI_CALL(0x00558AB1u, sub_00558AB1); /* call 0x00558AB1 */

loc_005598C4: ;
    eax = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    POP32(esp, ecx);
    esi = edi;
    POP32(esp, ecx);
    edi = eax;
    if (CMP_B(_fa, _fb)) goto loc_005598BD; /* jb: below (unsigned <) */

loc_005598D2: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005598DAu); RECOMP_ABI_CALL(0x0055ADFFu, sub_0055ADFF); /* call 0x0055ADFF */

loc_005598DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005598DF
 * Original: 0x005598DF - 0x0055991A (59 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005598DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005598DF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005598F3u); RECOMP_ABI_CALL(0x0055B2C3u, sub_0055B2C3); /* call 0x0055B2C3 */

loc_005598F3: ;
    esi = ebp + -12;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005598F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005598FFu); RECOMP_ABI_CALL(0x00558B93u, sub_00558B93); /* call 0x00558B93 */

loc_005598FF: ;
    eax = ebx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    POP32(esp, ecx);
    ebx = esi;
    POP32(esp, ecx);
    esi = eax;
    if (CMP_B(_fa, _fb)) goto loc_005598F8; /* jb: below (unsigned <) */

loc_0055990D: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559915u); RECOMP_ABI_CALL(0x0055AE35u, sub_0055AE35); /* call 0x0055AE35 */

loc_00559915: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055991A
 * Original: 0x0055991A - 0x005599F1 (215 bytes, 82 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055991A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055991A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = ZX16(MEM16(edi + 0x34));
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_005599E3; /* jae: above or equal (unsigned >=) */

loc_00559930: ;
    eax = edi + 0x30;
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = eax;
    eax = MEM32(eax);
    ebx = MEM32(eax + ecx * 4);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559947u); RECOMP_ABI_CALL(0x00567475u, sub_00567475); /* call 0x00567475 */

loc_00559947: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00559954; /* jne: not equal / not zero */

loc_0055994E: ;
    MEM16(edi + 0x48) = MEM16(edi + 0x48) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x48)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_005599B6;

loc_00559954: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055995Bu); RECOMP_ABI_CALL(0x0056747Bu, sub_0056747B); /* call 0x0056747B */

loc_0055995B: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00559968; /* jne: not equal / not zero */

loc_00559962: ;
    MEM16(edi + 0x4A) = MEM16(edi + 0x4A) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x4A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_005599B6;

loc_00559968: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055996Fu); RECOMP_ABI_CALL(0x00567481u, sub_00567481); /* call 0x00567481 */

loc_0055996F: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0055997C; /* jne: not equal / not zero */

loc_00559976: ;
    MEM16(edi + 0x4C) = MEM16(edi + 0x4C) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x4C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_005599B6;

loc_0055997C: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559983u); RECOMP_ABI_CALL(0x00567493u, sub_00567493); /* call 0x00567493 */

loc_00559983: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00559990; /* jne: not equal / not zero */

loc_0055998A: ;
    MEM16(edi + 0x4E) = MEM16(edi + 0x4E) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x4E)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_005599B6;

loc_00559990: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559997u); RECOMP_ABI_CALL(0x00567487u, sub_00567487); /* call 0x00567487 */

loc_00559997: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005599A4; /* jne: not equal / not zero */

loc_0055999E: ;
    MEM16(edi + 0x50) = MEM16(edi + 0x50) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x50)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_005599B6;

loc_005599A4: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005599ABu); RECOMP_ABI_CALL(0x0056748Du, sub_0056748D); /* call 0x0056748D */

loc_005599AB: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005599B6; /* jne: not equal / not zero */

loc_005599B2: ;
    MEM16(edi + 0x52) = MEM16(edi + 0x52) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x52)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */

loc_005599B6: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005599BFu); RECOMP_ABI_CALL(0x0055AC72u, sub_0055AC72); /* call 0x0055AC72 */

loc_005599BF: ;
    ecx = MEM32(0x9153C0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005599CBu); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_005599CB: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005599D6u); RECOMP_ABI_CALL(0x0055B390u, sub_0055B390); /* call 0x0055B390 */

loc_005599D6: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    MEM32(eax) = 1;
    POP32(esp, ebx);
    goto loc_005599EC;

loc_005599E3: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7F4u;

loc_005599EC: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005599F1
 * Original: 0x005599F1 - 0x00559AD5 (228 bytes, 90 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005599F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005599F1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ZX16(MEM16(edi + 0x34));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00559A21; /* jbe: below or equal (unsigned <=) */

loc_00559A07: ;
    eax = edi + 0x30;
    MEM32(ebp + -8) = eax;
    eax = MEM32(eax);

loc_00559A0F: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559A30; /* je: equal / zero */

loc_00559A16: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559A0F; /* jb: below (unsigned <) */

loc_00559A21: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD801u;

loc_00559A2A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_00559A30: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559A3Au); RECOMP_ABI_CALL(0x00567475u, sub_00567475); /* call 0x00567475 */

loc_00559A3A: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00559A47; /* jne: not equal / not zero */

loc_00559A41: ;
    MEM16(edi + 0x48) = MEM16(edi + 0x48) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x48)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00559AA4;

loc_00559A47: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559A4Du); RECOMP_ABI_CALL(0x0056747Bu, sub_0056747B); /* call 0x0056747B */

loc_00559A4D: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00559A5A; /* jne: not equal / not zero */

loc_00559A54: ;
    MEM16(edi + 0x4A) = MEM16(edi + 0x4A) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x4A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00559AA4;

loc_00559A5A: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559A60u); RECOMP_ABI_CALL(0x00567481u, sub_00567481); /* call 0x00567481 */

loc_00559A60: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00559A6D; /* jne: not equal / not zero */

loc_00559A67: ;
    MEM16(edi + 0x4C) = MEM16(edi + 0x4C) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x4C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00559AA4;

loc_00559A6D: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559A73u); RECOMP_ABI_CALL(0x00567493u, sub_00567493); /* call 0x00567493 */

loc_00559A73: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00559A80; /* jne: not equal / not zero */

loc_00559A7A: ;
    MEM16(edi + 0x4E) = MEM16(edi + 0x4E) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x4E)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00559AA4;

loc_00559A80: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559A86u); RECOMP_ABI_CALL(0x00567487u, sub_00567487); /* call 0x00567487 */

loc_00559A86: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00559A93; /* jne: not equal / not zero */

loc_00559A8D: ;
    MEM16(edi + 0x50) = MEM16(edi + 0x50) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x50)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00559AA4;

loc_00559A93: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559A99u); RECOMP_ABI_CALL(0x0056748Du, sub_0056748D); /* call 0x0056748D */

loc_00559A99: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00559AA4; /* jne: not equal / not zero */

loc_00559AA0: ;
    MEM16(edi + 0x52) = MEM16(edi + 0x52) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x52)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */

loc_00559AA4: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559AADu); RECOMP_ABI_CALL(0x0055AC72u, sub_0055AC72); /* call 0x0055AC72 */

loc_00559AAD: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(0x9153C0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559ABBu); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_00559ABB: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559AC6u); RECOMP_ABI_CALL(0x0055B390u, sub_0055B390); /* call 0x0055B390 */

loc_00559AC6: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    POP32(esp, esi);
    goto loc_00559A2A;

}

/**
 * sub_00559AD5
 * Original: 0x00559AD5 - 0x00559AEF (26 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559AD5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559AD5: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00559AE2u); RECOMP_ABI_CALL(0x0055B3C5u, sub_0055B3C5); /* call 0x0055B3C5 */

loc_00559AE2: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00559AEF
 * Original: 0x00559AEF - 0x00559B39 (74 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559AEF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559AEF: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00559B00; /* jne: not equal / not zero */

loc_00559AF8: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = MEM32(eax) & edi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00559B23;

loc_00559B00: ;
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00559B1B; /* jbe: below or equal (unsigned <=) */

loc_00559B0A: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);

loc_00559B0F: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559B27; /* je: equal / zero */

loc_00559B13: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559B0F; /* jb: below (unsigned <) */

loc_00559B1B: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00559B22: ;
    POP32(esp, esi);

loc_00559B23: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_00559B27: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00559B2Du); RECOMP_ABI_CALL(0x0055B3EBu, sub_0055B3EB); /* call 0x0055B3EB */

loc_00559B2D: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 1;
    goto loc_00559B22;

}

/**
 * sub_00559B39
 * Original: 0x00559B39 - 0x00559BB7 (126 bytes, 43 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559B39(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559B39: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi));
    MEM8(esi + 8) = MEM8(esi + 8) | 1;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    SET_LO8(eax, LO8(eax) & 0xFD);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi) = LO8(eax);
    eax = MEM32(esi + 4);
    eax = eax ^ MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = ecx;
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = MEM32(esi + 4) ^ eax;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM16(esi + 0x18) = LO16(eax);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM16(esi + 0x48) = LO16(eax);
    MEM16(esi + 0x4A) = LO16(eax);
    MEM16(esi + 0x4C) = LO16(eax);
    MEM16(esi + 0x4E) = LO16(eax);
    MEM16(esi + 0x50) = LO16(eax);
    MEM16(esi + 0x52) = LO16(eax);
    MEM16(esi + 0x54) = LO16(eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00559BAFu); RECOMP_ABI_CALL(0x00558918u, sub_00558918); /* call 0x00558918 */

loc_00559BAF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00559BB7
 * Original: 0x00559BB7 - 0x00559C27 (112 bytes, 42 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559BB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559BB7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559BCEu); RECOMP_ABI_CALL(0x00558CABu, sub_00558CAB); /* call 0x00558CAB */

loc_00559BCE: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00559BDE; /* jle: less or equal (signed <=) */

loc_00559BD3: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7F3u;
    goto loc_00559C21;

loc_00559BDE: ;
    ecx = MEM32(0x9153C4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559BE9u); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_00559BE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559BFC; /* je: equal / zero */

loc_00559BED: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559BFAu); RECOMP_ABI_CALL(0x00559B39u, sub_00559B39); /* call 0x00559B39 */

loc_00559BFA: ;
    goto loc_00559BFE;

loc_00559BFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00559BFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00559C18; /* je: equal / zero */

loc_00559C04: ;
    PUSH32(esp, edi);
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559C0Du); RECOMP_ABI_CALL(0x0055B30Fu, sub_0055B30F); /* call 0x0055B30F */

loc_00559C0D: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_00559C21;

loc_00559C18: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFFF9Eu;

loc_00559C21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00559C27
 * Original: 0x00559C27 - 0x00559C6A (67 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559C27(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559C27: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x9153C4);
    PUSH32(esp, 0x00559C35u); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_00559C35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559C4C; /* je: equal / zero */

loc_00559C39: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x8DBEC4));
    ecx = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00559C4Au); RECOMP_ABI_CALL(0x00559B39u, sub_00559B39); /* call 0x00559B39 */

loc_00559C4A: ;
    goto loc_00559C4E;

loc_00559C4C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00559C4E: ;
    MEM32(esi) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00559C61; /* je: equal / zero */

loc_00559C59: ;
    MEM32(eax) = 1;
    goto loc_00559C67;

loc_00559C61: ;
    MEM32(eax) = 0xFFFFFF9Eu;

loc_00559C67: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00559C6A
 * Original: 0x00559C6A - 0x00559CE8 (126 bytes, 51 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559C6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559C6A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00559CE2; /* jbe: below or equal (unsigned <=) */

loc_00559C83: ;
    PUSH32(esp, esi);

loc_00559C84: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559C96u); RECOMP_ABI_CALL(0x00558C77u, sub_00558C77); /* call 0x00558C77 */

loc_00559C96: ;
    esi = MEM32(ebp + -4);
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00559CD9; /* je: equal / zero */

loc_00559C9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00559CB1; /* je: equal / zero */

loc_00559CA3: ;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559CAFu); RECOMP_ABI_CALL(0x0055B30Fu, sub_0055B30F); /* call 0x0055B30F */

loc_00559CAF: ;
    goto loc_00559CD9;

loc_00559CB1: ;
    _fa = (uint32_t)(MEM16(esi + 0x34)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x34), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00559CC4; /* jbe: below or equal (unsigned <=) */

loc_00559CB8: ;
    ecx = MEM32(ebp + 0x10);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559CC4u); RECOMP_ABI_CALL(0x0055B30Fu, sub_0055B30F); /* call 0x0055B30F */

loc_00559CC4: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00559CD9; /* jbe: below or equal (unsigned <=) */

loc_00559CCA: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559CD9u); RECOMP_ABI_CALL(0x00559C6Au, sub_00559C6A); /* call 0x00559C6A */

loc_00559CD9: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559C84; /* jb: below (unsigned <) */

loc_00559CE1: ;
    POP32(esp, esi);

loc_00559CE2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00559CE8
 * Original: 0x00559CE8 - 0x00559E43 (347 bytes, 125 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559CE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559CE8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x34);
    ebx = ZX16(LO16(eax));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00559E3C; /* je: equal / zero */

loc_00559D07: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00559E17; /* jne: not equal / not zero */

loc_00559D11: ;
    SET_LO16(ecx, MEM16(esi + 0x54));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00559D30; /* jne: not equal / not zero */

loc_00559D1A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559D2Bu); RECOMP_ABI_CALL(0x0055AD62u, sub_0055AD62); /* call 0x0055AD62 */

loc_00559D2B: ;
    goto loc_00559E3C;

loc_00559D30: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    MEM32(ebp + 0x10) = edi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = edi;
    MEM32(ebp + -20) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00559D9E; /* jne: not equal / not zero */

loc_00559D41: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00559D79; /* jbe: below or equal (unsigned <=) */

loc_00559D45: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559D57u); RECOMP_ABI_CALL(0x00558D3Cu, sub_00558D3C); /* call 0x00558D3C */

loc_00559D57: ;
    eax = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00559D71; /* je: equal / zero */

loc_00559D61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00559D71; /* je: equal / zero */

loc_00559D65: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559D71u); RECOMP_ABI_CALL(0x0055B36Au, sub_0055B36A); /* call 0x0055B36A */

loc_00559D71: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559D45; /* jb: below (unsigned <) */

loc_00559D79: ;
    eax = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559D81u); RECOMP_ABI_CALL(0x005598DFu, sub_005598DF); /* call 0x005598DF */

loc_00559D81: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559D91u); RECOMP_ABI_CALL(0x0055AD62u, sub_0055AD62); /* call 0x0055AD62 */

loc_00559D91: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559D99u); RECOMP_ABI_CALL(0x0055AE35u, sub_0055AE35); /* call 0x0055AE35 */

loc_00559D99: ;
    goto loc_00559E3C;

loc_00559D9E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(ebp + -32) = edi;
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -24) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_00559DE2; /* jbe: below or equal (unsigned <=) */

loc_00559DAB: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559DBDu); RECOMP_ABI_CALL(0x00558D3Cu, sub_00558D3C); /* call 0x00558D3C */

loc_00559DBD: ;
    eax = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00559DDA; /* je: equal / zero */

loc_00559DC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -20;
    if (TEST_NZ(_fa, _fb)) goto loc_00559DD5; /* jne: not equal / not zero */

loc_00559DD2: ;
    ecx = ebp + -32;

loc_00559DD5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559DDAu); RECOMP_ABI_CALL(0x0055B36Au, sub_0055B36A); /* call 0x0055B36A */

loc_00559DDA: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559DAB; /* jb: below (unsigned <) */

loc_00559DE2: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559DF2u); RECOMP_ABI_CALL(0x0055AD62u, sub_0055AD62); /* call 0x0055AD62 */

loc_00559DF2: ;
    eax = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559DFAu); RECOMP_ABI_CALL(0x005598DFu, sub_005598DF); /* call 0x005598DF */

loc_00559DFA: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559E0Au); RECOMP_ABI_CALL(0x0055AD62u, sub_0055AD62); /* call 0x0055AD62 */

loc_00559E0A: ;
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559E12u); RECOMP_ABI_CALL(0x0055AE35u, sub_0055AE35); /* call 0x0055AE35 */

loc_00559E12: ;
    goto loc_00559D91;

loc_00559E17: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00559E3C; /* jae: above or equal (unsigned >=) */

loc_00559E1C: ;
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559E2Eu); RECOMP_ABI_CALL(0x00558D3Cu, sub_00558D3C); /* call 0x00558D3C */

loc_00559E2E: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559E3Cu); RECOMP_ABI_CALL(0x0055AC98u, sub_0055AC98); /* call 0x0055AC98 */

loc_00559E3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00559E43
 * Original: 0x00559E43 - 0x00559F8E (331 bytes, 131 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559E43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559E43: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -44) = edx;
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00559F8A; /* jbe: below or equal (unsigned <=) */

loc_00559E5F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_00559E67;

loc_00559E64: ;
    ecx = MEM32(ebp + -12);

loc_00559E67: ;
    ecx = MEM32(ecx + 0x3C);
    esi = MEM32(ecx + eax * 4);
    eax = MEM32(esi + 0x10);
    edi = MEM32(esi + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00559EEE; /* je: equal / zero */

loc_00559E79: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00559F17; /* je: equal / zero */

loc_00559E80: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00559F42; /* je: equal / zero */

loc_00559E87: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00559F77; /* jne: not equal / not zero */

loc_00559E8E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    eax = MEM32(ebp + 8);
    MEM8(eax) = 1;
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00559EE2; /* jbe: below or equal (unsigned <=) */

loc_00559E9B: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    eax = ebp + -48;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559EADu); RECOMP_ABI_CALL(0x005596FEu, sub_005596FE); /* call 0x005596FE */

loc_00559EAD: ;
    ecx = MEM32(ebp + -16);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -52;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559EBDu); RECOMP_ABI_CALL(0x0002438Au, sub_0002438A); /* call 0x0002438A */

loc_00559EBD: ;
    ebx = MEM32(ebp + -20);
    eax = MEM32(ebx);
    MEM32(ebp + -24) = eax;
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = 0x9153D0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559ED3u); RECOMP_ABI_CALL(0x0055B420u, sub_0055B420); /* call 0x0055B420 */

loc_00559ED3: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559ED9u); RECOMP_ABI_CALL(0x00560E2Bu, sub_00560E2B); /* call 0x00560E2B */

loc_00559ED9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    POP32(esp, ecx);
    if (CMP_B(_fa, _fb)) goto loc_00559E9B; /* jb: below (unsigned <) */

loc_00559EE2: ;
    MEM32(0x9153C8) = MEM32(0x9153C8) & 0;
    _fa = (uint32_t)(MEM32(0x9153C8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00559F77;

loc_00559EEE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00559F17; /* jbe: below or equal (unsigned <=) */

loc_00559EF2: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -56;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559F02u); RECOMP_ABI_CALL(0x005596FEu, sub_005596FE); /* call 0x005596FE */

loc_00559F02: ;
    ecx = MEM32(ebp + -28);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -60;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559F12u); RECOMP_ABI_CALL(0x0055AAC8u, sub_0055AAC8); /* call 0x0055AAC8 */

loc_00559F12: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559EF2; /* jb: below (unsigned <) */

loc_00559F17: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00559F42; /* jbe: below or equal (unsigned <=) */

loc_00559F1D: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -64;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559F2Du); RECOMP_ABI_CALL(0x005596FEu, sub_005596FE); /* call 0x005596FE */

loc_00559F2D: ;
    ecx = MEM32(ebp + -32);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -68;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559F3Du); RECOMP_ABI_CALL(0x00021F90u, sub_00021F90); /* call 0x00021F90 */

loc_00559F3D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559F1D; /* jb: below (unsigned <) */

loc_00559F42: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00559F77; /* jbe: below or equal (unsigned <=) */

loc_00559F48: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -72;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559F58u); RECOMP_ABI_CALL(0x005596FEu, sub_005596FE); /* call 0x005596FE */

loc_00559F58: ;
    ecx = MEM32(ebp + -36);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -76;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559F68u); RECOMP_ABI_CALL(0x0055AAF5u, sub_0055AAF5); /* call 0x0055AAF5 */

loc_00559F68: ;
    eax = MEM32(ebp + -40);
    eax = MEM32(eax);
    ecx = MEM32(ebp + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00559F48; /* jb: below (unsigned <) */

loc_00559F77: ;
    eax = MEM32(ebp + -8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -44) (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00559E64; /* jb: below (unsigned <) */

loc_00559F87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00559F8A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00559F8E
 * Original: 0x00559F8E - 0x0055A07C (238 bytes, 94 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559F8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559F8E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edx = ZX16(MEM16(edi + 0x34));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00559FC4; /* jbe: below or equal (unsigned <=) */

loc_00559FA5: ;
    ecx = MEM32(ebp + 0xC);
    eax = edi + 0x30;
    MEM32(ebp + -8) = eax;
    eax = MEM32(eax);

loc_00559FB0: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(ebp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00559FD4; /* je: equal / zero */

loc_00559FB9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559FB0; /* jb: below (unsigned <) */

loc_00559FC4: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD801u;

loc_00559FCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_00559FD4: ;
    esi = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559FDDu); RECOMP_ABI_CALL(0x00567475u, sub_00567475); /* call 0x00567475 */

loc_00559FDD: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00559FEA; /* jne: not equal / not zero */

loc_00559FE4: ;
    MEM16(edi + 0x48) = MEM16(edi + 0x48) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x48)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0055A047;

loc_00559FEA: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559FF0u); RECOMP_ABI_CALL(0x0056747Bu, sub_0056747B); /* call 0x0056747B */

loc_00559FF0: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00559FFD; /* jne: not equal / not zero */

loc_00559FF7: ;
    MEM16(edi + 0x4A) = MEM16(edi + 0x4A) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x4A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0055A047;

loc_00559FFD: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A003u); RECOMP_ABI_CALL(0x00567481u, sub_00567481); /* call 0x00567481 */

loc_0055A003: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0055A010; /* jne: not equal / not zero */

loc_0055A00A: ;
    MEM16(edi + 0x4C) = MEM16(edi + 0x4C) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x4C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0055A047;

loc_0055A010: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A016u); RECOMP_ABI_CALL(0x00567493u, sub_00567493); /* call 0x00567493 */

loc_0055A016: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0055A023; /* jne: not equal / not zero */

loc_0055A01D: ;
    MEM16(edi + 0x4E) = MEM16(edi + 0x4E) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x4E)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0055A047;

loc_0055A023: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A029u); RECOMP_ABI_CALL(0x00567487u, sub_00567487); /* call 0x00567487 */

loc_0055A029: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0055A036; /* jne: not equal / not zero */

loc_0055A030: ;
    MEM16(edi + 0x50) = MEM16(edi + 0x50) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x50)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0055A047;

loc_0055A036: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A03Cu); RECOMP_ABI_CALL(0x0056748Du, sub_0056748D); /* call 0x0056748D */

loc_0055A03C: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0055A047; /* jne: not equal / not zero */

loc_0055A043: ;
    MEM16(edi + 0x52) = MEM16(edi + 0x52) - 1;
    _fa = (uint32_t)(MEM16(edi + 0x52)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */

loc_0055A047: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A063; /* je: equal / zero */

loc_0055A04C: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A055u); RECOMP_ABI_CALL(0x0055AC72u, sub_0055AC72); /* call 0x0055AC72 */

loc_0055A055: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(0x9153C0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A063u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_0055A063: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A06Eu); RECOMP_ABI_CALL(0x0055B390u, sub_0055B390); /* call 0x0055B390 */

loc_0055A06E: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_00559FCD;

}

/**
 * sub_0055A07C
 * Original: 0x0055A07C - 0x0055A09A (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A07C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A07C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055A084u); RECOMP_ABI_CALL(0x0001E3DBu, sub_0001E3DB); /* call 0x0001E3DB */

loc_0055A084: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = 5;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055A09A
 * Original: 0x0055A09A - 0x0055A0B2 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A09A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055A09A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055A0A2u); RECOMP_ABI_CALL(0x00559878u, sub_00559878); /* call 0x00559878 */

loc_0055A0A2: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x0055A0AAu); RECOMP_ABI_CALL(0x0055ADC9u, sub_0055ADC9); /* call 0x0055ADC9 */

loc_0055A0AA: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_0055A0B2
 * Original: 0x0055A0B2 - 0x0055A18F (221 bytes, 86 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A0B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A0B2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A0C1u); RECOMP_ABI_CALL(0x00559878u, sub_00559878); /* call 0x00559878 */

loc_0055A0C1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x14);
    MEM32(esi + 0x10) = 5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A0D5u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055A0D5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A0E8; /* je: equal / zero */

loc_0055A0DC: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A0E3u); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_0055A0E3: ;
    MEM32(ebp + -4) = eax;
    goto loc_0055A0EB;

loc_0055A0E8: ;
    MEM32(ebp + -4) = edi;

loc_0055A0EB: ;
    PUSH32(esp, ecx);
    eax = ebp + 0x14;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A0F7u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_0055A0F7: ;
    ebx = MEM32(ebp + -4);
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A105u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_0055A105: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A111u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0055A111: ;
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A11Cu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_0055A11C: ;
    PUSH32(esp, ecx);
    eax = ebp + 0x1C;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A128u); RECOMP_ABI_CALL(0x0002D9EEu, sub_0002D9EE); /* call 0x0002D9EE */

loc_0055A128: ;
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A133u); RECOMP_ABI_CALL(0x00576041u, sub_00576041); /* call 0x00576041 */

loc_0055A133: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A141u); RECOMP_ABI_CALL(0x00575FACu, sub_00575FAC); /* call 0x00575FAC */

loc_0055A141: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A14Du); RECOMP_ABI_CALL(0x0055B2E4u, sub_0055B2E4); /* call 0x0055B2E4 */

loc_0055A14D: ;
    eax = MEM32(esi + 0x18);
    MEM32(esi + 8) = eax;
    eax = esi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A160; /* je: equal / zero */

loc_0055A15A: ;
    MEM32(eax) = 0x55972F;

loc_0055A160: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x10) = eax;
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp + 0x14;
    MEM32(esi) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A176u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0055A176: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x1C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A17E; /* je: equal / zero */

loc_0055A17B: ;
    MEM32(ebp + 0x1C) = edi;

loc_0055A17E: ;
    ecx = ebp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A186u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0055A186: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0055A18F
 * Original: 0x0055A18F - 0x0055A1A7 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A18F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A18F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A1A2u); RECOMP_ABI_CALL(0x00559F8Eu, sub_00559F8E); /* call 0x00559F8E */

loc_0055A1A2: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0055A1A7
 * Original: 0x0055A1A7 - 0x0055A1C7 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A1A7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A1A7: ;
    eax = MEM32(0x9153D4);
    ecx = MEM32(0x9153D0);
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + -4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = 0x9153D0;
    PUSH32(esp, 0x0055A1C3u); RECOMP_ABI_CALL(0x0055B446u, sub_0055B446); /* call 0x0055B446 */

loc_0055A1C3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055A1C7
 * Original: 0x0055A1C7 - 0x0055A1EF (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A1C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A1C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055A1DC; /* jne: not equal / not zero */

loc_0055A1D1: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7FEu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0055A1DC: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A1EAu); RECOMP_ABI_CALL(0x00559BB7u, sub_00559BB7); /* call 0x00559BB7 */

loc_0055A1EA: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0055A1EF
 * Original: 0x0055A1EF - 0x0055A222 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A1EF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A1EF: ;
    ecx = MEM32(0x9153BC);
    PUSH32(esp, 0x0055A1FAu); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_0055A1FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A207; /* je: equal / zero */

loc_0055A1FE: ;
    ecx = eax;
    PUSH32(esp, 0x0055A205u); RECOMP_ABI_CALL(0x0055A07Cu, sub_0055A07C); /* call 0x0055A07C */

loc_0055A205: ;
    goto loc_0055A209;

loc_0055A207: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055A209: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0055A21E; /* je: equal / zero */

loc_0055A217: ;
    MEM32(eax) = 1;
    esp += 4; return; /* ret */

loc_0055A21E: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055A222
 * Original: 0x0055A222 - 0x0055A337 (277 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A222(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A222: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A235u); RECOMP_ABI_CALL(0x0055895Du, sub_0055895D); /* call 0x0055895D */

loc_0055A235: ;
    eax = ZX16(MEM16(esi + 0x34));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0055A268; /* jbe: below or equal (unsigned <=) */

loc_0055A243: ;
    eax = MEM32(esi + 0x30);
    edi = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A256; /* je: equal / zero */

loc_0055A24D: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A256u); RECOMP_ABI_CALL(0x0055AC72u, sub_0055AC72); /* call 0x0055AC72 */

loc_0055A256: ;
    ecx = MEM32(0x9153C0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A262u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_0055A262: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055A243; /* jb: below (unsigned <) */

loc_0055A268: ;
    ecx = esi + 0x30;
    MEM32(ebp + -8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A273u); RECOMP_ABI_CALL(0x0055AE35u, sub_0055AE35); /* call 0x0055AE35 */

loc_0055A273: ;
    eax = MEM32(esi + 0x28);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0055A2A2; /* jbe: below or equal (unsigned <=) */

loc_0055A27F: ;
    eax = MEM32(esi + 0x24);
    ebx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A290; /* je: equal / zero */

loc_0055A289: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A290u); RECOMP_ABI_CALL(0x0055A222u, sub_0055A222); /* call 0x0055A222 */

loc_0055A290: ;
    ecx = MEM32(0x9153C4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A29Cu); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_0055A29C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055A27F; /* jb: below (unsigned <) */

loc_0055A2A2: ;
    ecx = esi + 0x24;
    MEM32(ebp + -12) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A2ADu); RECOMP_ABI_CALL(0x0055ADFFu, sub_0055ADFF); /* call 0x0055ADFF */

loc_0055A2AD: ;
    eax = MEM32(esi + 0x40);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0055A2DE; /* jbe: below or equal (unsigned <=) */

loc_0055A2B9: ;
    eax = MEM32(esi + 0x3C);
    ebx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A2CC; /* je: equal / zero */

loc_0055A2C3: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A2CCu); RECOMP_ABI_CALL(0x0055B4CEu, sub_0055B4CE); /* call 0x0055B4CE */

loc_0055A2CC: ;
    ecx = MEM32(0x9153BC);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A2D8u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_0055A2D8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055A2B9; /* jb: below (unsigned <) */

loc_0055A2DE: ;
    edi = esi + 0x3C;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A2E8u); RECOMP_ABI_CALL(0x0055AE6Bu, sub_0055AE6B); /* call 0x0055AE6B */

loc_0055A2E8: ;
    eax = MEM32(esi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A31B; /* je: equal / zero */

loc_0055A2F1: ;
    ecx = ZX16(MEM16(esi + 0x18));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A2FFu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055A2FF: ;
    eax = ZX16(MEM16(esi + 0x18));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A30Eu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055A30E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM16(esi + 0x18) = LO16(ebx);

loc_0055A31B: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A322u); RECOMP_ABI_CALL(0x0055AE6Bu, sub_0055AE6B); /* call 0x0055AE6B */

loc_0055A322: ;
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A32Au); RECOMP_ABI_CALL(0x0055AE35u, sub_0055AE35); /* call 0x0055AE35 */

loc_0055A32A: ;
    ecx = MEM32(ebp + -12);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A332u); RECOMP_ABI_CALL(0x0055ADFFu, sub_0055ADFF); /* call 0x0055ADFF */

loc_0055A332: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055A337
 * Original: 0x0055A337 - 0x0055A37E (71 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A337(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A337: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x9153C0);
    PUSH32(esp, 0x0055A345u); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_0055A345: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A357; /* je: equal / zero */

loc_0055A349: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055A355u); RECOMP_ABI_CALL(0x0055B479u, sub_0055B479); /* call 0x0055B479 */

loc_0055A355: ;
    goto loc_0055A359;

loc_0055A357: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055A359: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055A371; /* je: equal / zero */

loc_0055A363: ;
    PUSH32(esp, ecx);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0055A36Cu); RECOMP_ABI_CALL(0x0055B36Au, sub_0055B36A); /* call 0x0055B36A */

loc_0055A36C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0055A374;

loc_0055A371: ;
    PUSH32(esp, 0xFFFFFF9Eu);
    POP32(esp, ecx);

loc_0055A374: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055A37E
 * Original: 0x0055A37E - 0x0055A3BE (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A37E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A37E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0055A38Bu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055A38B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A397; /* je: equal / zero */

loc_0055A392: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0055A399;

loc_0055A397: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055A399: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055A3B3; /* je: equal / zero */

loc_0055A3A3: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax;
    PUSH32(esp, 0x0055A3AEu); RECOMP_ABI_CALL(0x00559C27u, sub_00559C27); /* call 0x00559C27 */

loc_0055A3AE: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

loc_0055A3B3: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFFF9Eu;
    esp += 4; return; /* ret */

}

/**
 * sub_0055A3BE
 * Original: 0x0055A3BE - 0x0055A4C5 (263 bytes, 96 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A3BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A3BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -1;
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -36) = ebx;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -28) = ebx;
    MEM8(ebp + -1) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A3F6u); RECOMP_ABI_CALL(0x00559E43u, sub_00559E43); /* call 0x00559E43 */

loc_0055A3F6: ;
    ecx = MEM32(ebp + -8);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A407u); RECOMP_ABI_CALL(0x00559C6Au, sub_00559C6A); /* call 0x00559C6A */

loc_0055A407: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A41B; /* je: equal / zero */

loc_0055A40C: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A41Bu); RECOMP_ABI_CALL(0x00559CE8u, sub_00559CE8); /* call 0x00559CE8 */

loc_0055A41B: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055A46B; /* jbe: below or equal (unsigned <=) */

loc_0055A423: ;
    eax = MEM32(ebp + -36);
    esi = MEM32(eax + edi * 4);
    MEM32(ebp + -12) = MEM32(ebp + -12) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + 0xB;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0xB) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A43Fu); RECOMP_ABI_CALL(0x00559E43u, sub_00559E43); /* call 0x00559E43 */

loc_0055A43F: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A44Eu); RECOMP_ABI_CALL(0x00559CE8u, sub_00559CE8); /* call 0x00559CE8 */

loc_0055A44E: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A465; /* je: equal / zero */

loc_0055A453: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A458u); RECOMP_ABI_CALL(0x0055A1A7u, sub_0055A1A7); /* call 0x0055A1A7 */

loc_0055A458: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A45Eu); RECOMP_ABI_CALL(0x00560F5Fu, sub_00560F5F); /* call 0x00560F5F */

loc_0055A45E: ;
    POP32(esp, ecx);
    MEM32(0x9153C8) = ebx;

loc_0055A465: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -32) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055A423; /* jb: below (unsigned <) */

loc_0055A46B: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 1 (32-bit) */
    POP32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0055A47A; /* jbe: below or equal (unsigned <=) */

loc_0055A472: ;
    eax = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A47Au); RECOMP_ABI_CALL(0x005598A4u, sub_005598A4); /* call 0x005598A4 */

loc_0055A47A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055A498; /* jbe: below or equal (unsigned <=) */

loc_0055A481: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ebp + -24);
    PUSH32(esp, MEM32(eax + esi * 4));
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A492u); RECOMP_ABI_CALL(0x0055A551u, sub_0055A551); /* call 0x0055A551 */

loc_0055A492: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055A481; /* jb: below (unsigned <) */

loc_0055A498: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A4AF; /* je: equal / zero */

loc_0055A49D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A4A2u); RECOMP_ABI_CALL(0x0055A1A7u, sub_0055A1A7); /* call 0x0055A1A7 */

loc_0055A4A2: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A4A8u); RECOMP_ABI_CALL(0x00560F5Fu, sub_00560F5F); /* call 0x00560F5F */

loc_0055A4A8: ;
    POP32(esp, ecx);
    MEM32(0x9153C8) = ebx;

loc_0055A4AF: ;
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A4B7u); RECOMP_ABI_CALL(0x0055ADFFu, sub_0055ADFF); /* call 0x0055ADFF */

loc_0055A4B7: ;
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A4BFu); RECOMP_ABI_CALL(0x0055ADFFu, sub_0055ADFF); /* call 0x0055ADFF */

loc_0055A4BF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055A4C5
 * Original: 0x0055A4C5 - 0x0055A551 (140 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A4C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A4C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -1;
    MEM32(ebp + -12) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + -1) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A4EBu); RECOMP_ABI_CALL(0x00559E43u, sub_00559E43); /* call 0x00559E43 */

loc_0055A4EB: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A4FF; /* je: equal / zero */

loc_0055A4F0: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = MEM32(ebp + -12);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A4FFu); RECOMP_ABI_CALL(0x00559CE8u, sub_00559CE8); /* call 0x00559CE8 */

loc_0055A4FF: ;
    edi = MEM32(esi + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055A531; /* jbe: below or equal (unsigned <=) */

loc_0055A508: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A518u); RECOMP_ABI_CALL(0x00558C77u, sub_00558C77); /* call 0x00558C77 */

loc_0055A518: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A52C; /* je: equal / zero */

loc_0055A520: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + -12);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A52Cu); RECOMP_ABI_CALL(0x0055A551u, sub_0055A551); /* call 0x0055A551 */

loc_0055A52C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055A508; /* jb: below (unsigned <) */

loc_0055A531: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055A54D; /* je: equal / zero */

loc_0055A53A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A53Fu); RECOMP_ABI_CALL(0x0055A1A7u, sub_0055A1A7); /* call 0x0055A1A7 */

loc_0055A53F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A545u); RECOMP_ABI_CALL(0x00560F5Fu, sub_00560F5F); /* call 0x00560F5F */

loc_0055A545: ;
    MEM32(0x9153C8) = MEM32(0x9153C8) & 0;
    _fa = (uint32_t)(MEM32(0x9153C8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_0055A54D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055A551
 * Original: 0x0055A551 - 0x0055A5C0 (111 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A551(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A551: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A593; /* je: equal / zero */

loc_0055A561: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A593; /* je: equal / zero */

loc_0055A566: ;
    _fa = (uint32_t)(MEM16(esi + 0x18)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x18), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055A5AF; /* jbe: below or equal (unsigned <=) */

loc_0055A56C: ;
    eax = MEM32(esi + 0x10);
    eax = eax + edi * 4;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A588; /* je: equal / zero */

loc_0055A577: ;
    eax = MEM32(eax);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax);
    ecx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(ecx); PUSH32(esp, 0x0055A586u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A584u); } /* indirect call */
    }

loc_0055A586: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055A588: ;
    eax = ZX16(MEM16(esi + 0x18));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055A56C; /* jb: below (unsigned <) */

loc_0055A591: ;
    goto loc_0055A5AF;

loc_0055A593: ;
    eax = MEM32(esi + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1D) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1D) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055A5A6; /* je: equal / zero */

loc_0055A5A0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055A5B5; /* je: equal / zero */

loc_0055A5A3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055A5AF; /* jne: not equal / not zero */

loc_0055A5A6: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A5AFu); RECOMP_ABI_CALL(0x0055A4C5u, sub_0055A4C5); /* call 0x0055A4C5 */

loc_0055A5AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0055A5B5: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A5BEu); RECOMP_ABI_CALL(0x0055A3BEu, sub_0055A3BE); /* call 0x0055A3BE */

loc_0055A5BE: ;
    goto loc_0055A5AF;

}

/**
 * sub_0055A5C0
 * Original: 0x0055A5C0 - 0x0055A5F2 (50 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A5C0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A5DD; /* je: equal / zero */

loc_0055A5C6: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A5DD; /* je: equal / zero */

loc_0055A5CB: ;
    PUSH32(esp, MEM32(esp + 4));
    MEM32(0x9153C8) = MEM32(0x9153C8) & 0;
    _fa = (uint32_t)(MEM32(0x9153C8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, 0x0055A5DDu); RECOMP_ABI_CALL(0x0055A551u, sub_0055A551); /* call 0x0055A551 */

loc_0055A5DD: ;
    MEM16(0x9153CC) = MEM16(0x9153CC) & 0;
    _fa = (uint32_t)(MEM16(0x9153CC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = 0x9153D0;
    PUSH32(esp, 0x0055A5EFu); RECOMP_ABI_CALL(0x0055AEA1u, sub_0055AEA1); /* call 0x0055AEA1 */

loc_0055A5EF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055A5F2
 * Original: 0x0055A5F2 - 0x0055A64F (93 bytes, 39 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A5F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A5F2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A601u); RECOMP_ABI_CALL(0x005674BDu, sub_005674BD); /* call 0x005674BD */

loc_0055A601: ;
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    edi = eax;
    PUSH32(esp, ecx);
    eax = ebp + 0x10;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A613u); RECOMP_ABI_CALL(0x0002D9EEu, sub_0002D9EE); /* call 0x0002D9EE */

loc_0055A613: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A61Fu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_0055A61F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A62Eu); RECOMP_ABI_CALL(0x0055A0B2u, sub_0055A0B2); /* call 0x0055A0B2 */

loc_0055A62E: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    eax = MEM32(eax);
    esi = MEM32(ebp + 8);
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0055A63F; /* je: equal / zero */

loc_0055A63B: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055A63F: ;
    ecx = ebp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A647u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0055A647: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055A64F
 * Original: 0x0055A64F - 0x0055A6AC (93 bytes, 39 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A64F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A64F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A65Eu); RECOMP_ABI_CALL(0x005743BDu, sub_005743BD); /* call 0x005743BD */

loc_0055A65E: ;
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    edi = eax;
    PUSH32(esp, ecx);
    eax = ebp + 0x10;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A670u); RECOMP_ABI_CALL(0x0002D9EEu, sub_0002D9EE); /* call 0x0002D9EE */

loc_0055A670: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A67Cu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_0055A67C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A68Bu); RECOMP_ABI_CALL(0x0055A0B2u, sub_0055A0B2); /* call 0x0055A0B2 */

loc_0055A68B: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    eax = MEM32(eax);
    esi = MEM32(ebp + 8);
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0055A69C; /* je: equal / zero */

loc_0055A698: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055A69C: ;
    ecx = ebp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A6A4u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0055A6A4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055A6AC
 * Original: 0x0055A6AC - 0x0055A6F1 (69 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A6AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A6AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0055A6C3; /* jne: not equal / not zero */

loc_0055A6B8: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7F8u;
    goto loc_0055A6EC;

loc_0055A6C3: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A6D4u); RECOMP_ABI_CALL(0x0055A337u, sub_0055A337); /* call 0x0055A337 */

loc_0055A6D4: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_0055A6EA; /* jle: less or equal (signed <=) */

loc_0055A6DE: ;
    MEM16(esi + 0x48) = MEM16(esi + 0x48) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x48)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = 1;
    goto loc_0055A6EC;

loc_0055A6EA: ;
    MEM32(eax) = ecx;

loc_0055A6EC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055A6F1
 * Original: 0x0055A6F1 - 0x0055A736 (69 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A6F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A6F1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0055A708; /* jne: not equal / not zero */

loc_0055A6FD: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7F9u;
    goto loc_0055A731;

loc_0055A708: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A719u); RECOMP_ABI_CALL(0x0055A337u, sub_0055A337); /* call 0x0055A337 */

loc_0055A719: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_0055A72F; /* jle: less or equal (signed <=) */

loc_0055A723: ;
    MEM16(esi + 0x4A) = MEM16(esi + 0x4A) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x4A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = 1;
    goto loc_0055A731;

loc_0055A72F: ;
    MEM32(eax) = ecx;

loc_0055A731: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055A736
 * Original: 0x0055A736 - 0x0055A77B (69 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A736(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A736: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0055A74D; /* jne: not equal / not zero */

loc_0055A742: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7FAu;
    goto loc_0055A776;

loc_0055A74D: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A75Eu); RECOMP_ABI_CALL(0x0055A337u, sub_0055A337); /* call 0x0055A337 */

loc_0055A75E: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_0055A774; /* jle: less or equal (signed <=) */

loc_0055A768: ;
    MEM16(esi + 0x4C) = MEM16(esi + 0x4C) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x4C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = 1;
    goto loc_0055A776;

loc_0055A774: ;
    MEM32(eax) = ecx;

loc_0055A776: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055A77B
 * Original: 0x0055A77B - 0x0055A7C0 (69 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A77B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A77B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0055A792; /* jne: not equal / not zero */

loc_0055A787: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7FBu;
    goto loc_0055A7BB;

loc_0055A792: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A7A3u); RECOMP_ABI_CALL(0x0055A337u, sub_0055A337); /* call 0x0055A337 */

loc_0055A7A3: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_0055A7B9; /* jle: less or equal (signed <=) */

loc_0055A7AD: ;
    MEM16(esi + 0x4E) = MEM16(esi + 0x4E) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x4E)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = 1;
    goto loc_0055A7BB;

loc_0055A7B9: ;
    MEM32(eax) = ecx;

loc_0055A7BB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055A7C0
 * Original: 0x0055A7C0 - 0x0055A805 (69 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A7C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0055A7D7; /* jne: not equal / not zero */

loc_0055A7CC: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7FCu;
    goto loc_0055A800;

loc_0055A7D7: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A7E8u); RECOMP_ABI_CALL(0x0055A337u, sub_0055A337); /* call 0x0055A337 */

loc_0055A7E8: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_0055A7FE; /* jle: less or equal (signed <=) */

loc_0055A7F2: ;
    MEM16(esi + 0x50) = MEM16(esi + 0x50) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x50)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = 1;
    goto loc_0055A800;

loc_0055A7FE: ;
    MEM32(eax) = ecx;

loc_0055A800: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055A805
 * Original: 0x0055A805 - 0x0055A84A (69 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A805(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A805: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0055A81C; /* jne: not equal / not zero */

loc_0055A811: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7FDu;
    goto loc_0055A845;

loc_0055A81C: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A82Du); RECOMP_ABI_CALL(0x0055A337u, sub_0055A337); /* call 0x0055A337 */

loc_0055A82D: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_0055A843; /* jle: less or equal (signed <=) */

loc_0055A837: ;
    MEM16(esi + 0x52) = MEM16(esi + 0x52) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x52)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = 1;
    goto loc_0055A845;

loc_0055A843: ;
    MEM32(eax) = ecx;

loc_0055A845: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055A84A
 * Original: 0x0055A84A - 0x0055A876 (44 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A84A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A84A: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A85C; /* je: equal / zero */

loc_0055A851: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055A85Cu); RECOMP_ABI_CALL(0x0055B4CEu, sub_0055B4CE); /* call 0x0055B4CE */

loc_0055A85C: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(0x9153BC);
    PUSH32(esp, 0x0055A86Bu); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_0055A86B: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0055A876
 * Original: 0x0055A876 - 0x0055A895 (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A876(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A876: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A893; /* je: equal / zero */

loc_0055A87F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055A886u); RECOMP_ABI_CALL(0x0055B4F1u, sub_0055B4F1); /* call 0x0055B4F1 */

loc_0055A886: ;
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(0x9153C4);
    PUSH32(esp, 0x0055A893u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_0055A893: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055A895
 * Original: 0x0055A895 - 0x0055A927 (146 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A895(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A895: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055A8AF; /* jne: not equal / not zero */

loc_0055A8A4: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD7FFu;
    goto loc_0055A923;

loc_0055A8AF: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + 0xC) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A8C1u); RECOMP_ABI_CALL(0x00558A06u, sub_00558A06); /* call 0x00558A06 */

loc_0055A8C1: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A91A; /* je: equal / zero */

loc_0055A8C8: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055A8F9; /* jbe: below or equal (unsigned <=) */

loc_0055A8D0: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A8E4u); RECOMP_ABI_CALL(0x00558C77u, sub_00558C77); /* call 0x00558C77 */

loc_0055A8E4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A8F0; /* je: equal / zero */

loc_0055A8E9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055A8D0; /* jb: below (unsigned <) */

loc_0055A8EE: ;
    goto loc_0055A8F9;

loc_0055A8F0: ;
    PUSH32(esp, edi);
    ecx = edx + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A8F9u); RECOMP_ABI_CALL(0x0055B335u, sub_0055B335); /* call 0x0055B335 */

loc_0055A8F9: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A902u); RECOMP_ABI_CALL(0x0055B4F1u, sub_0055B4F1); /* call 0x0055B4F1 */

loc_0055A902: ;
    ecx = MEM32(0x9153C4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A90Eu); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_0055A90E: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    POP32(esp, ebx);
    goto loc_0055A923;

loc_0055A91A: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD800u;

loc_0055A923: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055A927
 * Original: 0x0055A927 - 0x0055A94C (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A927(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A927: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A941; /* je: equal / zero */

loc_0055A92F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0055A936u); RECOMP_ABI_CALL(0x0055B514u, sub_0055B514); /* call 0x0055B514 */

loc_0055A936: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 4; return; /* ret */

loc_0055A941: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFD802u;
    esp += 4; return; /* ret */

}

/**
 * sub_0055A94C
 * Original: 0x0055A94C - 0x0055A96F (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A94C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A94C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055A954u); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_0055A954: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A969; /* je: equal / zero */

loc_0055A95B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A969; /* je: equal / zero */

loc_0055A95F: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055A967u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055A967: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055A969: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055A96F
 * Original: 0x0055A96F - 0x0055A979 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A96F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A96F: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055A979
 * Original: 0x0055A979 - 0x0055A981 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A979(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A979: ;
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055A981
 * Original: 0x0055A981 - 0x0055A9A0 (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A981(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A981: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A98D; /* je: equal / zero */

loc_0055A987: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;

loc_0055A98D: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A998; /* je: equal / zero */

loc_0055A994: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;

loc_0055A998: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055AAC8
 * Original: 0x0055AAC8 - 0x0055AAF5 (45 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AAC8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AAC8: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AAE1; /* je: equal / zero */

loc_0055AACF: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    goto loc_0055AAF2;

loc_0055AAE1: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFFE6Au;

loc_0055AAF2: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055AAF5
 * Original: 0x0055AAF5 - 0x0055AB22 (45 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AAF5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AAF5: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AB0E; /* je: equal / zero */

loc_0055AAFC: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    goto loc_0055AB1F;

loc_0055AB0E: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFFE6Au;

loc_0055AB1F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055AB32
 * Original: 0x0055AB32 - 0x0055AB82 (80 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AB32(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AB32: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0055AB7D; /* jle: less or equal (signed <=) */

loc_0055AB4A: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055AB58u); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055AB58: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0055AB7D; /* jle: less or equal (signed <=) */

loc_0055AB63: ;
    PUSH32(esp, ebx);

loc_0055AB64: ;
    eax = MEM32(esi);
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0055AB76; /* je: equal / zero */

loc_0055AB6F: ;
    ebx = MEM32(edi);
    ecx = MEM32(ecx + ebx);
    MEM32(eax) = ecx;

loc_0055AB76: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055AB64; /* jl: less (signed <) */

loc_0055AB7C: ;
    POP32(esp, ebx);

loc_0055AB7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AB82
 * Original: 0x0055AB82 - 0x0055ABD2 (80 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AB82(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AB82: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0055ABCD; /* jle: less or equal (signed <=) */

loc_0055AB9A: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055ABA8u); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055ABA8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0055ABCD; /* jle: less or equal (signed <=) */

loc_0055ABB3: ;
    PUSH32(esp, ebx);

loc_0055ABB4: ;
    eax = MEM32(esi);
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0055ABC6; /* je: equal / zero */

loc_0055ABBF: ;
    ebx = MEM32(edi);
    ecx = MEM32(ecx + ebx);
    MEM32(eax) = ecx;

loc_0055ABC6: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055ABB4; /* jl: less (signed <) */

loc_0055ABCC: ;
    POP32(esp, ebx);

loc_0055ABCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055ABE7
 * Original: 0x0055ABE7 - 0x0055ABF8 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ABE7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055ABE7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055ABEFu); RECOMP_ABI_CALL(0x0055A981u, sub_0055A981); /* call 0x0055A981 */

loc_0055ABEF: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055ABF8
 * Original: 0x0055ABF8 - 0x0055AC09 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ABF8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055ABF8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055AC00u); RECOMP_ABI_CALL(0x0055A981u, sub_0055A981); /* call 0x0055A981 */

loc_0055AC00: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055AC09
 * Original: 0x0055AC09 - 0x0055AC41 (56 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AC09(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AC09: ;
    eax = MEM32(ecx + 0x24);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ecx + 0x28)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x28), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055AC1E; /* je: equal / zero */

loc_0055AC14: ;
    ecx = ZX16(MEM16(0x9153CC));
    eax = eax + ecx * 2;

loc_0055AC1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AC34; /* je: equal / zero */

loc_0055AC22: ;
    SET_LO16(eax, MEM16(eax));
    ecx = MEM32(esp + 8);
    MEM16(ecx) = LO16(eax);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    goto loc_0055AC3E;

loc_0055AC34: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFD500u;

loc_0055AC3E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055AC41
 * Original: 0x0055AC41 - 0x0055AC72 (49 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055AC41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AC41: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AC56u); RECOMP_ABI_CALL(0x0055AC09u, sub_0055AC09); /* call 0x0055AC09 */

loc_0055AC56: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055AC6D; /* jle: less or equal (signed <=) */

loc_0055AC5B: ;
    eax = ZX16(MEM16(ebp + -4));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(ecx + eax * 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AC6Du); RECOMP_ABI_CALL(0x0055BC77u, sub_0055BC77); /* call 0x0055BC77 */

loc_0055AC6D: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AC72
 * Original: 0x0055AC72 - 0x0055AC98 (38 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AC72(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AC72: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055AC7Au); RECOMP_ABI_CALL(0x0055A981u, sub_0055A981); /* call 0x0055A981 */

loc_0055AC7A: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055AC92; /* je: equal / zero */

loc_0055AC88: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055AC90u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055AC90: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055AC92: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AC98
 * Original: 0x0055AC98 - 0x0055AD62 (202 bytes, 81 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055AC98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AC98: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055ACACu); RECOMP_ABI_CALL(0x00567475u, sub_00567475); /* call 0x00567475 */

loc_0055ACAC: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0055ACC2; /* jne: not equal / not zero */

loc_0055ACB3: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055ACBDu); RECOMP_ABI_CALL(0x0055BC77u, sub_0055BC77); /* call 0x0055BC77 */

loc_0055ACBD: ;
    goto loc_0055AD5B;

loc_0055ACC2: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055ACC8u); RECOMP_ABI_CALL(0x0056747Bu, sub_0056747B); /* call 0x0056747B */

loc_0055ACC8: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0055ACF2; /* jne: not equal / not zero */

loc_0055ACCF: ;
    SET_LO16(ebx, MEM16(edi + 0x1A));
    SET_LO16(edi, MEM16(edi + 0x18));
    goto loc_0055ACEB;

loc_0055ACD9: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    MEM16(0x9153CC) = LO16(edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055ACEAu); RECOMP_ABI_CALL(0x0055AC41u, sub_0055AC41); /* call 0x0055AC41 */

loc_0055ACEA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0055ACEB: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055ACD9; /* jbe: below or equal (unsigned <=) */

loc_0055ACF0: ;
    goto loc_0055AD5B;

loc_0055ACF2: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055ACF8u); RECOMP_ABI_CALL(0x00567481u, sub_00567481); /* call 0x00567481 */

loc_0055ACF8: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0055AD0B; /* jne: not equal / not zero */

loc_0055ACFF: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AD09u); RECOMP_ABI_CALL(0x005588C9u, sub_005588C9); /* call 0x005588C9 */

loc_0055AD09: ;
    goto loc_0055AD5B;

loc_0055AD0B: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AD11u); RECOMP_ABI_CALL(0x00567487u, sub_00567487); /* call 0x00567487 */

loc_0055AD11: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0055AD2A; /* jne: not equal / not zero */

loc_0055AD18: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AD22u); RECOMP_ABI_CALL(0x0055FDCEu, sub_0055FDCE); /* call 0x0055FDCE */

loc_0055AD22: ;
    MEM32(0x9153C8) = ebx;
    goto loc_0055AD5B;

loc_0055AD2A: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AD30u); RECOMP_ABI_CALL(0x0056748Du, sub_0056748D); /* call 0x0056748D */

loc_0055AD30: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0055AD43; /* jne: not equal / not zero */

loc_0055AD37: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AD41u); RECOMP_ABI_CALL(0x00564E42u, sub_00564E42); /* call 0x00564E42 */

loc_0055AD41: ;
    goto loc_0055AD22;

loc_0055AD43: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AD49u); RECOMP_ABI_CALL(0x00567493u, sub_00567493); /* call 0x00567493 */

loc_0055AD49: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0055AD5B; /* jne: not equal / not zero */

loc_0055AD50: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AD5Bu); RECOMP_ABI_CALL(0x0056677Eu, sub_0056677E); /* call 0x0056677E */

loc_0055AD5B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055AD62
 * Original: 0x0055AD62 - 0x0055ADBC (90 bytes, 41 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055AD62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AD62: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055AD9C; /* je: equal / zero */

loc_0055AD7A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055ADB5; /* jbe: below or equal (unsigned <=) */

loc_0055AD7E: ;
    eax = MEM32(edi);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055AD95; /* je: equal / zero */

loc_0055AD89: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AD95u); RECOMP_ABI_CALL(0x0055AC98u, sub_0055AC98); /* call 0x0055AC98 */

loc_0055AD95: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055AD7E; /* jb: below (unsigned <) */

loc_0055AD9A: ;
    goto loc_0055ADB5;

loc_0055AD9C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055ADB5; /* jbe: below or equal (unsigned <=) */

loc_0055ADA0: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(eax + esi * 4));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055ADB0u); RECOMP_ABI_CALL(0x0055AC98u, sub_0055AC98); /* call 0x0055AC98 */

loc_0055ADB0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055ADA0; /* jb: below (unsigned <) */

loc_0055ADB5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055ADC9
 * Original: 0x0055ADC9 - 0x0055ADF2 (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ADC9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055ADC9: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055ADE5; /* je: equal / zero */

loc_0055ADD2: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055ADE5; /* jle: less or equal (signed <=) */

loc_0055ADD9: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055ADE3u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055ADE3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055ADE5: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055ADFF
 * Original: 0x0055ADFF - 0x0055AE28 (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ADFF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055ADFF: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AE1B; /* je: equal / zero */

loc_0055AE08: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055AE1B; /* jle: less or equal (signed <=) */

loc_0055AE0F: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055AE19u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055AE19: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055AE1B: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055AE35
 * Original: 0x0055AE35 - 0x0055AE5E (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AE35(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AE35: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AE51; /* je: equal / zero */

loc_0055AE3E: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055AE51; /* jle: less or equal (signed <=) */

loc_0055AE45: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055AE4Fu); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055AE4F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055AE51: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055AE6B
 * Original: 0x0055AE6B - 0x0055AE94 (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AE6B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AE6B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AE87; /* je: equal / zero */

loc_0055AE74: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055AE87; /* jle: less or equal (signed <=) */

loc_0055AE7B: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055AE85u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055AE85: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055AE87: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055AEA1
 * Original: 0x0055AEA1 - 0x0055AECA (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AEA1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AEA1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AEBD; /* je: equal / zero */

loc_0055AEAA: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055AEBD; /* jle: less or equal (signed <=) */

loc_0055AEB1: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0055AEBBu); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055AEBB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055AEBD: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055AECA
 * Original: 0x0055AECA - 0x0055AF46 (124 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AECA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AECA: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055AEED; /* jne: not equal / not zero */

loc_0055AED4: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    MEM32(esi + 8) = 4;
    PUSH32(esp, 0x0055AEE7u); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055AEE7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = eax;
    goto loc_0055AF42;

loc_0055AEED: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 8);
    ecx = ecx + edx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055AF42; /* jl: less (signed <) */

loc_0055AEFC: ;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055AF0Bu); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055AF0B: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0055AF2C; /* jle: less or equal (signed <=) */

loc_0055AF16: ;
    ecx = edi;

loc_0055AF18: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AF23; /* je: equal / zero */

loc_0055AF1C: ;
    edx = MEM32(esi);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx) = edx;

loc_0055AF23: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055AF18; /* jl: less (signed <) */

loc_0055AF2C: ;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0055AF3Au); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055AF3A: ;
    { uint32_t _sv=(uint32_t)(MEM32(esi + 8)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        MEM32(esi + 8) = _sv << _sc;
        _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);

loc_0055AF42: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AF46
 * Original: 0x0055AF46 - 0x0055AFC2 (124 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AF46(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AF46: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055AF69; /* jne: not equal / not zero */

loc_0055AF50: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    MEM32(esi + 8) = 4;
    PUSH32(esp, 0x0055AF63u); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055AF63: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = eax;
    goto loc_0055AFBE;

loc_0055AF69: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 8);
    ecx = ecx + edx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055AFBE; /* jl: less (signed <) */

loc_0055AF78: ;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055AF87u); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055AF87: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0055AFA8; /* jle: less or equal (signed <=) */

loc_0055AF92: ;
    ecx = edi;

loc_0055AF94: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AF9F; /* je: equal / zero */

loc_0055AF98: ;
    edx = MEM32(esi);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx) = edx;

loc_0055AF9F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055AF94; /* jl: less (signed <) */

loc_0055AFA8: ;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0055AFB6u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055AFB6: ;
    { uint32_t _sv=(uint32_t)(MEM32(esi + 8)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        MEM32(esi + 8) = _sv << _sc;
        _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);

loc_0055AFBE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AFC2
 * Original: 0x0055AFC2 - 0x0055B03D (123 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AFC2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AFC2: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055B03B; /* jge: greater or equal (signed >=) */

loc_0055AFD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055AFF0; /* jne: not equal / not zero */

loc_0055AFD8: ;
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0055AFE5u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055AFE5: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0055AFF0: ;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055AFFFu); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055AFFF: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0055B020; /* jle: less or equal (signed <=) */

loc_0055B00A: ;
    ecx = edi;

loc_0055B00C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B017; /* je: equal / zero */

loc_0055B010: ;
    edx = MEM32(esi);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx) = edx;

loc_0055B017: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B00C; /* jl: less (signed <) */

loc_0055B020: ;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0055B02Eu); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055B02E: ;
    eax = MEM32(esi + 4);
    POP32(esp, ecx);
    POP32(esp, ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esi) = edi;
    MEM32(esi + 8) = eax;
    POP32(esp, edi);

loc_0055B03B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055B03D
 * Original: 0x0055B03D - 0x0055B0B9 (124 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B03D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B03D: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B060; /* jne: not equal / not zero */

loc_0055B047: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    MEM32(esi + 8) = 4;
    PUSH32(esp, 0x0055B05Au); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055B05A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = eax;
    goto loc_0055B0B5;

loc_0055B060: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 8);
    ecx = ecx + edx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B0B5; /* jl: less (signed <) */

loc_0055B06F: ;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B07Eu); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055B07E: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0055B09F; /* jle: less or equal (signed <=) */

loc_0055B089: ;
    ecx = edi;

loc_0055B08B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B096; /* je: equal / zero */

loc_0055B08F: ;
    edx = MEM32(esi);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx) = edx;

loc_0055B096: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B08B; /* jl: less (signed <) */

loc_0055B09F: ;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0055B0ADu); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055B0AD: ;
    { uint32_t _sv=(uint32_t)(MEM32(esi + 8)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        MEM32(esi + 8) = _sv << _sc;
        _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);

loc_0055B0B5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B0B9
 * Original: 0x0055B0B9 - 0x0055B134 (123 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B0B9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B0B9: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055B132; /* jge: greater or equal (signed >=) */

loc_0055B0CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B0E7; /* jne: not equal / not zero */

loc_0055B0CF: ;
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0055B0DCu); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055B0DC: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0055B0E7: ;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B0F6u); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055B0F6: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0055B117; /* jle: less or equal (signed <=) */

loc_0055B101: ;
    ecx = edi;

loc_0055B103: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B10E; /* je: equal / zero */

loc_0055B107: ;
    edx = MEM32(esi);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx) = edx;

loc_0055B10E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B103; /* jl: less (signed <) */

loc_0055B117: ;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0055B125u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055B125: ;
    eax = MEM32(esi + 4);
    POP32(esp, ecx);
    POP32(esp, ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esi) = edi;
    MEM32(esi + 8) = eax;
    POP32(esp, edi);

loc_0055B132: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055B134
 * Original: 0x0055B134 - 0x0055B1B0 (124 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B134(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B134: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B157; /* jne: not equal / not zero */

loc_0055B13E: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    MEM32(esi + 8) = 4;
    PUSH32(esp, 0x0055B151u); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055B151: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = eax;
    goto loc_0055B1AC;

loc_0055B157: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 8);
    ecx = ecx + edx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B1AC; /* jl: less (signed <) */

loc_0055B166: ;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B175u); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055B175: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0055B196; /* jle: less or equal (signed <=) */

loc_0055B180: ;
    ecx = edi;

loc_0055B182: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B18D; /* je: equal / zero */

loc_0055B186: ;
    edx = MEM32(esi);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx) = edx;

loc_0055B18D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B182; /* jl: less (signed <) */

loc_0055B196: ;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0055B1A4u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055B1A4: ;
    { uint32_t _sv=(uint32_t)(MEM32(esi + 8)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        MEM32(esi + 8) = _sv << _sc;
        _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);

loc_0055B1AC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B1B0
 * Original: 0x0055B1B0 - 0x0055B22B (123 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B1B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055B229; /* jge: greater or equal (signed >=) */

loc_0055B1C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B1DE; /* jne: not equal / not zero */

loc_0055B1C6: ;
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0055B1D3u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055B1D3: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0055B1DE: ;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B1EDu); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055B1ED: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0055B20E; /* jle: less or equal (signed <=) */

loc_0055B1F8: ;
    ecx = edi;

loc_0055B1FA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B205; /* je: equal / zero */

loc_0055B1FE: ;
    edx = MEM32(esi);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx) = edx;

loc_0055B205: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B1FA; /* jl: less (signed <) */

loc_0055B20E: ;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0055B21Cu); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055B21C: ;
    eax = MEM32(esi + 4);
    POP32(esp, ecx);
    POP32(esp, ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esi) = edi;
    MEM32(esi + 8) = eax;
    POP32(esp, edi);

loc_0055B229: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055B22B
 * Original: 0x0055B22B - 0x0055B2A7 (124 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B22B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B22B: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B24E; /* jne: not equal / not zero */

loc_0055B235: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    MEM32(esi + 8) = 4;
    PUSH32(esp, 0x0055B248u); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055B248: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = eax;
    goto loc_0055B2A3;

loc_0055B24E: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 8);
    ecx = ecx + edx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B2A3; /* jl: less (signed <) */

loc_0055B25D: ;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B26Cu); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0055B26C: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0055B28D; /* jle: less or equal (signed <=) */

loc_0055B277: ;
    ecx = edi;

loc_0055B279: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B284; /* je: equal / zero */

loc_0055B27D: ;
    edx = MEM32(esi);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx) = edx;

loc_0055B284: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B279; /* jl: less (signed <) */

loc_0055B28D: ;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0055B29Bu); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0055B29B: ;
    { uint32_t _sv=(uint32_t)(MEM32(esi + 8)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        MEM32(esi + 8) = _sv << _sc;
        _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);

loc_0055B2A3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B2A7
 * Original: 0x0055B2A7 - 0x0055B2C3 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B2A7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B2A7: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0055B2BDu); RECOMP_ABI_CALL(0x0055AB32u, sub_0055AB32); /* call 0x0055AB32 */

loc_0055B2BD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B2C3
 * Original: 0x0055B2C3 - 0x0055B2DF (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B2C3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B2C3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0055B2D9u); RECOMP_ABI_CALL(0x0055AB82u, sub_0055AB82); /* call 0x0055AB82 */

loc_0055B2D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B2E4
 * Original: 0x0055B2E4 - 0x0055B30A (38 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B2E4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B2E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x0055B2EEu); RECOMP_ABI_CALL(0x0055AECAu, sub_0055AECA); /* call 0x0055AECA */

loc_0055B2EE: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    ecx = ecx + eax * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055B307; /* je: equal / zero */

loc_0055B2FF: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    MEM32(ecx) = eax;

loc_0055B307: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B30F
 * Original: 0x0055B30F - 0x0055B335 (38 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B30F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B30F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x0055B319u); RECOMP_ABI_CALL(0x0055AF46u, sub_0055AF46); /* call 0x0055AF46 */

loc_0055B319: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    ecx = ecx + eax * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055B332; /* je: equal / zero */

loc_0055B32A: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    MEM32(ecx) = eax;

loc_0055B332: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B335
 * Original: 0x0055B335 - 0x0055B365 (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B335(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B335: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055B35A; /* jge: greater or equal (signed >=) */

loc_0055B341: ;
    PUSH32(esp, esi);

loc_0055B342: ;
    eax = MEM32(ecx);
    eax = eax + edx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B350; /* je: equal / zero */

loc_0055B34B: ;
    esi = MEM32(eax + 4);
    MEM32(eax) = esi;

loc_0055B350: ;
    eax = MEM32(ecx + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B342; /* jl: less (signed <) */

loc_0055B359: ;
    POP32(esp, esi);

loc_0055B35A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0055B362u); RECOMP_ABI_CALL(0x0055AFC2u, sub_0055AFC2); /* call 0x0055AFC2 */

loc_0055B362: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B36A
 * Original: 0x0055B36A - 0x0055B390 (38 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B36A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B36A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x0055B374u); RECOMP_ABI_CALL(0x0055B03Du, sub_0055B03D); /* call 0x0055B03D */

loc_0055B374: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    ecx = ecx + eax * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055B38D; /* je: equal / zero */

loc_0055B385: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    MEM32(ecx) = eax;

loc_0055B38D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B390
 * Original: 0x0055B390 - 0x0055B3C0 (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B390: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055B3B5; /* jge: greater or equal (signed >=) */

loc_0055B39C: ;
    PUSH32(esp, esi);

loc_0055B39D: ;
    eax = MEM32(ecx);
    eax = eax + edx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B3AB; /* je: equal / zero */

loc_0055B3A6: ;
    esi = MEM32(eax + 4);
    MEM32(eax) = esi;

loc_0055B3AB: ;
    eax = MEM32(ecx + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B39D; /* jl: less (signed <) */

loc_0055B3B4: ;
    POP32(esp, esi);

loc_0055B3B5: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0055B3BDu); RECOMP_ABI_CALL(0x0055B0B9u, sub_0055B0B9); /* call 0x0055B0B9 */

loc_0055B3BD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B3C5
 * Original: 0x0055B3C5 - 0x0055B3EB (38 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B3C5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B3C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x0055B3CFu); RECOMP_ABI_CALL(0x0055B134u, sub_0055B134); /* call 0x0055B134 */

loc_0055B3CF: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    ecx = ecx + eax * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055B3E8; /* je: equal / zero */

loc_0055B3E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    MEM32(ecx) = eax;

loc_0055B3E8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B3EB
 * Original: 0x0055B3EB - 0x0055B41B (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B3EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B3EB: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055B410; /* jge: greater or equal (signed >=) */

loc_0055B3F7: ;
    PUSH32(esp, esi);

loc_0055B3F8: ;
    eax = MEM32(ecx);
    eax = eax + edx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B406; /* je: equal / zero */

loc_0055B401: ;
    esi = MEM32(eax + 4);
    MEM32(eax) = esi;

loc_0055B406: ;
    eax = MEM32(ecx + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B3F8; /* jl: less (signed <) */

loc_0055B40F: ;
    POP32(esp, esi);

loc_0055B410: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0055B418u); RECOMP_ABI_CALL(0x0055B1B0u, sub_0055B1B0); /* call 0x0055B1B0 */

loc_0055B418: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B420
 * Original: 0x0055B420 - 0x0055B446 (38 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B420: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x0055B42Au); RECOMP_ABI_CALL(0x0055B22Bu, sub_0055B22B); /* call 0x0055B22B */

loc_0055B42A: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    ecx = ecx + eax * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055B443; /* je: equal / zero */

loc_0055B43B: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    MEM32(ecx) = eax;

loc_0055B443: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B446
 * Original: 0x0055B446 - 0x0055B469 (35 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B446(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B446: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055B461; /* jbe: below or equal (unsigned <=) */

loc_0055B455: ;
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0055B461u); RECOMP_ABI_CALL(0x0055B22Bu, sub_0055B22B); /* call 0x0055B22B */

loc_0055B461: ;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B479
 * Original: 0x0055B479 - 0x0055B4CE (85 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B479(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B479: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esi + 0x10));
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, eax);
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x55A18F);
    MEM8(esi + 0x10) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x18));
    MEM32(esi + 0x1C) = ecx;
    ecx = esi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM16(esi + 0xC) = LO16(eax);
    MEM16(esi + 0xE) = LO16(eax);
    MEM32(esi + 0x14) = eax;
    MEM16(esi + 0x18) = LO16(eax);
    MEM16(esi + 0x1A) = LO16(eax);
    MEM32(esi + 0x20) = eax;
    MEM16(esi + 0x24) = LO16(eax);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x0055B4C8u); RECOMP_ABI_CALL(0x00578178u, sub_00578178); /* call 0x00578178 */

loc_0055B4C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B4CE
 * Original: 0x0055B4CE - 0x0055B4F1 (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B4CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B4CE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055B4D6u); RECOMP_ABI_CALL(0x0055A09Au, sub_0055A09A); /* call 0x0055A09A */

loc_0055B4D6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055B4EB; /* je: equal / zero */

loc_0055B4DD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B4EB; /* je: equal / zero */

loc_0055B4E1: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055B4E9u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055B4E9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055B4EB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B4F1
 * Original: 0x0055B4F1 - 0x0055B514 (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B4F1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B4F1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055B4F9u); RECOMP_ABI_CALL(0x0055A222u, sub_0055A222); /* call 0x0055A222 */

loc_0055B4F9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055B50E; /* je: equal / zero */

loc_0055B500: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B50E; /* je: equal / zero */

loc_0055B504: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055B50Cu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055B50C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055B50E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B514
 * Original: 0x0055B514 - 0x0055B537 (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B514(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B514: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055B51Cu); RECOMP_ABI_CALL(0x0055A876u, sub_0055A876); /* call 0x0055A876 */

loc_0055B51C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055B531; /* je: equal / zero */

loc_0055B523: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B531; /* je: equal / zero */

loc_0055B527: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055B52Fu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055B52F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055B531: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B537
 * Original: 0x0055B537 - 0x0055B564 (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055B537(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B537: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = ebp + -4;
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B54Cu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0055B54C: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B557u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0055B557: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B55Fu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0055B55F: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055B564
 * Original: 0x0055B564 - 0x0055B5AB (71 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055B564(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B564: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055B58F; /* jne: not equal / not zero */

loc_0055B570: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B57Cu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0055B57C: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B587u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0055B587: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B58Fu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0055B58F: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055B59C; /* je: equal / zero */

loc_0055B598: ;
    MEM32(esi) = eax;
    goto loc_0055B5A4;

loc_0055B59C: ;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B5A4u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0055B5A4: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B5B0
 * Original: 0x0055B5B0 - 0x0055B5D7 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B5B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B5B0: ;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0055B5BDu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_0055B5BD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    ecx = esp + 8;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0055B5D1u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0055B5D1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B62E
 * Original: 0x0055B62E - 0x0055B642 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B62E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B62E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x0055B63Bu); RECOMP_ABI_CALL(0x0002D9EEu, sub_0002D9EE); /* call 0x0002D9EE */

loc_0055B63B: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B642
 * Original: 0x0055B642 - 0x0055B66B (41 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B642(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B642: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B661; /* je: equal / zero */

loc_0055B64E: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
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
    MEM32(eax) = 1;
    POP32(esp, edi);
    goto loc_0055B667;

loc_0055B661: ;
    MEM32(eax) = 0xFFFFD59Au;

loc_0055B667: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B66B
 * Original: 0x0055B66B - 0x0055B6A3 (56 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B66B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B66B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055B69E; /* je: equal / zero */

loc_0055B672: ;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x80 (8-bit) */
    ebx = MEM32(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0055B693; /* je: equal / zero */

loc_0055B67D: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + edi;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B6A0; /* jne: not equal / not zero */

loc_0055B684: ;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0055B686: ;
    eax = MEM32(eax);
    eax = ZX8(MEM8(eax));
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    goto loc_0055B6A0;

loc_0055B693: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B6A0; /* jne: not equal / not zero */

loc_0055B697: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + edi;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055B686;

loc_0055B69E: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + edi;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055B6A0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055B6A3
 * Original: 0x0055B6A3 - 0x0055B6B5 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B6A3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B6A3: ;
    eax = ecx;
    goto loc_0055B6B0;

loc_0055B6A7: ;
    _fa = (uint32_t)(MEM8(eax + 0x34)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x34), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B6B4; /* je: equal / zero */

loc_0055B6AD: ;
    eax = MEM32(eax + 0x2C);

loc_0055B6B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B6A7; /* jne: not equal / not zero */

loc_0055B6B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055B6B5
 * Original: 0x0055B6B5 - 0x0055B6C3 (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B6B5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B6B5: ;
    eax = ecx;

loc_0055B6B7: ;
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B6C2; /* je: equal / zero */

loc_0055B6BE: ;
    eax = ecx;
    goto loc_0055B6B7;

loc_0055B6C2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055B6C3
 * Original: 0x0055B6C3 - 0x0055B7E6 (291 bytes, 96 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055B6C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B6C3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -24) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B6D5u); RECOMP_ABI_CALL(0x0055B6A3u, sub_0055B6A3); /* call 0x0055B6A3 */

loc_0055B6D5: ;
    ecx = MEM32(ebp + 0xC);
    edx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B6DFu); RECOMP_ABI_CALL(0x0055B6A3u, sub_0055B6A3); /* call 0x0055B6A3 */

loc_0055B6DF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B6F7; /* jne: not equal / not zero */

loc_0055B6E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B709; /* jne: not equal / not zero */

loc_0055B6E9: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD59Du;
    goto loc_0055B7E0;

loc_0055B6F7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B709; /* jne: not equal / not zero */

loc_0055B6FB: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0x29D5;
    goto loc_0055B7E0;

loc_0055B709: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B70Eu); RECOMP_ABI_CALL(0x0055B6B5u, sub_0055B6B5); /* call 0x0055B6B5 */

loc_0055B70E: ;
    ecx = esi;
    edx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B717u); RECOMP_ABI_CALL(0x0055B6B5u, sub_0055B6B5); /* call 0x0055B6B5 */

loc_0055B717: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B729; /* je: equal / zero */

loc_0055B71B: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD59Eu;
    goto loc_0055B7E0;

loc_0055B729: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    MEM32(ebp + -20) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0055B7CC; /* jbe: below or equal (unsigned <=) */

loc_0055B735: ;
    PUSH32(esp, ebx);
    MEM32(ebp + -16) = edi;

loc_0055B739: ;
    eax = MEM32(ebp + -16);
    esi = MEM32(esi + 0x18);
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(ecx + 0x18);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(eax + ecx + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    edi = MEM32(esi + 0x2C);
    if (CMP_BE(_fa, _fb)) goto loc_0055B7B3; /* jbe: below or equal (unsigned <=) */

loc_0055B758: ;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), 0 (32-bit) */
    eax = MEM32(edi + 0xC);
    MEM32(ebp + -32) = eax;
    ecx = edi + 0x24;
    edx = ebx + 0x24;
    if (CMP_BE(_fa, _fb)) goto loc_0055B7A2; /* jbe: below or equal (unsigned <=) */

loc_0055B76A: ;
    MEM32(ebp + -4) = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 4;
    ecx = MEM32(ebx + 0x20);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -28) = ecx;
    goto loc_0055B781;

loc_0055B77E: ;
    eax = MEM32(ebp + -8);

loc_0055B781: ;
    ecx = MEM32(eax + -4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -32));
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ecx + eax));
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B796u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0055B796: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x10;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055B77E; /* jne: not equal / not zero */

loc_0055B7A2: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    edi = MEM32(edi + 4);
    ebx = MEM32(ebx + 4);
    if (CMP_B(_fa, _fb)) goto loc_0055B758; /* jb: below (unsigned <) */

loc_0055B7B3: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 0x30;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14) (32-bit) */
    esi = eax;
    if (CMP_B(_fa, _fb)) goto loc_0055B739; /* jb: below (unsigned <) */

loc_0055B7CB: ;
    POP32(esp, ebx);

loc_0055B7CC: ;
    { extern void nhl07_invalidate_vertex_cache(void); nhl07_invalidate_vertex_cache(); } /* audited CPU vertex-stream publication at 0055B7CC */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B7D3u); RECOMP_ABI_CALL(0x0075D370u, sub_0075D370); /* call 0x0075D370 */

loc_0055B7D3: ;
    eax = MEM32(ebp + 8);
    MEM8(esi + 0x35) = 1;
    MEM32(eax) = 1;

loc_0055B7E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B7E6
 * Original: 0x0055B7E6 - 0x0055B7F4 (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B7E6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B7E6: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B805
 * Original: 0x0055B805 - 0x0055B890 (139 bytes, 54 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055B805(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B805: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -12) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0055B865; /* jbe: below or equal (unsigned <=) */

loc_0055B824: ;
    MEM32(ebp + -8) = eax;

loc_0055B827: ;
    esi = MEM32(ebx + 0x18);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), eax (32-bit) */
    edi = MEM32(esi + 0x2C);
    if (CMP_BE(_fa, _fb)) goto loc_0055B856; /* jbe: below or equal (unsigned <=) */

loc_0055B838: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B842u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0055B842: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B875; /* jne: not equal / not zero */

loc_0055B846: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    edi = MEM32(edi + 4);
    if (CMP_B(_fa, _fb)) goto loc_0055B838; /* jb: below (unsigned <) */

loc_0055B854: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055B856: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -12);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x30;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055B827; /* jb: below (unsigned <) */

loc_0055B865: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD597u;

loc_0055B86E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_0055B875: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_0055B86E;

}

/**
 * sub_0055B890
 * Original: 0x0055B890 - 0x0055BA0A (378 bytes, 126 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055B890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    ebx = ecx;
    MEM32(ebp + -44) = ebx;
    MEM32(ebp + -12) = 0xFFFFD597u;
    if (CMP_EQ(_fa, _fb)) goto loc_0055B9F6; /* je: equal / zero */

loc_0055B8AE: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), eax (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0055B9FD; /* jbe: below or equal (unsigned <=) */

loc_0055B8BA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = eax;
    goto loc_0055B8C3;

loc_0055B8C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055B8C3: ;
    edi = MEM32(ebx + 0x18);
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -16);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), eax (32-bit) */
    esi = MEM32(edi + 0x2C);
    if (CMP_BE(_fa, _fb)) goto loc_0055B9DF; /* jbe: below or equal (unsigned <=) */

loc_0055B8D8: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B8E2u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0055B8E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B8F9; /* jne: not equal / not zero */

loc_0055B8E6: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x28) (32-bit) */
    esi = MEM32(esi + 4);
    if (CMP_B(_fa, _fb)) goto loc_0055B8D8; /* jb: below (unsigned <) */

loc_0055B8F4: ;
    goto loc_0055B9DF;

loc_0055B8F9: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    MEM32(ebp + -28) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -32) = eax;
    eax = MEM32(esi + 0x10);
    MEM32(ebp + -40) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0055B9D8; /* jbe: below or equal (unsigned <=) */

loc_0055B919: ;
    ebx = esi + 0x2C;

loc_0055B91C: ;
    edx = MEM32(ebx);
    ecx = MEM32(ebx + -8);
    eax = MEM32(ebx + -4);
    MEM32(ebp + -24) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), edx (32-bit) */
    MEM32(ebp + -36) = ecx;
    MEM32(ebp + -4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0055B97D; /* jne: not equal / not zero */

loc_0055B934: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055B9C3; /* jbe: below or equal (unsigned <=) */

loc_0055B93C: ;
    MEM32(ebp + -8) = eax;

loc_0055B93F: ;
    eax = MEM32(ebp + -24);
    eax = ZX16(MEM16(eax + edx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055B969; /* jb: below (unsigned <) */

loc_0055B94B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055B969; /* ja: above (unsigned >) */

loc_0055B950: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + -40));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -28));
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B966u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0055B966: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055B969: ;
    edx = MEM32(ebp + -4);
    eax = MEM32(ebp + -32);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -36) (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0055B93F; /* jb: below (unsigned <) */

loc_0055B97B: ;
    goto loc_0055B9C3;

loc_0055B97D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055B9C3; /* jbe: below or equal (unsigned <=) */

loc_0055B981: ;
    MEM32(ebp + -8) = eax;

loc_0055B984: ;
    eax = MEM32(ebp + -24);
    eax = ZX16(MEM16(eax + edx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055B9B1; /* jb: below (unsigned <) */

loc_0055B990: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055B9B1; /* ja: above (unsigned >) */

loc_0055B995: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -28));
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 4 + 0x8DCFB8); PUSH32(esp, 0x0055B9AEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0055B9A7u); } /* indirect call */
    }

loc_0055B9AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055B9B1: ;
    edx = MEM32(ebp + -4);
    eax = MEM32(ebp + -32);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -36) (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0055B984; /* jb: below (unsigned <) */

loc_0055B9C3: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055B91C; /* jb: below (unsigned <) */

loc_0055B9D5: ;
    ebx = MEM32(ebp + -44);

loc_0055B9D8: ;
    MEM32(ebp + -12) = 1;

loc_0055B9DF: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 0x30;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055B8C1; /* jb: below (unsigned <) */

loc_0055B9F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    goto loc_0055B9FD;

loc_0055B9F6: ;
    MEM32(ebp + -12) = 0xFFFFD599u;

loc_0055B9FD: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0055BA0A
 * Original: 0x0055BA0A - 0x0055BACE (196 bytes, 72 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055BA0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BA0A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), eax (32-bit) */
    MEM32(ebp + -20) = 0xFFFFD597u;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0055BAAE; /* jbe: below or equal (unsigned <=) */

loc_0055BA2B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -12) = eax;
    goto loc_0055BA34;

loc_0055BA32: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055BA34: ;
    esi = MEM32(ebx + 0x18);
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), eax (32-bit) */
    edi = MEM32(esi + 0x2C);
    if (CMP_BE(_fa, _fb)) goto loc_0055BA9D; /* jbe: below or equal (unsigned <=) */

loc_0055BA45: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BA4Fu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0055BA4F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BA63; /* jne: not equal / not zero */

loc_0055BA53: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    edi = MEM32(edi + 4);
    if (CMP_B(_fa, _fb)) goto loc_0055BA45; /* jb: below (unsigned <) */

loc_0055BA61: ;
    goto loc_0055BA9D;

loc_0055BA63: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x54) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), edx (32-bit) */
    ecx = edi + 0x24;
    if (CMP_BE(_fa, _fb)) goto loc_0055BA96; /* jbe: below or equal (unsigned <=) */

loc_0055BA76: ;
    esi = MEM32(ebp + -4);
    eax = eax + esi * 4 + 4;

loc_0055BA7D: ;
    esi = MEM32(ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x28) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055BA7D; /* jb: below (unsigned <) */

loc_0055BA96: ;
    MEM32(ebp + -20) = 1;

loc_0055BA9D: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0x30;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055BA32; /* jb: below (unsigned <) */

loc_0055BAAC: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0055BAAE: ;
    { extern void nhl07_invalidate_vertex_cache(void); nhl07_invalidate_vertex_cache(); } /* audited CPU vertex-stream publication at 0055BAAE */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BAB5u); RECOMP_ABI_CALL(0x0075D370u, sub_0075D370); /* call 0x0075D370 */

loc_0055BAB5: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    MEM8(ebx + 0x35) = 1;
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055BACE
 * Original: 0x0055BACE - 0x0055BC65 (407 bytes, 134 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055BACE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BACE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    ebx = ecx;
    MEM32(ebp + -48) = ebx;
    MEM32(ebp + -16) = 0xFFFFD597u;
    MEM8(ebp + -1) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0055BC47; /* je: equal / zero */

loc_0055BAF0: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), eax (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0055BC3E; /* jbe: below or equal (unsigned <=) */

loc_0055BAFC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -20) = eax;
    goto loc_0055BB05;

loc_0055BB03: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055BB05: ;
    edi = MEM32(ebx + 0x18);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), eax (32-bit) */
    esi = MEM32(edi + 0x2C);
    if (CMP_BE(_fa, _fb)) goto loc_0055BC29; /* jbe: below or equal (unsigned <=) */

loc_0055BB1A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BB24u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0055BB24: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BB3B; /* jne: not equal / not zero */

loc_0055BB28: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x28) (32-bit) */
    esi = MEM32(esi + 4);
    if (CMP_B(_fa, _fb)) goto loc_0055BB1A; /* jb: below (unsigned <) */

loc_0055BB36: ;
    goto loc_0055BC29;

loc_0055BB3B: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    MEM32(ebp + -32) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -36) = eax;
    eax = MEM32(esi + 0x10);
    MEM32(ebp + -44) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0055BC22; /* jbe: below or equal (unsigned <=) */

loc_0055BB5B: ;
    ebx = esi + 0x2C;

loc_0055BB5E: ;
    edx = MEM32(ebx);
    ecx = MEM32(ebx + -8);
    eax = MEM32(ebx + -4);
    MEM32(ebp + -28) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edx (32-bit) */
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0055BBC3; /* jne: not equal / not zero */

loc_0055BB76: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055BC0D; /* jbe: below or equal (unsigned <=) */

loc_0055BB7E: ;
    MEM32(ebp + -12) = eax;

loc_0055BB81: ;
    eax = MEM32(ebp + -28);
    eax = ZX16(MEM16(eax + edx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055BBAF; /* jb: below (unsigned <) */

loc_0055BB8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055BBAF; /* ja: above (unsigned >) */

loc_0055BB92: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + -44));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -32));
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BBA8u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0055BBA8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + -1) = 1;

loc_0055BBAF: ;
    edx = MEM32(ebp + -8);
    eax = MEM32(ebp + -36);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -40) (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0055BB81; /* jb: below (unsigned <) */

loc_0055BBC1: ;
    goto loc_0055BC0D;

loc_0055BBC3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055BC0D; /* jbe: below or equal (unsigned <=) */

loc_0055BBC7: ;
    MEM32(ebp + -12) = eax;

loc_0055BBCA: ;
    eax = MEM32(ebp + -28);
    eax = ZX16(MEM16(eax + edx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055BBFB; /* jb: below (unsigned <) */

loc_0055BBD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055BBFB; /* ja: above (unsigned >) */

loc_0055BBDB: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -32));
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    { uint32_t _icall_target = MEM32(ecx * 4 + 0x8DCFB8); PUSH32(esp, 0x0055BBF4u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0055BBEDu); } /* indirect call */
    }

loc_0055BBF4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + -1) = 1;

loc_0055BBFB: ;
    edx = MEM32(ebp + -8);
    eax = MEM32(ebp + -36);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -40) (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0055BBCA; /* jb: below (unsigned <) */

loc_0055BC0D: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055BB5E; /* jb: below (unsigned <) */

loc_0055BC1F: ;
    ebx = MEM32(ebp + -48);

loc_0055BC22: ;
    MEM32(ebp + -16) = 1;

loc_0055BC29: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) + 1;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -20) = MEM32(ebp + -20) + 0x30;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055BB03; /* jb: below (unsigned <) */

loc_0055BC3C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0055BC3E: ;
    { extern void nhl07_invalidate_vertex_cache(void); nhl07_invalidate_vertex_cache(); } /* audited CPU vertex-stream update publication */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BC45u); RECOMP_ABI_CALL(0x0075D370u, sub_0075D370); /* call 0x0075D370 */

loc_0055BC45: ;
    goto loc_0055BC4E;

loc_0055BC47: ;
    MEM32(ebp + -16) = 0xFFFFD599u;

loc_0055BC4E: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BC58; /* je: equal / zero */

loc_0055BC54: ;
    MEM8(ebx + 0x35) = 1;

loc_0055BC58: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -16);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0055BC65
 * Original: 0x0055BC65 - 0x0055BC77 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BC65(void)
{

loc_0055BC65: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x20);
    eax = eax + eax * 4;
    eax = ecx + eax * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0055BC77
 * Original: 0x0055BC77 - 0x0055BCA6 (47 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BC77(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BC77: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055BCA0; /* jbe: below or equal (unsigned <=) */

loc_0055BC85: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    ecx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    { uint32_t _icall_target = MEM32(ecx); PUSH32(esp, 0x0055BC95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BC93u); } /* indirect call */
    }

loc_0055BC95: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x14) (32-bit) */
    POP32(esp, ecx);
    if (CMP_B(_fa, _fb)) goto loc_0055BC85; /* jb: below (unsigned <) */

loc_0055BCA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BCA6
 * Original: 0x0055BCA6 - 0x0055BCE5 (63 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055BCA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BCA6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = edi;
    MEM32(esi) = edi;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055BCDF; /* jbe: below or equal (unsigned <=) */

loc_0055BCBC: ;
    MEM32(ebp + 8) = edi;
    PUSH32(esp, ebx);

loc_0055BCC0: ;
    eax = MEM32(ecx + 0x18);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x30;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax);
    ebx = MEM32(ebx + 0x24);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + ebx;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055BCC0; /* jb: below (unsigned <) */

loc_0055BCDE: ;
    POP32(esp, ebx);

loc_0055BCDF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055BCE5
 * Original: 0x0055BCE5 - 0x0055BD21 (60 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BCE5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BCE5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055BCEDu); RECOMP_ABI_CALL(0x0055B537u, sub_0055B537); /* call 0x0055B537 */

loc_0055BCED: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0055BCF9u); RECOMP_ABI_CALL(0x0055B564u, sub_0055B564); /* call 0x0055B564 */

loc_0055BCF9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0055BD12; /* je: equal / zero */

loc_0055BD0E: ;
    MEM32(esp + 8) = eax;

loc_0055BD12: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0055BD1Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0055BD1B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BD2E
 * Original: 0x0055BD2E - 0x0055BD3B (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0055BD2E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BD2E: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BD38; /* je: equal / zero */

loc_0055BD35: ;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_0055BD38: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055BD3B
 * Original: 0x0055BD3B - 0x0055BD82 (71 bytes, 25 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055BD3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BD3B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BD75; /* je: equal / zero */

loc_0055BD45: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BD75; /* je: equal / zero */

loc_0055BD4B: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055BD5D; /* jb: below (unsigned <) */

loc_0055BD52: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD5A0u;
    goto loc_0055BD7E;

loc_0055BD5D: ;
    ecx = MEM32(ebp + 0x10);
    eax = eax + edx * 4 + 4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BD6Au); RECOMP_ABI_CALL(0x0055B564u, sub_0055B564); /* call 0x0055B564 */

loc_0055BD6A: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_0055BD7E;

loc_0055BD75: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD59Fu;

loc_0055BD7E: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055BD82
 * Original: 0x0055BD82 - 0x0055BD93 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BD82(void)
{

loc_0055BD82: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x0055BD8Cu); RECOMP_ABI_CALL(0x0002D9EEu, sub_0002D9EE); /* call 0x0002D9EE */

loc_0055BD8C: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BD93
 * Original: 0x0055BD93 - 0x0055BD9D (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BD93(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BD93: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055BD9D
 * Original: 0x0055BD9D - 0x0055BDD6 (57 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BD9D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BD9D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055BDC3; /* jbe: below or equal (unsigned <=) */

loc_0055BDA8: ;
    eax = MEM32(esi);
    eax = eax + edi * 8;
    ecx = MEM32(eax + 4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x0055BDBBu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055BDBB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 4) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_B(_fa, _fb)) goto loc_0055BDA8; /* jb: below (unsigned <) */

loc_0055BDC3: ;
    eax = MEM32(esi + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0055BDD1u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055BDD1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055BDD6
 * Original: 0x0055BDD6 - 0x0055BE13 (61 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BDD6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BDD6: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esi + 4) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x876B21);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055BDF0u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0055BDF0: ;
    MEM32(esi) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055BE0F; /* jbe: below or equal (unsigned <=) */

loc_0055BDFC: ;
    ecx = MEM32(esi);
    MEM32(ecx + eax * 8 + 4) = MEM32(ecx + eax * 8 + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 8 + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi);
    MEM32(ecx + eax * 8) = MEM32(ecx + eax * 8) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055BDFC; /* jb: below (unsigned <) */

loc_0055BE0F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BE13
 * Original: 0x0055BE13 - 0x0055BE73 (96 bytes, 45 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055BE13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BE13: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    eax = esi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = ecx;
    PUSH32(esp, 0x876B22);
    PUSH32(esp, eax);
    MEM32(ebp + -4) = edi;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BE3Au); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0055BE3A: ;
    ecx = MEM32(edi);
    MEM32(ebx + ecx) = eax;
    eax = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebx + eax + 4) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_0055BE6C; /* jbe: below or equal (unsigned <=) */

loc_0055BE4C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    goto loc_0055BE55;

loc_0055BE52: ;
    edi = MEM32(ebp + -4);

loc_0055BE55: ;
    edx = MEM32(ebp + 0xC);
    esi = eax + edx;
    edx = MEM32(edi);
    edi = MEM32(ebx + edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    if ((_fa != 0)) goto loc_0055BE52; /* jne: not equal / not zero */

loc_0055BE6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055BEAA
 * Original: 0x0055BEAA - 0x0055C1BB (785 bytes, 174 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055BEAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0055BEAA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x138;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x3C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C1AA; /* je: equal / zero */

loc_0055BEC5: ;
    ecx = MEM32(edi + 0x20);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x40);
    eax = eax + eax * 4;
    ecx = ecx + eax * 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BEE3u); RECOMP_ABI_CALL(0x0002EBE6u, sub_0002EBE6); /* call 0x0002EBE6 */

loc_0055BEE3: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055C197; /* jle: less or equal (signed <=) */

loc_0055BEEC: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x90) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x94) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055C069: ;
    eax = esp + edi + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    eax = esp + edi + 0x28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C07Fu); RECOMP_ABI_CALL(0x0059F359u, sub_0059F359); /* call 0x0059F359 */

loc_0055C07F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C069; /* jb: below (unsigned <) */

loc_0055C08D: ;
    edi = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    PUSH32(esp, 7);
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    MEMF(edi + 8) = xmm2.f[0]; /* movss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x10) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x14) = xmm2.f[0]; /* movss */
    xmm5 = xmm0; /* movaps */
    xmm4 = xmm1; /* movaps */
    xmm3 = xmm2; /* movaps */
    eax = esp + 0xD8;
    POP32(esp, ecx);

loc_0055C0DB: ;
    _fca = xmm5.f[0]; _fcb = MEMF(eax + -4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0055C0E6; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs MEMF(eax + -4)) */

loc_0055C0E1: ;
    xmm5 = XMM_SCALAR(MEMF(eax + -4)); /* movss */

loc_0055C0E6: ;
    _fca = xmm4.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0055C0EF; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(eax)) */

loc_0055C0EB: ;
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */

loc_0055C0EF: ;
    _fca = xmm3.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0055C0FA; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(eax + 4)) */

loc_0055C0F5: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */

loc_0055C0FA: ;
    xmm6 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0055C107; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm0.f[0]) */

loc_0055C104: ;
    xmm0 = xmm6; /* movaps */

loc_0055C107: ;
    xmm6 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0055C113; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm1.f[0]) */

loc_0055C110: ;
    xmm1 = xmm6; /* movaps */

loc_0055C113: ;
    xmm6 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0055C120; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm2.f[0]) */

loc_0055C11D: ;
    xmm2 = xmm6; /* movaps */

loc_0055C120: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055C0DB; /* jne: not equal / not zero */

loc_0055C126: ;
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEMF(edi) = xmm5.f[0]; /* movss */
    MEMF(edi + 4) = xmm4.f[0]; /* movss */
    MEMF(edi + 8) = xmm3.f[0]; /* movss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x10) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x14) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C159u); RECOMP_ABI_CALL(0x0059F359u, sub_0059F359); /* call 0x0059F359 */

loc_0055C159: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xAC)); /* movss */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x24);
    MEM32(edi + 0x24) = eax;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 1;
    goto loc_0055C1B3;

loc_0055C197: ;
    edi = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
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
    MEM32(eax) = 0x29D3;
    goto loc_0055C1B3;

loc_0055C1AA: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD59Au;

loc_0055C1B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C1BB
 * Original: 0x0055C1BB - 0x0055C2F9 (318 bytes, 113 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C1BB(void)
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

loc_0055C1BB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x876AD8);
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C1E0u); RECOMP_ABI_CALL(0x0055B805u, sub_0055B805); /* call 0x0055B805 */

loc_0055C1E0: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C1EBu); RECOMP_ABI_CALL(0x0055BDD6u, sub_0055BDD6); /* call 0x0055BDD6 */

loc_0055C1EB: ;
    eax = MEM32(esi + 0x10);
    esi = MEM32(esi + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -20) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C20B; /* je: equal / zero */

loc_0055C200: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi));
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -20) = eax;

loc_0055C20B: ;
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x876ADE);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C21Eu); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0055C21E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edi (32-bit) */
    esi = eax;
    MEM32(ebp + -36) = esi;
    MEM32(ebp + -28) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0055C2E9; /* jbe: below or equal (unsigned <=) */

loc_0055C232: ;
    goto loc_0055C236;

loc_0055C234: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055C236: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -8) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0055C2C9; /* jbe: below or equal (unsigned <=) */

loc_0055C245: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055C24C;

loc_0055C24A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055C24C: ;
    MEM8(ebp + 0xB) = 0;
    MEM32(ebp + -4) = edi;

loc_0055C253: ;
    eax = MEM32(ebp + -24);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AB2D0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0055C26C; /* jbe: below or equal (unsigned <=) */

loc_0055C268: ;
    MEM8(ebp + 0xB) = 1;

loc_0055C26C: ;
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(ebp + -4);
    MEMF(ebp + eax * 4 + -48) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 4);
    eax = ebp + -32;
    ecx = ebp + -20;
    POP32(esp, edi);
    edx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C286u); RECOMP_ABI_CALL(0x0055B66Bu, sub_0055B66B); /* call 0x0055B66B */

loc_0055C286: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C253; /* jb: below (unsigned <) */

loc_0055C28F: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C2BE; /* je: equal / zero */

loc_0055C295: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    eax = MEM32(ebp + -8);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(esi + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055C2BE: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C24A; /* jb: below (unsigned <) */

loc_0055C2C9: ;
    PUSH32(esp, MEM32(ebp + -12));
    esi = MEM32(ebp + -36);
    edi = MEM32(ebp + -28);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C2DCu); RECOMP_ABI_CALL(0x0055BE13u, sub_0055BE13); /* call 0x0055BE13 */

loc_0055C2DC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -16) (32-bit) */
    MEM32(ebp + -28) = edi;
    if (CMP_B(_fa, _fb)) goto loc_0055C234; /* jb: below (unsigned <) */

loc_0055C2E9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C2F0u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055C2F0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0055C2F9
 * Original: 0x0055C2F9 - 0x0055C892 (1433 bytes, 450 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C2F9(void)
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

loc_0055C2F9: ;
    PUSH32(esp, ebp);
    ebp = esp + -100;
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x1C) = ecx;
    ecx = MEM32(ebp + 0x70);
    MEM32(ebp + 0x30) = esi;
    MEM32(ebp + 0x34) = esi;
    MEM32(ebp + 0x38) = 0xFFFFD59Bu;
    PUSH32(esp, 0x0055C31Fu); RECOMP_ABI_CALL(0x0055BD2Eu, sub_0055BD2E); /* call 0x0055BD2E */

loc_0055C31F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C32E; /* je: equal / zero */

loc_0055C324: ;
    ecx = 0xFFFFD598u;
    goto loc_0055C87E;

loc_0055C32E: ;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(ebp + 0x70) = esi;
    MEM32(ebp + -4) = edx;
    eax = ecx + 0x14;
    MEM32(ebp + 0x2C) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_0055C873; /* jbe: below or equal (unsigned <=) */

loc_0055C345: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(ebp + 0x44) = eax;

loc_0055C34A: ;
    esi = MEM32(ebp + 0x44);
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x18);
    MEM32(ebp + 0x40) = MEM32(ebp + 0x40) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 4);
    POP32(esp, edx);
    MEM32(ebp + 0x28) = ecx;
    ecx = ZX8(MEM8(eax + 0xB));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 7);
    POP32(esp, ebx);
    MEM32(ebp + 0x58) = edx;
    MEM32(ebp + 0x5C) = ebx;
    if ((_fa == 0)) goto loc_0055C386; /* je: equal / zero */

loc_0055C36E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055C37D; /* je: equal / zero */

loc_0055C371: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055C389; /* jne: not equal / not zero */

loc_0055C374: ;
    MEM32(ebp + 0x58) = 2;
    goto loc_0055C389;

loc_0055C37D: ;
    MEM32(ebp + 0x58) = 1;
    goto loc_0055C389;

loc_0055C386: ;
    MEM32(ebp + 0x58) = edx;

loc_0055C389: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055C38B: ;
    SET_LO8(ecx, MEM8(edi + eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C3AC; /* je: equal / zero */

loc_0055C393: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x66 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C3A2; /* je: equal / zero */

loc_0055C398: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x63) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x63 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C3A2; /* je: equal / zero */

loc_0055C39D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x69 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C3A5; /* jne: not equal / not zero */

loc_0055C3A2: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x40) = MEM32(ebp + 0x40) + edx;
    _fa = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055C3A5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C38B; /* jb: below (unsigned <) */

loc_0055C3AA: ;
    goto loc_0055C3AF;

loc_0055C3AC: ;
    MEM32(ebp + 0x5C) = edi;

loc_0055C3AF: ;
    ecx = MEM32(esi);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055C3BEu); RECOMP_ABI_CALL(0x0001E11Fu, sub_0001E11F); /* call 0x0001E11F */

loc_0055C3BE: ;
    ecx = MEM32(ebp + 0x74);
    eax = ebp + 0x48;
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    eax = ebp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055C3D5u); RECOMP_ABI_CALL(0x0055B805u, sub_0055B805); /* call 0x0055B805 */

loc_0055C3D5: ;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055C843; /* jle: less or equal (signed <=) */

loc_0055C3DF: ;
    eax = MEM32(ebp + 0x48);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x40));
    PUSH32(esp, 1);
    PUSH32(esp, 0x876ADF);
    PUSH32(esp, eax);
    MEM32(ebp + 0x14) = eax;
    PUSH32(esp, 0x0055C3F6u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0055C3F6: ;
    ecx = MEM32(ebp + 0x74);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x48));
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x70));
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    MEM32(ebp + 0x20) = edi;
    PUSH32(esp, 0x0055C413u); RECOMP_ABI_CALL(0x0055B890u, sub_0055B890); /* call 0x0055B890 */

loc_0055C413: ;
    eax = MEM32(esi);
    ebx = MEM32(eax + 0x10);
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x24) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x60) = edi;
    PUSH32(esp, 0x1B);
    POP32(esp, ecx);
    edi = ebp + -124;
    MEMF(ebp + -128) = xmm4.f[0]; /* movss */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x7C) = ebx;
    MEM32(ebp + 0x4C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C44D; /* je: equal / zero */

loc_0055C443: ;
    eax = ZX8(MEM8(eax));
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x3C) = eax;

loc_0055C44D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x48), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055C7D7; /* jbe: below or equal (unsigned <=) */

loc_0055C457: ;
    eax = MEM32(ebp + 0x48);
    MEM32(ebp + 0x18) = eax;

loc_0055C45D: ;
    MEM32(ebp + 0x54) = MEM32(ebp + 0x54) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055C6BD; /* jbe: below or equal (unsigned <=) */

loc_0055C46B: ;
    ecx = MEM32(ebp + 0x54);
    eax = MEM32(ebp + 0x44);
    eax = MEM32(eax);
    esi = MEM32(ebp + 0x78);
    edx = ecx + ecx * 2 + 9;
    edx = MEM32(eax + edx * 4);
    xmm5 = XMM_SCALAR(MEMF(esi + edx * 4)); /* movss */
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 4;
    eax = ZX8(MEM8(eax + 0xB));
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(ebp + 0x10) = xmm5.f[0]; /* movss */
    if ((_fa == 0)) goto loc_0055C551; /* je: equal / zero */

loc_0055C4A5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055C500; /* je: equal / zero */

loc_0055C4A8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055C6AE; /* jne: not equal / not zero */

loc_0055C4AF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x5C), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055C6AE; /* jbe: below or equal (unsigned <=) */

loc_0055C4B8: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DE364); /* mulss */

loc_0055C4C0: ;
    ecx = ZX16(MEM16(ebx));
    eax = MEM32(ebp + 0x60);
    edi = MEM32(ebp + 0x58);
    eax = eax + esi * 4;
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    eax = ebp + 0x4C;
    ecx = ebp + 0x3C;
    edx = ebp + 0x7C;
    PUSH32(esp, 0x0055C4F2u); RECOMP_ABI_CALL(0x0055B66Bu, sub_0055B66B); /* call 0x0055B66B */

loc_0055C4F2: ;
    ebx = MEM32(ebp + 0x7C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x5C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C4C0; /* jb: below (unsigned <) */

loc_0055C4FB: ;
    goto loc_0055C6AE;

loc_0055C500: ;
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x5C), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055C6AE; /* jbe: below or equal (unsigned <=) */

loc_0055C509: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x82B4DC); /* mulss */

loc_0055C511: ;
    ecx = ZX8(MEM8(ebx));
    eax = MEM32(ebp + 0x60);
    edi = MEM32(ebp + 0x58);
    eax = eax + esi * 4;
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    eax = ebp + 0x4C;
    ecx = ebp + 0x3C;
    edx = ebp + 0x7C;
    PUSH32(esp, 0x0055C543u); RECOMP_ABI_CALL(0x0055B66Bu, sub_0055B66B); /* call 0x0055B66B */

loc_0055C543: ;
    ebx = MEM32(ebp + 0x7C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x5C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C511; /* jb: below (unsigned <) */

loc_0055C54C: ;
    goto loc_0055C6AE;

loc_0055C551: ;
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x5C), esi (32-bit) */
    MEM32(ebp + 0x50) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_0055C6AE; /* jbe: below or equal (unsigned <=) */

loc_0055C55D: ;
    esi = ebp + -128;

loc_0055C560: ;
    eax = MEM32(ebp + 0x24);
    ecx = MEM32(ebp + 0x50);
    SET_LO8(eax, MEM8(ecx + eax + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x63) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x63 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C5D4; /* je: equal / zero */

loc_0055C56E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x66 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C5B6; /* je: equal / zero */

loc_0055C572: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x69 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C69C; /* jne: not equal / not zero */

loc_0055C57A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x54), 0 (32-bit) */
    ebx = MEM32(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0055C59A; /* jne: not equal / not zero */

loc_0055C582: ;
    eax = MEM32(ebp + 0x60);
    eax = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -12) = eax;
    fp_push((double)SMEM32(ebp + -12)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0055C598; /* jge: greater or equal (signed >=) */

loc_0055C592: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0055C598: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */

loc_0055C59A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -12) = ebx;
    fp_push((double)SMEM32(ebp + -12)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0055C5AA; /* jge: greater or equal (signed >=) */

loc_0055C5A4: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0055C5AA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x10)); /* fmul dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0055C688;

loc_0055C5B6: ;
    eax = MEM32(ebp + 0x60);
    ecx = MEM32(ebp + 0x50);
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    eax = eax + ecx * 4;
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    goto loc_0055C688;

loc_0055C5D4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x54), 0 (32-bit) */
    eax = MEM32(ebp + 0x60);
    eax = MEM32(eax + ecx * 4);
    ebx = MEM32(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0055C61F; /* jne: not equal / not zero */

loc_0055C5E2: ;
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = 0xFF;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */

loc_0055C61F: ;
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = SX8(LO8(eax));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = SX8(LO8(eax));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = SX8(LO8(eax));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = SX8(LO8(ebx));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 4); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 8); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0xC); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm3.f[0]; /* movss */

loc_0055C688: ;
    edi = MEM32(ebp + 0x58);
    edx = ebp + 0x7C;
    ecx = ebp + 0x3C;
    eax = ebp + 0x4C;
    PUSH32(esp, 0x0055C699u); RECOMP_ABI_CALL(0x0055B66Bu, sub_0055B66B); /* call 0x0055B66B */

loc_0055C699: ;
    ebx = MEM32(ebp + 0x7C);

loc_0055C69C: ;
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x50);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x5C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C560; /* jb: below (unsigned <) */

loc_0055C6AE: ;
    MEM32(ebp + 0x54) = MEM32(ebp + 0x54) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C46B; /* jb: below (unsigned <) */

loc_0055C6BD: ;
    edi = MEM32(ebp + 0x60);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x5C), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055C7C8; /* jbe: below or equal (unsigned <=) */

loc_0055C6CB: ;
    edx = ebp + -128;

loc_0055C6CE: ;
    eax = MEM32(ebp + 0x24);
    SET_LO8(eax, MEM8(esi + eax + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x63) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x63 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C6F7; /* je: equal / zero */

loc_0055C6D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x69 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C7BB; /* jne: not equal / not zero */

loc_0055C6E1: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp + 8); /* cvtss2si */
    MEM32(edi + esi * 4) = eax;
    goto loc_0055C7BB;

loc_0055C6F7: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FE8B4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0055C70D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0055C708: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0055C715;

loc_0055C70D: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm5 = xmm4; /* movaps */
    if ((_fca > _fcb)) goto loc_0055C718; /* ja: above (unsigned >) (xmm4.f[0] vs xmm1.f[0]) */

loc_0055C715: ;
    xmm5 = xmm1; /* movaps */

loc_0055C718: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edx) = xmm5.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0055C72B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0055C726: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0055C733;

loc_0055C72B: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm3 = xmm4; /* movaps */
    if ((_fca > _fcb)) goto loc_0055C736; /* ja: above (unsigned >) (xmm4.f[0] vs xmm1.f[0]) */

loc_0055C733: ;
    xmm3 = xmm1; /* movaps */

loc_0055C736: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edx + 4) = xmm3.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0055C74A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0055C745: ;
    xmm2 = xmm0; /* movaps */
    goto loc_0055C755;

loc_0055C74A: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = xmm1; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0055C755; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0055C752: ;
    xmm2 = xmm4; /* movaps */

loc_0055C755: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edx + 8) = xmm2.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0055C76F; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0055C764: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = xmm1; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0055C76F; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0055C76C: ;
    xmm0 = xmm4; /* movaps */

loc_0055C76F: ;
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ebp + -8) = xmm5.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp + -8); /* cvtss2si */
    ecx = eax;
    MEMF(ebp) = xmm3.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp); /* cvtss2si */
    MEM32(ebp + 0x50) = eax;
    MEMF(ebp + -16) = xmm2.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp + -16); /* cvtss2si */
    MEM32(ebp + 0x54) = eax;
    MEMF(ebp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp + 0xC); /* cvtss2si */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx | MEM32(ebp + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x60) = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx | MEM32(ebp + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + esi * 4) = ecx;

loc_0055C7BB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x5C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C6CE; /* jb: below (unsigned <) */

loc_0055C7C8: ;
    _fb = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x60) = edi;
    if ((_fa != 0)) goto loc_0055C45D; /* jne: not equal / not zero */

loc_0055C7D7: ;
    PUSH32(esp, MEM32(ebp + 0x48));
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x20));
    eax = ebp + 0x7C;
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055C7EEu); RECOMP_ABI_CALL(0x0055BACEu, sub_0055BACE); /* call 0x0055BACE */

loc_0055C7EE: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(ebp + 0x30) = MEM32(ebp + 0x30) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0x0055C7FCu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055C7FC: ;
    eax = MEM32(ebp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055C825; /* je: equal / zero */

loc_0055C805: ;
    edx = MEM32(ebp + 0x44);
    ecx = MEM32(edx);
    _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ecx + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C81C; /* jne: not equal / not zero */

loc_0055C812: ;
    ecx = MEM32(ecx + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + -4) (32-bit) */

loc_0055C81A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C846; /* je: equal / zero */

loc_0055C81C: ;
    MEM32(ebp + 0x38) = 0xFFFFD59Cu;
    goto loc_0055C871;

loc_0055C825: ;
    eax = MEM32(ebp + 0x44);
    ecx = MEM32(eax);
    eax = ebx;
    _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x5C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x58));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x28));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x48) (32-bit) */
    goto loc_0055C81A;

loc_0055C843: ;
    MEM32(ebp + 0x34) = MEM32(ebp + 0x34) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0055C846: ;
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x44) = MEM32(ebp + 0x44) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C34A; /* jb: below (unsigned <) */

loc_0055C859: ;
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x30), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055C871; /* jle: less or equal (signed <=) */

loc_0055C85F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x34), eax (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x29D3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x38) = eax;

loc_0055C871: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0055C873: ;
    ecx = ebp + 0x70;
    PUSH32(esp, 0x0055C87Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0055C87B: ;
    ecx = MEM32(ebp + 0x38);

loc_0055C87E: ;
    eax = MEM32(ebp + 0x1C);
    MEM8(eax + 0x35) = 1;
    eax = MEM32(ebp + 0x6C);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x64;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0055C892
 * Original: 0x0055C892 - 0x0055C9AF (285 bytes, 101 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C892(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C892: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x876AE0);
    eax = ebp + -4;
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C8B4u); RECOMP_ABI_CALL(0x0055B805u, sub_0055B805); /* call 0x0055B805 */

loc_0055C8B4: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055C9A1; /* jle: less or equal (signed <=) */

loc_0055C8BE: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + -8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + -12);
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x876AE6);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C8D7u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0055C8D7: ;
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x876AE8);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C8F4u); RECOMP_ABI_CALL(0x0055B890u, sub_0055B890); /* call 0x0055B890 */

loc_0055C8F4: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055C97B; /* jbe: below or equal (unsigned <=) */

loc_0055C8FC: ;
    eax = edi + 8;

loc_0055C8FF: ;
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx + edx * 8 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055C96D; /* jbe: below or equal (unsigned <=) */

loc_0055C90F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ecx;

loc_0055C914: ;
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(ecx);
    edi = MEM32(ebp + 0x10);
    ecx = MEM32(ecx + edi * 8);
    ebx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ecx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ebx + edi * 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + -8); /* addss */
    MEMF(eax + -8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + -4); /* addss */
    MEMF(eax + -4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(eax) = xmm1.f[0]; /* movss */
    if ((_fa != 0)) goto loc_0055C914; /* jne: not equal / not zero */

loc_0055C96A: ;
    edi = MEM32(ebp + -12);

loc_0055C96D: ;
    ebx = MEM32(ebp + -8);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C8FF; /* jb: below (unsigned <) */

loc_0055C97B: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x876AF0);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C990u); RECOMP_ABI_CALL(0x0055BACEu, sub_0055BACE); /* call 0x0055BACE */

loc_0055C990: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C997u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055C997: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    goto loc_0055C9A6;

loc_0055C9A1: ;
    ecx = 0x29D4;

loc_0055C9A6: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0055C9AF
 * Original: 0x0055C9AF - 0x0055C9CB (28 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C9AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0055C9AF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C9C4u); RECOMP_ABI_CALL(0x0055C2F9u, sub_0055C2F9); /* call 0x0055C2F9 */

loc_0055C9C4: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055C9CB
 * Original: 0x0055C9CB - 0x0055CB71 (422 bytes, 157 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C9CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C9CB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -12) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C9DEu); RECOMP_ABI_CALL(0x00576297u, sub_00576297); /* call 0x00576297 */

loc_0055C9DE: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C9ECu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0055C9EC: ;
    eax = edi + 0x10;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C9F8u); RECOMP_ABI_CALL(0x0055B564u, sub_0055B564); /* call 0x0055B564 */

loc_0055C9F8: ;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(edi + 0x20);
    PUSH32(esp, edi);
    ecx = esi + 0x24;
    MEM32(esi + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CA19u); RECOMP_ABI_CALL(0x00578152u, sub_00578152); /* call 0x00578152 */

loc_0055CA19: ;
    MEM8(esi + 0x34) = 3;
    eax = MEM32(edi + 0x38);
    MEM32(esi + 0x38) = eax;
    eax = MEM32(edi + 0x3C);
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(edi + 0x40);
    MEM32(esi + 0x40) = eax;
    eax = MEM32(edi + 0x44);
    MEM32(esi + 0x44) = eax;
    ebx = MEM32(edi + 0x1C);
    PUSH32(esp, 0);
    eax = ebx + ebx * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x876AF6);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CA4Bu); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0055CA4B: ;
    MEM32(esi + 0x20) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0055CA7D; /* jbe: below or equal (unsigned <=) */

loc_0055CA5A: ;
    ecx = MEM32(esi + 0x20);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0055CA72; /* je: equal / zero */

loc_0055CA67: ;
    edx = MEM32(edi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CA72u); RECOMP_ABI_CALL(0x00575E71u, sub_00575E71); /* call 0x00575E71 */

loc_0055CA72: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(MEM16(ebp + -4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055CA5A; /* jb: below (unsigned <) */

loc_0055CA7D: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CA94u); RECOMP_ABI_CALL(0x0055BCA6u, sub_0055BCA6); /* call 0x0055BCA6 */

loc_0055CA94: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 0);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x876AF7);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CAA7u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0055CAA7: ;
    ebx = MEM32(edi + 0x14);
    PUSH32(esp, 0);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0);
    eax = ebx + ebx * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    MEM32(ebp + -20) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CAC2u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055CAC2: ;
    MEM32(esi + 0x18) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0055CB61; /* jbe: below or equal (unsigned <=) */

loc_0055CAD5: ;
    goto loc_0055CADD;

loc_0055CAD7: ;
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + -12);

loc_0055CADD: ;
    edi = MEM32(edi + 0x18);
    ebx = MEM32(esi + 0x18);
    esi = MEM32(ebp + -8);
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebp + -16) = edi;
    MEM32(ebx) = eax;
    MEM32(ebx + 8) = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055CAFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CAFCu); } /* indirect call */
    }

loc_0055CAFF: ;
    eax = MEM32(ebx);
    eax = MEM32(eax + 0x20);
    eax = esi + eax * 4;
    MEM32(ebp + -8) = eax;
    eax = MEM32(edi + 0xC);
    MEM32(ebx + 0xC) = eax;
    eax = MEM32(ebp + -16);
    esi = edi + 0x10;
    edi = ebx + 0x10;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = eax + 0x1C;
    edi = ebx + 0x1C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(eax + 0x28);
    MEM32(ebx + 0x28) = ecx;
    ecx = MEM32(eax + 0x2C);
    MEM32(ebx + 0x2C) = ecx;
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x14);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(ecx + 0x20);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 4;
    eax = ecx + eax * 4;
    MEM32(ebx + 4) = eax;
    eax = ZX16(MEM16(ebp + -4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055CAD7; /* jb: below (unsigned <) */

loc_0055CB61: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055CB71
 * Original: 0x0055CB71 - 0x0055CBC0 (79 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CB71(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CB71: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055CBBE; /* jbe: below or equal (unsigned <=) */

loc_0055CB7B: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055CB9D; /* jbe: below or equal (unsigned <=) */

loc_0055CB82: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055CB84: ;
    ecx = MEM32(esi + 0x20);
    eax = eax + eax * 4;
    PUSH32(esp, 0);
    ecx = ecx + eax * 4;
    PUSH32(esp, 0x0055CB94u); RECOMP_ABI_CALL(0x0055A94Cu, sub_0055A94C); /* call 0x0055A94C */

loc_0055CB94: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(edi));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055CB84; /* jb: below (unsigned <) */

loc_0055CB9D: ;
    eax = MEM32(esi + 8);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x0055CBAFu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055CBAF: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);

loc_0055CBBE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055CBC0
 * Original: 0x0055CBC0 - 0x0055CC47 (135 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055CBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CBC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CBE1u); RECOMP_ABI_CALL(0x0055BCA6u, sub_0055BCA6); /* call 0x0055BCA6 */

loc_0055CBE1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CBE6u); RECOMP_ABI_CALL(0x0055CB71u, sub_0055CB71); /* call 0x0055CB71 */

loc_0055CBE6: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055CC2C; /* jbe: below or equal (unsigned <=) */

loc_0055CBEB: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0055CC1A; /* jbe: below or equal (unsigned <=) */

loc_0055CBF6: ;
    eax = edi + edi * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CC09; /* jne: not equal / not zero */

loc_0055CC03: ;
    ecx = MEM32(eax + 8);
    MEM32(ebp + 8) = ecx;

loc_0055CC09: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(eax + 8));
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0055CC12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CC0Fu); } /* indirect call */
    }

loc_0055CC12: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x14) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_B(_fa, _fb)) goto loc_0055CBF6; /* jb: below (unsigned <) */

loc_0055CC1A: ;
    eax = MEM32(ebp + -4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CC29u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055CC29: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);

loc_0055CC2C: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CC3D; /* je: equal / zero */

loc_0055CC33: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CC3Bu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055CC3B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055CC3D: ;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055CC47
 * Original: 0x0055CC47 - 0x0055CC54 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0055CC47(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CC47: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x0055CC50u); RECOMP_ABI_CALL(0x0055CBC0u, sub_0055CBC0); /* call 0x0055CBC0 */

loc_0055CC50: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055CC54
 * Original: 0x0055CC54 - 0x0055CC67 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CC54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055CC54: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    PUSH32(esp, 0x0055CC5Fu); RECOMP_ABI_CALL(0x0055D08Cu, sub_0055D08C); /* call 0x0055D08C */

loc_0055CC5F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_0055CC67
 * Original: 0x0055CC67 - 0x0055CC9A (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055CC67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0055CC67: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x55BC65);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x876A68);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CC7Du); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_0055CC7D: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x876AF8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CC8Cu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0055CC8C: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CC98u); RECOMP_ABI_CALL(0x00577B3Cu, sub_00577B3C); /* call 0x00577B3C */

loc_0055CC98: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055CC9A
 * Original: 0x0055CC9A - 0x0055CE3C (418 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055CC9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CC9A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CCBCu); RECOMP_ABI_CALL(0x0055BCA6u, sub_0055BCA6); /* call 0x0055BCA6 */

loc_0055CCBC: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), edi (32-bit) */
    ebx = MEM32(ebp + -4);
    if (CMP_EQ(_fa, _fb)) goto loc_0055CCC8; /* je: equal / zero */

loc_0055CCC4: ;
    MEM32(esi + 0x40) = ebx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0055CCC8: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CCD8; /* je: equal / zero */

loc_0055CCCF: ;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CCD8u); RECOMP_ABI_CALL(0x00578152u, sub_00578152); /* call 0x00578152 */

loc_0055CCD8: ;
    _fa = (uint32_t)(MEM8(esi + 0x36)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x36), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CCF3; /* jne: not equal / not zero */

loc_0055CCDE: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CCF3; /* jne: not equal / not zero */

loc_0055CCE4: ;
    ecx = esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CCEDu); RECOMP_ABI_CALL(0x0055B6B5u, sub_0055B6B5); /* call 0x0055B6B5 */

loc_0055CCED: ;
    eax = MEM32(eax + 0x20);
    MEM32(esi + 0x20) = eax;

loc_0055CCF3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esi + 0x1C) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0055CD9F; /* jbe: below or equal (unsigned <=) */

loc_0055CCFE: ;
    PUSH32(esp, edi);
    eax = ebx + ebx * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x876AFC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CD10u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0055CD10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    MEM32(esi + 0x20) = eax;
    ebx = eax;
    MEM32(ebp + -4) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0055CD51; /* jbe: below or equal (unsigned <=) */

loc_0055CD20: ;
    MEM32(ebp + 8) = edi;

loc_0055CD23: ;
    edi = MEM32(esi + 0x18);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(edi + 4) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055CD33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CD30u); } /* indirect call */
    }

loc_0055CD33: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x24);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x30;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 4;
    ebx = ebx + eax * 4;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_B(_fa, _fb)) goto loc_0055CD23; /* jb: below (unsigned <) */

loc_0055CD4F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055CD51: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CD9F; /* je: equal / zero */

loc_0055CD56: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x20);
    eax = eax + eax * 4;
    ebx = ecx + eax * 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CD6D; /* je: equal / zero */

loc_0055CD66: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CD6Du); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_0055CD6D: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x876B00);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CD7Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0055CD7B: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CD86u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_0055CD86: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x876B14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CD94u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0055CD94: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CD9Fu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_0055CD9F: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055CE24; /* jbe: below or equal (unsigned <=) */

loc_0055CDA6: ;
    _fa = (uint32_t)(MEM8(esi + 0x36)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x36), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CDCE; /* jne: not equal / not zero */

loc_0055CDAC: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CDCE; /* jne: not equal / not zero */

loc_0055CDB2: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CDB9u); RECOMP_ABI_CALL(0x0055B6B5u, sub_0055B6B5); /* call 0x0055B6B5 */

loc_0055CDB9: ;
    eax = MEM32(eax + 0x20);
    ecx = esi;
    MEM32(esi + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CDC6u); RECOMP_ABI_CALL(0x0055B6B5u, sub_0055B6B5); /* call 0x0055B6B5 */

loc_0055CDC6: ;
    eax = MEM32(eax + 0x18);
    ebx = MEM32(eax + 8);
    goto loc_0055CDE2;

loc_0055CDCE: ;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x876B20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CDDDu); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0055CDDD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_0055CDE2: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0055CE24; /* jbe: below or equal (unsigned <=) */

loc_0055CDEA: ;
    MEM32(ebp + 8) = edi;

loc_0055CDED: ;
    edi = MEM32(esi + 0x18);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = ebx;
    _fa = (uint32_t)(MEM8(esi + 0x36)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x36), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CE02; /* jne: not equal / not zero */

loc_0055CDFC: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CE0B; /* je: equal / zero */

loc_0055CE02: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0055CE09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CE06u); } /* indirect call */
    }

loc_0055CE09: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055CE0B: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x20);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x30;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx + eax * 4;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055CDED; /* jb: below (unsigned <) */

loc_0055CE22: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055CE24: ;
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CE37; /* je: equal / zero */

loc_0055CE31: ;
    MEM32(esi) = 0x55BC65;

loc_0055CE37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055CE3C
 * Original: 0x0055CE3C - 0x0055CE7C (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055CE3C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CE3C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CE49u); RECOMP_ABI_CALL(0x0055B537u, sub_0055B537); /* call 0x0055B537 */

loc_0055CE49: ;
    eax = ebp + -4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CE59u); RECOMP_ABI_CALL(0x0055B564u, sub_0055B564); /* call 0x0055B564 */

loc_0055CE59: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055CE62; /* je: equal / zero */

loc_0055CE5F: ;
    MEM32(ebp + -4) = edi;

loc_0055CE62: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CE6Au); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0055CE6A: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055CE7C
 * Original: 0x0055CE7C - 0x0055CEB6 (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CE7C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CE7C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055CE91; /* je: equal / zero */

loc_0055CE8B: ;
    MEM32(eax) = 0x55BC65;

loc_0055CE91: ;
    edi = esi + 0x24;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0055CE9Du); RECOMP_ABI_CALL(0x00578152u, sub_00578152); /* call 0x00578152 */

loc_0055CE9D: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0055CEA5u); RECOMP_ABI_CALL(0x005780D8u, sub_005780D8); /* call 0x005780D8 */

loc_0055CEA5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x55CC47);
    ecx = edi;
    PUSH32(esp, 0x0055CEB3u); RECOMP_ABI_CALL(0x005780EAu, sub_005780EA); /* call 0x005780EA */

loc_0055CEB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055CEB6
 * Original: 0x0055CEB6 - 0x0055CF3E (136 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055CEB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CEB6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CED7u); RECOMP_ABI_CALL(0x0055BCA6u, sub_0055BCA6); /* call 0x0055BCA6 */

loc_0055CED7: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CEE5; /* je: equal / zero */

loc_0055CEDC: ;
    PUSH32(esp, edi);
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CEE5u); RECOMP_ABI_CALL(0x0055D0B1u, sub_0055D0B1); /* call 0x0055D0B1 */

loc_0055CEE5: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CEECu); RECOMP_ABI_CALL(0x0055CB71u, sub_0055CB71); /* call 0x0055CB71 */

loc_0055CEEC: ;
    _fa = (uint32_t)(MEM8(esi + 0x36)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x36), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CEF8; /* jne: not equal / not zero */

loc_0055CEF2: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CF3A; /* je: equal / zero */

loc_0055CEF8: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055CF3A; /* jbe: below or equal (unsigned <=) */

loc_0055CEFD: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055CF26; /* jbe: below or equal (unsigned <=) */

loc_0055CF05: ;
    eax = edi + edi * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CF15; /* jne: not equal / not zero */

loc_0055CF12: ;
    ebx = eax + 8;

loc_0055CF15: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(eax + 8));
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0055CF1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CF1Bu); } /* indirect call */
    }

loc_0055CF1E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x14) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_B(_fa, _fb)) goto loc_0055CF05; /* jb: below (unsigned <) */

loc_0055CF26: ;
    eax = MEM32(ebp + -4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CF34u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055CF34: ;
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, ebx);

loc_0055CF3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055CF3E
 * Original: 0x0055CF3E - 0x0055CFA8 (106 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055CF3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CF3E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CF4Fu); RECOMP_ABI_CALL(0x00567475u, sub_00567475); /* call 0x00567475 */

loc_0055CF4F: ;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CF57u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_0055CF57: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CF5Eu); RECOMP_ABI_CALL(0x0055B5B0u, sub_0055B5B0); /* call 0x0055B5B0 */

loc_0055CF5E: ;
    edi = esi + 0x10;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CF68u); RECOMP_ABI_CALL(0x0055D060u, sub_0055D060); /* call 0x0055D060 */

loc_0055CF68: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CF76u); RECOMP_ABI_CALL(0x0055B564u, sub_0055B564); /* call 0x0055B564 */

loc_0055CF76: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055CF7F; /* je: equal / zero */

loc_0055CF7C: ;
    MEM32(ebp + -4) = ebx;

loc_0055CF7F: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CF87u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0055CF87: ;
    ecx = esi;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 0x34) = 4;
    MEM32(esi + 0x38) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CFA1u); RECOMP_ABI_CALL(0x0055CE7Cu, sub_0055CE7C); /* call 0x0055CE7C */

loc_0055CFA1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055CFA8
 * Original: 0x0055CFA8 - 0x0055D010 (104 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CFA8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CFA8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0055CFB5u); RECOMP_ABI_CALL(0x00567475u, sub_00567475); /* call 0x00567475 */

loc_0055CFB5: ;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055CFBDu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_0055CFBD: ;
    ecx = esi;
    PUSH32(esp, 0x0055CFC4u); RECOMP_ABI_CALL(0x0055B5B0u, sub_0055B5B0); /* call 0x0055B5B0 */

loc_0055CFC4: ;
    ebx = esi + 0x10;
    ecx = ebx;
    PUSH32(esp, 0x0055CFCEu); RECOMP_ABI_CALL(0x0055D060u, sub_0055D060); /* call 0x0055D060 */

loc_0055CFCE: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0055CFDAu); RECOMP_ABI_CALL(0x0055B564u, sub_0055B564); /* call 0x0055B564 */

loc_0055CFDA: ;
    ecx = esi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    MEM8(esi + 0x34) = 4;
    MEM32(esi + 0x38) = edi;
    PUSH32(esp, 0x0055CFF4u); RECOMP_ABI_CALL(0x0055CE7Cu, sub_0055CE7C); /* call 0x0055CE7C */

loc_0055CFF4: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055CFFF; /* je: equal / zero */

loc_0055CFFB: ;
    MEM32(esp + 0x10) = edi;

loc_0055CFFF: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0055D008u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0055D008: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D010
 * Original: 0x0055D010 - 0x0055D037 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D010: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0055D019u); RECOMP_ABI_CALL(0x0055CBC0u, sub_0055CBC0); /* call 0x0055CBC0 */

loc_0055D019: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055D02C; /* je: equal / zero */

loc_0055D021: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0055D02Cu); RECOMP_ABI_CALL(0x0055D0D7u, sub_0055D0D7); /* call 0x0055D0D7 */

loc_0055D02C: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0055D037
 * Original: 0x0055D037 - 0x0055D043 (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D037(void)
{

loc_0055D037: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055D03Fu); RECOMP_ABI_CALL(0x0055B537u, sub_0055B537); /* call 0x0055B537 */

loc_0055D03F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055D060
 * Original: 0x0055D060 - 0x0055D08C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D060: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055D068u); RECOMP_ABI_CALL(0x0055B537u, sub_0055B537); /* call 0x0055B537 */

loc_0055D068: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM16(esi + 0x20) = LO16(eax);
    MEM16(esi + 0x22) = LO16(eax);
    MEM8(esi + 0x25) = LO8(eax);
    MEM8(esi + 0x26) = LO8(eax);
    MEM8(esi + 0x27) = LO8(eax);
    MEM8(esi + 0x24) = 4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055D08C
 * Original: 0x0055D08C - 0x0055D0B1 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D08C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055D08C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x14;
    ecx = esi;
    PUSH32(esp, 0x0055D09Au); RECOMP_ABI_CALL(0x0055A981u, sub_0055A981); /* call 0x0055A981 */

loc_0055D09A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D0A8; /* je: equal / zero */

loc_0055D0A6: ;
    MEM32(edi) = eax;

loc_0055D0A8: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_0055D0B1
 * Original: 0x0055D0B1 - 0x0055D0D7 (38 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D0B1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D0B1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055D0B9u); RECOMP_ABI_CALL(0x0055A981u, sub_0055A981); /* call 0x0055A981 */

loc_0055D0B9: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D0D1; /* je: equal / zero */

loc_0055D0C7: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055D0CFu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055D0CF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055D0D1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D0D7
 * Original: 0x0055D0D7 - 0x0055D0FA (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D0D7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D0D7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055D0DFu); RECOMP_ABI_CALL(0x0055CC54u, sub_0055CC54); /* call 0x0055CC54 */

loc_0055D0DF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D0F4; /* je: equal / zero */

loc_0055D0E6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D0F4; /* je: equal / zero */

loc_0055D0EA: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055D0F2u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055D0F2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055D0F4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D153
 * Original: 0x0055D153 - 0x0055D159 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D153(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D153: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055D1F2
 * Original: 0x0055D1F2 - 0x0055D24B (89 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055D1F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D1F2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x55D153);
    esi = ecx;
    PUSH32(esp, 0x37);
    PUSH32(esp, 4);
    MEM32(esi) = ebx;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + 0xC;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D21Au); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_0055D21A: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055D21E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D22Bu); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_0055D22B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D236u); RECOMP_ABI_CALL(0x005602A4u, sub_005602A4); /* call 0x005602A4 */

loc_0055D236: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x37 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055D21E; /* jb: below (unsigned <) */

loc_0055D242: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D24C
 * Original: 0x0055D24C - 0x0055D25C (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D24C(void)
{

loc_0055D24C: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0055D259u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055D259: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055D25C
 * Original: 0x0055D25C - 0x0055D26D (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055D25C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0055D25C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D26Bu); RECOMP_ABI_CALL(0x005766B9u, sub_005766B9); /* call 0x005766B9 */

loc_0055D26B: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0055D26D
 * Original: 0x0055D26D - 0x0055D2C8 (91 bytes, 40 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055D26D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D26D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055D283; /* je: equal / zero */

loc_0055D27E: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D28A; /* je: equal / zero */

loc_0055D283: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ebx;
    goto loc_0055D2C1;

loc_0055D28A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x1C0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D298u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055D298: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D2AE; /* je: equal / zero */

loc_0055D29F: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D2ACu); RECOMP_ABI_CALL(0x00558673u, sub_00558673); /* call 0x00558673 */

loc_0055D2AC: ;
    goto loc_0055D2B0;

loc_0055D2AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055D2B0: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = 1;

loc_0055D2C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055D2C8
 * Original: 0x0055D2C8 - 0x0055D2E1 (25 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D2C8(void)
{

loc_0055D2C8: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x8DBED0);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D2E1
 * Original: 0x0055D2E1 - 0x0055D322 (65 bytes, 25 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055D2E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D2E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D2F1u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055D2F1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D301; /* je: equal / zero */

loc_0055D2F8: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D2FFu); RECOMP_ABI_CALL(0x0055CF3Eu, sub_0055CF3E); /* call 0x0055CF3E */

loc_0055D2FF: ;
    goto loc_0055D303;

loc_0055D301: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055D303: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D315u); RECOMP_ABI_CALL(0x0055C9CBu, sub_0055C9CB); /* call 0x0055C9CB */

loc_0055D315: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055D322
 * Original: 0x0055D322 - 0x0055D3B8 (150 bytes, 56 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055D322(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D322: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D32Eu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0055D32E: ;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D335u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_0055D335: ;
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D354u); RECOMP_ABI_CALL(0x00576BEEu, sub_00576BEE); /* call 0x00576BEE */

loc_0055D354: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055D3A7; /* jle: less or equal (signed <=) */

loc_0055D35A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x82B210);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D367u); RECOMP_ABI_CALL(0x00576A02u, sub_00576A02); /* call 0x00576A02 */

loc_0055D367: ;
    ecx = MEM32(ebp + 0x10);
    SET_LO8(edx, MEM8(ebp + 0x14));
    MEM32(ecx) = eax;
    MEM8(eax + 0x34) = 2;
    eax = MEM32(ecx);
    MEM8(eax + 0x36) = LO8(edx);
    eax = MEM32(ecx);
    edx = MEM32(ebp + -4);
    MEM32(eax + 0x38) = edx;
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x2C) = esi;
    PUSH32(esp, MEM32(ebp + -4));
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D39Cu); RECOMP_ABI_CALL(0x00574BAAu, sub_00574BAA); /* call 0x00574BAA */

loc_0055D39C: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_0055D3B2;

loc_0055D3A7: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;

loc_0055D3B2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055D3B8
 * Original: 0x0055D3B8 - 0x0055D42D (117 bytes, 48 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055D3B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D3B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D3CAu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055D3CA: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D3F4; /* je: equal / zero */

loc_0055D3D3: ;
    PUSH32(esp, ecx);
    eax = ebp + 0x10;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D3DFu); RECOMP_ABI_CALL(0x0002D9EEu, sub_0002D9EE); /* call 0x0002D9EE */

loc_0055D3DF: ;
    PUSH32(esp, ecx);
    eax = ebp + 0xC;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D3EBu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_0055D3EB: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D3F2u); RECOMP_ABI_CALL(0x005667FBu, sub_005667FB); /* call 0x005667FB */

loc_0055D3F2: ;
    goto loc_0055D3F6;

loc_0055D3F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055D3F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ecx = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    ecx = ebp + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0055D40D; /* je: equal / zero */

loc_0055D405: ;
    MEM32(esi) = 1;
    goto loc_0055D40F;

loc_0055D40D: ;
    MEM32(esi) = edi;

loc_0055D40F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D414u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0055D414: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D41D; /* je: equal / zero */

loc_0055D41A: ;
    MEM32(ebp + 0x10) = edi;

loc_0055D41D: ;
    ecx = ebp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D425u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0055D425: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055D468
 * Original: 0x0055D468 - 0x0055D4AA (66 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D468(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D468: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xE8);
    PUSH32(esp, 0x0055D478u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055D478: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D48C; /* je: equal / zero */

loc_0055D47F: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    PUSH32(esp, 0x0055D48Au); RECOMP_ABI_CALL(0x0055D1F2u, sub_0055D1F2); /* call 0x0055D1F2 */

loc_0055D48A: ;
    goto loc_0055D48E;

loc_0055D48C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055D48E: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0055D4A4; /* je: equal / zero */

loc_0055D49C: ;
    MEM32(eax) = 1;
    goto loc_0055D4A7;

loc_0055D4A4: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055D4A7: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055D4AA
 * Original: 0x0055D4AA - 0x0055D4C3 (25 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D4AA(void)
{

loc_0055D4AA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x91572C);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D4C3
 * Original: 0x0055D4C3 - 0x0055D4DC (25 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D4C3(void)
{

loc_0055D4C3: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x915734);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D4DC
 * Original: 0x0055D4DC - 0x0055D514 (56 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D4DC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D4DC: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0x3A0;
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    eax = esi + 8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM8(esi + 4) = 0;
    PUSH32(esp, 0x0055D4FBu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0055D4FB: ;
    PUSH32(esp, edi);
    eax = esi + 0x3A8;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055D50Au); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0055D50A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D514
 * Original: 0x0055D514 - 0x0055D52D (25 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D514(void)
{

loc_0055D514: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(0x91578C));
    MEM8(eax) = LO8(ecx);
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D52D
 * Original: 0x0055D52D - 0x0055D588 (91 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D52D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D52D: ;
    eax = MEM32(0x9153E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0055D586; /* jne: not equal / not zero */

loc_0055D537: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0055D542u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055D542: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D554; /* je: equal / zero */

loc_0055D549: ;
    ecx = eax;
    PUSH32(esp, 0x0055D550u); RECOMP_ABI_CALL(0x0055DDEEu, sub_0055DDEE); /* call 0x0055DDEE */

loc_0055D550: ;
    esi = eax;
    goto loc_0055D556;

loc_0055D554: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055D556: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D55E; /* jne: not equal / not zero */

loc_0055D55A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0055D55E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x748);
    PUSH32(esp, 0x0055D56Eu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055D56E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D57F; /* je: equal / zero */

loc_0055D575: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0055D57Du); RECOMP_ABI_CALL(0x0055D4DCu, sub_0055D4DC); /* call 0x0055D4DC */

loc_0055D57D: ;
    goto loc_0055D581;

loc_0055D57F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055D581: ;
    MEM32(0x9153E4) = eax;

loc_0055D586: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055D588
 * Original: 0x0055D588 - 0x0055D5A6 (30 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D588(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D588: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x40);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    PUSH32(esp, 0x0055D599u); RECOMP_ABI_CALL(0x0055D73Cu, sub_0055D73C); /* call 0x0055D73C */

loc_0055D599: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D5A6
 * Original: 0x0055D5A6 - 0x0055D658 (178 bytes, 71 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055D5A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D5A6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055D5CD; /* je: equal / zero */

loc_0055D5B7: ;
    ecx = ZX8(MEM8(eax + 0x34));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055D64A; /* je: equal / zero */

loc_0055D5C3: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055D624; /* je: equal / zero */

loc_0055D5C6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055D5E8; /* je: equal / zero */

loc_0055D5C9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055D5D8; /* je: equal / zero */

loc_0055D5CC: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0055D5CD: ;
    eax = MEM32(ebp + 8);

loc_0055D5D0: ;
    MEM32(eax) = esi;

loc_0055D5D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_0055D5D8: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D5E1u); RECOMP_ABI_CALL(0x0055D010u, sub_0055D010); /* call 0x0055D010 */

loc_0055D5E1: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0055D5D2;

loc_0055D5E8: ;
    edi = MEM32(eax + 0x38);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D5F6u); RECOMP_ABI_CALL(0x0057697Bu, sub_0057697B); /* call 0x0057697B */

loc_0055D5F6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055D5CD; /* jle: less or equal (signed <=) */

loc_0055D5FA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D5FFu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0055D5FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D5CD; /* je: equal / zero */

loc_0055D603: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x55D25C);
    ecx = ebp + -4;

loc_0055D60C: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D615u); RECOMP_ABI_CALL(0x000277FBu, sub_000277FB); /* call 0x000277FB */

loc_0055D615: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_0055D5D0; /* jle: less or equal (signed <=) */

loc_0055D61C: ;
    MEM32(eax) = 1;
    goto loc_0055D5D2;

loc_0055D624: ;
    edi = MEM32(eax + 0x38);
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D632u); RECOMP_ABI_CALL(0x0057697Bu, sub_0057697B); /* call 0x0057697B */

loc_0055D632: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055D5CD; /* jle: less or equal (signed <=) */

loc_0055D636: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D63Bu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0055D63B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D5CD; /* je: equal / zero */

loc_0055D63F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x55D24C);
    ecx = ebp + -12;
    goto loc_0055D60C;

loc_0055D64A: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD40Cu;
    goto loc_0055D5D2;

}

/**
 * sub_0055D658
 * Original: 0x0055D658 - 0x0055D6C9 (113 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055D658(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D658: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D6BA; /* je: equal / zero */

loc_0055D666: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D6AF; /* jne: not equal / not zero */

loc_0055D66C: ;
    esi = MEM32(eax + 8);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D67Au); RECOMP_ABI_CALL(0x0057697Bu, sub_0057697B); /* call 0x0057697B */

loc_0055D67A: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0055D685; /* jg: greater (signed >) */

loc_0055D67E: ;
    eax = MEM32(ebp + 8);

loc_0055D681: ;
    MEM32(eax) = edi;
    goto loc_0055D6C3;

loc_0055D685: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D68Au); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0055D68A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D67E; /* je: equal / zero */

loc_0055D68E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x55D24C);
    PUSH32(esp, esi);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D6A0u); RECOMP_ABI_CALL(0x000277FBu, sub_000277FB); /* call 0x000277FB */

loc_0055D6A0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_0055D681; /* jle: less or equal (signed <=) */

loc_0055D6A7: ;
    MEM32(eax) = 1;
    goto loc_0055D6C3;

loc_0055D6AF: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD40Du;
    goto loc_0055D6C3;

loc_0055D6BA: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0x2B99;

loc_0055D6C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D6C9
 * Original: 0x0055D6C9 - 0x0055D6EC (35 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D6C9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D6C9: ;
    ecx = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D6E3; /* je: equal / zero */

loc_0055D6D3: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D6E0; /* je: equal / zero */

loc_0055D6D9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0055D6E0u); RECOMP_ABI_CALL(0x0055D762u, sub_0055D762); /* call 0x0055D762 */

loc_0055D6E0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0055D6E3: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D70F
 * Original: 0x0055D70F - 0x0055D72E (31 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D70F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D70F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D725; /* je: equal / zero */

loc_0055D717: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0055D722u); RECOMP_ABI_CALL(0x0055D7A8u, sub_0055D7A8); /* call 0x0055D7A8 */

loc_0055D722: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0055D725: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D72E
 * Original: 0x0055D72E - 0x0055D73C (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D72E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D72E: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D73B; /* je: equal / zero */

loc_0055D734: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0055D73Bu); RECOMP_ABI_CALL(0x0055D7C9u, sub_0055D7C9); /* call 0x0055D7C9 */

loc_0055D73B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055D73C
 * Original: 0x0055D73C - 0x0055D762 (38 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D73C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D73C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055D744u); RECOMP_ABI_CALL(0x0055797Fu, sub_0055797F); /* call 0x0055797F */

loc_0055D744: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D75C; /* je: equal / zero */

loc_0055D74B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D75C; /* je: equal / zero */

loc_0055D74F: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055D75Au); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055D75A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055D75C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D762
 * Original: 0x0055D762 - 0x0055D785 (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D762(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D762: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055D76Au); RECOMP_ABI_CALL(0x005667AEu, sub_005667AE); /* call 0x005667AE */

loc_0055D76A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D77F; /* je: equal / zero */

loc_0055D771: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D77F; /* je: equal / zero */

loc_0055D775: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055D77Du); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055D77D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055D77F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D785
 * Original: 0x0055D785 - 0x0055D7A8 (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D785(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D785: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055D78Du); RECOMP_ABI_CALL(0x005669BEu, sub_005669BE); /* call 0x005669BE */

loc_0055D78D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D7A2; /* je: equal / zero */

loc_0055D794: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D7A2; /* je: equal / zero */

loc_0055D798: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055D7A0u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055D7A0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055D7A2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D7A8
 * Original: 0x0055D7A8 - 0x0055D7C9 (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D7A8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D7A8: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0055D7C3; /* je: equal / zero */

loc_0055D7B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D7C3; /* je: equal / zero */

loc_0055D7B6: ;
    PUSH32(esp, 0xE8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055D7C1u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055D7C1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055D7C3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D7C9
 * Original: 0x0055D7C9 - 0x0055D7EC (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D7C9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D7C9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055D7D1u); RECOMP_ABI_CALL(0x0055DDF1u, sub_0055DDF1); /* call 0x0055DDF1 */

loc_0055D7D1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D7E6; /* je: equal / zero */

loc_0055D7D8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D7E6; /* je: equal / zero */

loc_0055D7DC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055D7E4u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055D7E4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055D7E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D9F0
 * Original: 0x0055D9F0 - 0x0055D9F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D9F0(void)
{

loc_0055D9F0: ;
    eax = 0x915794;
    esp += 4; return; /* ret */

}

/**
 * sub_0055D9F6
 * Original: 0x0055D9F6 - 0x0055DA62 (108 bytes, 39 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055D9F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D9F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xB0);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DA0Cu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055DA0C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DA1E; /* je: equal / zero */

loc_0055DA13: ;
    PUSH32(esp, MEM32(esi));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DA1Cu); RECOMP_ABI_CALL(0x00564DD6u, sub_00564DD6); /* call 0x00564DD6 */

loc_0055DA1C: ;
    goto loc_0055DA20;

loc_0055DA1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055DA20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0055DA35; /* jne: not equal / not zero */

loc_0055DA2A: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD3E1u;
    goto loc_0055DA5E;

loc_0055DA35: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DA3Eu); RECOMP_ABI_CALL(0x005A23FEu, sub_005A23FE); /* call 0x005A23FE */

loc_0055DA3E: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DA4Bu); RECOMP_ABI_CALL(0x0056420Bu, sub_0056420B); /* call 0x0056420B */

loc_0055DA4B: ;
    eax = MEM32(ebp + 8);
    MEM8(0x915749) = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 1;

loc_0055DA5E: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055DA62
 * Original: 0x0055DA62 - 0x0055DAC8 (102 bytes, 37 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055DA62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DA62: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xB0);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DA78u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055DA78: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DA8A; /* je: equal / zero */

loc_0055DA7F: ;
    PUSH32(esp, MEM32(esi));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DA88u); RECOMP_ABI_CALL(0x00564DD6u, sub_00564DD6); /* call 0x00564DD6 */

loc_0055DA88: ;
    goto loc_0055DA8C;

loc_0055DA8A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055DA8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0055DAA1; /* jne: not equal / not zero */

loc_0055DA96: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD3E1u;
    goto loc_0055DAC4;

loc_0055DAA1: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + 0x18;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DAB1u); RECOMP_ABI_CALL(0x0056420Bu, sub_0056420B); /* call 0x0056420B */

loc_0055DAB1: ;
    eax = MEM32(ebp + 8);
    MEM8(0x915749) = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 1;

loc_0055DAC4: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0055DAC8
 * Original: 0x0055DAC8 - 0x0055DB00 (56 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DAC8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DAC8: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DADC; /* jne: not equal / not zero */

loc_0055DAD0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFD3D9u;
    goto loc_0055DAFD;

loc_0055DADC: ;
    eax = ecx + 0x8C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DAEC; /* je: equal / zero */

loc_0055DAE7: ;
    eax = MEM32(eax);
    MEM32(eax + 0x34) = MEM32(eax + 0x34) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0055DAEC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0055DAF3u); RECOMP_ABI_CALL(0x0055F6FDu, sub_0055F6FD); /* call 0x0055F6FD */

loc_0055DAF3: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;

loc_0055DAFD: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055DB00
 * Original: 0x0055DB00 - 0x0055DB68 (104 bytes, 42 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055DB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DB00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x6C);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DB13u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055DB13: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DB25; /* je: equal / zero */

loc_0055DB1A: ;
    PUSH32(esp, MEM32(esi));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DB23u); RECOMP_ABI_CALL(0x0055FCE8u, sub_0055FCE8); /* call 0x0055FCE8 */

loc_0055DB23: ;
    goto loc_0055DB27;

loc_0055DB25: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055DB27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(ebp + 0x14);
    MEM32(edx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055DB3B; /* jne: not equal / not zero */

loc_0055DB30: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD3E3u;
    goto loc_0055DB63;

loc_0055DB3B: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(edx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x30);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DB5Au); RECOMP_ABI_CALL(0x0055D9F6u, sub_0055D9F6); /* call 0x0055D9F6 */

loc_0055DB5A: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;

loc_0055DB63: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055DB68
 * Original: 0x0055DB68 - 0x0055DBF5 (141 bytes, 41 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055DB68(void)
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

loc_0055DB68: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(0x915710)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x915710), 0x80 (8-bit) */
    MEM8(0x91578C) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0055DBB0; /* je: equal / zero */

loc_0055DB7E: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DB87u); RECOMP_ABI_CALL(0x0075D2B0u, sub_0075D2B0); /* call 0x0075D2B0 */

loc_0055DB87: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 1 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7C40B8)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DB98; /* je: equal / zero */

loc_0055DB95: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0055DB98: ;
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DBB0u); RECOMP_ABI_CALL(0x0075DD70u, sub_0075DD70); /* call 0x0075DD70 */

loc_0055DBB0: ;
    eax = MEM32(0x91572C);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DBBDu); RECOMP_ABI_CALL(0x007630E0u, sub_007630E0); /* call 0x007630E0 */

loc_0055DBBD: ;
    eax = MEM32(0x915730);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DBC9u); RECOMP_ABI_CALL(0x007630E0u, sub_007630E0); /* call 0x007630E0 */

loc_0055DBC9: ;
    esi = MEM32(0x91572C);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DBD6u); RECOMP_ABI_CALL(0x0075C060u, sub_0075C060); /* call 0x0075C060 */

loc_0055DBD6: ;
    MEM32(esi) = eax;
    esi = MEM32(0x915730);
    PUSH32(esp, 0xFFFFFFFFu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DBE5u); RECOMP_ABI_CALL(0x0075C060u, sub_0075C060); /* call 0x0075C060 */

loc_0055DBE5: ;
    MEM32(esi) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0055DBF5
 * Original: 0x0055DBF5 - 0x0055DC98 (163 bytes, 40 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DBF5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DBF5: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM8(0x91578C) = LO8(ebx);
    PUSH32(esp, 0x0055DC04u); RECOMP_ABI_CALL(0x00760A00u, sub_00760A00); /* call 0x00760A00 */

loc_0055DC04: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0x0055DC0Eu); RECOMP_ABI_CALL(0x0075EC00u, sub_0075EC00); /* call 0x0075EC00 */

loc_0055DC0E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0055DC14u); RECOMP_ABI_CALL(0x0075E7C0u, sub_0075E7C0); /* call 0x0075E7C0 */

loc_0055DC14: ;
    MEM8(0x784CD9) = MEM8(0x784CD9) | 0x12;
    _fa = (uint32_t)(MEM8(0x784CD9)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    MEM32(0x785078) = ebx;
    PUSH32(esp, 0x0055DC27u); RECOMP_ABI_CALL(0x0075EB50u, sub_0075EB50); /* call 0x0075EB50 */

loc_0055DC27: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0055DC2Du); RECOMP_ABI_CALL(0x0075FBA0u, sub_0075FBA0); /* call 0x0075FBA0 */

loc_0055DC2D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4147C;
    PUSH32(esp, 0x0055DC39u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0055DC39: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40338;
    MEM32(0x78502C) = ebx;
    PUSH32(esp, 0x0055DC4Bu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0055DC4B: ;
    PUSH32(esp, 4);
    POP32(esp, edx);
    ecx = 0x409F8;
    MEM32(0x785024) = ebx;
    PUSH32(esp, 0x0055DC5Eu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0055DC5E: ;
    PUSH32(esp, ebx);
    MEM32(0x785010) = 4;
    PUSH32(esp, 0x0055DC6Eu); RECOMP_ABI_CALL(0x0075EAD0u, sub_0075EAD0); /* call 0x0075EAD0 */

loc_0055DC6E: ;
    PUSH32(esp, 0x0055DC73u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0055DC73: ;
    ecx = eax;
    PUSH32(esp, 0x0055DC7Au); RECOMP_ABI_CALL(0x00574E23u, sub_00574E23); /* call 0x00574E23 */

loc_0055DC7A: ;
    MEM32(0x9153DC) = MEM32(0x9153DC) + 1;
    _fa = (uint32_t)(MEM32(0x9153DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x9153E8);
    PUSH32(esp, 0x0055DC8Au); RECOMP_ABI_CALL(0x0075A980u, sub_0075A980); /* call 0x0075A980 */

loc_0055DC8A: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055DC98
 * Original: 0x0055DC98 - 0x0055DCB8 (32 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DC98(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DC98: ;
    PUSH32(esp, 0x0055DC9Du); RECOMP_ABI_CALL(0x0075ADE0u, sub_0075ADE0); /* call 0x0075ADE0 */

loc_0055DC9D: ;
    PUSH32(esp, 0x0055DCA2u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0055DCA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DCAD; /* je: equal / zero */

loc_0055DCA6: ;
    ecx = eax;
    PUSH32(esp, 0x0055DCADu); RECOMP_ABI_CALL(0x0057524Eu, sub_0057524E); /* call 0x0057524E */

loc_0055DCAD: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0055DCB8
 * Original: 0x0055DCB8 - 0x0055DDAA (242 bytes, 78 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055DCB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DCB8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0055DCDF; /* jne: not equal / not zero */

loc_0055DCD3: ;
    MEM32(ebp + -4) = 0xFFFFD3D2u;
    goto loc_0055DD9C;

loc_0055DCDF: ;
    _fa = (uint32_t)(MEM8(edi + 0x3C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x3C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DCF8; /* je: equal / zero */

loc_0055DCE4: ;
    _fa = (uint32_t)(MEM8(0x915770)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x915770), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DCF8; /* jne: not equal / not zero */

loc_0055DCEC: ;
    MEM32(ebp + -4) = 0xFFFFD409u;
    goto loc_0055DD9C;

loc_0055DCF8: ;
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x38), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DD95; /* jne: not equal / not zero */

loc_0055DD01: ;
    PUSH32(esp, esi);
    MEM32(ebp + 0xC) = ebx;
    esi = edi + 0x20;

loc_0055DD08: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DD43; /* je: equal / zero */

loc_0055DD0E: ;
    MEM32(eax + 0x38) = MEM32(eax + 0x38) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x38), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DD41; /* jne: not equal / not zero */

loc_0055DD18: ;
    _fa = (uint32_t)(MEM8(eax + 0x3C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DD41; /* je: equal / zero */

loc_0055DD1D: ;
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    MEM8(0x915770) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DD31u); RECOMP_ABI_CALL(0x0055DCB8u, sub_0055DCB8); /* call 0x0055DCB8 */

loc_0055DD31: ;
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(0x915770) = LO8(ebx);
    MEM32(ebp + -4) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0055DD51; /* jle: less or equal (signed <=) */

loc_0055DD41: ;
    MEM32(esi) = ebx;

loc_0055DD43: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055DD08; /* jb: below (unsigned <) */

loc_0055DD4F: ;
    goto loc_0055DD6A;

loc_0055DD51: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(edi + eax * 4 + 0x20);
    MEM32(eax + 0x38) = MEM32(eax + 0x38) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD3EEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFD3EEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DD6A; /* jne: not equal / not zero */

loc_0055DD63: ;
    MEM32(ebp + -4) = 0xFFFFD3EFu;

loc_0055DD6A: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_0055DD9C; /* jle: less or equal (signed <=) */

loc_0055DD70: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055DD7C; /* jle: less or equal (signed <=) */

loc_0055DD75: ;
    MEM32(ebp + -4) = 0xFFFFD3EDu;

loc_0055DD7C: ;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x34), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055DD8A; /* jle: less or equal (signed <=) */

loc_0055DD81: ;
    MEM32(ebp + -4) = 0xFFFFD3EEu;
    goto loc_0055DD9C;

loc_0055DD8A: ;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DD93u); RECOMP_ABI_CALL(0x0055F66Eu, sub_0055F66E); /* call 0x0055F66E */

loc_0055DD93: ;
    goto loc_0055DD9C;

loc_0055DD95: ;
    MEM32(ebp + -4) = 0xFFFFD3F0u;

loc_0055DD9C: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055DDAA
 * Original: 0x0055DDAA - 0x0055DDD5 (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055DDAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0055DDAA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + 0x10);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM8(0x915770) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DDC4u); RECOMP_ABI_CALL(0x0055DCB8u, sub_0055DCB8); /* call 0x0055DCB8 */

loc_0055DDC4: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM8(0x915770) = 0;
    MEM32(eax) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055DDD5
 * Original: 0x0055DDD5 - 0x0055DDEE (25 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DDD5(void)
{

loc_0055DDD5: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x915730);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055DDEE
 * Original: 0x0055DDEE - 0x0055DDF1 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DDEE(void)
{

loc_0055DDEE: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0055DDF1
 * Original: 0x0055DDF1 - 0x0055DDF2 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DDF1(void)
{

loc_0055DDF1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055DDF2
 * Original: 0x0055DDF2 - 0x0055DE76 (132 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DDF2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DDF2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x11);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x9156E8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x91572C) = edx;
    MEM32(0x915730) = edx;
    MEM32(0x915734) = edx;
    MEM32(0x915740) = edx;
    MEM32(0x915744) = edx;
    MEM32(0x9156E8) = 0x280;
    MEM32(0x9156EC) = 0x1E0;
    MEM32(0x9156F0) = 0x12;
    MEM32(0x9156F4) = ecx;
    MEM32(0x915708) = ecx;
    MEM32(0x91570C) = 0x2A;
    MEM32(0x9156FC) = ecx;
    MEM32(0x9156F8) = 0x11;
    MEM32(0x915718) = edx;
    MEM32(eax) = ecx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055DE76
 * Original: 0x0055DE76 - 0x0055DE89 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DE76(void)
{

loc_0055DE76: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x915790);
    MEM32(eax + 0x30) = ecx;
    MEM32(0x915790) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0055DE89
 * Original: 0x0055DE89 - 0x0055DEB4 (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DE89(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DE89: ;
    PUSH32(esp, esi);
    esi = MEM32(0x915790);
    goto loc_0055DEAE;

loc_0055DE92: ;
    ecx = esi;
    PUSH32(esp, 0x0055DE99u); RECOMP_ABI_CALL(0x00563D17u, sub_00563D17); /* call 0x00563D17 */

loc_0055DE99: ;
    PUSH32(esp, 0x0055DE9Eu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0055DE9E: ;
    PUSH32(esp, 0x0055DEA3u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_0055DEA3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0055DEABu); RECOMP_ABI_CALL(0x00563CE0u, sub_00563CE0); /* call 0x00563CE0 */

loc_0055DEAB: ;
    esi = MEM32(esi + 0x30);

loc_0055DEAE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DE92; /* jne: not equal / not zero */

loc_0055DEB2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055DEB4
 * Original: 0x0055DEB4 - 0x0055DECD (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DEB4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DEB4: ;
    PUSH32(esp, esi);
    esi = MEM32(0x915790);
    goto loc_0055DEC7;

loc_0055DEBD: ;
    ecx = esi;
    PUSH32(esp, 0x0055DEC4u); RECOMP_ABI_CALL(0x00563DB3u, sub_00563DB3); /* call 0x00563DB3 */

loc_0055DEC4: ;
    esi = MEM32(esi + 0x30);

loc_0055DEC7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DEBD; /* jne: not equal / not zero */

loc_0055DECB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055DEE1
 * Original: 0x0055DEE1 - 0x0055DF58 (119 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055DEE1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DEE1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x300;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = esi;
    eax = ebp + -768;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0055DEFB: ;
    eax = ebp + ecx + -768;
    SET_LO8(edx, MEM8(edi + eax));
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(esi + ecx + 0x100));
    MEM8(eax + 0x100) = LO8(edx);
    SET_LO8(edx, MEM8(esi + ecx + 0x200));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    MEM8(eax + 0x200) = LO8(edx);
    if (CMP_L(_fas, _fbs)) goto loc_0055DEFB; /* jl: less (signed <) */

loc_0055DF2A: ;
    _fa = (uint32_t)(MEM32(0x915744)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915744), 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055DF4E; /* je: equal / zero */

loc_0055DF35: ;
    eax = ebp + -768;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DF43u); RECOMP_ABI_CALL(0x0075A8F0u, sub_0075A8F0); /* call 0x0075A8F0 */

loc_0055DF43: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_0055DF54;

loc_0055DF4E: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055DF54: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055DF58
 * Original: 0x0055DF58 - 0x0055E017 (191 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055DF58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DF58: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x300;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xFF000000u;
    esi = 0xFF;

loc_0055DF76: ;
    edx = ZX8(MEM8(eax + 0x9153E8));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 0xC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) edx = esi; /* cmovne */
    MEM8(ebp + eax + -768) = LO8(edx);
    edx = ZX8(MEM8(eax + 0x9154E8));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) edx = esi; /* cmovne */
    MEM8(ebp + eax + -512) = LO8(edx);
    edx = ZX8(MEM8(eax + 0x9155E8));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) edx = esi; /* cmovne */
    MEM8(ebp + eax + -256) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055DF76; /* jl: less (signed <) */

loc_0055DFEA: ;
    _fa = (uint32_t)(MEM32(0x915744)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915744), 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055E00D; /* je: equal / zero */

loc_0055DFF4: ;
    eax = ebp + -768;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E002u); RECOMP_ABI_CALL(0x0075A8F0u, sub_0075A8F0); /* call 0x0075A8F0 */

loc_0055E002: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    goto loc_0055E013;

loc_0055E00D: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055E013: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055E017
 * Original: 0x0055E017 - 0x0055E033 (28 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E017(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E017: ;
    PUSH32(esp, esi);
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    esi = MEM32(esp + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3A);
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ecx + edx * 4 + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E033
 * Original: 0x0055E033 - 0x0055E04F (28 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E033(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E033: ;
    PUSH32(esp, esi);
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    esi = MEM32(esp + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3A);
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    ecx = ecx + edx * 4 + 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E04F
 * Original: 0x0055E04F - 0x0055E06B (28 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E04F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E04F: ;
    eax = MEM32(0x915710);
    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(edx) = LO8(eax);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E06B
 * Original: 0x0055E06B - 0x0055E084 (25 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E06B(void)
{

loc_0055E06B: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(0x8DBEDC));
    MEM8(eax) = LO8(ecx);
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E084
 * Original: 0x0055E084 - 0x0055E0E4 (96 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E084(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E084: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x8DBEDC) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0055E09F; /* jne: not equal / not zero */

loc_0055E091: ;
    MEM32(0x915714) = MEM32(0x915714) & 0;
    _fa = (uint32_t)(MEM32(0x915714)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x80000000u;
    goto loc_0055E0C1;

loc_0055E09F: ;
    eax = MEM32(0x8DBEE0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055E0BF; /* je: equal / zero */

loc_0055E0A7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055E0BB; /* je: equal / zero */

loc_0055E0AA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055E0B6; /* je: equal / zero */

loc_0055E0AD: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0055E0E1;

loc_0055E0B6: ;
    PUSH32(esp, 4);

loc_0055E0B8: ;
    POP32(esp, eax);
    goto loc_0055E0C1;

loc_0055E0BB: ;
    PUSH32(esp, 2);
    goto loc_0055E0B8;

loc_0055E0BF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055E0C1: ;
    ecx = MEM32(0x784CD8);
    MEM32(0x915718) = eax;
    MEM32(0x7850DC) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x784CD8) = ecx;
    MEM32(eax) = 1;

loc_0055E0E1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E0FD
 * Original: 0x0055E0FD - 0x0055E11E (33 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E0FD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E0FD: ;
    eax = MEM32(esp + 8);
    MEM32(0x8DBEE0) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x8DBEDC));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0055E117u); RECOMP_ABI_CALL(0x0055E084u, sub_0055E084); /* call 0x0055E084 */

loc_0055E117: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E11E
 * Original: 0x0055E11E - 0x0055E289 (363 bytes, 110 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055E11E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E11E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E130u); RECOMP_ABI_CALL(0x005600D7u, sub_005600D7); /* call 0x005600D7 */

loc_0055E130: ;
    POP32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E136u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0055E136: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E153; /* je: equal / zero */

loc_0055E13C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x55D24C);
    PUSH32(esp, MEM32(0x91577C));
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E153u); RECOMP_ABI_CALL(0x0002F762u, sub_0002F762); /* call 0x0002F762 */

loc_0055E153: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E15Cu); RECOMP_ABI_CALL(0x0055DC98u, sub_0055DC98); /* call 0x0055DC98 */

loc_0055E15C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    ecx = MEM32(0x915774);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E170; /* je: equal / zero */

loc_0055E16A: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E170u); RECOMP_ABI_CALL(0x0001AF7Eu, sub_0001AF7E); /* call 0x0001AF7E */

loc_0055E170: ;
    ecx = MEM32(0x915778);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x915774) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E186; /* je: equal / zero */

loc_0055E180: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E186u); RECOMP_ABI_CALL(0x0001AF7Eu, sub_0001AF7E); /* call 0x0001AF7E */

loc_0055E186: ;
    ecx = MEM32(0x916890);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x915778) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E19C; /* je: equal / zero */

loc_0055E196: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E19Cu); RECOMP_ABI_CALL(0x0055F691u, sub_0055F691); /* call 0x0055F691 */

loc_0055E19C: ;
    ecx = MEM32(0x916894);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x916890) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E1B2; /* je: equal / zero */

loc_0055E1AC: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E1B2u); RECOMP_ABI_CALL(0x0055F6B4u, sub_0055F6B4); /* call 0x0055F6B4 */

loc_0055E1B2: ;
    ecx = MEM32(0x91689C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x916894) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E1C8; /* je: equal / zero */

loc_0055E1C2: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E1C8u); RECOMP_ABI_CALL(0x0055F691u, sub_0055F691); /* call 0x0055F691 */

loc_0055E1C8: ;
    ecx = MEM32(0x9168A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x91689C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E1DE; /* je: equal / zero */

loc_0055E1D8: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E1DEu); RECOMP_ABI_CALL(0x0055F6B4u, sub_0055F6B4); /* call 0x0055F6B4 */

loc_0055E1DE: ;
    MEM32(0x9168A0) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E1E9u); RECOMP_ABI_CALL(0x00561155u, sub_00561155); /* call 0x00561155 */

loc_0055E1E9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E1EEu); RECOMP_ABI_CALL(0x0055DEB4u, sub_0055DEB4); /* call 0x0055DEB4 */

loc_0055E1EE: ;
    ecx = MEM32(0x915734);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E1FE; /* je: equal / zero */

loc_0055E1F8: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E1FEu); RECOMP_ABI_CALL(0x0055F66Eu, sub_0055F66E); /* call 0x0055F66E */

loc_0055E1FE: ;
    ecx = MEM32(0x915730);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x915734) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E214; /* je: equal / zero */

loc_0055E20E: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E214u); RECOMP_ABI_CALL(0x0055F66Eu, sub_0055F66E); /* call 0x0055F66E */

loc_0055E214: ;
    ecx = MEM32(0x91572C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x915730) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E22A; /* je: equal / zero */

loc_0055E224: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E22Au); RECOMP_ABI_CALL(0x0055F66Eu, sub_0055F66E); /* call 0x0055F66E */

loc_0055E22A: ;
    _fa = (uint32_t)(MEM32(0x915744)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915744), ebx (32-bit) */
    MEM32(0x91572C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E248; /* je: equal / zero */

loc_0055E238: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E23Du); RECOMP_ABI_CALL(0x0075DC40u, sub_0075DC40); /* call 0x0075DC40 */

loc_0055E23D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E242u); RECOMP_ABI_CALL(0x0075ADA0u, sub_0075ADA0); /* call 0x0075ADA0 */

loc_0055E242: ;
    MEM32(0x915744) = ebx;

loc_0055E248: ;
    _fa = (uint32_t)(MEM32(0x915740)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915740), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E256; /* je: equal / zero */

loc_0055E250: ;
    MEM32(0x915740) = ebx;

loc_0055E256: ;
    MEM8(0x915748) = LO8(ebx);
    MEM8(edi + 4) = 1;
    ecx = MEM32(0x9153E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E270; /* je: equal / zero */

loc_0055E26A: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E270u); RECOMP_ABI_CALL(0x0055F6D7u, sub_0055F6D7); /* call 0x0055F6D7 */

loc_0055E270: ;
    PUSH32(esp, ebx);
    MEM32(0x9153E4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E27Cu); RECOMP_ABI_CALL(0x0057496Cu, sub_0057496C); /* call 0x0057496C */

loc_0055E27C: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ecx);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055E289
 * Original: 0x0055E289 - 0x0055E398 (271 bytes, 91 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055E289(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E289: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = ecx;
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E383; /* je: equal / zero */

loc_0055E2A2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xB0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E2B0u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055E2B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E2C2; /* je: equal / zero */

loc_0055E2B7: ;
    PUSH32(esp, MEM32(esi));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E2C0u); RECOMP_ABI_CALL(0x00564DD6u, sub_00564DD6); /* call 0x00564DD6 */

loc_0055E2C0: ;
    goto loc_0055E2C4;

loc_0055E2C2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055E2C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = MEM32(ebp + 0x14);
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055E2D9; /* jne: not equal / not zero */

loc_0055E2CD: ;
    MEM32(ebp + 0x14) = 0xFFFFFF9Eu;
    goto loc_0055E379;

loc_0055E2D9: ;
    PUSH32(esp, MEM32(edi + 0x18));
    ecx = ebp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E2E7u); RECOMP_ABI_CALL(0x00564995u, sub_00564995); /* call 0x00564995 */

loc_0055E2E7: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0055E379; /* jle: less or equal (signed <=) */

loc_0055E2F4: ;
    eax = edi + 0x8C;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E30D; /* je: equal / zero */

loc_0055E300: ;
    edx = MEM32(esi);
    MEM32(edx + 0x8C) = ecx;
    eax = MEM32(eax);
    MEM32(eax + 0x34) = MEM32(eax + 0x34) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0055E30D: ;
    _fa = (uint32_t)(MEM8(edi + 0x80)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x80), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E379; /* je: equal / zero */

loc_0055E315: ;
    _fa = (uint32_t)(MEM32(edi + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x84), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E358; /* jne: not equal / not zero */

loc_0055E31D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x876C06);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E32Au); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0055E32A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edi + 0x84) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055E352; /* jne: not equal / not zero */

loc_0055E337: ;
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(ebp + -4);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E345u); RECOMP_ABI_CALL(0x0055DAC8u, sub_0055DAC8); /* call 0x0055DAC8 */

loc_0055E345: ;
    eax = MEM32(ebp + 8);
    MEM32(esi) = ebx;
    MEM32(eax) = 0xFFFFFF9Eu;
    goto loc_0055E391;

loc_0055E352: ;
    MEM32(eax) = 1;

loc_0055E358: ;
    eax = MEM32(esi);
    MEM8(eax + 0x80) = 1;
    eax = MEM32(esi);
    ecx = MEM32(edi + 0x84);
    MEM32(eax + 0x84) = ecx;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x84);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0055E379: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    goto loc_0055E391;

loc_0055E383: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ebx;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD3D4u;

loc_0055E391: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055E398
 * Original: 0x0055E398 - 0x0055E3D1 (57 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055E398(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E398: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E3AE; /* jne: not equal / not zero */

loc_0055E3A3: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD3D9u;
    goto loc_0055E3CC;

loc_0055E3AE: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E3BAu); RECOMP_ABI_CALL(0x0055DAC8u, sub_0055DAC8); /* call 0x0055DAC8 */

loc_0055E3BA: ;
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E3C3u); RECOMP_ABI_CALL(0x0055F723u, sub_0055F723); /* call 0x0055F723 */

loc_0055E3C3: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;

loc_0055E3CC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E3D1
 * Original: 0x0055E3D1 - 0x0055E470 (159 bytes, 46 insns)
 * Category: game_debug
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E3D1(void)
{

loc_0055E3D1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x876F08);
    ecx = esi;
    PUSH32(esp, 0x0055E3E4u); RECOMP_ABI_CALL(0x0055F836u, sub_0055F836); /* call 0x0055F836 */

loc_0055E3E4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x876F14);
    ecx = esi;
    PUSH32(esp, 0x0055E3F2u); RECOMP_ABI_CALL(0x0055F836u, sub_0055F836); /* call 0x0055F836 */

loc_0055E3F2: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x876F20);
    ecx = esi;
    PUSH32(esp, 0x0055E400u); RECOMP_ABI_CALL(0x0055F836u, sub_0055F836); /* call 0x0055F836 */

loc_0055E400: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x876F2C);
    ecx = esi;
    PUSH32(esp, 0x0055E40Eu); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E40E: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x876F3C);
    ecx = esi;
    PUSH32(esp, 0x0055E41Cu); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E41C: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x876F4C);
    ecx = esi;
    PUSH32(esp, 0x0055E42Au); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E42A: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x876F5C);
    ecx = esi;
    PUSH32(esp, 0x0055E438u); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E438: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0x876F68);
    ecx = esi;
    PUSH32(esp, 0x0055E446u); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E446: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x876F74);
    ecx = esi;
    PUSH32(esp, 0x0055E454u); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E454: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 0x876F80);
    ecx = esi;
    PUSH32(esp, 0x0055E462u); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E462: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E470
 * Original: 0x0055E470 - 0x0055E4BB (75 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E470(void)
{

loc_0055E470: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x876F8C);
    ecx = esi;
    PUSH32(esp, 0x0055E483u); RECOMP_ABI_CALL(0x0055F9AFu, sub_0055F9AF); /* call 0x0055F9AF */

loc_0055E483: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x876F9C);
    ecx = esi;
    PUSH32(esp, 0x0055E491u); RECOMP_ABI_CALL(0x0055F9AFu, sub_0055F9AF); /* call 0x0055F9AF */

loc_0055E491: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x876FAC);
    ecx = esi;
    PUSH32(esp, 0x0055E49Fu); RECOMP_ABI_CALL(0x0055F9AFu, sub_0055F9AF); /* call 0x0055F9AF */

loc_0055E49F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x876FBC);
    ecx = esi;
    PUSH32(esp, 0x0055E4ADu); RECOMP_ABI_CALL(0x0055F9AFu, sub_0055F9AF); /* call 0x0055F9AF */

loc_0055E4AD: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E4BB
 * Original: 0x0055E4BB - 0x0055E592 (215 bytes, 62 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E4BB(void)
{

loc_0055E4BB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x876FD0);
    ecx = esi;
    PUSH32(esp, 0x0055E4CEu); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E4CE: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x876FE0);
    ecx = esi;
    PUSH32(esp, 0x0055E4DCu); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E4DC: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x876FF4);
    ecx = esi;
    PUSH32(esp, 0x0055E4EAu); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E4EA: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x877008);
    ecx = esi;
    PUSH32(esp, 0x0055E4F8u); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E4F8: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x87701C);
    ecx = esi;
    PUSH32(esp, 0x0055E506u); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E506: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x877028);
    ecx = esi;
    PUSH32(esp, 0x0055E514u); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E514: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x877038);
    ecx = esi;
    PUSH32(esp, 0x0055E522u); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E522: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x877048);
    ecx = esi;
    PUSH32(esp, 0x0055E530u); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E530: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x877058);
    ecx = esi;
    PUSH32(esp, 0x0055E53Eu); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E53E: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0x877064);
    ecx = esi;
    PUSH32(esp, 0x0055E54Cu); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E54C: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x877070);
    ecx = esi;
    PUSH32(esp, 0x0055E55Au); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E55A: ;
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0x877080);
    ecx = esi;
    PUSH32(esp, 0x0055E568u); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E568: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x877090);
    ecx = esi;
    PUSH32(esp, 0x0055E576u); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E576: ;
    PUSH32(esp, 0x2B);
    PUSH32(esp, 0x87709C);
    ecx = esi;
    PUSH32(esp, 0x0055E584u); RECOMP_ABI_CALL(0x0055F8F6u, sub_0055F8F6); /* call 0x0055F8F6 */

loc_0055E584: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E592
 * Original: 0x0055E592 - 0x0055E65D (203 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E592(void)
{

loc_0055E592: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x8770A8);
    ecx = esi;
    PUSH32(esp, 0x0055E5A5u); RECOMP_ABI_CALL(0x0055FA6Fu, sub_0055FA6F); /* call 0x0055FA6F */

loc_0055E5A5: ;
    PUSH32(esp, 0x1021);
    PUSH32(esp, 0x8770C0);
    ecx = esi;
    PUSH32(esp, 0x0055E5B6u); RECOMP_ABI_CALL(0x0055FA6Fu, sub_0055FA6F); /* call 0x0055FA6F */

loc_0055E5B6: ;
    PUSH32(esp, 0x1121);
    PUSH32(esp, 0x8770F0);
    ecx = esi;
    PUSH32(esp, 0x0055E5C7u); RECOMP_ABI_CALL(0x0055FA6Fu, sub_0055FA6F); /* call 0x0055FA6F */

loc_0055E5C7: ;
    PUSH32(esp, 0x2021);
    PUSH32(esp, 0x877120);
    ecx = esi;
    PUSH32(esp, 0x0055E5D8u); RECOMP_ABI_CALL(0x0055FA6Fu, sub_0055FA6F); /* call 0x0055FA6F */

loc_0055E5D8: ;
    PUSH32(esp, 0x2012);
    PUSH32(esp, 0x87715C);
    ecx = esi;
    PUSH32(esp, 0x0055E5E9u); RECOMP_ABI_CALL(0x0055FA6Fu, sub_0055FA6F); /* call 0x0055FA6F */

loc_0055E5E9: ;
    PUSH32(esp, 0x1022);
    PUSH32(esp, 0x877194);
    ecx = esi;
    PUSH32(esp, 0x0055E5FAu); RECOMP_ABI_CALL(0x0055FA6Fu, sub_0055FA6F); /* call 0x0055FA6F */

loc_0055E5FA: ;
    PUSH32(esp, 0x1222);
    PUSH32(esp, 0x8771C4);
    ecx = esi;
    PUSH32(esp, 0x0055E60Bu); RECOMP_ABI_CALL(0x0055FA6Fu, sub_0055FA6F); /* call 0x0055FA6F */

loc_0055E60B: ;
    PUSH32(esp, 0x2022);
    PUSH32(esp, 0x8771F4);
    ecx = esi;
    PUSH32(esp, 0x0055E61Cu); RECOMP_ABI_CALL(0x0055FA6Fu, sub_0055FA6F); /* call 0x0055FA6F */

loc_0055E61C: ;
    PUSH32(esp, 0x2222);
    PUSH32(esp, 0x877224);
    ecx = esi;
    PUSH32(esp, 0x0055E62Du); RECOMP_ABI_CALL(0x0055FA6Fu, sub_0055FA6F); /* call 0x0055FA6F */

loc_0055E62D: ;
    PUSH32(esp, 0x1233);
    PUSH32(esp, 0x877254);
    ecx = esi;
    PUSH32(esp, 0x0055E63Eu); RECOMP_ABI_CALL(0x0055FA6Fu, sub_0055FA6F); /* call 0x0055FA6F */

loc_0055E63E: ;
    PUSH32(esp, 0x2233);
    PUSH32(esp, 0x877284);
    ecx = esi;
    PUSH32(esp, 0x0055E64Fu); RECOMP_ABI_CALL(0x0055FA6Fu, sub_0055FA6F); /* call 0x0055FA6F */

loc_0055E64F: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E65D
 * Original: 0x0055E65D - 0x0055E908 (683 bytes, 194 insns)
 * Category: game_debug
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055E65D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E65D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E8E0; /* je: equal / zero */

loc_0055E673: ;
    PUSH32(esp, 0x8DBEF4);
    PUSH32(esp, 0x876C08);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E684u); RECOMP_ABI_CALL(0x0055F746u, sub_0055F746); /* call 0x0055F746 */

loc_0055E684: ;
    PUSH32(esp, 0x8DBEF8);
    PUSH32(esp, 0x876C24);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E695u); RECOMP_ABI_CALL(0x0055F746u, sub_0055F746); /* call 0x0055F746 */

loc_0055E695: ;
    PUSH32(esp, 0x915780);
    PUSH32(esp, 0x876C3C);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E6A6u); RECOMP_ABI_CALL(0x0055F76Au, sub_0055F76A); /* call 0x0055F76A */

loc_0055E6A6: ;
    PUSH32(esp, 0x915784);
    PUSH32(esp, 0x876C5C);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E6B7u); RECOMP_ABI_CALL(0x0055F76Au, sub_0055F76A); /* call 0x0055F76A */

loc_0055E6B7: ;
    PUSH32(esp, 0x915788);
    PUSH32(esp, 0x876C70);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E6C8u); RECOMP_ABI_CALL(0x0055F76Au, sub_0055F76A); /* call 0x0055F76A */

loc_0055E6C8: ;
    PUSH32(esp, 0x9156E8);
    PUSH32(esp, 0x876C84);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E6D9u); RECOMP_ABI_CALL(0x0055F76Au, sub_0055F76A); /* call 0x0055F76A */

loc_0055E6D9: ;
    PUSH32(esp, 0x9156EC);
    PUSH32(esp, 0x876C90);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E6EAu); RECOMP_ABI_CALL(0x0055F76Au, sub_0055F76A); /* call 0x0055F76A */

loc_0055E6EA: ;
    PUSH32(esp, 0x9156F0);
    PUSH32(esp, 0x876CA0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E6FBu); RECOMP_ABI_CALL(0x0055F78Eu, sub_0055F78E); /* call 0x0055F78E */

loc_0055E6FB: ;
    PUSH32(esp, 0x91570C);
    PUSH32(esp, 0x876CB4);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E70Cu); RECOMP_ABI_CALL(0x0055F78Eu, sub_0055F78E); /* call 0x0055F78E */

loc_0055E70C: ;
    PUSH32(esp, 0x8DBEDC);
    PUSH32(esp, 0x876CC8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E71Du); RECOMP_ABI_CALL(0x0055F7A6u, sub_0055F7A6); /* call 0x0055F7A6 */

loc_0055E71D: ;
    PUSH32(esp, 0x8DBEE0);
    PUSH32(esp, 0x876CD4);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E72Eu); RECOMP_ABI_CALL(0x0055F7CAu, sub_0055F7CA); /* call 0x0055F7CA */

loc_0055E72E: ;
    PUSH32(esp, 0x91574A);
    PUSH32(esp, 0x876CE0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E73Fu); RECOMP_ABI_CALL(0x0055F7A6u, sub_0055F7A6); /* call 0x0055F7A6 */

loc_0055E73F: ;
    PUSH32(esp, 0x91574C);
    PUSH32(esp, 0x876CF4);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E750u); RECOMP_ABI_CALL(0x0055F7A6u, sub_0055F7A6); /* call 0x0055F7A6 */

loc_0055E750: ;
    PUSH32(esp, 0x91574B);
    PUSH32(esp, 0x876D00);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E761u); RECOMP_ABI_CALL(0x0055F7A6u, sub_0055F7A6); /* call 0x0055F7A6 */

loc_0055E761: ;
    PUSH32(esp, 0x8DBEE4);
    PUSH32(esp, 0x876D14);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E772u); RECOMP_ABI_CALL(0x0055F7EEu, sub_0055F7EE); /* call 0x0055F7EE */

loc_0055E772: ;
    PUSH32(esp, 0x8DBEE8);
    PUSH32(esp, 0x876D28);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E783u); RECOMP_ABI_CALL(0x0055F7EEu, sub_0055F7EE); /* call 0x0055F7EE */

loc_0055E783: ;
    PUSH32(esp, 0x8DBED4);
    PUSH32(esp, 0x876D3C);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E794u); RECOMP_ABI_CALL(0x0055F76Au, sub_0055F76A); /* call 0x0055F76A */

loc_0055E794: ;
    PUSH32(esp, 0x8DBED8);
    PUSH32(esp, 0x876D4C);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E7A5u); RECOMP_ABI_CALL(0x0055F76Au, sub_0055F76A); /* call 0x0055F76A */

loc_0055E7A5: ;
    PUSH32(esp, 0x915771);
    PUSH32(esp, 0x876D58);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E7B6u); RECOMP_ABI_CALL(0x0055F7A6u, sub_0055F7A6); /* call 0x0055F7A6 */

loc_0055E7B6: ;
    PUSH32(esp, 0x8DBEF0);
    PUSH32(esp, 0x876D70);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E7C7u); RECOMP_ABI_CALL(0x0055F76Au, sub_0055F76A); /* call 0x0055F76A */

loc_0055E7C7: ;
    PUSH32(esp, esi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E7D3u); RECOMP_ABI_CALL(0x0055E3D1u, sub_0055E3D1); /* call 0x0055E3D1 */

loc_0055E7D3: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E7DEu); RECOMP_ABI_CALL(0x005623A3u, sub_005623A3); /* call 0x005623A3 */

loc_0055E7DE: ;
    edi = MEM32(eax);
    PUSH32(esp, 0x876D84);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E7F0u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E7F0: ;
    PUSH32(esp, 0x876DA0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E800u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E800: ;
    PUSH32(esp, 0x876DB8);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E810u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E810: ;
    PUSH32(esp, 0x876DC4);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E820u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E820: ;
    PUSH32(esp, 0x876DD4);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E830u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E830: ;
    PUSH32(esp, 0x876DE8);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E840u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E840: ;
    PUSH32(esp, 0x876DFC);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E850u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E850: ;
    PUSH32(esp, 0x876E08);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E860u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E860: ;
    PUSH32(esp, 0x876E1C);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E870u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E870: ;
    PUSH32(esp, 0x876E28);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E880u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E880: ;
    PUSH32(esp, 0x876E3C);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E890u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E890: ;
    PUSH32(esp, 0x876E50);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E8A0u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E8A0: ;
    PUSH32(esp, 0x876E64);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E8B0u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E8B0: ;
    PUSH32(esp, 0x876E74);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E8C0u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E8C0: ;
    PUSH32(esp, 0x876E80);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E8D0u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E8D0: ;
    PUSH32(esp, 0x876E98);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E8E0u); RECOMP_ABI_CALL(0x005619AEu, sub_005619AE); /* call 0x005619AE */

loc_0055E8E0: ;
    _fa = (uint32_t)(MEM32(0x9156E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9156E8), 0x780 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055E8EE; /* jbe: below or equal (unsigned <=) */

loc_0055E8EC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055E8EE: ;
    _fa = (uint32_t)(MEM32(0x9156EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x438) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9156EC), 0x438 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055E8FC; /* jbe: below or equal (unsigned <=) */

loc_0055E8FA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055E8FC: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E908
 * Original: 0x0055E908 - 0x0055E9C9 (193 bytes, 73 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055E908(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E908: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E9BF; /* je: equal / zero */

loc_0055E91E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    ebx = esi + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x876EAC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E933u); RECOMP_ABI_CALL(0x0055F812u, sub_0055F812); /* call 0x0055F812 */

loc_0055E933: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E940u); RECOMP_ABI_CALL(0x0055E470u, sub_0055E470); /* call 0x0055E470 */

loc_0055E940: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E94Bu); RECOMP_ABI_CALL(0x005623A3u, sub_005623A3); /* call 0x005623A3 */

loc_0055E94B: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E95B; /* jne: not equal / not zero */

loc_0055E950: ;
    eax = MEM32(0x915734);
    eax = MEM32(eax + 4);
    MEM32(esi + 4) = eax;

loc_0055E95B: ;
    ebx = esi + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x876EBC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E96Bu); RECOMP_ABI_CALL(0x0055F76Au, sub_0055F76A); /* call 0x0055F76A */

loc_0055E96B: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x876ED0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E97Bu); RECOMP_ABI_CALL(0x0055F76Au, sub_0055F76A); /* call 0x0055F76A */

loc_0055E97B: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x876EE4);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E98Bu); RECOMP_ABI_CALL(0x0055F78Eu, sub_0055F78E); /* call 0x0055F78E */

loc_0055E98B: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E998u); RECOMP_ABI_CALL(0x0055E4BBu, sub_0055E4BB); /* call 0x0055E4BB */

loc_0055E998: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E9A5u); RECOMP_ABI_CALL(0x0055E470u, sub_0055E470); /* call 0x0055E470 */

loc_0055E9A5: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E9B0u); RECOMP_ABI_CALL(0x005623A3u, sub_005623A3); /* call 0x005623A3 */

loc_0055E9B0: ;
    ecx = MEM32(eax);
    eax = MEM32(ebx);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0055E9BF: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055E9C9
 * Original: 0x0055E9C9 - 0x0055EA11 (72 bytes, 32 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055E9C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E9C9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EA06; /* je: equal / zero */

loc_0055E9DA: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x876EF8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E9EDu); RECOMP_ABI_CALL(0x0055F78Eu, sub_0055F78E); /* call 0x0055F78E */

loc_0055E9ED: ;
    PUSH32(esp, esi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E9F9u); RECOMP_ABI_CALL(0x0055E4BBu, sub_0055E4BB); /* call 0x0055E4BB */

loc_0055E9F9: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EA04u); RECOMP_ABI_CALL(0x005623A3u, sub_005623A3); /* call 0x005623A3 */

loc_0055EA04: ;
    ecx = MEM32(eax);

loc_0055EA06: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055EA11
 * Original: 0x0055EA11 - 0x0055F051 (1600 bytes, 471 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055EA11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0055EA11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x9153E4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055EFB4; /* je: equal / zero */

loc_0055EA2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EFB4; /* jne: not equal / not zero */

loc_0055EA33: ;
    MEM8(edi + 4) = LO8(ebx);
    _fa = (uint32_t)(MEM8(0x915748)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x915748), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EFEA; /* jne: not equal / not zero */

loc_0055EA42: ;
    ecx = MEM32(edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EA4Du); RECOMP_ABI_CALL(0x0055DDF2u, sub_0055DDF2); /* call 0x0055DDF2 */

loc_0055EA4D: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0055EB5F; /* jle: less or equal (signed <=) */

loc_0055EA55: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(edi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EA63u); RECOMP_ABI_CALL(0x0055E65Du, sub_0055E65D); /* call 0x0055E65D */

loc_0055EA63: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0055EB5F; /* jle: less or equal (signed <=) */

loc_0055EA6B: ;
    _fa = (uint32_t)(MEM32(0x915740)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915740), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EAA1; /* jne: not equal / not zero */

loc_0055EA73: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EA79u); RECOMP_ABI_CALL(0x007634D0u, sub_007634D0); /* call 0x007634D0 */

loc_0055EA79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x915740) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055EA90; /* jne: not equal / not zero */

loc_0055EA82: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD3FAu;
    goto loc_0055EFF3;

loc_0055EA90: ;
    PUSH32(esp, MEM32(0x8DBED8));
    PUSH32(esp, MEM32(0x8DBED4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EAA1u); RECOMP_ABI_CALL(0x0075E180u, sub_0075E180); /* call 0x0075E180 */

loc_0055EAA1: ;
    ecx = MEM32(0x9156E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x500) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x500 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(0x9156EC);
    if (CMP_NE(_fa, _fb)) goto loc_0055EAC5; /* jne: not equal / not zero */

loc_0055EAB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EAEF; /* jne: not equal / not zero */

loc_0055EABB: ;
    MEM32(0x915710) = 0x50;

loc_0055EAC5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x780 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EAEF; /* jne: not equal / not zero */

loc_0055EACD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x438) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x438 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EADE; /* jne: not equal / not zero */

loc_0055EAD4: ;
    MEM32(0x915710) = 0x30;

loc_0055EADE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EAEF; /* jne: not equal / not zero */

loc_0055EAE5: ;
    MEM32(0x915710) = 0xB0;

loc_0055EAEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EB00; /* jne: not equal / not zero */

loc_0055EAF6: ;
    MEM32(0x915710) = 0x80;

loc_0055EB00: ;
    _fa = (uint32_t)(MEM8(0x91574A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91574A), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055EB0F; /* je: equal / zero */

loc_0055EB08: ;
    _cf = 0; /* logical op clears CF */
    MEM32(0x915710) = MEM32(0x915710) | 0x10;
    _fa = (uint32_t)(MEM32(0x915710)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0055EB0F: ;
    _fa = (uint32_t)(MEM8(0x91574B)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x91574B), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055EB26; /* je: equal / zero */

loc_0055EB17: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x280) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x280 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EB26; /* jne: not equal / not zero */

loc_0055EB1F: ;
    _cf = 0; /* logical op clears CF */
    MEM8(0x915711) = MEM8(0x915711) | 1;
    _fa = (uint32_t)(MEM8(0x915711)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0055EB26: ;
    SET_LO8(eax, MEM8(0x91574C));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(0x8DBEDC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8DBEDC), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x915714) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055EB51; /* jne: not equal / not zero */

loc_0055EB3F: ;
    MEM32(0x915714) = ebx;
    MEM32(0x915718) = 0x80000000u;
    goto loc_0055EB79;

loc_0055EB51: ;
    eax = MEM32(0x8DBEE0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055EB72; /* je: equal / zero */

loc_0055EB59: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055EB6E; /* je: equal / zero */

loc_0055EB5C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055EB69; /* je: equal / zero */

loc_0055EB5F: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ebx;
    goto loc_0055EFF3;

loc_0055EB69: ;
    PUSH32(esp, 4);

loc_0055EB6B: ;
    POP32(esp, eax);
    goto loc_0055EB74;

loc_0055EB6E: ;
    PUSH32(esp, 2);
    goto loc_0055EB6B;

loc_0055EB72: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055EB74: ;
    MEM32(0x915718) = eax;

loc_0055EB79: ;
    _fa = (uint32_t)(MEM32(0x915744)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915744), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055EBA8; /* jne: not equal / not zero */

loc_0055EB81: ;
    PUSH32(esp, 0x915744);
    PUSH32(esp, 0x9156E8);
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EB96u); RECOMP_ABI_CALL(0x0075E1A0u, sub_0075E1A0); /* call 0x0075E1A0 */

loc_0055EB96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0055EBEA; /* jge: greater or equal (signed >=) */

loc_0055EB9A: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD3FBu;
    goto loc_0055EFF3;

loc_0055EBA8: ;
    ecx = MEM32(0x915730);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055EBB9; /* je: equal / zero */

loc_0055EBB2: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EBB9u); RECOMP_ABI_CALL(0x0055F66Eu, sub_0055F66E); /* call 0x0055F66E */

loc_0055EBB9: ;
    ecx = MEM32(0x91572C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055EBCA; /* je: equal / zero */

loc_0055EBC3: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EBCAu); RECOMP_ABI_CALL(0x0055F66Eu, sub_0055F66E); /* call 0x0055F66E */

loc_0055EBCA: ;
    ecx = MEM32(0x915734);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055EBDB; /* je: equal / zero */

loc_0055EBD4: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EBDBu); RECOMP_ABI_CALL(0x0055F66Eu, sub_0055F66E); /* call 0x0055F66E */

loc_0055EBDB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EBE0u); RECOMP_ABI_CALL(0x0075DC40u, sub_0075DC40); /* call 0x0075DC40 */

loc_0055EBE0: ;
    PUSH32(esp, 0x9156E8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EBEAu); RECOMP_ABI_CALL(0x0075BC10u, sub_0075BC10); /* call 0x0075BC10 */

loc_0055EBEA: ;
    PUSH32(esp, 0x9153E8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EBF4u); RECOMP_ABI_CALL(0x0075A980u, sub_0075A980); /* call 0x0075A980 */

loc_0055EBF4: ;
    fp_push(MEMF(0x8DBEE8)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x8DBEE4)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EC0Eu); RECOMP_ABI_CALL(0x00760AF0u, sub_00760AF0); /* call 0x00760AF0 */

loc_0055EC0E: ;
    PUSH32(esp, ebx);
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xFF000000u);
    PUSH32(esp, 0xF3);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EC26u); RECOMP_ABI_CALL(0x00761290u, sub_00761290); /* call 0x00761290 */

loc_0055EC26: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EC2Cu); RECOMP_ABI_CALL(0x00760A00u, sub_00760A00); /* call 0x00760A00 */

loc_0055EC2C: ;
    PUSH32(esp, MEM32(0x8DBEF0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EC37u); RECOMP_ABI_CALL(0x0075B060u, sub_0075B060); /* call 0x0075B060 */

loc_0055EC37: ;
    eax = ZX8(MEM8(0x915771));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EC44u); RECOMP_ABI_CALL(0x0075B0B0u, sub_0075B0B0); /* call 0x0075B0B0 */

loc_0055EC44: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x44);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EC4Fu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055EC4F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055EC61; /* je: equal / zero */

loc_0055EC56: ;
    PUSH32(esp, MEM32(edi));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EC5Fu); RECOMP_ABI_CALL(0x00566A26u, sub_00566A26); /* call 0x00566A26 */

loc_0055EC5F: ;
    goto loc_0055EC63;

loc_0055EC61: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055EC63: ;
    PUSH32(esp, ebx);
    MEM32(0x91572C) = eax;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EC70u); RECOMP_ABI_CALL(0x0075C060u, sub_0075C060); /* call 0x0075C060 */

loc_0055EC70: ;
    MEM32(esi) = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = MEM32(0x91572C);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EC82u); RECOMP_ABI_CALL(0x00761130u, sub_00761130); /* call 0x00761130 */

loc_0055EC82: ;
    eax = MEM32(0x91572C);
    MEM32(eax + 0x18) = ebx;
    eax = MEM32(0x91572C);
    MEM8(eax + 0x1C) = 1;
    eax = MEM32(0x91572C);
    ecx = MEM32(ebp + -32);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x91572C);
    ecx = MEM32(ebp + -12);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(0x91572C);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x91572C);
    ecx = MEM32(0x9156E8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0x9156EC);
    eax = MEM32(0x91572C);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(0x91572C);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F034; /* je: equal / zero */

loc_0055ECDE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x44);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055ECE9u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055ECE9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055ECFB; /* je: equal / zero */

loc_0055ECF0: ;
    PUSH32(esp, MEM32(edi));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055ECF9u); RECOMP_ABI_CALL(0x00566A26u, sub_00566A26); /* call 0x00566A26 */

loc_0055ECF9: ;
    goto loc_0055ECFD;

loc_0055ECFB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055ECFD: ;
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(0x915730) = eax;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055ED0Bu); RECOMP_ABI_CALL(0x0075C060u, sub_0075C060); /* call 0x0075C060 */

loc_0055ED0B: ;
    MEM32(esi) = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = MEM32(0x915730);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055ED1Du); RECOMP_ABI_CALL(0x00761130u, sub_00761130); /* call 0x00761130 */

loc_0055ED1D: ;
    eax = MEM32(0x915730);
    MEM32(eax + 0x18) = ebx;
    eax = MEM32(0x915730);
    MEM8(eax + 0x1C) = 1;
    eax = MEM32(0x915730);
    ecx = MEM32(ebp + -32);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x915730);
    ecx = MEM32(ebp + -12);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(0x915730);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x915730);
    ecx = MEM32(0x9156E8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0x9156EC);
    eax = MEM32(0x915730);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(0x915730);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F017; /* je: equal / zero */

loc_0055ED79: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x44);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055ED84u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055ED84: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055ED96; /* je: equal / zero */

loc_0055ED8B: ;
    PUSH32(esp, MEM32(edi));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055ED94u); RECOMP_ABI_CALL(0x00566A26u, sub_00566A26); /* call 0x00566A26 */

loc_0055ED94: ;
    goto loc_0055ED98;

loc_0055ED96: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055ED98: ;
    MEM32(0x915734) = eax;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EDA4u); RECOMP_ABI_CALL(0x0075C7A0u, sub_0075C7A0); /* call 0x0075C7A0 */

loc_0055EDA4: ;
    MEM32(esi) = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = MEM32(0x915734);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EDB6u); RECOMP_ABI_CALL(0x00761130u, sub_00761130); /* call 0x00761130 */

loc_0055EDB6: ;
    eax = MEM32(0x915734);
    MEM32(eax + 0x18) = 3;
    eax = MEM32(0x915734);
    MEM8(eax + 0x1C) = 1;
    eax = MEM32(0x915734);
    ecx = MEM32(ebp + -32);
    MEM32(eax + 4) = ecx;
    eax = MEM32(0x915734);
    ecx = MEM32(ebp + -12);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(0x915734);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(0x915734);
    ecx = MEM32(0x9156E8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0x9156EC);
    eax = MEM32(0x915734);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(0x915734);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055EFFA; /* je: equal / zero */

loc_0055EE16: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x915730);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EE26u); RECOMP_ABI_CALL(0x00561442u, sub_00561442); /* call 0x00561442 */

loc_0055EE26: ;
    PUSH32(esp, MEM32(0x915734));
    ecx = MEM32(0x91572C);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EE3Bu); RECOMP_ABI_CALL(0x00561442u, sub_00561442); /* call 0x00561442 */

loc_0055EE3B: ;
    eax = MEM32(0x91572C);
    eax = MEM32(eax);
    MEM32(0x915738) = eax;
    eax = MEM32(0x915734);
    eax = MEM32(eax);
    PUSH32(esp, 0x11);
    MEM32(0x91573C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EE5Au); RECOMP_ABI_CALL(0x007624C0u, sub_007624C0); /* call 0x007624C0 */

loc_0055EE5A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EE5Fu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0055EE5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055EE7C; /* jne: not equal / not zero */

loc_0055EE63: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EE6Eu); RECOMP_ABI_CALL(0x0055E11Eu, sub_0055E11E); /* call 0x0055E11E */

loc_0055EE6E: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD3DFu;
    goto loc_0055EFF3;

loc_0055EE7C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EE81u); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_0055EE81: ;
    esi = eax;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EE8Au); RECOMP_ABI_CALL(0x00576CFCu, sub_00576CFC); /* call 0x00576CFC */

loc_0055EE8A: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EE90u); RECOMP_ABI_CALL(0x0055CC67u, sub_0055CC67); /* call 0x0055CC67 */

loc_0055EE90: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EE96u); RECOMP_ABI_CALL(0x0056689Eu, sub_0056689E); /* call 0x0056689E */

loc_0055EE96: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EE9Cu); RECOMP_ABI_CALL(0x005669EBu, sub_005669EB); /* call 0x005669EB */

loc_0055EE9C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x56135E);
    PUSH32(esp, 0x561334);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8772B8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EEB7u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0055EEB7: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EEC2u); RECOMP_ABI_CALL(0x0057740Bu, sub_0057740B); /* call 0x0057740B */

loc_0055EEC2: ;
    PUSH32(esp, 0x55CEB6);
    PUSH32(esp, 0x55CC9A);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x876BFC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EEDAu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0055EEDA: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EEE5u); RECOMP_ABI_CALL(0x0057740Bu, sub_0057740B); /* call 0x0057740B */

loc_0055EEE5: ;
    MEM8(0x915748) = 1;
    PUSH32(esp, MEM32(edi));
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EEF7u); RECOMP_ABI_CALL(0x005602D3u, sub_005602D3); /* call 0x005602D3 */

loc_0055EEF7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EF02u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055EF02: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055EF15; /* je: equal / zero */

loc_0055EF09: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax) = ebx;
    ecx = eax;
    goto loc_0055EF17;

loc_0055EF15: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055EF17: ;
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    MEM32(0x915774) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EF2Au); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_0055EF2A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EF35u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055EF35: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055EF48; /* je: equal / zero */

loc_0055EF3C: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax) = ebx;
    ecx = eax;
    goto loc_0055EF4A;

loc_0055EF48: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055EF4A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    MEM32(0x915778) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EF5Du); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_0055EF5D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EF62u); RECOMP_ABI_CALL(0x0055DE89u, sub_0055DE89); /* call 0x0055DE89 */

loc_0055EF62: ;
    PUSH32(esp, 0x55DC98);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EF6Cu); RECOMP_ABI_CALL(0x00574962u, sub_00574962); /* call 0x00574962 */

loc_0055EF6C: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EF73u); RECOMP_ABI_CALL(0x0057496Cu, sub_0057496C); /* call 0x0057496C */

loc_0055EF73: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x876C05);
    PUSH32(esp, 0x80);
    esi = 0xB90;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EF89u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055EF89: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8DBF00);
    PUSH32(esp, eax);
    MEM32(0x91577C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EF9Au); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0055EF9A: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EFA2u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0055EFA2: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x91577C));
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EFB4u); RECOMP_ABI_CALL(0x000308BFu, sub_000308BF); /* call 0x000308BF */

loc_0055EFB4: ;
    PUSH32(esp, MEM32(0x915780));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EFBFu); RECOMP_ABI_CALL(0x0057804Cu, sub_0057804C); /* call 0x0057804C */

loc_0055EFBF: ;
    eax = MEM32(0x915784);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    if (CMP_BE(_fa, _fb)) goto loc_0055EFD5; /* jbe: below or equal (unsigned <=) */

loc_0055EFC9: ;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EFD3u); RECOMP_ABI_CALL(0x005726F9u, sub_005726F9); /* call 0x005726F9 */

loc_0055EFD3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055EFD5: ;
    eax = MEM32(0x915788);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0055EFEA; /* jbe: below or equal (unsigned <=) */

loc_0055EFDE: ;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EFE8u); RECOMP_ABI_CALL(0x00572743u, sub_00572743); /* call 0x00572743 */

loc_0055EFE8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055EFEA: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;

loc_0055EFF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_0055EFFA: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F001u); RECOMP_ABI_CALL(0x0055F66Eu, sub_0055F66E); /* call 0x0055F66E */

loc_0055F001: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F00Cu); RECOMP_ABI_CALL(0x0055E11Eu, sub_0055E11E); /* call 0x0055E11E */

loc_0055F00C: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD3DCu;
    goto loc_0055EFF3;

loc_0055F017: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F01Eu); RECOMP_ABI_CALL(0x0055F66Eu, sub_0055F66E); /* call 0x0055F66E */

loc_0055F01E: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F029u); RECOMP_ABI_CALL(0x0055E11Eu, sub_0055E11E); /* call 0x0055E11E */

loc_0055F029: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD3DAu;
    goto loc_0055EFF3;

loc_0055F034: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F03Bu); RECOMP_ABI_CALL(0x0055F66Eu, sub_0055F66E); /* call 0x0055F66E */

loc_0055F03B: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F046u); RECOMP_ABI_CALL(0x0055E11Eu, sub_0055E11E); /* call 0x0055E11E */

loc_0055F046: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD3DBu;
    goto loc_0055EFF3;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0055F051
 * Original: 0x0055F051 - 0x0055F0E4 (147 bytes, 60 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055F051(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F051: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xB0);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F069u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055F069: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F07B; /* je: equal / zero */

loc_0055F070: ;
    PUSH32(esp, MEM32(edi));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F079u); RECOMP_ABI_CALL(0x00564DD6u, sub_00564DD6); /* call 0x00564DD6 */

loc_0055F079: ;
    goto loc_0055F07D;

loc_0055F07B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055F07D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = MEM32(ebp + 0x14);
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055F091; /* jne: not equal / not zero */

loc_0055F086: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD3E1u;
    goto loc_0055F0DD;

loc_0055F091: ;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F0A0u); RECOMP_ABI_CALL(0x0055E9C9u, sub_0055E9C9); /* call 0x0055E9C9 */

loc_0055F0A0: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0055F0BB; /* jg: greater (signed >) */

loc_0055F0A5: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F0B4; /* je: equal / zero */

loc_0055F0AB: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F0B2u); RECOMP_ABI_CALL(0x0055F6FDu, sub_0055F6FD); /* call 0x0055F6FD */

loc_0055F0B2: ;
    MEM32(esi) = ebx;

loc_0055F0B4: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ebx;
    goto loc_0055F0DD;

loc_0055F0BB: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x34) = MEM32(eax + 0x34) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi);
    MEM32(ecx + 0x8C) = eax;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F0D2u); RECOMP_ABI_CALL(0x005640F2u, sub_005640F2); /* call 0x005640F2 */

loc_0055F0D2: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(eax) = 1;

loc_0055F0DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055F0E4
 * Original: 0x0055F0E4 - 0x0055F1BC (216 bytes, 92 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055F0E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055F0E4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x44);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F0F9u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055F0F9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F10B; /* je: equal / zero */

loc_0055F100: ;
    PUSH32(esp, MEM32(edi));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F109u); RECOMP_ABI_CALL(0x00566A26u, sub_00566A26); /* call 0x00566A26 */

loc_0055F109: ;
    goto loc_0055F10D;

loc_0055F10B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055F10D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(ebp + 0x10);
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055F124; /* jne: not equal / not zero */

loc_0055F116: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD3E2u;
    goto loc_0055F1B5;

loc_0055F124: ;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F133u); RECOMP_ABI_CALL(0x0055E908u, sub_0055E908); /* call 0x0055E908 */

loc_0055F133: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0055F14C; /* jg: greater (signed >) */

loc_0055F138: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F147; /* je: equal / zero */

loc_0055F13E: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F145u); RECOMP_ABI_CALL(0x0055F66Eu, sub_0055F66E); /* call 0x0055F66E */

loc_0055F145: ;
    MEM32(esi) = ebx;

loc_0055F147: ;
    eax = MEM32(ebp + 8);
    goto loc_0055F1A4;

loc_0055F14C: ;
    eax = MEM32(esi);
    MEM8(eax + 0x1C) = LO8(ebx);
    esi = MEM32(esi);
    eax = MEM32(esi + 0x18);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055F175; /* jne: not equal / not zero */

loc_0055F15D: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 8);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F173u); RECOMP_ABI_CALL(0x00760D10u, sub_00760D10); /* call 0x00760D10 */

loc_0055F173: ;
    goto loc_0055F18D;

loc_0055F175: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055F1AC; /* jne: not equal / not zero */

loc_0055F17A: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F18Du); RECOMP_ABI_CALL(0x00761010u, sub_00761010); /* call 0x00761010 */

loc_0055F18D: ;
    MEM32(esi) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(ebp + 8);
    if (CMP_GE(_fas, _fbs)) goto loc_0055F1A8; /* jge: greater or equal (signed >=) */

loc_0055F1A4: ;
    MEM32(eax) = ebx;
    goto loc_0055F1B5;

loc_0055F1A8: ;
    MEM32(eax) = edi;
    goto loc_0055F1B5;

loc_0055F1AC: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFFF9Du;

loc_0055F1B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055F1C0
 * Original: 0x0055F1C0 - 0x0055F1C9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055F1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0055F1C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0075E1A0(); return; /* tail jmp 0x0075E1A0 */

}

/**
 * sub_0055F219
 * Original: 0x0055F219 - 0x0055F24B (50 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055F219(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055F219: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F234u); RECOMP_ABI_CALL(0x00760D10u, sub_00760D10); /* call 0x00760D10 */

loc_0055F234: ;
    ecx = MEM32(ebp + 0x20);
    MEM32(ecx) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0055F291
 * Original: 0x0055F291 - 0x0055F2B5 (36 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055F291(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0055F291: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F2AFu); RECOMP_ABI_CALL(0x00761290u, sub_00761290); /* call 0x00761290 */

loc_0055F2AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0055F2B5
 * Original: 0x0055F2B5 - 0x0055F548 (659 bytes, 176 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055F2B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F2B5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055F2E4; /* jge: greater or equal (signed >=) */

loc_0055F2C0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(esi + 0x7A9710);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F2D7u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0055F2D7: ;
    MEM32(esi + 0x784EE0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    goto loc_0055F542;

loc_0055F2E4: ;
    ecx = 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055F309; /* jge: greater or equal (signed >=) */

loc_0055F2ED: ;
    ecx = MEM32(eax * 4 + 0x7A94B8);
    MEM32(0x784CD8) = MEM32(0x784CD8) | ecx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + 0xC);
    MEM32(eax * 4 + 0x784EE0) = ecx;
    goto loc_0055F542;

loc_0055F309: ;
    if (CMP_NE(_fa, _fb)) goto loc_0055F318; /* jne: not equal / not zero */

loc_0055F30B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F313u); RECOMP_ABI_CALL(0x0075E250u, sub_0075E250); /* call 0x0075E250 */

loc_0055F313: ;
    goto loc_0055F542;

loc_0055F318: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F32C; /* jne: not equal / not zero */

loc_0055F31F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F327u); RECOMP_ABI_CALL(0x0075ECE0u, sub_0075ECE0); /* call 0x0075ECE0 */

loc_0055F327: ;
    goto loc_0055F542;

loc_0055F32C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F340; /* jne: not equal / not zero */

loc_0055F333: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F33Bu); RECOMP_ABI_CALL(0x0075E840u, sub_0075E840); /* call 0x0075E840 */

loc_0055F33B: ;
    goto loc_0055F542;

loc_0055F340: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F354; /* jne: not equal / not zero */

loc_0055F347: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F34Fu); RECOMP_ABI_CALL(0x0075EBB0u, sub_0075EBB0); /* call 0x0075EBB0 */

loc_0055F34F: ;
    goto loc_0055F542;

loc_0055F354: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F368; /* jne: not equal / not zero */

loc_0055F35B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F363u); RECOMP_ABI_CALL(0x0075EC00u, sub_0075EC00); /* call 0x0075EC00 */

loc_0055F363: ;
    goto loc_0055F542;

loc_0055F368: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F37C; /* jne: not equal / not zero */

loc_0055F36F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F377u); RECOMP_ABI_CALL(0x0075EC60u, sub_0075EC60); /* call 0x0075EC60 */

loc_0055F377: ;
    goto loc_0055F542;

loc_0055F37C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F390; /* jne: not equal / not zero */

loc_0055F383: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F38Bu); RECOMP_ABI_CALL(0x0075E940u, sub_0075E940); /* call 0x0075E940 */

loc_0055F38B: ;
    goto loc_0055F542;

loc_0055F390: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F3A4; /* jne: not equal / not zero */

loc_0055F397: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F39Fu); RECOMP_ABI_CALL(0x0075F860u, sub_0075F860); /* call 0x0075F860 */

loc_0055F39F: ;
    goto loc_0055F542;

loc_0055F3A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F3B8; /* jne: not equal / not zero */

loc_0055F3AB: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F3B3u); RECOMP_ABI_CALL(0x0075F8F0u, sub_0075F8F0); /* call 0x0075F8F0 */

loc_0055F3B3: ;
    goto loc_0055F542;

loc_0055F3B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F3CC; /* jne: not equal / not zero */

loc_0055F3BF: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F3C7u); RECOMP_ABI_CALL(0x0075F990u, sub_0075F990); /* call 0x0075F990 */

loc_0055F3C7: ;
    goto loc_0055F542;

loc_0055F3CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F3E0; /* jne: not equal / not zero */

loc_0055F3D3: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F3DBu); RECOMP_ABI_CALL(0x0075E890u, sub_0075E890); /* call 0x0075E890 */

loc_0055F3DB: ;
    goto loc_0055F542;

loc_0055F3E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F3F4; /* jne: not equal / not zero */

loc_0055F3E7: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F3EFu); RECOMP_ABI_CALL(0x0075E900u, sub_0075E900); /* call 0x0075E900 */

loc_0055F3EF: ;
    goto loc_0055F542;

loc_0055F3F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F408; /* jne: not equal / not zero */

loc_0055F3FB: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F403u); RECOMP_ABI_CALL(0x0075E980u, sub_0075E980); /* call 0x0075E980 */

loc_0055F403: ;
    goto loc_0055F542;

loc_0055F408: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F41C; /* jne: not equal / not zero */

loc_0055F40F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F417u); RECOMP_ABI_CALL(0x0075EAD0u, sub_0075EAD0); /* call 0x0075EAD0 */

loc_0055F417: ;
    goto loc_0055F542;

loc_0055F41C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F430; /* jne: not equal / not zero */

loc_0055F423: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F42Bu); RECOMP_ABI_CALL(0x0075EB50u, sub_0075EB50); /* call 0x0075EB50 */

loc_0055F42B: ;
    goto loc_0055F542;

loc_0055F430: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F444; /* jne: not equal / not zero */

loc_0055F437: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F43Fu); RECOMP_ABI_CALL(0x0075E7C0u, sub_0075E7C0); /* call 0x0075E7C0 */

loc_0055F43F: ;
    goto loc_0055F542;

loc_0055F444: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F458; /* jne: not equal / not zero */

loc_0055F44B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F453u); RECOMP_ABI_CALL(0x0075FBD0u, sub_0075FBD0); /* call 0x0075FBD0 */

loc_0055F453: ;
    goto loc_0055F542;

loc_0055F458: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F46C; /* jne: not equal / not zero */

loc_0055F45F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F467u); RECOMP_ABI_CALL(0x0075FC50u, sub_0075FC50); /* call 0x0075FC50 */

loc_0055F467: ;
    goto loc_0055F542;

loc_0055F46C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F480; /* jne: not equal / not zero */

loc_0055F473: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F47Bu); RECOMP_ABI_CALL(0x0075FB70u, sub_0075FB70); /* call 0x0075FB70 */

loc_0055F47B: ;
    goto loc_0055F542;

loc_0055F480: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F494; /* jne: not equal / not zero */

loc_0055F487: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F48Fu); RECOMP_ABI_CALL(0x0075FBA0u, sub_0075FBA0); /* call 0x0075FBA0 */

loc_0055F48F: ;
    goto loc_0055F542;

loc_0055F494: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F4A8; /* jne: not equal / not zero */

loc_0055F49B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F4A3u); RECOMP_ABI_CALL(0x0075E800u, sub_0075E800); /* call 0x0075E800 */

loc_0055F4A3: ;
    goto loc_0055F542;

loc_0055F4A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F4BC; /* jne: not equal / not zero */

loc_0055F4AF: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F4B7u); RECOMP_ABI_CALL(0x0075E9E0u, sub_0075E9E0); /* call 0x0075E9E0 */

loc_0055F4B7: ;
    goto loc_0055F542;

loc_0055F4BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F4CD; /* jne: not equal / not zero */

loc_0055F4C3: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F4CBu); RECOMP_ABI_CALL(0x0075FCA0u, sub_0075FCA0); /* call 0x0075FCA0 */

loc_0055F4CB: ;
    goto loc_0055F542;

loc_0055F4CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F4DE; /* jne: not equal / not zero */

loc_0055F4D4: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F4DCu); RECOMP_ABI_CALL(0x0075EA50u, sub_0075EA50); /* call 0x0075EA50 */

loc_0055F4DC: ;
    goto loc_0055F542;

loc_0055F4DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F4EF; /* jne: not equal / not zero */

loc_0055F4E5: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F4EDu); RECOMP_ABI_CALL(0x0075FA00u, sub_0075FA00); /* call 0x0075FA00 */

loc_0055F4ED: ;
    goto loc_0055F542;

loc_0055F4EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F500; /* jne: not equal / not zero */

loc_0055F4F6: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F4FEu); RECOMP_ABI_CALL(0x0075FA30u, sub_0075FA30); /* call 0x0075FA30 */

loc_0055F4FE: ;
    goto loc_0055F542;

loc_0055F500: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F511; /* jne: not equal / not zero */

loc_0055F507: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F50Fu); RECOMP_ABI_CALL(0x0075FAA0u, sub_0075FAA0); /* call 0x0075FAA0 */

loc_0055F50F: ;
    goto loc_0055F542;

loc_0055F511: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F522; /* jne: not equal / not zero */

loc_0055F518: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F520u); RECOMP_ABI_CALL(0x0075FB10u, sub_0075FB10); /* call 0x0075FB10 */

loc_0055F520: ;
    goto loc_0055F542;

loc_0055F522: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F533; /* jne: not equal / not zero */

loc_0055F529: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F531u); RECOMP_ABI_CALL(0x0075FB30u, sub_0075FB30); /* call 0x0075FB30 */

loc_0055F531: ;
    goto loc_0055F542;

loc_0055F533: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F542; /* jne: not equal / not zero */

loc_0055F53A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F542u); RECOMP_ABI_CALL(0x0075FB50u, sub_0075FB50); /* call 0x0075FB50 */

loc_0055F542: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F64E
 * Original: 0x0055F64E - 0x0055F654 (6 bytes, 2 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F64E(void)
{

loc_0055F64E: ;
    eax = 0x8772B8;
    esp += 4; return; /* ret */

}

/**
 * sub_0055F66E
 * Original: 0x0055F66E - 0x0055F691 (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F66E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F66E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055F676u); RECOMP_ABI_CALL(0x00566A38u, sub_00566A38); /* call 0x00566A38 */

loc_0055F676: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F68B; /* je: equal / zero */

loc_0055F67D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F68B; /* je: equal / zero */

loc_0055F681: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055F689u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055F689: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055F68B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F691
 * Original: 0x0055F691 - 0x0055F6B4 (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F691(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F691: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055F699u); RECOMP_ABI_CALL(0x00566B2Du, sub_00566B2D); /* call 0x00566B2D */

loc_0055F699: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F6AE; /* je: equal / zero */

loc_0055F6A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F6AE; /* je: equal / zero */

loc_0055F6A4: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055F6ACu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055F6AC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055F6AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F6B4
 * Original: 0x0055F6B4 - 0x0055F6D7 (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F6B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F6B4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055F6BCu); RECOMP_ABI_CALL(0x00566B7Eu, sub_00566B7E); /* call 0x00566B7E */

loc_0055F6BC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F6D1; /* je: equal / zero */

loc_0055F6C3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F6D1; /* je: equal / zero */

loc_0055F6C7: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055F6CFu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055F6CF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055F6D1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F6D7
 * Original: 0x0055F6D7 - 0x0055F6FD (38 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F6D7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F6D7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055F6DFu); RECOMP_ABI_CALL(0x0055D72Eu, sub_0055D72E); /* call 0x0055D72E */

loc_0055F6DF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F6F7; /* je: equal / zero */

loc_0055F6E6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F6F7; /* je: equal / zero */

loc_0055F6EA: ;
    PUSH32(esp, 0x748);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055F6F5u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055F6F5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055F6F7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F6FD
 * Original: 0x0055F6FD - 0x0055F723 (38 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F6FD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F6FD: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055F705u); RECOMP_ABI_CALL(0x00564CBCu, sub_00564CBC); /* call 0x00564CBC */

loc_0055F705: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F71D; /* je: equal / zero */

loc_0055F70C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F71D; /* je: equal / zero */

loc_0055F710: ;
    PUSH32(esp, 0xB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055F71Bu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055F71B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055F71D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F723
 * Original: 0x0055F723 - 0x0055F746 (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F723(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F723: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055F72Bu); RECOMP_ABI_CALL(0x0055FB2Fu, sub_0055FB2F); /* call 0x0055FB2F */

loc_0055F72B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F740; /* je: equal / zero */

loc_0055F732: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F740; /* je: equal / zero */

loc_0055F736: ;
    PUSH32(esp, 0x6C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055F73Eu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0055F73E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0055F740: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F746
 * Original: 0x0055F746 - 0x0055F76A (36 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F746(void)
{

loc_0055F746: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x0055F752u); RECOMP_ABI_CALL(0x005743D5u, sub_005743D5); /* call 0x005743D5 */

loc_0055F752: ;
    POP32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(eax));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x0055F766u); RECOMP_ABI_CALL(0x005618EEu, sub_005618EE); /* call 0x005618EE */

loc_0055F766: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F76A
 * Original: 0x0055F76A - 0x0055F78E (36 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F76A(void)
{

loc_0055F76A: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x0055F776u); RECOMP_ABI_CALL(0x005743BDu, sub_005743BD); /* call 0x005743BD */

loc_0055F776: ;
    POP32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(eax));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x0055F78Au); RECOMP_ABI_CALL(0x005618EEu, sub_005618EE); /* call 0x005618EE */

loc_0055F78A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F78E
 * Original: 0x0055F78E - 0x0055F7A6 (24 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F78E(void)
{

loc_0055F78E: ;
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(0x915794));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0055F7A3u); RECOMP_ABI_CALL(0x005618EEu, sub_005618EE); /* call 0x005618EE */

loc_0055F7A3: ;
    esp += 12; return; /* ret 8 */

}
