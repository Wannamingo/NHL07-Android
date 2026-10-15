/**
 * nhl_07_recomp - Recompiled code chunk 136
 * Functions: 250 (0x00218300 - 0x00221A00)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00218300
 * Original: 0x00218300 - 0x0021830A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218300(void)
{

loc_00218300: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + 0x14C);
    esp += 4; return; /* ret */

}

/**
 * sub_00218310
 * Original: 0x00218310 - 0x00218379 (105 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218310: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00218376; /* ja: above (unsigned >) */

loc_00218319: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21837C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00218320u) goto loc_00218320;
    if (_jt == 0x00218329u) goto loc_00218329;
    if (_jt == 0x00218332u) goto loc_00218332;
    if (_jt == 0x0021834Eu) goto loc_0021834E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00218320: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    goto loc_00218339;

loc_00218329: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    goto loc_00218339;

loc_00218332: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);

loc_00218339: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x00218341u); RECOMP_ABI_CALL(0x0001676Cu, sub_0001676C); /* call 0x0001676C */

loc_00218341: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    esp += 12; return; /* ret 8 */

loc_0021834E: ;
    ecx = MEM32(ecx + 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0021835Du); RECOMP_ABI_CALL(0x0001676Cu, sub_0001676C); /* call 0x0001676C */

loc_0021835D: ;
    PUSH32(esp, 0x00218362u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00218362: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00218373u); RECOMP_ABI_CALL(0x0001FBEBu, sub_0001FBEB); /* call 0x0001FBEB */

loc_00218373: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00218376: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00218626
 * Original: 0x00218626 - 0x002186D6 (176 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218626(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218626: ;
    edi = edi;
    PUSH32(esp, 0 /* seg:ss */);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), esp (32-bit) */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + -123) = MEM8(edx + -123) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edx + -123)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* mov es, MEM16(ebp + -2052980703) - segment register */;
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_HI8(edx, 0x85);
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM8(ebp + -2059534303)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - MEM8(ebp + -2059534303));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), esp (32-bit) */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -123) = MEM8(esi + -123) + HI8(eax);
    _fa = (uint32_t)(MEM8(esi + -123)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8585; return; /* ret 8581 */

}

/**
 * sub_002186E0
 * Original: 0x002186E0 - 0x002186E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002186E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002186E0: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x50)); return; /* indirect tail jmp */

}

/**
 * sub_002186F0
 * Original: 0x002186F0 - 0x002186F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002186F0(void)
{

loc_002186F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00218700
 * Original: 0x00218700 - 0x00218701 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218700(void)
{

loc_00218700: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00218710
 * Original: 0x00218710 - 0x0021871B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218710: ;
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x14);
    g_seh_ebp = ebp; sub_005C1863(); return; /* tail jmp 0x005C1863 */

}

/**
 * sub_00218720
 * Original: 0x00218720 - 0x00218723 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218720(void)
{

loc_00218720: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00218730
 * Original: 0x00218730 - 0x0021877D (77 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218730: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00218768; /* je: equal / zero */

loc_00218739: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00218752; /* je: equal / zero */

loc_0021873E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021877A; /* jne: not equal / not zero */

loc_00218741: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x00218749u); RECOMP_ABI_CALL(0x0001F5D3u, sub_0001F5D3); /* call 0x0001F5D3 */

loc_00218749: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_00218752: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021875Fu); RECOMP_ABI_CALL(0x00020410u, sub_00020410); /* call 0x00020410 */

loc_0021875F: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_00218768: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021877Au); RECOMP_ABI_CALL(0x000251D6u, sub_000251D6); /* call 0x000251D6 */

loc_0021877A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00218790
 * Original: 0x00218790 - 0x00218826 (150 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218790: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    eax = 0x11;
    if (CMP_A(_fa, _fb)) goto loc_00218823; /* ja: above (unsigned >) */

loc_002187A2: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x218828); /* switch: 16 entries, 16 targets */
    if (_jt == 0x002187A9u) goto loc_002187A9;
    if (_jt == 0x002187AEu) goto loc_002187AE;
    if (_jt == 0x002187B6u) goto loc_002187B6;
    if (_jt == 0x002187BEu) goto loc_002187BE;
    if (_jt == 0x002187C6u) goto loc_002187C6;
    if (_jt == 0x002187CEu) goto loc_002187CE;
    if (_jt == 0x002187D6u) goto loc_002187D6;
    if (_jt == 0x002187DEu) goto loc_002187DE;
    if (_jt == 0x002187E6u) goto loc_002187E6;
    if (_jt == 0x002187EEu) goto loc_002187EE;
    if (_jt == 0x002187F6u) goto loc_002187F6;
    if (_jt == 0x002187FEu) goto loc_002187FE;
    if (_jt == 0x00218806u) goto loc_00218806;
    if (_jt == 0x0021880Eu) goto loc_0021880E;
    if (_jt == 0x00218816u) goto loc_00218816;
    if (_jt == 0x0021881Eu) goto loc_0021881E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002187A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_002187AE: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

loc_002187B6: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

loc_002187BE: ;
    eax = 7;
    esp += 8; return; /* ret 4 */

loc_002187C6: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

loc_002187CE: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

loc_002187D6: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_002187DE: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_002187E6: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

loc_002187EE: ;
    eax = 9;
    esp += 8; return; /* ret 4 */

loc_002187F6: ;
    eax = 0xA;
    esp += 8; return; /* ret 4 */

loc_002187FE: ;
    eax = 0xB;
    esp += 8; return; /* ret 4 */

loc_00218806: ;
    eax = 0xC;
    esp += 8; return; /* ret 4 */

loc_0021880E: ;
    eax = 0xD;
    esp += 8; return; /* ret 4 */

loc_00218816: ;
    eax = 0xE;
    esp += 8; return; /* ret 4 */

loc_0021881E: ;
    eax = 0xF;

loc_00218823: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00218826
 * Original: 0x00218826 - 0x002188A3 (125 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218826(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218826: ;
    edi = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCE002187u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xCE002187u (32-bit) */
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = esp;
    esp = _tmp; }
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + LO8(edx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = esp;
    esp = _tmp; }
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + LO8(ebx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = esp;
    esp = _tmp; }
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + HI8(eax));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = esp;
    esp = _tmp; }
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -1241505401) = MEM8(esi + -1241505401) + HI8(ecx);
    _fa = (uint32_t)(MEM8(esi + -1241505401)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = esp;
    esp = _tmp; }
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -973069945) = MEM8(esi + -973069945) + HI8(ebx);
    _fa = (uint32_t)(MEM8(esi + -973069945)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = esp;
    esp = _tmp; }
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + HI8(ecx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = esp;
    esp = _tmp; }
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + HI8(edx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = esp;
    esp = _tmp; }
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + HI8(ebx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = esp;
    esp = _tmp; }
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi) = MEM8(esi) + LO8(eax);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ecx) = HI8(eax);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi) = MEM8(esi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ecx) = HI8(eax);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi) = MEM8(esi) + LO8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ecx) = HI8(eax);
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi) = MEM8(esi) + LO8(ebx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ecx) = HI8(eax);
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
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002188B0
 * Original: 0x002188B0 - 0x002188B3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002188B0(void)
{

loc_002188B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002188C0
 * Original: 0x002188C0 - 0x002188D2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002188C0(void)
{

loc_002188C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002188C8u); RECOMP_ABI_CALL(0x00012E23u, sub_00012E23); /* call 0x00012E23 */

loc_002188C8: ;
    MEM32(esi) = 0x7FAD14;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002188E0
 * Original: 0x002188E0 - 0x002188E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002188E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002188E0: ;
    g_seh_ebp = ebp; sub_00030F4F(); return; /* tail jmp 0x00030F4F */

}

/**
 * sub_002188F0
 * Original: 0x002188F0 - 0x0021890E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002188F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002188F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002188F8u); RECOMP_ABI_CALL(0x00030F4Fu, sub_00030F4F); /* call 0x00030F4F */

loc_002188F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00218908; /* je: equal / zero */

loc_002188FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00218905u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00218905: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00218908: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00218920
 * Original: 0x00218920 - 0x0021894F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218920: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x0021892Bu); RECOMP_ABI_CALL(0x00012E23u, sub_00012E23); /* call 0x00012E23 */

loc_0021892B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 4;
    MEM32(esp + 4) = 0x7FAD14;
    PUSH32(esp, 0x00218941u); RECOMP_ABI_CALL(0x0001C450u, sub_0001C450); /* call 0x0001C450 */

loc_00218941: ;
    ecx = esp;
    PUSH32(esp, 0x00218949u); RECOMP_ABI_CALL(0x00030F4Fu, sub_00030F4F); /* call 0x00030F4F */

loc_00218949: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00218960
 * Original: 0x00218960 - 0x0021898A (42 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218960: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218987; /* je: equal / zero */

loc_00218968: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218987; /* je: equal / zero */

loc_00218970: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218984; /* je: equal / zero */

loc_00218976: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00218976; /* jne: not equal / not zero */

loc_00218984: ;
    MEM8(ecx) = 0;

loc_00218987: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002189A0
 * Original: 0x002189A0 - 0x002189CC (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002189A0(void)
{

loc_002189A0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002189ADu); RECOMP_ABI_CALL(0x0059E3BCu, sub_0059E3BC); /* call 0x0059E3BC */

loc_002189AD: ;
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3E8);
    PUSH32(esp, 0x002189BAu); RECOMP_ABI_CALL(0x0059E42Fu, sub_0059E42F); /* call 0x0059E42F */

loc_002189BA: ;
    ecx = eax;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002189C9u); RECOMP_ABI_CALL(0x005C18A7u, sub_005C18A7); /* call 0x005C18A7 */

loc_002189C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002189E0
 * Original: 0x002189E0 - 0x002189E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002189E0(void)
{

loc_002189E0: ;
    eax = MEM32(ecx + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_002189F0
 * Original: 0x002189F0 - 0x002189F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002189F0(void)
{

loc_002189F0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00218A00
 * Original: 0x00218A00 - 0x00218A0A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218A00(void)
{

loc_00218A00: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xA) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00218A10
 * Original: 0x00218A10 - 0x00218A1A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218A10: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00218A20
 * Original: 0x00218A20 - 0x00218A31 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218A20: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x1DC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00218A40
 * Original: 0x00218A40 - 0x00218A44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218A40(void)
{

loc_00218A40: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00218A50
 * Original: 0x00218A50 - 0x00218A59 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218A50(void)
{

loc_00218A50: ;
    eax = ecx;
    MEM32(eax) = 0x7FA4AC;
    esp += 4; return; /* ret */

}

/**
 * sub_00218A60
 * Original: 0x00218A60 - 0x00218A67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218A60(void)
{

loc_00218A60: ;
    MEM32(ecx) = 0x7FA4AC;
    esp += 4; return; /* ret */

}

/**
 * sub_00218A70
 * Original: 0x00218A70 - 0x00218A76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218A70(void)
{

loc_00218A70: ;
    SET_LO8(eax, MEM8(0x8F9590));
    esp += 4; return; /* ret */

}

/**
 * sub_00218A80
 * Original: 0x00218A80 - 0x00218AA9 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218A80: ;
    PUSH32(esp, 0x00218A85u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_00218A85: ;
    ecx = MEM32(eax + 4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx + eax + 0x1DC;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00218AA1u); RECOMP_ABI_CALL(0x00011686u, sub_00011686); /* call 0x00011686 */

loc_00218AA1: ;
    ecx = eax;
    PUSH32(esp, 0x00218AA8u); RECOMP_ABI_CALL(0x0002C5B2u, sub_0002C5B2); /* call 0x0002C5B2 */

loc_00218AA8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00218AC0
 * Original: 0x00218AC0 - 0x00218B76 (182 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218AC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00218AC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218AC5u); } /* indirect call */
    }

loc_00218AC8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00218ACFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218ACCu); } /* indirect call */
    }

loc_00218ACF: ;
    PUSH32(esp, 0x00218AD4u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00218AD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218B12; /* je: equal / zero */

loc_00218AD8: ;
    PUSH32(esp, 0x00218ADDu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00218ADD: ;
    ecx = eax;
    PUSH32(esp, 0x00218AE4u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00218AE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218B12; /* je: equal / zero */

loc_00218AE8: ;
    PUSH32(esp, 0x00218AEDu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00218AED: ;
    ecx = eax;
    PUSH32(esp, 0x00218AF4u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00218AF4: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00218AFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218AFAu); } /* indirect call */
    }

loc_00218AFD: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x00218B07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218B01u); } /* indirect call */
    }

loc_00218B07: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00218B12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218B0Fu); } /* indirect call */
    }

loc_00218B12: ;
    PUSH32(esp, 0x00218B17u); RECOMP_ABI_CALL(0x00011686u, sub_00011686); /* call 0x00011686 */

loc_00218B17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218B27; /* je: equal / zero */

loc_00218B1B: ;
    PUSH32(esp, 0x00218B20u); RECOMP_ABI_CALL(0x00011686u, sub_00011686); /* call 0x00011686 */

loc_00218B20: ;
    ecx = eax;
    PUSH32(esp, 0x00218B27u); RECOMP_ABI_CALL(0x0001F245u, sub_0001F245); /* call 0x0001F245 */

loc_00218B27: ;
    PUSH32(esp, 0x00218B2Cu); RECOMP_ABI_CALL(0x0001901Bu, sub_0001901B); /* call 0x0001901B */

loc_00218B2C: ;
    PUSH32(esp, 8);
    esi = eax;
    PUSH32(esp, 0x00218B35u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00218B35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218B53; /* je: equal / zero */

loc_00218B3C: ;
    PUSH32(esp, 0x00218B41u); RECOMP_ABI_CALL(0x00011686u, sub_00011686); /* call 0x00011686 */

loc_00218B41: ;
    ecx = eax;
    PUSH32(esp, 0x00218B48u); RECOMP_ABI_CALL(0x00028FF7u, sub_00028FF7); /* call 0x00028FF7 */

loc_00218B48: ;
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00218B51u); RECOMP_ABI_CALL(0x0001DF30u, sub_0001DF30); /* call 0x0001DF30 */

loc_00218B51: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00218B53: ;
    PUSH32(esp, 0x00218B58u); RECOMP_ABI_CALL(0x00011686u, sub_00011686); /* call 0x00011686 */

loc_00218B58: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218B69; /* je: equal / zero */

loc_00218B5E: ;
    PUSH32(esp, 0x00218B63u); RECOMP_ABI_CALL(0x00011686u, sub_00011686); /* call 0x00011686 */

loc_00218B63: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00218B51; /* jne: not equal / not zero */

loc_00218B69: ;
    PUSH32(esp, 0x00218B6Eu); RECOMP_ABI_CALL(0x00011686u, sub_00011686); /* call 0x00011686 */

loc_00218B6E: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001DD32(); return; /* tail jmp 0x0001DD32 */

}

/**
 * sub_00218BB0
 * Original: 0x00218BB0 - 0x00218EFB (843 bytes, 301 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218BB0: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x00218BC1u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00218BC1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218BC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218BC5u); } /* indirect call */
    }

loc_00218BC8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00218BCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218BCCu); } /* indirect call */
    }

loc_00218BCF: ;
    ecx = MEM32(0x8F9CCC);
    esi = eax;
    PUSH32(esp, 0x00218BDCu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00218BDC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00218BE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218BE0u); } /* indirect call */
    }

loc_00218BE3: ;
    edi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00218BEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218BEBu); } /* indirect call */
    }

loc_00218BEE: ;
    edx = MEM32(esi);
    ecx = eax + eax * 4;
    MEM32(esp + 0x28) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218BFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218BFBu); } /* indirect call */
    }

loc_00218BFE: ;
    ebp = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00218C09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218C06u); } /* indirect call */
    }

loc_00218C09: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218C16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218C13u); } /* indirect call */
    }

loc_00218C16: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00218C24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218C21u); } /* indirect call */
    }

loc_00218C24: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    ecx = esi;
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218C31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218C2Eu); } /* indirect call */
    }

loc_00218C31: ;
    MEM32(esp + 0x1C) = eax;
    MEM32(ebx + 0x30) = ebp;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00218C40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218C3Eu); } /* indirect call */
    }

loc_00218C40: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = edi;
    MEM32(esp + 0x34) = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00218C4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218C4Au); } /* indirect call */
    }

loc_00218C4C: ;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00218C58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218C56u); } /* indirect call */
    }

loc_00218C58: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    ecx = edi;
    MEM32(esp + 0x24) = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00218C64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218C62u); } /* indirect call */
    }

loc_00218C64: ;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x00218C6Du); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00218C6D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218C74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218C71u); } /* indirect call */
    }

loc_00218C74: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00218C7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218C78u); } /* indirect call */
    }

loc_00218C7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218CC1; /* je: equal / zero */

loc_00218C80: ;
    PUSH32(esp, 0x00218C85u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00218C85: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218C8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218C89u); } /* indirect call */
    }

loc_00218C8C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00218C93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218C90u); } /* indirect call */
    }

loc_00218C93: ;
    PUSH32(esp, 0x00218C98u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00218C98: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218C9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218C9Cu); } /* indirect call */
    }

loc_00218C9F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218CACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218CA9u); } /* indirect call */
    }

loc_00218CAC: ;
    PUSH32(esp, 0x00218CB1u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00218CB1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218CB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218CB5u); } /* indirect call */
    }

loc_00218CB8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00218CBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218CBCu); } /* indirect call */
    }

loc_00218CBF: ;
    goto loc_00218CCD;

loc_00218CC1: ;
    PUSH32(esp, 0x00218CC6u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00218CC6: ;
    ecx = eax;
    PUSH32(esp, 0x00218CCDu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00218CCD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00218CD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218CD1u); } /* indirect call */
    }

loc_00218CD4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00218CDBu); RECOMP_ABI_CALL(0x000241D7u, sub_000241D7); /* call 0x000241D7 */

loc_00218CDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00218CE3u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00218CE3: ;
    ecx = eax;
    PUSH32(esp, 0x00218CEAu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00218CEA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00218CF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218CF2u); } /* indirect call */
    }

loc_00218CF5: ;
    PUSH32(esp, 0x00218CFAu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00218CFA: ;
    ecx = eax;
    PUSH32(esp, 0x00218D01u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00218D01: ;
    ecx = MEM32(0x8F9CCC);
    edi = eax;
    PUSH32(esp, 0x00218D0Eu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00218D0E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00218D15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218D12u); } /* indirect call */
    }

loc_00218D15: ;
    ecx = MEM32(0x8F9CCC);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00218D24u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00218D24: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00218D2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218D28u); } /* indirect call */
    }

loc_00218D2B: ;
    ecx = MEM32(ebx + 0x30);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00218D3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218D37u); } /* indirect call */
    }

loc_00218D3A: ;
    edx = MEM32(ebx + 0x30);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00218D4Cu); RECOMP_ABI_CALL(0x0002AA3Cu, sub_0002AA3C); /* call 0x0002AA3C */

loc_00218D4C: ;
    ecx = MEM32(ebx + 0x30);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00218D5Eu); RECOMP_ABI_CALL(0x0002AA3Cu, sub_0002AA3C); /* call 0x0002AA3C */

loc_00218D5E: ;
    ecx = esp + 0x40;
    PUSH32(esp, 0x00218D67u); RECOMP_ABI_CALL(0x0001FB0Fu, sub_0001FB0F); /* call 0x0001FB0F */

loc_00218D67: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEM32(esp + 0x4C) = 0x7F7A10;
    PUSH32(esp, 0x00218D7Du); RECOMP_ABI_CALL(0x0002ED76u, sub_0002ED76); /* call 0x0002ED76 */

loc_00218D7D: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x00218D86u); RECOMP_ABI_CALL(0x00036940u, sub_00036940); /* call 0x00036940 */

loc_00218D86: ;
    edx = MEM32(esp + 0x4C);
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x40;
    MEM32(esp + 0x90) = 0x7F7A14;
    PUSH32(esp, 0x00218DA7u); RECOMP_ABI_CALL(0x000173BFu, sub_000173BF); /* call 0x000173BF */

loc_00218DA7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00218DB0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00218DB6u); RECOMP_ABI_CALL(0x0003570Cu, sub_0003570C); /* call 0x0003570C */

loc_00218DB6: ;
    ecx = MEM32(esp + edi * 4 + 0x50);
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218DC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218DC3u); } /* indirect call */
    }

loc_00218DC6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00218DB0; /* jl: less (signed <) */

loc_00218DCC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00218DD0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00218DD6u); RECOMP_ABI_CALL(0x0002984Eu, sub_0002984E); /* call 0x0002984E */

loc_00218DD6: ;
    ecx = MEM32(esp + edi * 4 + 0x90);
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00218DE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218DE6u); } /* indirect call */
    }

loc_00218DE9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x26 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00218DD0; /* jl: less (signed <) */

loc_00218DEF: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218DFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218DFAu); } /* indirect call */
    }

loc_00218DFD: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218E0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218E08u); } /* indirect call */
    }

loc_00218E0B: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218E19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218E16u); } /* indirect call */
    }

loc_00218E19: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218E27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218E24u); } /* indirect call */
    }

loc_00218E27: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218E35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218E32u); } /* indirect call */
    }

loc_00218E35: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218E3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218E3Cu); } /* indirect call */
    }

loc_00218E3F: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00218E4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218E4Au); } /* indirect call */
    }

loc_00218E4D: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218E5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218E58u); } /* indirect call */
    }

loc_00218E5B: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218E69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218E66u); } /* indirect call */
    }

loc_00218E69: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00218E77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218E74u); } /* indirect call */
    }

loc_00218E77: ;
    PUSH32(esp, 0x00218E7Cu); RECOMP_ABI_CALL(0x0002A1E0u, sub_0002A1E0); /* call 0x0002A1E0 */

loc_00218E7C: ;
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218EBD; /* je: equal / zero */

loc_00218E83: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00218E8Au); RECOMP_ABI_CALL(0x000241D7u, sub_000241D7); /* call 0x000241D7 */

loc_00218E8A: ;
    ecx = MEM32(0x8F9CCC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00218E98u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00218E98: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00218EA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218E9Eu); } /* indirect call */
    }

loc_00218EA1: ;
    ecx = MEM32(0x8F9CCC);
    esi = eax;
    PUSH32(esp, 0x00218EAEu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00218EAE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00218EB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00218EB5u); } /* indirect call */
    }

loc_00218EB8: ;
    PUSH32(esp, 0x00218EBDu); RECOMP_ABI_CALL(0x0002A1E0u, sub_0002A1E0); /* call 0x0002A1E0 */

loc_00218EBD: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00218EC4u); RECOMP_ABI_CALL(0x0001901Bu, sub_0001901B); /* call 0x0001901B */

loc_00218EC4: ;
    ecx = eax;
    PUSH32(esp, 0x00218ECBu); RECOMP_ABI_CALL(0x0001239Cu, sub_0001239C); /* call 0x0001239C */

loc_00218ECB: ;
    ecx = esp + 0x38;
    MEM32(esp + 0x88) = 0x7F7A14;
    PUSH32(esp, 0x00218EDFu); RECOMP_ABI_CALL(0x000265EFu, sub_000265EF); /* call 0x000265EF */

loc_00218EDF: ;
    ecx = esp + 0x40;
    MEM32(esp + 0x48) = 0x7F7A10;
    PUSH32(esp, 0x00218EF0u); RECOMP_ABI_CALL(0x00023FCFu, sub_00023FCF); /* call 0x00023FCF */

loc_00218EF0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00218FD0
 * Original: 0x00218FD0 - 0x00218FD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218FD0(void)
{

loc_00218FD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00218FE0
 * Original: 0x00218FE0 - 0x00218FF4 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218FE0(void)
{

loc_00218FE0: ;
    PUSH32(esp, 0x00218FE5u); RECOMP_ABI_CALL(0x00011686u, sub_00011686); /* call 0x00011686 */

loc_00218FE5: ;
    ecx = eax;
    PUSH32(esp, 0x00218FECu); RECOMP_ABI_CALL(0x00030C93u, sub_00030C93); /* call 0x00030C93 */

loc_00218FEC: ;
    MEM8(0x8F9590) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00219000
 * Original: 0x00219000 - 0x00219019 (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219000: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    esi = ecx;
    PUSH32(esp, 0x0021900Au); RECOMP_ABI_CALL(0x0001901Bu, sub_0001901B); /* call 0x0001901B */

loc_0021900A: ;
    ecx = eax;
    PUSH32(esp, 0x00219011u); RECOMP_ABI_CALL(0x0001239Cu, sub_0001239C); /* call 0x0001239C */

loc_00219011: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_00219020
 * Original: 0x00219020 - 0x0021904B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219020: ;
    ecx = MEM32(0x8F0774);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00219034; /* jne: not equal / not zero */

loc_0021902F: ;
    MEM8(0x8F4556) = LO8(eax);

loc_00219034: ;
    PUSH32(esp, eax);
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00219043u); RECOMP_ABI_CALL(0x0002D55Cu, sub_0002D55C); /* call 0x0002D55C */

loc_00219043: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002725B(); return; /* tail jmp 0x0002725B */

}

/**
 * sub_00219060
 * Original: 0x00219060 - 0x00219097 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219060: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00219068u); RECOMP_ABI_CALL(0x0002CA8Au, sub_0002CA8A); /* call 0x0002CA8A */

loc_00219068: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0021906Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021906Cu); } /* indirect call */
    }

loc_0021906F: ;
    PUSH32(esp, 0x00219074u); RECOMP_ABI_CALL(0x00033380u, sub_00033380); /* call 0x00033380 */

loc_00219074: ;
    PUSH32(esp, 0x00219079u); RECOMP_ABI_CALL(0x0002D8E0u, sub_0002D8E0); /* call 0x0002D8E0 */

loc_00219079: ;
    MEM8(0x8F9590) = 0;
    PUSH32(esp, 0x00219085u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_00219085: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00219096; /* je: equal / zero */

loc_0021908A: ;
    PUSH32(esp, 0x0021908Fu); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0021908F: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00031738(); return; /* tail jmp 0x00031738 */

loc_00219096: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002190B0
 * Original: 0x002190B0 - 0x00219105 (85 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002190B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002190B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002190B8u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_002190B8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002190BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002190BCu); } /* indirect call */
    }

loc_002190BF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1A);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002190CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002190C7u); } /* indirect call */
    }

loc_002190CA: ;
    PUSH32(esp, 0x002190CFu); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_002190CF: ;
    ecx = MEM32(eax + 4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ecx + eax + 0x1DC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002190E2u); RECOMP_ABI_CALL(0x0001E17Eu, sub_0001E17E); /* call 0x0001E17E */

loc_002190E2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002190EBu); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_002190EB: ;
    ecx = eax;
    PUSH32(esp, 0x002190F2u); RECOMP_ABI_CALL(0x00018E27u, sub_00018E27); /* call 0x00018E27 */

loc_002190F2: ;
    PUSH32(esp, 0x002190F7u); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_002190F7: ;
    ecx = MEM32(eax + 0x38);
    PUSH32(esp, 0x002190FFu); RECOMP_ABI_CALL(0x0001F349u, sub_0001F349); /* call 0x0001F349 */

loc_002190FF: ;
    MEM8(esi + 4) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00219120
 * Original: 0x00219120 - 0x00219147 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219120: ;
    PUSH32(esp, 0x00219125u); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_00219125: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219146; /* je: equal / zero */

loc_00219129: ;
    PUSH32(esp, 0x0021912Eu); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_0021912E: ;
    ecx = MEM32(eax + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219146; /* je: equal / zero */

loc_00219135: ;
    PUSH32(esp, 0x0021913Au); RECOMP_ABI_CALL(0x00013C24u, sub_00013C24); /* call 0x00013C24 */

loc_0021913A: ;
    PUSH32(esp, 0x0021913Fu); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_0021913F: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00026DDD(); return; /* tail jmp 0x00026DDD */

loc_00219146: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00219150
 * Original: 0x00219150 - 0x00219164 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219150: ;
    PUSH32(esp, 0x00219155u); RECOMP_ABI_CALL(0x00016375u, sub_00016375); /* call 0x00016375 */

loc_00219155: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219163; /* je: equal / zero */

loc_00219159: ;
    PUSH32(esp, 0x0021915Eu); RECOMP_ABI_CALL(0x00016375u, sub_00016375); /* call 0x00016375 */

loc_0021915E: ;
    g_seh_ebp = ebp; sub_00016433(); return; /* tail jmp 0x00016433 */

loc_00219163: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00219170
 * Original: 0x00219170 - 0x0021917A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219170(void)
{

loc_00219170: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00219180
 * Original: 0x00219180 - 0x0021918B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219180: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00219190
 * Original: 0x00219190 - 0x00219197 (7 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219190: ;
    eax = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002191A0
 * Original: 0x002191A0 - 0x002191EC (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002191A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002191A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002191C2; /* je: equal / zero */

loc_002191AB: ;
    ecx = edi;
    PUSH32(esp, 0x002191B2u); RECOMP_ABI_CALL(0x00016758u, sub_00016758); /* call 0x00016758 */

loc_002191B2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002191B8u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002191B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_002191C2: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002191E0; /* je: equal / zero */

loc_002191C9: ;
    ecx = edi;
    PUSH32(esp, 0x002191D0u); RECOMP_ABI_CALL(0x00017A90u, sub_00017A90); /* call 0x00017A90 */

loc_002191D0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002191D6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002191D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = 0;

loc_002191E0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00219200
 * Original: 0x00219200 - 0x0021921A (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219200: ;
    eax = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x7F9EEC;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00219220
 * Original: 0x00219220 - 0x0021923E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219220: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00219228u); RECOMP_ABI_CALL(0x00023D3Bu, sub_00023D3B); /* call 0x00023D3B */

loc_00219228: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00219238; /* je: equal / zero */

loc_0021922F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00219235u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00219235: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00219238: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00219250
 * Original: 0x00219250 - 0x002192B9 (105 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00219250: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x855C);
    MEM32(esi) = 0x7FAD18;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x14) = 4;
    PUSH32(esp, 0x00219276u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00219276: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00219286; /* je: equal / zero */

loc_0021927D: ;
    ecx = eax;
    PUSH32(esp, 0x00219284u); RECOMP_ABI_CALL(0x0002213Eu, sub_0002213E); /* call 0x0002213E */

loc_00219284: ;
    goto loc_00219288;

loc_00219286: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00219288: ;
    ecx = eax + 8;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x2CDC);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x002192A8u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002192A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x002192B5u); RECOMP_ABI_CALL(0x00033371u, sub_00033371); /* call 0x00033371 */

loc_002192B5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002192E0
 * Original: 0x002192E0 - 0x00219316 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002192E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002192E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi) = 0x7FAD18;
    PUSH32(esp, 0x002192F3u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002192F3: ;
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021930D; /* je: equal / zero */

loc_002192FD: ;
    ecx = edi;
    PUSH32(esp, 0x00219304u); RECOMP_ABI_CALL(0x0001C8F6u, sub_0001C8F6); /* call 0x0001C8F6 */

loc_00219304: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021930Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021930A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021930D: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7F9F30;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00219330
 * Original: 0x00219330 - 0x002198FD (1485 bytes, 683 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00219330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00219330: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002198F0; /* je: equal / zero */

loc_00219343: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x54) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x54 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002198E3; /* ja: above (unsigned >) */

loc_00219353: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x219900); /* switch: 85 entries, 72 targets */
    if (_jt == 0x0021935Au) goto loc_0021935A;
    if (_jt == 0x0021936Du) goto loc_0021936D;
    if (_jt == 0x00219380u) goto loc_00219380;
    if (_jt == 0x00219393u) goto loc_00219393;
    if (_jt == 0x002193A6u) goto loc_002193A6;
    if (_jt == 0x002193B9u) goto loc_002193B9;
    if (_jt == 0x002193CCu) goto loc_002193CC;
    if (_jt == 0x002193DFu) goto loc_002193DF;
    if (_jt == 0x002193F2u) goto loc_002193F2;
    if (_jt == 0x00219405u) goto loc_00219405;
    if (_jt == 0x00219418u) goto loc_00219418;
    if (_jt == 0x0021942Bu) goto loc_0021942B;
    if (_jt == 0x0021943Eu) goto loc_0021943E;
    if (_jt == 0x00219451u) goto loc_00219451;
    if (_jt == 0x00219464u) goto loc_00219464;
    if (_jt == 0x00219484u) goto loc_00219484;
    if (_jt == 0x002194A4u) goto loc_002194A4;
    if (_jt == 0x002194E1u) goto loc_002194E1;
    if (_jt == 0x002194F4u) goto loc_002194F4;
    if (_jt == 0x00219507u) goto loc_00219507;
    if (_jt == 0x0021951Au) goto loc_0021951A;
    if (_jt == 0x0021952Du) goto loc_0021952D;
    if (_jt == 0x00219540u) goto loc_00219540;
    if (_jt == 0x00219553u) goto loc_00219553;
    if (_jt == 0x00219566u) goto loc_00219566;
    if (_jt == 0x00219579u) goto loc_00219579;
    if (_jt == 0x0021958Cu) goto loc_0021958C;
    if (_jt == 0x0021959Fu) goto loc_0021959F;
    if (_jt == 0x002195B2u) goto loc_002195B2;
    if (_jt == 0x002195C5u) goto loc_002195C5;
    if (_jt == 0x002195D8u) goto loc_002195D8;
    if (_jt == 0x002195EBu) goto loc_002195EB;
    if (_jt == 0x002195FEu) goto loc_002195FE;
    if (_jt == 0x00219611u) goto loc_00219611;
    if (_jt == 0x00219624u) goto loc_00219624;
    if (_jt == 0x00219637u) goto loc_00219637;
    if (_jt == 0x0021964Au) goto loc_0021964A;
    if (_jt == 0x0021965Du) goto loc_0021965D;
    if (_jt == 0x00219670u) goto loc_00219670;
    if (_jt == 0x00219683u) goto loc_00219683;
    if (_jt == 0x00219696u) goto loc_00219696;
    if (_jt == 0x002196A9u) goto loc_002196A9;
    if (_jt == 0x002196BCu) goto loc_002196BC;
    if (_jt == 0x002196CFu) goto loc_002196CF;
    if (_jt == 0x002196E2u) goto loc_002196E2;
    if (_jt == 0x002196F5u) goto loc_002196F5;
    if (_jt == 0x00219708u) goto loc_00219708;
    if (_jt == 0x0021971Bu) goto loc_0021971B;
    if (_jt == 0x0021972Eu) goto loc_0021972E;
    if (_jt == 0x00219741u) goto loc_00219741;
    if (_jt == 0x00219754u) goto loc_00219754;
    if (_jt == 0x00219767u) goto loc_00219767;
    if (_jt == 0x0021977Au) goto loc_0021977A;
    if (_jt == 0x0021978Du) goto loc_0021978D;
    if (_jt == 0x002197A0u) goto loc_002197A0;
    if (_jt == 0x002197B3u) goto loc_002197B3;
    if (_jt == 0x002197C6u) goto loc_002197C6;
    if (_jt == 0x002197D9u) goto loc_002197D9;
    if (_jt == 0x002197ECu) goto loc_002197EC;
    if (_jt == 0x002197FFu) goto loc_002197FF;
    if (_jt == 0x00219812u) goto loc_00219812;
    if (_jt == 0x00219825u) goto loc_00219825;
    if (_jt == 0x00219838u) goto loc_00219838;
    if (_jt == 0x0021984Bu) goto loc_0021984B;
    if (_jt == 0x0021985Eu) goto loc_0021985E;
    if (_jt == 0x00219871u) goto loc_00219871;
    if (_jt == 0x00219884u) goto loc_00219884;
    if (_jt == 0x00219897u) goto loc_00219897;
    if (_jt == 0x002198AAu) goto loc_002198AA;
    if (_jt == 0x002198BDu) goto loc_002198BD;
    if (_jt == 0x002198D0u) goto loc_002198D0;
    if (_jt == 0x002198E3u) goto loc_002198E3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021935A: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00219365u); RECOMP_ABI_CALL(0x0002FD43u, sub_0002FD43); /* call 0x0002FD43 */

loc_00219365: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021936D: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x00219378u); RECOMP_ABI_CALL(0x0002FD43u, sub_0002FD43); /* call 0x0002FD43 */

loc_00219378: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219380: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0021938Bu); RECOMP_ABI_CALL(0x0002FD43u, sub_0002FD43); /* call 0x0002FD43 */

loc_0021938B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219393: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0021939Eu); RECOMP_ABI_CALL(0x0002FD43u, sub_0002FD43); /* call 0x0002FD43 */

loc_0021939E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002193A6: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x002193B1u); RECOMP_ABI_CALL(0x0002FD43u, sub_0002FD43); /* call 0x0002FD43 */

loc_002193B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002193B9: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x002193C4u); RECOMP_ABI_CALL(0x0002FD43u, sub_0002FD43); /* call 0x0002FD43 */

loc_002193C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002193CC: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x002193D7u); RECOMP_ABI_CALL(0x0002FD43u, sub_0002FD43); /* call 0x0002FD43 */

loc_002193D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002193DF: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x002193EAu); RECOMP_ABI_CALL(0x0002FD43u, sub_0002FD43); /* call 0x0002FD43 */

loc_002193EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002193F2: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    PUSH32(esp, 0x002193FDu); RECOMP_ABI_CALL(0x0002FD43u, sub_0002FD43); /* call 0x0002FD43 */

loc_002193FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219405: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00219410u); RECOMP_ABI_CALL(0x0002FD43u, sub_0002FD43); /* call 0x0002FD43 */

loc_00219410: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219418: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00219423u); RECOMP_ABI_CALL(0x0002FD43u, sub_0002FD43); /* call 0x0002FD43 */

loc_00219423: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021942B: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x00219436u); RECOMP_ABI_CALL(0x0002FD43u, sub_0002FD43); /* call 0x0002FD43 */

loc_00219436: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021943E: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00219449u); RECOMP_ABI_CALL(0x0002FD43u, sub_0002FD43); /* call 0x0002FD43 */

loc_00219449: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219451: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0021945Cu); RECOMP_ABI_CALL(0x0002FD43u, sub_0002FD43); /* call 0x0002FD43 */

loc_0021945C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219464: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x00219476u); RECOMP_ABI_CALL(0x00032782u, sub_00032782); /* call 0x00032782 */

loc_00219476: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(esi) = edx;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219484: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x00219496u); RECOMP_ABI_CALL(0x00032782u, sub_00032782); /* call 0x00032782 */

loc_00219496: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(esi) = edx;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002194A4: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x002194AFu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_002194AF: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002198F5; /* jne: not equal / not zero */

loc_002194B8: ;
    ecx = edi;
    PUSH32(esp, 0x002194BFu); RECOMP_ABI_CALL(0x00014971u, sub_00014971); /* call 0x00014971 */

loc_002194BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002198F5; /* je: equal / zero */

loc_002194C7: ;
    PUSH32(esp, 0);
    MEM32(esi) = 0;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x002194D9u); RECOMP_ABI_CALL(0x0002EC13u, sub_0002EC13); /* call 0x0002EC13 */

loc_002194D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002194E1: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x002194ECu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_002194EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002194F4: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002194FFu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_002194FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219507: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x00219512u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_00219512: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021951A: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x00219525u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_00219525: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021952D: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x00219538u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_00219538: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219540: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x0021954Bu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_0021954B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219553: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x0021955Eu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_0021955E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219566: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00219571u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_00219571: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219579: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x00219584u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_00219584: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021958C: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x00219597u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_00219597: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021959F: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x002195AAu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_002195AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002195B2: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    PUSH32(esp, 0x002195BDu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_002195BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002195C5: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x002195D0u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_002195D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002195D8: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x002195E3u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_002195E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002195EB: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x002195F6u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_002195F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002195FE: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00219609u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_00219609: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219611: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x0021961Cu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_0021961C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219624: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0021962Fu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_0021962F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219637: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00219642u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_00219642: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021964A: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x00219655u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_00219655: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021965D: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00219668u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_00219668: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219670: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0021967Bu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_0021967B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219683: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x0021968Eu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_0021968E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219696: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x002196A1u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_002196A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002196A9: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 7);
    PUSH32(esp, 0x002196B4u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_002196B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002196BC: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x002196C7u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_002196C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002196CF: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x002196DAu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_002196DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002196E2: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x002196EDu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_002196ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002196F5: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x00219700u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_00219700: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219708: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x00219713u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_00219713: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021971B: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x23);
    PUSH32(esp, 0x00219726u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_00219726: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021972E: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x00219739u); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_00219739: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219741: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0021974Cu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_0021974C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219754: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x0021975Fu); RECOMP_ABI_CALL(0x00033D76u, sub_00033D76); /* call 0x00033D76 */

loc_0021975F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219767: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x00219772u); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_00219772: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021977A: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00219785u); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_00219785: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021978D: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x00219798u); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_00219798: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002197A0: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x002197ABu); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_002197AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002197B3: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x002197BEu); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_002197BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002197C6: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x002197D1u); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_002197D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002197D9: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x002197E4u); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_002197E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002197EC: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x002197F7u); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_002197F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002197FF: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0021980Au); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_0021980A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219812: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0021981Du); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_0021981D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219825: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00219830u); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_00219830: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219838: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x00219843u); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_00219843: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021984B: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00219856u); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_00219856: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021985E: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00219869u); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_00219869: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219871: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0021987Cu); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_0021987C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219884: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x0021988Fu); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_0021988F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00219897: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x002198A2u); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_002198A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002198AA: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x002198B5u); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_002198B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002198BD: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x002198C8u); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_002198C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002198D0: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 7);
    PUSH32(esp, 0x002198DBu); RECOMP_ABI_CALL(0x00015FD3u, sub_00015FD3); /* call 0x00015FD3 */

loc_002198DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002198E3: ;
    POP32(esp, edi);
    ebx = 3;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002198F0: ;
    ebx = 2;

loc_002198F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021A5C0
 * Original: 0x0021A5C0 - 0x0021A5C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021A5C0: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00034D5C(); return; /* tail jmp 0x00034D5C */

}

/**
 * sub_0021A5D0
 * Original: 0x0021A5D0 - 0x0021A5EB (27 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A5D0(void)
{

loc_0021A5D0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021A5DFu); RECOMP_ABI_CALL(0x0001C79Du, sub_0001C79D); /* call 0x0001C79D */

loc_0021A5DF: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021A5E8u); RECOMP_ABI_CALL(0x00013AF3u, sub_00013AF3); /* call 0x00013AF3 */

loc_0021A5E8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021A600
 * Original: 0x0021A600 - 0x0021A61B (27 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A600(void)
{

loc_0021A600: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021A60Fu); RECOMP_ABI_CALL(0x0001C79Du, sub_0001C79D); /* call 0x0001C79D */

loc_0021A60F: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021A618u); RECOMP_ABI_CALL(0x0001A957u, sub_0001A957); /* call 0x0001A957 */

loc_0021A618: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021A630
 * Original: 0x0021A630 - 0x0021A7A0 (368 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021A630: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    MEM32(esi) = 0x7FAF18;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x214) = ebx;
    MEM32(esi + 0x218) = ebx;
    MEM32(esi + 0x21C) = ebx;
    PUSH32(esp, 0x0021A65Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021A65C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A66C; /* je: equal / zero */

loc_0021A663: ;
    ecx = eax;
    PUSH32(esp, 0x0021A66Au); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_0021A66A: ;
    goto loc_0021A66E;

loc_0021A66C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021A66E: ;
    MEM8(esi + 0x114) = LO8(ebx);
    MEM8(esi + 0x14) = LO8(ebx);
    MEM32(esi + 8) = eax;
    eax = MEM32(0x7FAF10);
    MEM32(esi + 0x14) = eax;
    SET_LO8(ecx, MEM8(0x7FAF14));
    MEM8(esi + 0x18) = LO8(ecx);
    edx = MEM32(0x7FAF08);
    MEM32(esi + 0x114) = edx;
    SET_LO16(eax, MEM16(0x7FAF0C));
    MEM16(esi + 0x118) = LO16(eax);
    SET_LO8(ecx, MEM8(0x7FAF0E));
    MEM8(esi + 0x11A) = LO8(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x220) = edx;
    MEM32(esi + 0x224) = edx;
    MEM32(esi + 0x228) = edx;
    MEM32(esi + 0x22C) = edx;
    MEM32(esi + 0x230) = edx;
    MEM32(esi + 0x234) = edx;
    MEM32(esi + 0x238) = edx;
    MEM32(esi + 0x23C) = edx;
    MEM32(esi + 0x240) = edx;
    MEM32(esi + 0x244) = edx;
    MEM32(esi + 0x248) = edx;
    MEM32(esi + 0x24C) = edx;
    MEM32(esi + 0x250) = edx;
    MEM32(esi + 0x254) = edx;
    MEM32(esi + 0x258) = edx;
    MEM32(esi + 0x25C) = edx;
    MEM32(esi + 0x260) = edx;
    MEM32(esi + 0x264) = edx;
    MEM32(esi + 0x268) = edx;
    MEM32(esi + 0x26C) = edx;
    MEM32(esi + 0x270) = edx;
    MEM32(esi + 0x274) = edx;
    MEM32(esi + 0x278) = edx;
    MEM32(esi + 0x27C) = edx;
    MEM32(esi + 0x280) = edx;
    MEM32(esi + 0x284) = edx;
    MEM32(esi + 0x288) = edx;
    MEM32(esi + 0x28C) = edx;
    MEM32(esi + 0x290) = edx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    MEM32(esi + 0x294) = edx;
    PUSH32(esp, 0x0021A76Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021A76E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A795; /* je: equal / zero */

loc_0021A775: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax) = 0x7F9EEC;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(esi + 0x21C) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0021A795: ;
    MEM32(esi + 0x21C) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A800
 * Original: 0x0021A800 - 0x0021A825 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021A800: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A822; /* je: equal / zero */

loc_0021A80B: ;
    ecx = esi;
    PUSH32(esp, 0x0021A812u); RECOMP_ABI_CALL(0x00019CEBu, sub_00019CEB); /* call 0x00019CEB */

loc_0021A812: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021A818u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021A818: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = 0;

loc_0021A822: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021A830
 * Original: 0x0021A830 - 0x0021A8F5 (197 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021A830: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021A865; /* jne: not equal / not zero */

loc_0021A83D: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x0021A849u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021A849: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021A860; /* je: equal / zero */

loc_0021A850: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0021A85Eu); RECOMP_ABI_CALL(0x0001BD20u, sub_0001BD20); /* call 0x0001BD20 */

loc_0021A85E: ;
    goto loc_0021A862;

loc_0021A860: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021A862: ;
    MEM32(esi + 4) = eax;

loc_0021A865: ;
    edx = MEM32(esp + 0x48);
    ecx = MEM32(esi + 4);
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 1;
    MEM32(esp + 0xC) = 2;
    MEM32(esp + 0x10) = 3;
    MEM32(esp + 0x14) = 4;
    MEM32(esp + 0x18) = 5;
    MEM32(esp + 0x1C) = 6;
    MEM32(esp + 0x20) = 7;
    MEM32(esp + 0x24) = 8;
    MEM32(esp + 0x28) = 9;
    MEM32(esp + 0x2C) = 0xA;
    MEM32(esp + 0x30) = 0xB;
    MEM32(esp + 0x34) = 0xC;
    MEM32(esp + 0x38) = 0xD;
    MEM32(esp + 0x3C) = 0xE;
    eax = MEM32(esp + edx * 4 + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021A8EEu); RECOMP_ABI_CALL(0x0003670Bu, sub_0003670B); /* call 0x0003670B */

loc_0021A8EE: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021A930
 * Original: 0x0021A930 - 0x0021A9E6 (182 bytes, 59 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021A930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021A930: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0021A944u); RECOMP_ABI_CALL(0x000268F1u, sub_000268F1); /* call 0x000268F1 */

loc_0021A944: ;
    ecx = eax;
    PUSH32(esp, 0x0021A94Bu); RECOMP_ABI_CALL(0x00035E9Bu, sub_00035E9B); /* call 0x00035E9B */

loc_0021A94B: ;
    edi = MEM32(esp + 0x114);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    edx = eax;
    PUSH32(esp, 0x0021A963u); RECOMP_ABI_CALL(0x00028D36u, sub_00028D36); /* call 0x00028D36 */

loc_0021A963: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021A96Cu); RECOMP_ABI_CALL(0x000268F1u, sub_000268F1); /* call 0x000268F1 */

loc_0021A96C: ;
    ecx = eax;
    PUSH32(esp, 0x0021A973u); RECOMP_ABI_CALL(0x0001297Du, sub_0001297D); /* call 0x0001297D */

loc_0021A973: ;
    eax = edi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_fa == 0)) goto loc_0021A9C1; /* je: equal / zero */

loc_0021A97C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0021A99F; /* je: equal / zero */

loc_0021A97F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0021A9C1; /* je: equal / zero */

loc_0021A982: ;
    eax = MEM32(esp + 0x110);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021A993u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0021A993: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0021A99F: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 0x110);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FB000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021A9B5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0021A9B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0021A9C1: ;
    eax = MEM32(esp);
    ecx = MEM32(esp + 0x110);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021A9DAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0021A9DA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0021AA20
 * Original: 0x0021AA20 - 0x0021AA54 (52 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021AA20: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 2;
    if ((_fa == 0)) goto loc_0021AA38; /* je: equal / zero */

loc_0021AA2E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021AA3A; /* jne: not equal / not zero */

loc_0021AA31: ;
    ecx = 1;
    goto loc_0021AA3A;

loc_0021AA38: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021AA3A: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021AA4Au); RECOMP_ABI_CALL(0x000268F1u, sub_000268F1); /* call 0x000268F1 */

loc_0021AA4A: ;
    ecx = eax;
    PUSH32(esp, 0x0021AA51u); RECOMP_ABI_CALL(0x00032304u, sub_00032304); /* call 0x00032304 */

loc_0021AA51: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0021AA70
 * Original: 0x0021AA70 - 0x0021AB48 (216 bytes, 117 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021AA70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 0x220;
    goto loc_0021AA80;

    /* nop */

loc_0021AA80: ;
    PUSH32(esp, 0x0021AA85u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0021AA85: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0021AA8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021AA89u); } /* indirect call */
    }

loc_0021AA8C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0021AA93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021AA90u); } /* indirect call */
    }

loc_0021AA93: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0021AAB7; /* ja: above (unsigned >) */

loc_0021AA9B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21AAE4); /* switch: 10 entries, 4 targets */
    if (_jt == 0x0021AAA2u) goto loc_0021AAA2;
    if (_jt == 0x0021AAA9u) goto loc_0021AAA9;
    if (_jt == 0x0021AAB0u) goto loc_0021AAB0;
    if (_jt == 0x0021AAB7u) goto loc_0021AAB7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021AAA2: ;
    eax = 0x1E;
    goto loc_0021AAB9;

loc_0021AAA9: ;
    eax = 0xC;
    goto loc_0021AAB9;

loc_0021AAB0: ;
    eax = 0xE;
    goto loc_0021AAB9;

loc_0021AAB7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021AAB9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021AADF; /* jge: greater or equal (signed >=) */

loc_0021AABD: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021AAD9; /* je: equal / zero */

loc_0021AAC3: ;
    ecx = esi;
    PUSH32(esp, 0x0021AACAu); RECOMP_ABI_CALL(0x0001E2DCu, sub_0001E2DC); /* call 0x0001E2DC */

loc_0021AACA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021AAD0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021AAD0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 0;

loc_0021AAD9: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0021AA80;

loc_0021AADF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    esp += 4; return; /* ret */

}

/**
 * sub_0021AB50
 * Original: 0x0021AB50 - 0x0021AB58 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AB50(void)
{

loc_0021AB50: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0021AB57u); RECOMP_ABI_CALL(0x00023525u, sub_00023525); /* call 0x00023525 */

loc_0021AB57: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021AB60
 * Original: 0x0021AB60 - 0x0021AC65 (261 bytes, 94 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021AB60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x7FA2E0;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x24) = edi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    MEM8(esi + 0x2E) = 1;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    PUSH32(esp, 0x0021AB99u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021AB99: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021ABA9; /* je: equal / zero */

loc_0021ABA0: ;
    ecx = eax;
    PUSH32(esp, 0x0021ABA7u); RECOMP_ABI_CALL(0x00024902u, sub_00024902); /* call 0x00024902 */

loc_0021ABA7: ;
    goto loc_0021ABAB;

loc_0021ABA9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021ABAB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x0021ABB6u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021ABB6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021ABC6; /* je: equal / zero */

loc_0021ABBD: ;
    ecx = eax;
    PUSH32(esp, 0x0021ABC4u); RECOMP_ABI_CALL(0x0002334Fu, sub_0002334F); /* call 0x0002334F */

loc_0021ABC4: ;
    goto loc_0021ABC8;

loc_0021ABC6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021ABC8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x0021ABD3u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021ABD3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021ABE3; /* je: equal / zero */

loc_0021ABDA: ;
    ecx = eax;
    PUSH32(esp, 0x0021ABE1u); RECOMP_ABI_CALL(0x0002AC49u, sub_0002AC49); /* call 0x0002AC49 */

loc_0021ABE1: ;
    goto loc_0021ABE5;

loc_0021ABE3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021ABE5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0021ABF0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021ABF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021AC05; /* je: equal / zero */

loc_0021ABF7: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0021AC03u); RECOMP_ABI_CALL(0x0001F5B0u, sub_0001F5B0); /* call 0x0001F5B0 */

loc_0021AC03: ;
    goto loc_0021AC07;

loc_0021AC05: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021AC07: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0021AC12u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021AC12: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021AC22; /* je: equal / zero */

loc_0021AC19: ;
    ecx = eax;
    PUSH32(esp, 0x0021AC20u); RECOMP_ABI_CALL(0x0001E68Du, sub_0001E68D); /* call 0x0001E68D */

loc_0021AC20: ;
    goto loc_0021AC24;

loc_0021AC22: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021AC24: ;
    ecx = esp + 8;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0021AC30u); RECOMP_ABI_CALL(0x0002138Du, sub_0002138D); /* call 0x0002138D */

loc_0021AC30: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0021AC40u); RECOMP_ABI_CALL(0x00036FE9u, sub_00036FE9); /* call 0x00036FE9 */

loc_0021AC40: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20) = eax;
    edx = esi + 0x28;
    MEM32(edx) = ecx;
    MEM16(edx + 4) = LO16(ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x0021AC5Bu); RECOMP_ABI_CALL(0x0002181Au, sub_0002181A); /* call 0x0002181A */

loc_0021AC5B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021ACB0
 * Original: 0x0021ACB0 - 0x0021ACCE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021ACB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021ACB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0021ACB8u); RECOMP_ABI_CALL(0x00037999u, sub_00037999); /* call 0x00037999 */

loc_0021ACB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021ACC8; /* je: equal / zero */

loc_0021ACBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021ACC5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021ACC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021ACC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021ACE0
 * Original: 0x0021ACE0 - 0x0021AD0C (44 bytes, 17 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021ACE0(void)
{

loc_0021ACE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x0021ACF7u); RECOMP_ABI_CALL(0x00022C60u, sub_00022C60); /* call 0x00022C60 */

loc_0021ACF7: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021AD08u); RECOMP_ABI_CALL(0x000189DBu, sub_000189DB); /* call 0x000189DB */

loc_0021AD08: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021AD20
 * Original: 0x0021AD20 - 0x0021AD88 (104 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021AD20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021AD20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0021AD42u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021AD42: ;
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0021AD5Eu); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021AD5E: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021AD70u); RECOMP_ABI_CALL(0x0001D21Au, sub_0001D21A); /* call 0x0001D21A */

loc_0021AD70: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0021AD81u); RECOMP_ABI_CALL(0x000189DBu, sub_000189DB); /* call 0x000189DB */

loc_0021AD81: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0021ADB0
 * Original: 0x0021ADB0 - 0x0021AFD8 (552 bytes, 200 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021ADB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021ADB0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021ADCD; /* jbe: below or equal (unsigned <=) */

loc_0021ADC5: ;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = eax;

loc_0021ADCD: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esp + 0x34;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0x0021ADE4u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021ADE4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esp + 0x38;
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0x0021ADF9u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021ADF9: ;
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021AE9A; /* jne: not equal / not zero */

loc_0021AE07: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0x0021AE1Cu); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021AE1C: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0x0021AE35u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021AE35: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021AE9A; /* jne: not equal / not zero */

loc_0021AE3B: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esp + 0x38;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0x0021AE50u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021AE50: ;
    PUSH32(esp, ebp);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esp + 0x34;
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0x0021AE65u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021AE65: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021AE7Fu); RECOMP_ABI_CALL(0x0001141Fu, sub_0001141F); /* call 0x0001141F */

loc_0021AE7F: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0021AE90u); RECOMP_ABI_CALL(0x000189DBu, sub_000189DB); /* call 0x000189DB */

loc_0021AE90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_0021AE9A: ;
    edx = MEM32(esp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x28) (32-bit) */
    ebx = MEM32(esp + 0x2C);
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ebp;
    if (CMP_AE(_fa, _fb)) goto loc_0021AFCA; /* jae: above or equal (unsigned >=) */

loc_0021AEB4: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0021AEBDu); RECOMP_ABI_CALL(0x000213F6u, sub_000213F6); /* call 0x000213F6 */

loc_0021AEBD: ;
    esi = eax;
    PUSH32(esp, ebp);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esp + 0x34;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x3C) = ebp;
    PUSH32(esp, 0x0021AED5u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021AED5: ;
    edx = MEM32(esp + 0x2C);
    ecx = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x24);
    eax = ecx + edx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x28) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021AF04; /* jbe: below or equal (unsigned <=) */

loc_0021AEEB: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esp + 0x38;
    MEM32(esp + 0x3C) = ebp;
    PUSH32(esp, 0x0021AF00u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021AF00: ;
    esi = MEM32(esp + 0x2C);

loc_0021AF04: ;
    PUSH32(esp, ebp);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esp + 0x34;
    MEM32(esp + 0x3C) = ebp;
    PUSH32(esp, 0x0021AF19u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021AF19: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esp + 0x34;
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x0021AF2Eu); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021AF2E: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021AF48u); RECOMP_ABI_CALL(0x0001141Fu, sub_0001141F); /* call 0x0001141F */

loc_0021AF48: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0021AF8B; /* je: equal / zero */

loc_0021AF5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021AF8B; /* je: equal / zero */

loc_0021AF60: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021AF8F; /* jle: less or equal (signed <=) */

loc_0021AF6C: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0021AF77u); RECOMP_ABI_CALL(0x000189DBu, sub_000189DB); /* call 0x000189DB */

loc_0021AF77: ;
    ecx = MEM32(esp + 0x14);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xE4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;

loc_0021AF8B: ;
    eax = MEM32(esp + 0x30);

loc_0021AF8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021AF99; /* je: equal / zero */

loc_0021AF93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021AFCA; /* jl: less (signed <) */

loc_0021AF99: ;
    PUSH32(esp, ebp);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esp + 0x34;
    MEM32(esp + 0x3C) = ebp;
    PUSH32(esp, 0x0021AFAEu); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021AFAE: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x28) (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0021AEB4; /* jb: below (unsigned <) */

loc_0021AFCA: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0021B070
 * Original: 0x0021B070 - 0x0021B092 (34 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B070(void)
{

loc_0021B070: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0021B07Du); RECOMP_ABI_CALL(0x0001CB12u, sub_0001CB12); /* call 0x0001CB12 */

loc_0021B07D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0021B08Eu); RECOMP_ABI_CALL(0x000189DBu, sub_000189DB); /* call 0x000189DB */

loc_0021B08E: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0021B0A0
 * Original: 0x0021B0A0 - 0x0021B0D8 (56 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B0A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B0A0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    MEM32(esp + 0xC) = 0x7F77E0;
    PUSH32(esp, 0x0021B0C0u); RECOMP_ABI_CALL(0x0001104Bu, sub_0001104B); /* call 0x0001104B */

loc_0021B0C0: ;
    eax = MEM32(esp + 0x30);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021B0D1u); RECOMP_ABI_CALL(0x0003234Au, sub_0003234A); /* call 0x0003234A */

loc_0021B0D1: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021B0F0
 * Original: 0x0021B0F0 - 0x0021B1A5 (181 bytes, 85 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021B0F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0021B0F8u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021B0F8: ;
    ecx = eax;
    PUSH32(esp, 0x0021B0FFu); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_0021B0FF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0021B106u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021B103u); } /* indirect call */
    }

loc_0021B106: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0021B129; /* ja: above (unsigned >) */

loc_0021B10C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21B130); /* switch: 13 entries, 3 targets */
    if (_jt == 0x0021B113u) goto loc_0021B113;
    if (_jt == 0x0021B11Au) goto loc_0021B11A;
    if (_jt == 0x0021B121u) goto loc_0021B121;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021B113: ;
    eax = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021B11A: ;
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021B121: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001D012(); return; /* tail jmp 0x0001D012 */

loc_0021B129: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx * 4 + 0x7FB020);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021B1B0
 * Original: 0x0021B1B0 - 0x0021B2D0 (288 bytes, 101 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021B1B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 1;
    MEM32(esp + 0x14) = 2;
    MEM32(esp + 0x18) = 3;
    MEM32(esp + 0x1C) = 4;
    edi = MEM32(esp + esi * 4 + 0x10);
    ebp = ecx;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0021B1E8u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021B1E8: ;
    ecx = eax;
    PUSH32(esp, 0x0021B1EFu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0021B1EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021B270; /* je: equal / zero */

loc_0021B1F3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x5C) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021B2C4; /* jg: greater (signed >) */

loc_0021B1FC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0021B207u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021B201u); } /* indirect call */
    }

loc_0021B207: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0021B210u); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_0021B210: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021B23E; /* jle: less or equal (signed <=) */

loc_0021B215: ;
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x10) = 0x7F9BC8;
    MEM32(esp + 0x14) = 0x7F9BB0;
    ecx = MEM32(esp + eax * 4 + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0021B235u); RECOMP_ABI_CALL(0x000132F6u, sub_000132F6); /* call 0x000132F6 */

loc_0021B235: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0021B23Eu); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_0021B23E: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021B253u); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_0021B253: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0021B25Cu); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_0021B25C: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0021B264u); RECOMP_ABI_CALL(0x0003671Fu, sub_0003671F); /* call 0x0003671F */

loc_0021B264: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0021B270: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021B2C4; /* jge: greater or equal (signed >=) */

loc_0021B275: ;
    edi = MEM32(esp + 0x24);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x0021B286u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021B280u); } /* indirect call */
    }

loc_0021B286: ;
    ecx = MEM32(esi * 4 + 0x8B51E8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x30);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    POP32(esp, edi);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0xC) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0021B2C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021B320
 * Original: 0x0021B320 - 0x0021B3E3 (195 bytes, 63 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B320: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0021B32Du); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021B32D: ;
    ecx = eax;
    PUSH32(esp, 0x0021B334u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0021B334: ;
    ecx = ebx;
    esi = eax;
    MEM32(esp + 0xC) = 1;
    MEM32(esp + 0x10) = 2;
    MEM32(esp + 0x14) = 3;
    MEM32(esp + 0x18) = 4;
    PUSH32(esp, 0x0021B35Du); RECOMP_ABI_CALL(0x0001D012u, sub_0001D012); /* call 0x0001D012 */

loc_0021B35D: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esp + ecx * 4 + 0x1C);
    ecx = MEM32(esi + 0x5C);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021B3DA; /* jg: greater (signed >) */

loc_0021B370: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0021B37Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021B375u); } /* indirect call */
    }

loc_0021B37B: ;
    esi = eax;
    ecx = esi;
    MEM32(esp + 0xC) = 0x7F9B20;
    MEM32(esp + 0x10) = 0x7F9B18;
    PUSH32(esp, 0x0021B394u); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_0021B394: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021B3B2; /* jle: less or equal (signed <=) */

loc_0021B399: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + eax * 4 + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0021B3A9u); RECOMP_ABI_CALL(0x000132F6u, sub_000132F6); /* call 0x000132F6 */

loc_0021B3A9: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0021B3B2u); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_0021B3B2: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021B3C7u); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_0021B3C7: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0021B3D0u); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_0021B3D0: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0021B3D8u); RECOMP_ABI_CALL(0x0003671Fu, sub_0003671F); /* call 0x0003671F */

loc_0021B3D8: ;
    SET_LO8(eax, 1);

loc_0021B3DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021B420
 * Original: 0x0021B420 - 0x0021B4A2 (130 bytes, 46 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021B420: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0021B42Cu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021B42C: ;
    ecx = eax;
    PUSH32(esp, 0x0021B433u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0021B433: ;
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x5C);
    MEM32(esp + 8) = 2;
    MEM32(esp + 0xC) = 3;
    MEM32(esp + 0x10) = 4;
    edi = MEM32(esp + eax * 4 + 8);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021B49A; /* jg: greater (signed >) */

loc_0021B45E: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0021B468u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021B462u); } /* indirect call */
    }

loc_0021B468: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0021B471u); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_0021B471: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021B486u); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_0021B486: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0021B48Fu); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_0021B48F: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0021B497u); RECOMP_ABI_CALL(0x0003671Fu, sub_0003671F); /* call 0x0003671F */

loc_0021B497: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);

loc_0021B49A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021B4D0
 * Original: 0x0021B4D0 - 0x0021B713 (579 bytes, 179 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021B4D0: ;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x134));
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ebx = ecx;
    MEM32(esp + 0x14) = ebp;
    PUSH32(esp, 0x0021B4E7u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021B4E7: ;
    ecx = eax;
    PUSH32(esp, 0x0021B4EEu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0021B4EE: ;
    esi = eax;
    eax = MEM32(esi);
    edi = MEM32(esi + 0x58);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0021B4FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021B4F7u); } /* indirect call */
    }

loc_0021B4FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021B5CD; /* je: equal / zero */

loc_0021B503: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021B5CD; /* je: equal / zero */

loc_0021B50C: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0021B515u); RECOMP_ABI_CALL(0x0001862Au, sub_0001862A); /* call 0x0001862A */

loc_0021B515: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    ecx = esp + 0x30;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x0021B532u); RECOMP_ABI_CALL(0x0002507Du, sub_0002507D); /* call 0x0002507D */

loc_0021B532: ;
    esi = MEM32(esi + 0x50);
    eax = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x148);
    MEM32(esp + 0x10) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(esp + 0x14C);
    if (CMP_A(_fa, _fb)) goto loc_0021B59C; /* ja: above (unsigned >) */

loc_0021B54F: ;
    ebp = MEM32(esp + 0x150);

loc_0021B556: ;
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0021B563u); RECOMP_ABI_CALL(0x00031913u, sub_00031913); /* call 0x00031913 */

loc_0021B563: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x23) = LO8(eax);
    if ((_fa == 0)) goto loc_0021B59A; /* je: equal / zero */

loc_0021B56F: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    ecx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = eax;
    MEM32(esi) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0021B556; /* jbe: below or equal (unsigned <=) */

loc_0021B585: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0021B594; /* je: equal / zero */

loc_0021B591: ;
    MEM8(edi) = 1;

loc_0021B594: ;
    MEM32(esi) = 1;

loc_0021B59A: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021B59C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021B5B3; /* je: equal / zero */

loc_0021B5A0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0021B5B3; /* jle: less or equal (signed <=) */

loc_0021B5A4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0021B5B3; /* je: equal / zero */

loc_0021B5B0: ;
    MEM8(edi) = 1;

loc_0021B5B3: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0021B5BCu); RECOMP_ABI_CALL(0x0001B9B5u, sub_0001B9B5); /* call 0x0001B9B5 */

loc_0021B5BC: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x134)) >> 32) & 1);
    esp = esp + 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_0021B5CD: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x0021B5D6u); RECOMP_ABI_CALL(0x00024902u, sub_00024902); /* call 0x00024902 */

loc_0021B5D6: ;
    ecx = MEM32(esp + 0x154);
    edx = MEM32(esp + 0x150);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0021B5F1u); RECOMP_ABI_CALL(0x000314B3u, sub_000314B3); /* call 0x000314B3 */

loc_0021B5F1: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(esp + 0x40);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0021B6F9; /* jle: less or equal (signed <=) */

loc_0021B606: ;
    edi = 0x7F77E0;
    ebx = 0x7F9EE8;

loc_0021B610: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esp + 0x3C;
    MEM32(esp + 0x4C) = edi;
    PUSH32(esp, 0x0021B623u); RECOMP_ABI_CALL(0x00037674u, sub_00037674); /* call 0x00037674 */

loc_0021B623: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0021B62Cu); RECOMP_ABI_CALL(0x0002334Fu, sub_0002334F); /* call 0x0002334F */

loc_0021B62C: ;
    ecx = MEM32(esp + 0x48);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    MEM32(esp + 0x70) = ebx;
    PUSH32(esp, 0x0021B643u); RECOMP_ABI_CALL(0x00036FD5u, sub_00036FD5); /* call 0x00036FD5 */

loc_0021B643: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0021B666; /* je: equal / zero */

loc_0021B647: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x68) = ebx;
    PUSH32(esp, 0x0021B654u); RECOMP_ABI_CALL(0x00031B16u, sub_00031B16); /* call 0x00031B16 */

loc_0021B654: ;
    eax = MEM32(esp + 0x40);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x44) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0021B610; /* jl: less (signed <) */

loc_0021B661: ;
    goto loc_0021B6F9;

loc_0021B666: ;
    esi = MEM32(esp + 0x50);
    edi = MEM32(esp + 0x4C);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0x0021B683u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021B683: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0021B693u); RECOMP_ABI_CALL(0x00017E6Eu, sub_00017E6E); /* call 0x00017E6E */

loc_0021B693: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0021B6EC; /* jae: above or equal (unsigned >=) */

loc_0021B69D: ;
    edx = MEM32(esp + 0x148);
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esp + 0x2C;
    MEM8(edx) = 1;
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0x0021B6BCu); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021B6BC: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esp + 0x28;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0x0021B6D5u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_0021B6D5: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x14C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = esi;
    MEM32(esp + 0x14) = 4;

loc_0021B6EC: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x68) = ebx;
    PUSH32(esp, 0x0021B6F9u); RECOMP_ABI_CALL(0x00031B16u, sub_00031B16); /* call 0x00031B16 */

loc_0021B6F9: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x0021B702u); RECOMP_ABI_CALL(0x0001F0FBu, sub_0001F0FB); /* call 0x0001F0FB */

loc_0021B702: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x134)) >> 32) & 1);
    esp = esp + 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021B7B0
 * Original: 0x0021B7B0 - 0x0021BC37 (1159 bytes, 377 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021B7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021B7B0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0021B7C8u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021B7C8: ;
    ecx = eax;
    PUSH32(esp, 0x0021B7CFu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0021B7CF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021B7DD; /* jne: not equal / not zero */

loc_0021B7D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0021B7DD: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0021B7EA; /* je: equal / zero */

loc_0021B7E7: ;
    MEM8(ebx) = 0;

loc_0021B7EA: ;
    ebp = MEM32(esp + 0x40);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021B7F9; /* je: equal / zero */

loc_0021B7F2: ;
    MEM32(ebp) = 0;

loc_0021B7F9: ;
    MEM8(esi + 0x2E) = 1;
    eax = MEM32(edi + 0x58);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0021BAAC; /* ja: above (unsigned >) */

loc_0021B80A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21BC38); /* switch: 12 entries, 8 targets */
    if (_jt == 0x0021B811u) goto loc_0021B811;
    if (_jt == 0x0021B82Fu) goto loc_0021B82F;
    if (_jt == 0x0021B8F7u) goto loc_0021B8F7;
    if (_jt == 0x0021B909u) goto loc_0021B909;
    if (_jt == 0x0021B937u) goto loc_0021B937;
    if (_jt == 0x0021BA3Fu) goto loc_0021BA3F;
    if (_jt == 0x0021BAACu) goto loc_0021BAAC;
    if (_jt == 0x0021BC29u) goto loc_0021BC29;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021B811: ;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0021B821u); RECOMP_ABI_CALL(0x000316E3u, sub_000316E3); /* call 0x000316E3 */

loc_0021B821: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esp + 8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0021B82F: ;
    eax = MEM32(edi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0021B8E1; /* jle: less or equal (signed <=) */

loc_0021B83E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021B8D4; /* jle: less or equal (signed <=) */

loc_0021B847: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021B8E1; /* jne: not equal / not zero */

loc_0021B850: ;
    MEM32(esp + 0x14) = 2;

loc_0021B858: ;
    edx = MEM32(esi);
    ecx = esi;
    ebp = edi + 0x64;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0021B865u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021B85Fu); } /* indirect call */
    }

loc_0021B865: ;
    ecx = esp + 0x28;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0021B872u); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_0021B872: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = ebp;
    MEM8(esp + 0x44) = 1;
    MEM8(esp + 0x13) = LO8(ebx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0021B886u); RECOMP_ABI_CALL(0x00017AB3u, sub_00017AB3); /* call 0x00017AB3 */

loc_0021B886: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021B956; /* jle: less or equal (signed <=) */

loc_0021B88E: ;
    edi = edi;

loc_0021B890: ;
    PUSH32(esp, edi);
    ecx = esp + 0x2C;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x0021B8A2u); RECOMP_ABI_CALL(0x0001498Fu, sub_0001498F); /* call 0x0001498F */

loc_0021B8A2: ;
    esi = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0021B8B1u); RECOMP_ABI_CALL(0x0001CF8Bu, sub_0001CF8B); /* call 0x0001CF8B */

loc_0021B8B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021B93C; /* je: equal / zero */

loc_0021B8B9: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021B93C; /* jne: not equal / not zero */

loc_0021B8C1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0021B937; /* ja: above (unsigned >) */

loc_0021B8C6: ;
    ecx = ZX8(MEM8(esi + 0x21BC68));
    { uint32_t _jt = MEM32(ecx * 4 + 0x21BC5C); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0021B8F7u) goto loc_0021B8F7;
    if (_jt == 0x0021B909u) goto loc_0021B909;
    if (_jt == 0x0021B937u) goto loc_0021B937;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021B8D4: ;
    MEM32(esp + 0x14) = 1;
    goto loc_0021B858;

loc_0021B8E1: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esp + 0xC) = 0;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0021B8F7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021B93C; /* jne: not equal / not zero */

loc_0021B8FD: ;
    SET_LO8(ebx, 1);
    MEM32(esp + 0x14) = 1;
    goto loc_0021B93C;

loc_0021B909: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021B93C; /* jne: not equal / not zero */

loc_0021B90F: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), eax (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_GE(_fas, _fbs)) goto loc_0021B92D; /* jge: greater or equal (signed >=) */

loc_0021B91E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    goto loc_0021B93C;

loc_0021B92D: ;
    MEM32(esp + 0x14) = 0;
    goto loc_0021B93C;

loc_0021B937: ;
    MEM8(esp + 0x44) = 0;

loc_0021B93C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021B946; /* jne: not equal / not zero */

loc_0021B941: ;
    MEM8(esp + 0x13) = 1;

loc_0021B946: ;
    ecx = ebp;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0021B94Eu); RECOMP_ABI_CALL(0x00017AB3u, sub_00017AB3); /* call 0x00017AB3 */

loc_0021B94E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021B890; /* jl: less (signed <) */

loc_0021B956: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = 0xE;
    if (CMP_EQ(_fa, _fb)) goto loc_0021B97C; /* je: equal / zero */

loc_0021B963: ;
    esi = MEM32(esp + 0x18);
    edx = 4;
    ecx = 1;
    SET_LO8(eax, 1);
    MEM32(esp + 0x14) = edx;
    MEM32(esi + 0x18) = ecx;
    goto loc_0021B999;

loc_0021B97C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021B988; /* jne: not equal / not zero */

loc_0021B980: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    goto loc_0021B9AD;

loc_0021B988: ;
    SET_LO8(ebx, MEM8(esp + 0x44));
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021B9AD; /* je: equal / zero */

loc_0021B999: ;
    esi = MEM32(esp + 0x3C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021B9A3; /* je: equal / zero */

loc_0021B9A1: ;
    MEM8(esi) = LO8(eax);

loc_0021B9A3: ;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021B9AD; /* je: equal / zero */

loc_0021B9AB: ;
    MEM32(eax) = ecx;

loc_0021B9AD: ;
    SET_LO8(eax, MEM8(esp + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BA28; /* jne: not equal / not zero */

loc_0021B9B5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BA28; /* jne: not equal / not zero */

loc_0021B9B9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x44) = edi;
    PUSH32(esp, 0x0021B9C8u); RECOMP_ABI_CALL(0x00017AB3u, sub_00017AB3); /* call 0x00017AB3 */

loc_0021B9C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021BA24; /* jle: less or equal (signed <=) */

loc_0021B9CC: ;
    ebx = MEM32(esp + 0x24);

loc_0021B9D0: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x0021B9E5u); RECOMP_ABI_CALL(0x0001CF8Bu, sub_0001CF8B); /* call 0x0001CF8B */

loc_0021B9E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021BA14; /* je: equal / zero */

loc_0021B9E9: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BA14; /* jne: not equal / not zero */

loc_0021B9F1: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, ebx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021BA0Au); RECOMP_ABI_CALL(0x000316E3u, sub_000316E3); /* call 0x000316E3 */

loc_0021BA0A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021BA24; /* je: equal / zero */

loc_0021BA10: ;
    edi = MEM32(esp + 0x44);

loc_0021BA14: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp;
    MEM32(esp + 0x44) = edi;
    PUSH32(esp, 0x0021BA20u); RECOMP_ABI_CALL(0x00017AB3u, sub_00017AB3); /* call 0x00017AB3 */

loc_0021BA20: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021B9D0; /* jl: less (signed <) */

loc_0021BA24: ;
    MEM32(esp + 0x14) = esi;

loc_0021BA28: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x0021BA31u); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_0021BA31: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0021BA3F: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0021BA46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021BA43u); } /* indirect call */
    }

loc_0021BA46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021BA7B; /* je: equal / zero */

loc_0021BA4B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0021BA52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021BA4Fu); } /* indirect call */
    }

loc_0021BA52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021BA7B; /* je: equal / zero */

loc_0021BA57: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0021BA5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021BA5Bu); } /* indirect call */
    }

loc_0021BA5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021BA7B; /* je: equal / zero */

loc_0021BA63: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0021BA6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021BA67u); } /* indirect call */
    }

loc_0021BA6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021BA7B; /* je: equal / zero */

loc_0021BA6F: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0021BA76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021BA73u); } /* indirect call */
    }

loc_0021BA76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BAAC; /* jne: not equal / not zero */

loc_0021BA7B: ;
    _fa = (uint32_t)(MEM32(edi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7E6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x4C), 0x7E6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BAAC; /* jne: not equal / not zero */

loc_0021BA84: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021BA8B; /* je: equal / zero */

loc_0021BA88: ;
    MEM8(ebx) = 1;

loc_0021BA8B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021BA96; /* je: equal / zero */

loc_0021BA8F: ;
    MEM32(ebp) = 3;

loc_0021BA96: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esp + 0xC) = 4;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0021BAAC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0021BABB; /* je: equal / zero */

loc_0021BAB8: ;
    MEM8(ebx) = 0;

loc_0021BABB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021BAC6; /* je: equal / zero */

loc_0021BABF: ;
    MEM32(ebp) = 0;

loc_0021BAC6: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x0021BACFu); RECOMP_ABI_CALL(0x0001862Au, sub_0001862A); /* call 0x0001862A */

loc_0021BACF: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BB2F; /* jne: not equal / not zero */

loc_0021BAD6: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BB2F; /* jne: not equal / not zero */

loc_0021BADC: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    ecx = esp + 0x34;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0x0021BAF9u); RECOMP_ABI_CALL(0x0002507Du, sub_0002507D); /* call 0x0002507D */

loc_0021BAF9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0021BB08; /* je: equal / zero */

loc_0021BB05: ;
    MEM8(ebx) = 1;

loc_0021BB08: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021BB19; /* je: equal / zero */

loc_0021BB0C: ;
    edx = MEM32(edi + 0x50);
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;

loc_0021BB19: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BC1C; /* jne: not equal / not zero */

loc_0021BB23: ;
    MEM32(esi + 0x20) = 1;
    goto loc_0021BC1C;

loc_0021BB2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BB8F; /* jne: not equal / not zero */

loc_0021BB34: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BB8F; /* jne: not equal / not zero */

loc_0021BB3A: ;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x15);
    ecx = esp + 0x34;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x0021BB59u); RECOMP_ABI_CALL(0x0002507Du, sub_0002507D); /* call 0x0002507D */

loc_0021BB59: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0021BB68; /* je: equal / zero */

loc_0021BB65: ;
    MEM8(ebx) = 1;

loc_0021BB68: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021BB79; /* je: equal / zero */

loc_0021BB6C: ;
    edx = MEM32(edi + 0x50);
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;

loc_0021BB79: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BC1C; /* jne: not equal / not zero */

loc_0021BB83: ;
    MEM32(esi + 0x20) = 2;
    goto loc_0021BC1C;

loc_0021BB8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = 3;
    if (CMP_NE(_fa, _fb)) goto loc_0021BBEC; /* jne: not equal / not zero */

loc_0021BB99: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BBEC; /* jne: not equal / not zero */

loc_0021BB9E: ;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, 0xD);
    ecx = esp + 0x34;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x0021BBBDu); RECOMP_ABI_CALL(0x0002507Du, sub_0002507D); /* call 0x0002507D */

loc_0021BBBD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0021BBCC; /* je: equal / zero */

loc_0021BBC9: ;
    MEM8(ebx) = 1;

loc_0021BBCC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021BBDD; /* je: equal / zero */

loc_0021BBD0: ;
    edx = MEM32(edi + 0x50);
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;

loc_0021BBDD: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BC1C; /* jne: not equal / not zero */

loc_0021BBE3: ;
    MEM32(esi + 0x20) = 3;
    goto loc_0021BC1C;

loc_0021BBEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BC1C; /* jne: not equal / not zero */

loc_0021BBF0: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BC1C; /* jne: not equal / not zero */

loc_0021BBF6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0021BC01; /* je: equal / zero */

loc_0021BBFE: ;
    MEM8(ebx) = 1;

loc_0021BC01: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021BC0F; /* je: equal / zero */

loc_0021BC05: ;
    ecx = MEM32(edi + 0x54);
    _fb = (uint32_t)(MEM32(edi + 0x50)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = ecx;

loc_0021BC0F: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021BC1C; /* jne: not equal / not zero */

loc_0021BC15: ;
    MEM32(esi + 0x20) = 0;

loc_0021BC1C: ;
    ecx = esp + 0x28;
    MEM8(esi + 0x2E) = 0;
    PUSH32(esp, 0x0021BC29u); RECOMP_ABI_CALL(0x0001B9B5u, sub_0001B9B5); /* call 0x0001B9B5 */

loc_0021BC29: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0021BE20
 * Original: 0x0021BE20 - 0x0021BE5E (62 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BE20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021BE20: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x17C);
    eax = MEM32(eax * 4 + 0x7F8FC0);
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7F9EE4;
    PUSH32(esp, 0x0021BE42u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021BE42: ;
    ecx = eax;
    PUSH32(esp, 0x0021BE49u); RECOMP_ABI_CALL(0x0002CECCu, sub_0002CECC); /* call 0x0002CECC */

loc_0021BE49: ;
    edx = MEM32(esp + 0x40);
    eax = MEM32(edx * 4 + 0x7F8B7C);
    eax = MEM32(esp + eax * 4 + 4);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021BE70
 * Original: 0x0021BE70 - 0x0021BEC7 (87 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BE70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021BE70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x7F9004;
    esi = 0x8B5204;
    ebp = ecx + 4;

loc_0021BE81: ;
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_0021BEA3; /* jle: less or equal (signed <=) */

loc_0021BE8B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021BEA5; /* jge: greater or equal (signed >=) */

loc_0021BE91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021BEA3; /* jle: less or equal (signed <=) */

loc_0021BE95: ;
    edx = MEM32(esi);

loc_0021BE97: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021BEA5; /* je: equal / zero */

loc_0021BE9B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021BE97; /* jl: less (signed <) */

loc_0021BEA3: ;
    ecx = edi;

loc_0021BEA5: ;
    eax = MEM32(ebx);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B527C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B527C (32-bit) */
    MEM32(edx + eax * 4 + 4) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0021BE81; /* jl: less (signed <) */

loc_0021BEC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021BEE0
 * Original: 0x0021BEE0 - 0x0021BF47 (103 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021BEE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx + 0x274;
    ecx = 0x3D;
    edi = ebp;
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
    eax = MEM32(ebx + 0x174);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021BF40; /* jbe: below or equal (unsigned <=) */

loc_0021BF05: ;
    goto loc_0021BF10;

    /* nop */
    edi = edi;

loc_0021BF10: ;
    eax = MEM32(ebx + 0x384);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021BF25; /* jl: less (signed <) */

loc_0021BF1E: ;
    eax = 1;
    goto loc_0021BF2C;

loc_0021BF25: ;
    eax = MEM32(eax * 4 + 0x7F91A4);

loc_0021BF2C: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0021BF35u); RECOMP_ABI_CALL(0x0002A127u, sub_0002A127); /* call 0x0002A127 */

loc_0021BF35: ;
    eax = MEM32(ebx + 0x174);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021BF10; /* jb: below (unsigned <) */

loc_0021BF40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021BF60
 * Original: 0x0021BF60 - 0x0021BFAD (77 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021BF60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0021BF70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    edx = MEM32(ecx + eax * 4 + 0x40);
    edi = MEM32(eax * 4 + 0x7F8B7C);
    esi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0021BF9D; /* jne: not equal / not zero */

loc_0021BF82: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0021BF9B; /* je: equal / zero */

loc_0021BF87: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0021BF94; /* je: equal / zero */

loc_0021BF8A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021BF9D; /* jne: not equal / not zero */

loc_0021BF8D: ;
    esi = 2;
    goto loc_0021BF9D;

loc_0021BF94: ;
    esi = 1;
    goto loc_0021BF9D;

loc_0021BF9B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021BF9D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    MEM32(ebx + edi * 4 + 4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0021BF70; /* jl: less (signed <) */

loc_0021BFA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021BFC0
 * Original: 0x0021BFC0 - 0x0021C0A8 (232 bytes, 84 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021BFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021BFC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x17C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0021C03B; /* je: equal / zero */

loc_0021BFD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C03B; /* je: equal / zero */

loc_0021BFD7: ;
    ebp = MEM32(esp + 0x18);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ebx = esi + 0x274;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0021BFEEu); RECOMP_ABI_CALL(0x0002154Au, sub_0002154A); /* call 0x0002154A */

loc_0021BFEE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C00E; /* je: equal / zero */

loc_0021BFF2: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0021BFFEu); RECOMP_ABI_CALL(0x00032EDAu, sub_00032EDA); /* call 0x00032EDA */

loc_0021BFFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C00E; /* je: equal / zero */

loc_0021C003: ;
    edx = MEM32(esi + 0x380);
    MEM8(edx + eax * 8 + 4) = 0;

loc_0021C00E: ;
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0021C01Au); RECOMP_ABI_CALL(0x00032EDAu, sub_00032EDA); /* call 0x00032EDA */

loc_0021C01A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C02A; /* je: equal / zero */

loc_0021C01F: ;
    ecx = MEM32(esi + 0x380);
    MEM8(ecx + eax * 8 + 4) = 1;

loc_0021C02A: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0021C033u); RECOMP_ABI_CALL(0x00012D51u, sub_00012D51); /* call 0x00012D51 */

loc_0021C033: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0021C03B: ;
    ecx = MEM32(esi + 0x37C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021C060; /* jbe: below or equal (unsigned <=) */

loc_0021C047: ;
    edx = MEM32(esi + 0x380);
    /* nop */

loc_0021C050: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C0A4; /* je: equal / zero */

loc_0021C058: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021C050; /* jb: below (unsigned <) */

loc_0021C060: ;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0021C063: ;
    ebx = MEM32(esp + 0x18);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edi = esi + 0x274;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0021C082u); RECOMP_ABI_CALL(0x0002154Au, sub_0002154A); /* call 0x0002154A */

loc_0021C082: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x380);
    PUSH32(esp, edx);
    MEM32(eax + ebp * 8) = ecx;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0021C09Cu); RECOMP_ABI_CALL(0x00012D51u, sub_00012D51); /* call 0x00012D51 */

loc_0021C09C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0021C0A4: ;
    ebp = eax;
    goto loc_0021C063;

}

/**
 * sub_0021C0F0
 * Original: 0x0021C0F0 - 0x0021C133 (67 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C0F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0021C100u); RECOMP_ABI_CALL(0x000263BFu, sub_000263BF); /* call 0x000263BF */

loc_0021C100: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C109; /* je: equal / zero */

loc_0021C104: ;
    edi = 1;

loc_0021C109: ;
    ecx = MEM32(esi + 0x37C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021C12C; /* jbe: below or equal (unsigned <=) */

loc_0021C113: ;
    eax = MEM32(esi + 0x380);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_0021C120: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C126; /* jne: not equal / not zero */

loc_0021C125: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021C126: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021C120; /* jne: not equal / not zero */

loc_0021C12C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021C150
 * Original: 0x0021C150 - 0x0021C1C3 (115 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C150: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0021C15Fu); RECOMP_ABI_CALL(0x000263BFu, sub_000263BF); /* call 0x000263BF */

loc_0021C15F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_0021C187; /* je: equal / zero */

loc_0021C167: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C186; /* jne: not equal / not zero */

loc_0021C16B: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0x180;
    PUSH32(esp, 0x0021C17Cu); RECOMP_ABI_CALL(0x0002154Au, sub_0002154A); /* call 0x0002154A */

loc_0021C17C: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021C186: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0021C187: ;
    edx = MEM32(esi + 0x37C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021C1B2; /* jbe: below or equal (unsigned <=) */

loc_0021C195: ;
    esi = MEM32(esi + 0x380);
    ecx = esi + 4;
    edi = edi;

loc_0021C1A0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C1AA; /* jne: not equal / not zero */

loc_0021C1A5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C1BA; /* je: equal / zero */

loc_0021C1A9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0021C1AA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021C1A0; /* jb: below (unsigned <) */

loc_0021C1B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0021C1BA: ;
    eax = MEM32(esi + eax * 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021C1E0
 * Original: 0x0021C1E0 - 0x0021C399 (441 bytes, 121 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C1E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021C1E0: ;
    _fb = (uint32_t)(0x3A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3B8);
    SET_LO8(edx, MEM8(ebp));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3BC);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    esi = ecx;
    MEM8(esp + 0x13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0021C214; /* jne: not equal / not zero */

loc_0021C210: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C254; /* je: equal / zero */

loc_0021C214: ;
    ecx = esp + 0x1B8;
    PUSH32(esp, 0x0021C220u); RECOMP_ABI_CALL(0x00013526u, sub_00013526); /* call 0x00013526 */

loc_0021C220: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C231; /* je: equal / zero */

loc_0021C224: ;
    PUSH32(esp, edi);
    ecx = esp + 0x1BC;
    PUSH32(esp, 0x0021C231u); RECOMP_ABI_CALL(0x00032A9Du, sub_00032A9D); /* call 0x00032A9D */

loc_0021C231: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C248; /* je: equal / zero */

loc_0021C239: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esp + 0x1C0;
    PUSH32(esp, 0x0021C248u); RECOMP_ABI_CALL(0x0002AB4Au, sub_0002AB4A); /* call 0x0002AB4A */

loc_0021C248: ;
    ecx = esp + 0x1B8;
    PUSH32(esp, 0x0021C254u); RECOMP_ABI_CALL(0x00021969u, sub_00021969); /* call 0x00021969 */

loc_0021C254: ;
    edx = esi + 0x389;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_0021C260: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C260; /* jne: not equal / not zero */

loc_0021C26A: ;
    edx = esi + 0x396;
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0021C274: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C274; /* jne: not equal / not zero */

loc_0021C27E: ;
    eax = MEM32(esp + 0x3C4);
    ecx = esp + 0x20;
    MEM32(esi + 0x3A4) = eax;
    PUSH32(esp, 0x0021C294u); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_0021C294: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0021C29Du); RECOMP_ABI_CALL(0x0001C63Fu, sub_0001C63F); /* call 0x0001C63F */

loc_0021C29D: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x0021C2A6u); RECOMP_ABI_CALL(0x0002E79Fu, sub_0002E79F); /* call 0x0002E79F */

loc_0021C2A6: ;
    ecx = esp + 0x128;
    PUSH32(esp, 0x0021C2B2u); RECOMP_ABI_CALL(0x0002DA16u, sub_0002DA16); /* call 0x0002DA16 */

loc_0021C2B2: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ebx = 0x7F7A10;
    edi = 0x7F9EE4;
    ecx = esi;
    MEM32(esp + 0x140) = ebx;
    MEM32(esp + 0x180) = edi;
    PUSH32(esp, 0x0021C2D6u); RECOMP_ABI_CALL(0x00033826u, sub_00033826); /* call 0x00033826 */

loc_0021C2D6: ;
    ecx = MEM32(esi + 0x174);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021C34E; /* jbe: below or equal (unsigned <=) */

loc_0021C2E2: ;
    ecx = MEM32(esi + 0x384);

loc_0021C2E8: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C2FD; /* je: equal / zero */

loc_0021C2ED: ;
    edx = MEM32(esi + 0x174);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021C2E8; /* jb: below (unsigned <) */

loc_0021C2FB: ;
    goto loc_0021C34E;

loc_0021C2FD: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0021C30Cu); RECOMP_ABI_CALL(0x0002154Au, sub_0002154A); /* call 0x0002154A */

loc_0021C30C: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021C31E; /* jb: below (unsigned <) */

loc_0021C315: ;
    eax = 0x7F;
    MEM32(esp + 0x14) = eax;

loc_0021C31E: ;
    ecx = esp + 0x28C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0021C330u); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_0021C330: ;
    edx = MEM32(esi + 0x3A4);
    eax = esp + 0x28C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    MEM32(esp + 0x358) = edx;
    PUSH32(esp, 0x0021C34Eu); RECOMP_ABI_CALL(0x00021FAEu, sub_00021FAE); /* call 0x00021FAE */

loc_0021C34E: ;
    ecx = esp + 0x128;
    MEM8(esi + 0x388) = 1;
    MEM32(esp + 0x17C) = edi;
    MEM32(esp + 0x13C) = ebx;
    PUSH32(esp, 0x0021C36Fu); RECOMP_ABI_CALL(0x00025DD9u, sub_00025DD9); /* call 0x00025DD9 */

loc_0021C36F: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x0021C378u); RECOMP_ABI_CALL(0x0002F7D5u, sub_0002F7D5); /* call 0x0002F7D5 */

loc_0021C378: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0021C381u); RECOMP_ABI_CALL(0x00022C0Bu, sub_00022C0B); /* call 0x00022C0B */

loc_0021C381: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0021C38Au); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_0021C38A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3A8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0021C410
 * Original: 0x0021C410 - 0x0021C666 (598 bytes, 178 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021C410: ;
    _fb = (uint32_t)(0x2BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2BC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x0021C421u); RECOMP_ABI_CALL(0x0003247Bu, sub_0003247B); /* call 0x0003247B */

loc_0021C421: ;
    eax = MEM32(ebp + 0x17C);
    eax = MEM32(eax * 4 + 0x7F8FC0);
    edx = MEM32(esp + 0x2D0);
    ebx = ebp + 0x274;
    PUSH32(esp, ebx);
    ecx = ebp + 0x368;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021C44Au); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021C44A: ;
    ecx = eax;
    PUSH32(esp, 0x0021C451u); RECOMP_ABI_CALL(0x00011AC8u, sub_00011AC8); /* call 0x00011AC8 */

loc_0021C451: ;
    edi = ebp + 0x180;
    ecx = 0x3D;
    esi = ebx;
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
    ecx = ebx;
    PUSH32(esp, 0x0021C467u); RECOMP_ABI_CALL(0x00017AB3u, sub_00017AB3); /* call 0x00017AB3 */

loc_0021C467: ;
    MEM32(ebp + 0x174) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021C478u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021C478: ;
    ecx = MEM32(ebp + 0x174);
    MEM32(ebp + 0x384) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021C4A8; /* jbe: below or equal (unsigned <=) */

loc_0021C48D: ;
    /* nop */

loc_0021C490: ;
    ecx = MEM32(ebp + 0x384);
    MEM32(ecx + eax * 4) = 0;
    ecx = MEM32(ebp + 0x174);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021C490; /* jb: below (unsigned <) */

loc_0021C4A8: ;
    ecx = ebx;
    PUSH32(esp, 0x0021C4AFu); RECOMP_ABI_CALL(0x00017AB3u, sub_00017AB3); /* call 0x00017AB3 */

loc_0021C4AF: ;
    MEM32(ebp + 0x178) = eax;
    eax = MEM32(ebp + 0x17C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C4D4; /* je: equal / zero */

loc_0021C4C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C4D4; /* je: equal / zero */

loc_0021C4C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C4D4; /* je: equal / zero */

loc_0021C4CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C4D4; /* je: equal / zero */

loc_0021C4CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C4DE; /* jne: not equal / not zero */

loc_0021C4D4: ;
    MEM32(ebp + 0x178) = 1;

loc_0021C4DE: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0021C4E7u); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_0021C4E7: ;
    eax = MEM32(ebp + 0x17C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C502; /* je: equal / zero */

loc_0021C4F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C5AE; /* jne: not equal / not zero */

loc_0021C4FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C508; /* jne: not equal / not zero */

loc_0021C502: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    goto loc_0021C50C;

loc_0021C508: ;
    PUSH32(esp, 0);
    PUSH32(esp, 7);

loc_0021C50C: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0021C515u); RECOMP_ABI_CALL(0x000327A0u, sub_000327A0); /* call 0x000327A0 */

loc_0021C515: ;
    ecx = ebx;
    PUSH32(esp, 0x0021C51Cu); RECOMP_ABI_CALL(0x00017AB3u, sub_00017AB3); /* call 0x00017AB3 */

loc_0021C51C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0021C5AA; /* jbe: below or equal (unsigned <=) */

loc_0021C534: ;
    eax = MEM32(esp + 0x14);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0021C547u); RECOMP_ABI_CALL(0x000230EDu, sub_000230ED); /* call 0x000230ED */

loc_0021C547: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021C575; /* jbe: below or equal (unsigned <=) */

loc_0021C54D: ;
    /* nop */

loc_0021C550: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x0021C565u); RECOMP_ABI_CALL(0x0002154Au, sub_0002154A); /* call 0x0002154A */

loc_0021C565: ;
    edx = ZX8(MEM8(esp + 0x58));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021C575; /* je: equal / zero */

loc_0021C570: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021C550; /* jb: below (unsigned <) */

loc_0021C575: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C599; /* jne: not equal / not zero */

loc_0021C579: ;
    eax = MEM32(esp + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C599; /* jne: not equal / not zero */

loc_0021C584: ;
    ecx = ZX8(MEM8(esp + 0x58));
    eax = MEM32(esp + 0x10);
    MEM32(esp + eax * 4 + 0xCC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;

loc_0021C599: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x2C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0021C534; /* jb: below (unsigned <) */

loc_0021C5AA: ;
    esi = MEM32(esp + 0x10);

loc_0021C5AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0021C5BBu); RECOMP_ABI_CALL(0x000327A0u, sub_000327A0); /* call 0x000327A0 */

loc_0021C5BB: ;
    eax = MEM32(esp + 0x24);
    ebx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x37C) = eax;
    if ((_fa == 0)) goto loc_0021C650; /* je: equal / zero */

loc_0021C5CF: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021C5DAu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021C5DA: ;
    MEM32(ebp + 0x380) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021C610; /* jbe: below or equal (unsigned <=) */

loc_0021C5E9: ;
    /* nop */

loc_0021C5F0: ;
    edx = MEM32(ebp + 0x380);
    ecx = MEM32(esp + eax * 4 + 0xCC);
    MEM32(edx + eax * 8) = ecx;
    edx = MEM32(ebp + 0x380);
    MEM8(edx + eax * 8 + 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021C5F0; /* jb: below (unsigned <) */

loc_0021C610: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021C650; /* jbe: below or equal (unsigned <=) */

loc_0021C616: ;
    esi = eax * 8;
    /* nop */

loc_0021C620: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0021C62Fu); RECOMP_ABI_CALL(0x000230EDu, sub_000230ED); /* call 0x000230ED */

loc_0021C62F: ;
    ecx = ZX8(MEM8(esp + 0x58));
    edx = MEM32(ebp + 0x380);
    MEM32(esi + edx) = ecx;
    eax = MEM32(ebp + 0x380);
    MEM8(esi + eax + 4) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021C620; /* jb: below (unsigned <) */

loc_0021C650: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0021C659u); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_0021C659: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2BC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2BC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021C700
 * Original: 0x0021C700 - 0x0021C7CB (203 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021C700: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ebp = ecx;
    eax = MEM32(ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0021C70Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021C70Cu); } /* indirect call */
    }

loc_0021C70F: ;
    edi = eax;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x0021C71Au); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0021C71A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0021C721u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021C71Eu); } /* indirect call */
    }

loc_0021C721: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0021C780; /* jle: less or equal (signed <=) */

loc_0021C729: ;
    edi = ebp + 0x3B0;
    /* nop */

loc_0021C730: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0021C739u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021C736u); } /* indirect call */
    }

loc_0021C739: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esp + ebx * 4 + 0x1C) = eax;
    MEM32(edi + -4) = eax;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0021C74Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021C748u); } /* indirect call */
    }

loc_0021C74B: ;
    edx = MEM32(esp + ebx * 4 + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0021C75Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021C75Au); } /* indirect call */
    }

loc_0021C75D: ;
    edx = MEM32(esp + ebx * 4 + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0021C76Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021C76Cu); } /* indirect call */
    }

loc_0021C76F: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x88;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021C730; /* jl: less (signed <) */

loc_0021C77E: ;
    edi = eax;

loc_0021C780: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021C7A3; /* jle: less or equal (signed <=) */

loc_0021C788: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0021C791u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021C78Eu); } /* indirect call */
    }

loc_0021C791: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C79E; /* jne: not equal / not zero */

loc_0021C796: ;
    edx = eax;
    ecx = esi;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0021C79E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021C788; /* jl: less (signed <) */

loc_0021C7A3: ;
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021C7AEu); RECOMP_ABI_CALL(0x0001A1E6u, sub_0001A1E6); /* call 0x0001A1E6 */

loc_0021C7AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x1A0) = ebx;
    ecx = MEM32(0x8FA6C8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x3A8) = ecx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0021C800
 * Original: 0x0021C800 - 0x0021C814 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C800(void)
{

loc_0021C800: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0021C808u); RECOMP_ABI_CALL(0x00029F15u, sub_00029F15); /* call 0x00029F15 */

loc_0021C808: ;
    MEM32(esi + 0x3A8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021C820
 * Original: 0x0021C820 - 0x0021C8AC (140 bytes, 38 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021C820: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0021C84E; /* jne: not equal / not zero */

loc_0021C831: ;
    eax = MEM32(esp + 0x10C);
    ecx = MEM32(esp + 0x110);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3A8);
    PUSH32(esp, 0x0021C84Cu); RECOMP_ABI_CALL(0x00036ECCu, sub_00036ECC); /* call 0x00036ECC */

loc_0021C84C: ;
    goto loc_0021C88B;

loc_0021C84E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C870; /* jne: not equal / not zero */

loc_0021C853: ;
    edx = MEM32(esp + 0x10C);
    eax = MEM32(esp + 0x110);
    ecx = MEM32(esi + 0x3A8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021C86Eu); RECOMP_ABI_CALL(0x000241FAu, sub_000241FA); /* call 0x000241FA */

loc_0021C86E: ;
    goto loc_0021C88B;

loc_0021C870: ;
    ecx = MEM32(esp + 0x10C);
    edx = MEM32(esp + 0x110);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3A8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021C88Bu); RECOMP_ABI_CALL(0x00013B93u, sub_00013B93); /* call 0x00013B93 */

loc_0021C88B: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3A8);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021C89Eu); RECOMP_ABI_CALL(0x000123E7u, sub_000123E7); /* call 0x000123E7 */

loc_0021C89E: ;
    eax = MEM32(esp + 4);
    POP32(esp, esi);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0021C8D0
 * Original: 0x0021C8D0 - 0x0021CAE2 (530 bytes, 160 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021C8D0: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0021C8FE; /* jne: not equal / not zero */

loc_0021C8E1: ;
    eax = MEM32(esp + 0x14C);
    ecx = MEM32(esp + 0x150);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3A8);
    PUSH32(esp, 0x0021C8FCu); RECOMP_ABI_CALL(0x00036ECCu, sub_00036ECC); /* call 0x00036ECC */

loc_0021C8FC: ;
    goto loc_0021C93B;

loc_0021C8FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C920; /* jne: not equal / not zero */

loc_0021C903: ;
    edx = MEM32(esp + 0x14C);
    eax = MEM32(esp + 0x150);
    ecx = MEM32(esi + 0x3A8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021C91Eu); RECOMP_ABI_CALL(0x000241FAu, sub_000241FA); /* call 0x000241FA */

loc_0021C91E: ;
    goto loc_0021C93B;

loc_0021C920: ;
    ecx = MEM32(esp + 0x14C);
    edx = MEM32(esp + 0x150);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3A8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021C93Bu); RECOMP_ABI_CALL(0x00013B93u, sub_00013B93); /* call 0x00013B93 */

loc_0021C93B: ;
    edx = eax;
    eax = MEM32(esp + 0x154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0021CAD8; /* ja: above (unsigned >) */

loc_0021C94D: ;
    ecx = ZX8(MEM8(eax + 0x21CB00));
    { uint32_t _jt = MEM32(ecx * 4 + 0x21CAE4); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0021C95Bu) goto loc_0021C95B;
    if (_jt == 0x0021C999u) goto loc_0021C999;
    if (_jt == 0x0021C9D7u) goto loc_0021C9D7;
    if (_jt == 0x0021CA15u) goto loc_0021CA15;
    if (_jt == 0x0021CA7Bu) goto loc_0021CA7B;
    if (_jt == 0x0021CA9Du) goto loc_0021CA9D;
    if (_jt == 0x0021CAD8u) goto loc_0021CAD8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021C95B: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0021C969u); RECOMP_ABI_CALL(0x0001A43Eu, sub_0001A43E); /* call 0x0001A43E */

loc_0021C969: ;
    ecx = MEM32(esi + 0x3A8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021C976u); RECOMP_ABI_CALL(0x000123E7u, sub_000123E7); /* call 0x000123E7 */

loc_0021C976: ;
    edx = MEM32(esp + 0x15C);
    eax = esp + 4;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0021C985: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C985; /* jne: not equal / not zero */

loc_0021C98F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_0021C999: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0021C9A7u); RECOMP_ABI_CALL(0x0001A43Eu, sub_0001A43E); /* call 0x0001A43E */

loc_0021C9A7: ;
    ecx = MEM32(esi + 0x3A8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021C9B4u); RECOMP_ABI_CALL(0x000123E7u, sub_000123E7); /* call 0x000123E7 */

loc_0021C9B4: ;
    edx = MEM32(esp + 0x15C);
    eax = esp + 4;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0021C9C3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021C9C3; /* jne: not equal / not zero */

loc_0021C9CD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_0021C9D7: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0021C9E5u); RECOMP_ABI_CALL(0x0001A43Eu, sub_0001A43E); /* call 0x0001A43E */

loc_0021C9E5: ;
    ecx = MEM32(esi + 0x3A8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021C9F2u); RECOMP_ABI_CALL(0x000123E7u, sub_000123E7); /* call 0x000123E7 */

loc_0021C9F2: ;
    edx = MEM32(esp + 0x15C);
    eax = esp + 4;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0021CA01: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021CA01; /* jne: not equal / not zero */

loc_0021CA0B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_0021CA15: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x0021CA23u); RECOMP_ABI_CALL(0x0001A43Eu, sub_0001A43E); /* call 0x0001A43E */

loc_0021CA23: ;
    ecx = MEM32(esi + 0x3A8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021CA30u); RECOMP_ABI_CALL(0x000123E7u, sub_000123E7); /* call 0x000123E7 */

loc_0021CA30: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    edx = esp + 0x10C;
    PUSH32(esp, 0x7F85F0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021CA47u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0021CA47: ;
    eax = MEM32(esp + 0x168);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esp + 0x110;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021CA61u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0021CA61: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021CA6Au); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0021CA6A: ;
    ecx = eax;
    PUSH32(esp, 0x0021CA71u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0021CA71: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_0021CA7B: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    ecx = esi;
    PUSH32(esp, 0x0021CA89u); RECOMP_ABI_CALL(0x0001A43Eu, sub_0001A43E); /* call 0x0001A43E */

loc_0021CA89: ;
    ecx = MEM32(esi + 0x3A8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021CA96u); RECOMP_ABI_CALL(0x000123E7u, sub_000123E7); /* call 0x000123E7 */

loc_0021CA96: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    goto loc_0021CAC3;

loc_0021CA9D: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021CAAAu); RECOMP_ABI_CALL(0x0001A43Eu, sub_0001A43E); /* call 0x0001A43E */

loc_0021CAAA: ;
    ecx = MEM32(esi + 0x3A8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021CAB7u); RECOMP_ABI_CALL(0x000123E7u, sub_000123E7); /* call 0x000123E7 */

loc_0021CAB7: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    PUSH32(esp, eax);

loc_0021CAC3: ;
    edx = MEM32(esp + 0x160);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021CAD5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0021CAD5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021CAD8: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x144;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0021CAE2
 * Original: 0x0021CAE2 - 0x0021CBD0 (238 bytes, 192 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CAE2(void)
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

loc_0021CAE2: ;
    edi = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x7B0021CA) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    esp += 37; return; /* ret 33 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0021CBD0
 * Original: 0x0021CBD0 - 0x0021CD74 (420 bytes, 109 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021CBD0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x180;
    MEM32(esi) = 0x7FA558;
    MEM32(esi + 0x174) = edi;
    MEM32(esi + 0x178) = edi;
    MEM32(esi + 0x17C) = eax;
    PUSH32(esp, 0x0021CC02u); RECOMP_ABI_CALL(0x0002E79Fu, sub_0002E79F); /* call 0x0002E79F */

loc_0021CC02: ;
    ecx = esi + 0x274;
    PUSH32(esp, 0x0021CC0Du); RECOMP_ABI_CALL(0x0002E79Fu, sub_0002E79F); /* call 0x0002E79F */

loc_0021CC0D: ;
    ecx = esi + 0x368;
    PUSH32(esp, 0x0021CC18u); RECOMP_ABI_CALL(0x0002DA16u, sub_0002DA16); /* call 0x0002DA16 */

loc_0021CC18: ;
    ecx = MEM32(esp + 0x54);
    eax = esi + 0x74;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E6FE0);
    MEM32(esi + 0x37C) = edi;
    MEM32(esi + 0x380) = edi;
    MEM32(esi + 0x384) = edi;
    MEM8(esi + 0x388) = 0;
    MEM32(esi + 0x3A4) = edi;
    MEM32(esi + 0x3A8) = edi;
    MEM32(esi + 0x139C) = ecx;
    MEM32(esi + 0x13A0) = edi;
    MEM8(eax) = 0;
    PUSH32(esp, 0x0021CC60u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0021CC60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021CC69u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0021CC69: ;
    ecx = eax;
    PUSH32(esp, 0x0021CC70u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0021CC70: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0021CC78u); RECOMP_ABI_CALL(0x0002DC82u, sub_0002DC82); /* call 0x0002DC82 */

loc_0021CC78: ;
    edi = 0x8B5204;
    ebp = 0x7F9004;
    ebx = esi + 4;
    goto loc_0021CC90;

    /* nop */
    edi = edi;

loc_0021CC90: ;
    edx = MEM32(esi + 0x17C);
    eax = MEM32(edx * 4 + 0x7F8FC0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0x7F7A10;
    PUSH32(esp, 0x0021CCB0u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021CCB0: ;
    ecx = eax;
    PUSH32(esp, 0x0021CCB7u); RECOMP_ABI_CALL(0x00017F95u, sub_00017F95); /* call 0x00017F95 */

loc_0021CCB7: ;
    ecx = MEM32(edi + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(ebp);
    eax = MEM32(esp + edx * 4 + 0x14);
    if (CMP_LE(_fas, _fbs)) goto loc_0021CCCA; /* jle: less or equal (signed <=) */

loc_0021CCC5: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx + eax * 4);

loc_0021CCCA: ;
    MEM32(ebx) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B527C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x8B527C (32-bit) */
    MEM32(esp + 0x10) = 0x7F7A10;
    if (CMP_L(_fas, _fbs)) goto loc_0021CC90; /* jl: less (signed <) */

loc_0021CCE5: ;
    edi = 0x7F8B7C;
    ebx = esi + 0x40;
    ebp = 0x7F9EE4;

loc_0021CCF2: ;
    edx = MEM32(esi + 0x17C);
    eax = MEM32(edx * 4 + 0x7F8FC0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x0021CD0Eu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021CD0E: ;
    ecx = eax;
    PUSH32(esp, 0x0021CD15u); RECOMP_ABI_CALL(0x0002CECCu, sub_0002CECC); /* call 0x0002CECC */

loc_0021CD15: ;
    edx = MEM32(edi);
    eax = MEM32(esp + edx * 4 + 0x14);
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F8BB0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x7F8BB0 (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0021CCF2; /* jl: less (signed <) */

loc_0021CD2F: ;
    ecx = MEM32(0x7FAF10);
    eax = esi + 0x389;
    MEM32(eax) = ecx;
    SET_LO8(edx, MEM8(0x7FAF14));
    MEM8(eax + 4) = LO8(edx);
    ecx = MEM32(0x7FAF08);
    eax = esi + 0x396;
    MEM32(eax) = ecx;
    SET_LO16(edx, MEM16(0x7FAF0C));
    MEM16(eax + 4) = LO16(edx);
    SET_LO8(ecx, MEM8(0x7FAF0E));
    POP32(esp, edi);
    MEM8(eax + 6) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021CDE0
 * Original: 0x0021CDE0 - 0x0021CE2B (75 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021CDE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FA558;
    PUSH32(esp, 0x0021CDEEu); RECOMP_ABI_CALL(0x0003247Bu, sub_0003247B); /* call 0x0003247B */

loc_0021CDEE: ;
    ecx = esi + 0x368;
    PUSH32(esp, 0x0021CDF9u); RECOMP_ABI_CALL(0x00025DD9u, sub_00025DD9); /* call 0x00025DD9 */

loc_0021CDF9: ;
    ecx = esi + 0x274;
    PUSH32(esp, 0x0021CE04u); RECOMP_ABI_CALL(0x0002F7D5u, sub_0002F7D5); /* call 0x0002F7D5 */

loc_0021CE04: ;
    ecx = esi + 0x180;
    PUSH32(esp, 0x0021CE0Fu); RECOMP_ABI_CALL(0x0002F7D5u, sub_0002F7D5); /* call 0x0002F7D5 */

loc_0021CE0F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x7F9C28;
    if (TEST_Z(_fa, _fb)) goto loc_0021CE25; /* je: equal / zero */

loc_0021CE1C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021CE22u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021CE22: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021CE25: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021CE40
 * Original: 0x0021CE40 - 0x0021CE78 (56 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CE40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021CE40: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x7FB028;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0021CE90
 * Original: 0x0021CE90 - 0x0021CEA6 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CE90(void)
{

loc_0021CE90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FB028;
    PUSH32(esp, 0x0021CE9Eu); RECOMP_ABI_CALL(0x0001E11Au, sub_0001E11A); /* call 0x0001E11A */

loc_0021CE9E: ;
    MEM32(esi) = 0x7FA128;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021CEB0
 * Original: 0x0021CEB0 - 0x0021CEE3 (51 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021CEB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13A4);
    esi = ecx;
    PUSH32(esp, 0x0021CEBFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021CEBF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021CEDA; /* je: equal / zero */

loc_0021CEC6: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0021CED3u); RECOMP_ABI_CALL(0x000337C7u, sub_000337C7); /* call 0x000337C7 */

loc_0021CED3: ;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0021CEDA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021CEF0
 * Original: 0x0021CEF0 - 0x0021CF3D (77 bytes, 25 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021CEF0: ;
    PUSH32(esp, 0x0021CEF5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021CEF5: ;
    ecx = eax;
    PUSH32(esp, 0x0021CEFCu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0021CEFC: ;
    ecx = MEM32(eax + 0x60);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021CF0A; /* jl: less (signed <) */

loc_0021CF08: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021CF0A: ;
    eax = MEM32(eax * 4 + 0x7F9180);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021CF2D; /* jl: less (signed <) */

loc_0021CF2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021CF2D: ;
    eax = MEM32(eax * 4 + 0x7F9170);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021CF3Au); RECOMP_ABI_CALL(0x00019F61u, sub_00019F61); /* call 0x00019F61 */

loc_0021CF3A: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021CF50
 * Original: 0x0021CF50 - 0x0021D0F2 (418 bytes, 158 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021CF50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021CF5F; /* jne: not equal / not zero */

loc_0021CF59: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0021CF5F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0021CF66u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021CF66: ;
    ecx = eax;
    PUSH32(esp, 0x0021CF6Du); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0021CF6D: ;
    ebp = MEM32(eax + 0x60);
    ecx = ebp;
    PUSH32(esp, 0x0021CF77u); RECOMP_ABI_CALL(0x00029FA1u, sub_00029FA1); /* call 0x00029FA1 */

loc_0021CF77: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021CF87; /* jl: less (signed <) */

loc_0021CF7F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0021CF87: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0021CF90u); RECOMP_ABI_CALL(0x000137BAu, sub_000137BA); /* call 0x000137BA */

loc_0021CF90: ;
    edx = eax;
    ecx = 0x16;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ZX8(MEM8(edx + 0x20));

loc_0021CFA1: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x7F9180)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x7F9180), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021CFB2; /* je: equal / zero */

loc_0021CFAA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021CFA1; /* jl: less (signed <) */

loc_0021CFB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021CFB2: ;
    MEM32(esi) = eax;
    eax = MEM32(edx + 0x1C);
    MEM32(esi + 4) = eax;
    eax = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0021D0E9; /* ja: above (unsigned >) */

loc_0021CFC6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21D0F4); /* switch: 8 entries, 5 targets */
    if (_jt == 0x0021CFCDu) goto loc_0021CFCD;
    if (_jt == 0x0021D000u) goto loc_0021D000;
    if (_jt == 0x0021D033u) goto loc_0021D033;
    if (_jt == 0x0021D05Fu) goto loc_0021D05F;
    if (_jt == 0x0021D0D8u) goto loc_0021D0D8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021CFCD: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx);
    MEM32(esi + 8) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(edx + 2);
    MEM32(esi + 0xC) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 6);
    MEM32(esi + 0x10) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(edx + 8);
    MEM32(esi + 0x14) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 4);
    MEM32(esi + 0x18) = ecx;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0021CFF7u); RECOMP_ABI_CALL(0x0001D4AEu, sub_0001D4AE); /* call 0x0001D4AE */

loc_0021CFF7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0021D000: ;
    eax = (uint32_t)(int32_t)SMEM16(edx);
    MEM32(esi + 8) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 4);
    MEM32(esi + 0xC) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(edx + 6);
    MEM32(esi + 0x10) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 8);
    MEM32(esi + 0x14) = ecx;
    edx = (uint32_t)(int32_t)SMEM16(edx + 0xA);
    PUSH32(esp, ebx);
    ecx = ebp;
    MEM32(esi + 0x18) = edx;
    PUSH32(esp, 0x0021D02Au); RECOMP_ABI_CALL(0x0001D4AEu, sub_0001D4AE); /* call 0x0001D4AE */

loc_0021D02A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0021D033: ;
    eax = (uint32_t)(int32_t)SMEM16(edx);
    MEM32(esi + 8) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 4);
    MEM32(esi + 0xC) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(edx + 6);
    MEM32(esi + 0x10) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 8);
    MEM32(esi + 0x14) = ecx;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0021D056u); RECOMP_ABI_CALL(0x0001D4AEu, sub_0001D4AE); /* call 0x0001D4AE */

loc_0021D056: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0021D05F: ;
    eax = (uint32_t)(int32_t)SMEM16(edx);
    MEM32(esi + 8) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 2);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx + 0xA;
    MEM32(esi + 0xC) = ecx;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D09E; /* je: equal / zero */

loc_0021D076: ;
    ecx = esi + 0x38;
    /* nop */

loc_0021D080: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021D09E; /* jg: greater (signed >) */

loc_0021D085: ;
    edi = (uint32_t)(int32_t)SMEM16(eax + -6);
    MEM32(ecx + -32) = edi;
    edi = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(ecx) = edi;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021D080; /* jne: not equal / not zero */

loc_0021D09E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edx + 0x16)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x16), LO16(edi) (16-bit) */
    eax = edx + 0x16;
    if (CMP_EQ(_fa, _fb)) goto loc_0021D0CE; /* je: equal / zero */

loc_0021D0A9: ;
    ecx = esi + 0x48;
    /* nop */

loc_0021D0B0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021D0CE; /* jg: greater (signed >) */

loc_0021D0B5: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + -6);
    MEM32(ecx + -32) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021D0B0; /* jne: not equal / not zero */

loc_0021D0CE: ;
    MEM32(esi + 0x10) = ebx;
    ebx = MEM32(esp + 0x14);
    MEM32(esi + 0x14) = edi;

loc_0021D0D8: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0021D0E0u); RECOMP_ABI_CALL(0x0001D4AEu, sub_0001D4AE); /* call 0x0001D4AE */

loc_0021D0E0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0021D0E9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021D0F2
 * Original: 0x0021D0F2 - 0x0021D190 (158 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D0F2(void)
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

loc_0021D0F2: ;
    edi = edi;
    RECOMP_UNIMPL("int 0xcf", 0x0021D0F4u); /* TODO: int 0xcf */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_top()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom st(0) */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_top()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom st(0) */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_top()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom st(0) */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_top()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom st(0) */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    { uint32_t _sv=(uint32_t)(MEM8(ecx)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        MEM8(ecx) = _sv << _sc;
        _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_0021D190
 * Original: 0x0021D190 - 0x0021D348 (440 bytes, 138 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021D190: ;
    _fb = (uint32_t)(0x274) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x274;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0021D1A1u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021D1A1: ;
    ecx = eax;
    PUSH32(esp, 0x0021D1A8u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0021D1A8: ;
    edi = MEM32(eax + 0x60);
    PUSH32(esp, 2);
    ecx = edi;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x0021D1B8u); RECOMP_ABI_CALL(0x0002A5D2u, sub_0002A5D2); /* call 0x0002A5D2 */

loc_0021D1B8: ;
    eax = MEM32(esi);
    ecx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esp + 0x38) = 0;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0021D1CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021D1CBu); } /* indirect call */
    }

loc_0021D1CE: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021D2FA; /* jne: not equal / not zero */

loc_0021D1D9: ;
    _fa = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x40), 0x15 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021D321; /* jle: less or equal (signed <=) */

loc_0021D1E4: ;
    PUSH32(esp, 0x0021D1E9u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0021D1E9: ;
    ecx = eax;
    PUSH32(esp, 0x0021D1F0u); RECOMP_ABI_CALL(0x00021F45u, sub_00021F45); /* call 0x00021F45 */

loc_0021D1F0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(esp + 0x3C);
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0021D204u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021D201u); } /* indirect call */
    }

loc_0021D204: ;
    edx = MEM32(esi);
    eax = esp + 0x84;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0021D215u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021D212u); } /* indirect call */
    }

loc_0021D215: ;
    _fa = (uint32_t)(MEM32(esp + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x55) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x84), 0x55 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021D321; /* jle: less or equal (signed <=) */

loc_0021D223: ;
    PUSH32(esp, 0x0021D228u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0021D228: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x188;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FB0A0);
    edi = eax;
    PUSH32(esp, 0x0021D241u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0021D241: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0021D24Cu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0021D24C: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x290);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x190;
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, 3);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edi = 1;
    edx = esp + 0x2C;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    MEM32(esp + 0x40) = edi;
    MEM32(esp + 0x44) = edi;
    MEM32(esp + 0x48) = edi;
    PUSH32(esp, 0x0021D29Fu); RECOMP_ABI_CALL(0x00015A3Du, sub_00015A3D); /* call 0x00015A3D */

loc_0021D29F: ;
    ebp = MEM32(esp + 0x2AC);
    MEM32(ebp) = edi;
    ebx = ebp + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x84;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0021D2CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021D2C8u); } /* indirect call */
    }

loc_0021D2CB: ;
    eax = MEM32(esp + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ebx);
    edi = eax;
    PUSH32(esp, 0x0021D2E0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0021D2E0: ;
    MEM32(ebp + 0x104) = edi;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0021D2F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021D2EDu); } /* indirect call */
    }

loc_0021D2F0: ;
    edi = MEM32(esp + 0x10);
    MEM8(ebp + 0x108) = LO8(eax);

loc_0021D2FA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(eax) = 0;
    PUSH32(esp, 0x0021D312u); RECOMP_ABI_CALL(0x00019F61u, sub_00019F61); /* call 0x00019F61 */

loc_0021D312: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x274) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x274;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0021D321: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(eax) = 0;
    PUSH32(esp, 0x0021D339u); RECOMP_ABI_CALL(0x00019F61u, sub_00019F61); /* call 0x00019F61 */

loc_0021D339: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x274) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x274;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021D3C0
 * Original: 0x0021D3C0 - 0x0021D3DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D3C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021D3C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    MEM32(esi) = 0x7FB0C0;
    PUSH32(esp, 0x0021D3D1u); RECOMP_ABI_CALL(0x00017F81u, sub_00017F81); /* call 0x00017F81 */

loc_0021D3D1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021D3F0
 * Original: 0x0021D3F0 - 0x0021D3FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D3F0(void)
{

loc_0021D3F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x74) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021D400
 * Original: 0x0021D400 - 0x0021D427 (39 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021D400: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    PUSH32(esp, 0x0021D40Bu); RECOMP_ABI_CALL(0x0002F311u, sub_0002F311); /* call 0x0002F311 */

loc_0021D40B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x7FA288;
    if (TEST_Z(_fa, _fb)) goto loc_0021D421; /* je: equal / zero */

loc_0021D418: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021D41Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021D41E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021D421: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021D430
 * Original: 0x0021D430 - 0x0021D466 (54 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021D430: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x7FAC90;
    if (CMP_EQ(_fa, _fb)) goto loc_0021D45E; /* je: equal / zero */

loc_0021D440: ;
    MEM8(eax + 0x330) = 0;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D457; /* je: equal / zero */

loc_0021D44E: ;
    ecx = eax + 4;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0021D457u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021D455u); } /* indirect call */
    }

loc_0021D457: ;
    MEM32(esi + 4) = 0;

loc_0021D45E: ;
    MEM32(esi) = 0x7FAC08;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021D480
 * Original: 0x0021D480 - 0x0021D532 (178 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021D480: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    edx = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0021D52F; /* ja: above (unsigned >) */

loc_0021D490: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21D534); /* switch: 9 entries, 9 targets */
    if (_jt == 0x0021D497u) goto loc_0021D497;
    if (_jt == 0x0021D4A2u) goto loc_0021D4A2;
    if (_jt == 0x0021D4BFu) goto loc_0021D4BF;
    if (_jt == 0x0021D4D7u) goto loc_0021D4D7;
    if (_jt == 0x0021D4F4u) goto loc_0021D4F4;
    if (_jt == 0x0021D511u) goto loc_0021D511;
    if (_jt == 0x0021D51Cu) goto loc_0021D51C;
    if (_jt == 0x0021D527u) goto loc_0021D527;
    if (_jt == 0x0021D52Fu) goto loc_0021D52F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021D497: ;
    ecx = MEM32(edx + 4);
    PUSH32(esp, 0x0021D49Fu); RECOMP_ABI_CALL(0x00035063u, sub_00035063); /* call 0x00035063 */

loc_0021D49F: ;
    esp += 16; return; /* ret 12 */

loc_0021D4A2: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0x0021D4B3u); RECOMP_ABI_CALL(0x00017522u, sub_00017522); /* call 0x00017522 */

loc_0021D4B3: ;
    ecx = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021D4BCu); RECOMP_ABI_CALL(0x00035E55u, sub_00035E55); /* call 0x00035E55 */

loc_0021D4BC: ;
    esp += 16; return; /* ret 12 */

loc_0021D4BF: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x0021D4CBu); RECOMP_ABI_CALL(0x00017522u, sub_00017522); /* call 0x00017522 */

loc_0021D4CB: ;
    ecx = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021D4D4u); RECOMP_ABI_CALL(0x00018A4Eu, sub_00018A4E); /* call 0x00018A4E */

loc_0021D4D4: ;
    esp += 16; return; /* ret 12 */

loc_0021D4D7: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x0021D4E8u); RECOMP_ABI_CALL(0x00017522u, sub_00017522); /* call 0x00017522 */

loc_0021D4E8: ;
    ecx = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021D4F1u); RECOMP_ABI_CALL(0x000204C4u, sub_000204C4); /* call 0x000204C4 */

loc_0021D4F1: ;
    esp += 16; return; /* ret 12 */

loc_0021D4F4: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x0021D505u); RECOMP_ABI_CALL(0x00017522u, sub_00017522); /* call 0x00017522 */

loc_0021D505: ;
    ecx = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021D50Eu); RECOMP_ABI_CALL(0x0001A46Bu, sub_0001A46B); /* call 0x0001A46B */

loc_0021D50E: ;
    esp += 16; return; /* ret 12 */

loc_0021D511: ;
    ecx = MEM32(edx + 4);
    PUSH32(esp, 0x0021D519u); RECOMP_ABI_CALL(0x00037F1Bu, sub_00037F1B); /* call 0x00037F1B */

loc_0021D519: ;
    esp += 16; return; /* ret 12 */

loc_0021D51C: ;
    ecx = MEM32(edx + 4);
    PUSH32(esp, 0x0021D524u); RECOMP_ABI_CALL(0x00030D3Du, sub_00030D3D); /* call 0x00030D3D */

loc_0021D524: ;
    esp += 16; return; /* ret 12 */

loc_0021D527: ;
    ecx = MEM32(edx + 4);
    PUSH32(esp, 0x0021D52Fu); RECOMP_ABI_CALL(0x0001331Eu, sub_0001331E); /* call 0x0001331E */

loc_0021D52F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0021D532
 * Original: 0x0021D532 - 0x0021D665 (307 bytes, 139 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D532(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021D532: ;
    edi = edi;
    { uint32_t _tmp = edi;
    edi = eax;
    eax = _tmp; }
    RECOMP_UNIMPL("aam 0x21", 0x0021D535u); /* TODO: aam 0x21 */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + -1090510380) = MEM8(edx + -1090510380) + HI8(eax);
    _fa = (uint32_t)(MEM8(edx + -1090510380)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aam 0x21", 0x0021D53Du); /* TODO: aam 0x21 */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ebx, HI8(ebx) + LO8(edx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aam 0x21", 0x0021D541u); /* TODO: aam 0x21 */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + HI8(edx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aam 0x21", 0x0021D545u); /* TODO: aam 0x21 */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi) = MEM8(edi) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aad 0x21", 0x0021D549u); /* TODO: aad 0x21 */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(edx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aad 0x21", 0x0021D54Du); /* TODO: aad 0x21 */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx * 8 + -718864351) = MEM8(edx * 8 + -718864351) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx * 8 + -718864351)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021D59Fu); RECOMP_ABI_CALL(0x00017522u, sub_00017522); /* call 0x00017522 */

loc_0021D59F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0021D5FF; /* ja: above (unsigned >) */

loc_0021D5A4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21D668); /* switch: 16 entries, 13 targets */
    if (_jt == 0x0021D5ABu) goto loc_0021D5AB;
    if (_jt == 0x0021D5B2u) goto loc_0021D5B2;
    if (_jt == 0x0021D5B9u) goto loc_0021D5B9;
    if (_jt == 0x0021D5C0u) goto loc_0021D5C0;
    if (_jt == 0x0021D5C7u) goto loc_0021D5C7;
    if (_jt == 0x0021D5CEu) goto loc_0021D5CE;
    if (_jt == 0x0021D5D5u) goto loc_0021D5D5;
    if (_jt == 0x0021D5DCu) goto loc_0021D5DC;
    if (_jt == 0x0021D5E3u) goto loc_0021D5E3;
    if (_jt == 0x0021D5EAu) goto loc_0021D5EA;
    if (_jt == 0x0021D5F1u) goto loc_0021D5F1;
    if (_jt == 0x0021D5F8u) goto loc_0021D5F8;
    if (_jt == 0x0021D5FFu) goto loc_0021D5FF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021D5AB: ;
    esi = 1;
    goto loc_0021D601;

loc_0021D5B2: ;
    esi = 2;
    goto loc_0021D601;

loc_0021D5B9: ;
    esi = 3;
    goto loc_0021D601;

loc_0021D5C0: ;
    esi = 5;
    goto loc_0021D601;

loc_0021D5C7: ;
    esi = 6;
    goto loc_0021D601;

loc_0021D5CE: ;
    esi = 0xA;
    goto loc_0021D601;

loc_0021D5D5: ;
    esi = 7;
    goto loc_0021D601;

loc_0021D5DC: ;
    esi = 0xB;
    goto loc_0021D601;

loc_0021D5E3: ;
    esi = 8;
    goto loc_0021D601;

loc_0021D5EA: ;
    esi = 0xC;
    goto loc_0021D601;

loc_0021D5F1: ;
    esi = 9;
    goto loc_0021D601;

loc_0021D5F8: ;
    esi = 0xD;
    goto loc_0021D601;

loc_0021D5FF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021D601: ;
    edi = 1;
    PUSH32(esp, 0x0021D60Bu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021D60B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D623; /* je: equal / zero */

loc_0021D60F: ;
    ecx = eax;
    PUSH32(esp, 0x0021D616u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0021D616: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D623; /* je: equal / zero */

loc_0021D61A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0021D621u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021D61Eu); } /* indirect call */
    }

loc_0021D621: ;
    edi = eax;

loc_0021D623: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021D635u); RECOMP_ABI_CALL(0x00033C18u, sub_00033C18); /* call 0x00033C18 */

loc_0021D635: ;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0021D63Fu); RECOMP_ABI_CALL(0x00019804u, sub_00019804); /* call 0x00019804 */

loc_0021D63F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = esp;
    if (CMP_NE(_fa, _fb)) goto loc_0021D655; /* jne: not equal / not zero */

loc_0021D648: ;
    PUSH32(esp, 0x0021D64Du); RECOMP_ABI_CALL(0x0002E2A4u, sub_0002E2A4); /* call 0x0002E2A4 */

loc_0021D64D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0021D655: ;
    PUSH32(esp, 0x0021D65Au); RECOMP_ABI_CALL(0x0002E2A4u, sub_0002E2A4); /* call 0x0002E2A4 */

loc_0021D65A: ;
    eax = 1;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021D870
 * Original: 0x0021D870 - 0x0021D8AC (60 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021D870: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x7FB114;
    MEM8(eax + 4) = LO8(ecx);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 0x28) = LO8(ecx);
    MEM8(eax + 0x29) = LO8(ecx);
    MEM8(eax + 0x2A) = LO8(ecx);
    MEM8(eax + 0x2B) = LO8(ecx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = edx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x2C) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0021D8C0
 * Original: 0x0021D8C0 - 0x0021D8DF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021D8C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FA4AC;
    if (TEST_Z(_fa, _fb)) goto loc_0021D8D9; /* je: equal / zero */

loc_0021D8D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021D8D6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021D8D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021D8D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021D8F0
 * Original: 0x0021D8F0 - 0x0021D8FD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D8F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021D8F0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0021D900
 * Original: 0x0021D900 - 0x0021D94A (74 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021D900: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi) = 0x7FAD18;
    PUSH32(esp, 0x0021D913u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021D913: ;
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D92D; /* je: equal / zero */

loc_0021D91D: ;
    ecx = edi;
    PUSH32(esp, 0x0021D924u); RECOMP_ABI_CALL(0x0001C8F6u, sub_0001C8F6); /* call 0x0001C8F6 */

loc_0021D924: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021D92Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021D92A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021D92D: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x7F9F30;
    if (TEST_Z(_fa, _fb)) goto loc_0021D943; /* je: equal / zero */

loc_0021D93A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021D940u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021D940: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021D943: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021D960
 * Original: 0x0021D960 - 0x0021D9C1 (97 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021D960: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x7FAF18;
    if (CMP_EQ(_fa, _fb)) goto loc_0021D988; /* je: equal / zero */

loc_0021D971: ;
    ecx = edi;
    PUSH32(esp, 0x0021D978u); RECOMP_ABI_CALL(0x00019CEBu, sub_00019CEB); /* call 0x00019CEB */

loc_0021D978: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021D97Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021D97E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_0021D988: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D99C; /* je: equal / zero */

loc_0021D98F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0021D995u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021D993u); } /* indirect call */
    }

loc_0021D995: ;
    MEM32(esi + 8) = 0;

loc_0021D99C: ;
    PUSH32(esp, 0x0021D9A1u); RECOMP_ABI_CALL(0x0001568Cu, sub_0001568C); /* call 0x0001568C */

loc_0021D9A1: ;
    ecx = esi;
    PUSH32(esp, 0x0021D9A8u); RECOMP_ABI_CALL(0x00014142u, sub_00014142); /* call 0x00014142 */

loc_0021D9A8: ;
    ecx = MEM32(esi + 0x21C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021D9B8; /* je: equal / zero */

loc_0021D9B2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0021D9B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021D9B6u); } /* indirect call */
    }

loc_0021D9B8: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7FA1A0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021D9E0
 * Original: 0x0021D9E0 - 0x0021D9FA (26 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021D9E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    edx = MEM32(esp + 8);
    MEM32(ecx + eax * 4 + 0x40) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0021D9F7; /* jne: not equal / not zero */

loc_0021D9F1: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021D9F7u); RECOMP_ABI_CALL(0x0002DC82u, sub_0002DC82); /* call 0x0002DC82 */

loc_0021D9F7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021DA00
 * Original: 0x0021DA00 - 0x0021DA2A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021DA00: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FB028;
    PUSH32(esp, 0x0021DA0Eu); RECOMP_ABI_CALL(0x0001E11Au, sub_0001E11A); /* call 0x0001E11A */

loc_0021DA0E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x7FA128;
    if (TEST_Z(_fa, _fb)) goto loc_0021DA24; /* je: equal / zero */

loc_0021DA1B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021DA21u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021DA21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021DA24: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021DA40
 * Original: 0x0021DA40 - 0x0021DC05 (453 bytes, 155 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021DA40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x0021DA52u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021DA52: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021DA64; /* je: equal / zero */

loc_0021DA5B: ;
    ecx = eax;
    PUSH32(esp, 0x0021DA62u); RECOMP_ABI_CALL(0x0001F466u, sub_0001F466); /* call 0x0001F466 */

loc_0021DA62: ;
    goto loc_0021DA66;

loc_0021DA64: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021DA66: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x38);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0021DA75u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021DA75: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021DA86; /* je: equal / zero */

loc_0021DA7C: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0021DA84u); RECOMP_ABI_CALL(0x0002F839u, sub_0002F839); /* call 0x0002F839 */

loc_0021DA84: ;
    goto loc_0021DA88;

loc_0021DA86: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021DA88: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 4);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0021DA97u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021DA97: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021DAA7; /* je: equal / zero */

loc_0021DA9E: ;
    ecx = eax;
    PUSH32(esp, 0x0021DAA5u); RECOMP_ABI_CALL(0x000224FEu, sub_000224FE); /* call 0x000224FE */

loc_0021DAA5: ;
    goto loc_0021DAA9;

loc_0021DAA7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021DAA9: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x298);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0021DABBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021DABB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021DACB; /* je: equal / zero */

loc_0021DAC2: ;
    ecx = eax;
    PUSH32(esp, 0x0021DAC9u); RECOMP_ABI_CALL(0x0001282Eu, sub_0001282E); /* call 0x0001282E */

loc_0021DAC9: ;
    goto loc_0021DACD;

loc_0021DACB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021DACD: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x20);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x0021DADCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021DADC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021DAEC; /* je: equal / zero */

loc_0021DAE3: ;
    ecx = eax;
    PUSH32(esp, 0x0021DAEAu); RECOMP_ABI_CALL(0x000353FBu, sub_000353FB); /* call 0x000353FB */

loc_0021DAEA: ;
    goto loc_0021DAEE;

loc_0021DAEC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021DAEE: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x833C);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0021DB00u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021DB00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021DB10; /* je: equal / zero */

loc_0021DB07: ;
    ecx = eax;
    PUSH32(esp, 0x0021DB0Eu); RECOMP_ABI_CALL(0x0001C69Eu, sub_0001C69E); /* call 0x0001C69E */

loc_0021DB0E: ;
    goto loc_0021DB12;

loc_0021DB10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021DB12: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x320);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0021DB24u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021DB24: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021DB34; /* je: equal / zero */

loc_0021DB2B: ;
    ecx = eax;
    PUSH32(esp, 0x0021DB32u); RECOMP_ABI_CALL(0x000134CCu, sub_000134CC); /* call 0x000134CC */

loc_0021DB32: ;
    goto loc_0021DB36;

loc_0021DB34: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021DB36: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x68);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x0021DB45u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021DB45: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021DB55; /* je: equal / zero */

loc_0021DB4C: ;
    ecx = eax;
    PUSH32(esp, 0x0021DB53u); RECOMP_ABI_CALL(0x0003101Cu, sub_0003101C); /* call 0x0003101C */

loc_0021DB53: ;
    goto loc_0021DB57;

loc_0021DB55: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021DB57: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 4);
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x0021DB66u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021DB66: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021DB76; /* je: equal / zero */

loc_0021DB6D: ;
    ecx = eax;
    PUSH32(esp, 0x0021DB74u); RECOMP_ABI_CALL(0x0002951Fu, sub_0002951F); /* call 0x0002951F */

loc_0021DB74: ;
    goto loc_0021DB78;

loc_0021DB76: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021DB78: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x48);
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x0021DB87u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021DB87: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021DBC7; /* je: equal / zero */

loc_0021DB91: ;
    MEM32(eax) = 0x7FB114;
    MEM8(eax + 4) = LO8(ebx);
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 0x28) = LO8(ebx);
    MEM8(eax + 0x29) = LO8(ebx);
    MEM8(eax + 0x2A) = LO8(ebx);
    MEM8(eax + 0x2B) = LO8(ebx);
    MEM32(eax + 0x2C) = ebx;
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 0x38) = ebp;
    MEM32(eax + 0x3C) = ebp;
    MEM32(eax + 0x40) = ebp;
    MEM32(eax + 0x44) = ebx;
    MEM32(eax + 0x2C) = 2;
    goto loc_0021DBC9;

loc_0021DBC7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021DBC9: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x7C);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x0021DBD8u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021DBD8: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021DBFD; /* je: equal / zero */

loc_0021DBE1: ;
    ecx = edi + 4;
    MEM32(edi) = 0x7FB0C0;
    PUSH32(esp, 0x0021DBEFu); RECOMP_ABI_CALL(0x00017F81u, sub_00017F81); /* call 0x00017F81 */

loc_0021DBEF: ;
    MEM32(edi + 0x74) = ebp;
    MEM32(edi + 0x78) = ebp;
    MEM32(esi + 0x30) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0021DBFD: ;
    POP32(esp, edi);
    MEM32(esi + 0x30) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021DC80
 * Original: 0x0021DC80 - 0x0021DD71 (241 bytes, 78 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021DC80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0021DD6C; /* ja: above (unsigned >) */

loc_0021DC8D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21DD74); /* switch: 12 entries, 12 targets */
    if (_jt == 0x0021DC94u) goto loc_0021DC94;
    if (_jt == 0x0021DCA6u) goto loc_0021DCA6;
    if (_jt == 0x0021DCB8u) goto loc_0021DCB8;
    if (_jt == 0x0021DCCAu) goto loc_0021DCCA;
    if (_jt == 0x0021DCDCu) goto loc_0021DCDC;
    if (_jt == 0x0021DCEEu) goto loc_0021DCEE;
    if (_jt == 0x0021DD00u) goto loc_0021DD00;
    if (_jt == 0x0021DD12u) goto loc_0021DD12;
    if (_jt == 0x0021DD24u) goto loc_0021DD24;
    if (_jt == 0x0021DD36u) goto loc_0021DD36;
    if (_jt == 0x0021DD48u) goto loc_0021DD48;
    if (_jt == 0x0021DD5Au) goto loc_0021DD5A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021DC94: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021DCA3u); RECOMP_ABI_CALL(0x000195ACu, sub_000195AC); /* call 0x000195AC */

loc_0021DCA3: ;
    esp += 16; return; /* ret 12 */

loc_0021DCA6: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021DCB5u); RECOMP_ABI_CALL(0x0002F6EFu, sub_0002F6EF); /* call 0x0002F6EF */

loc_0021DCB5: ;
    esp += 16; return; /* ret 12 */

loc_0021DCB8: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021DCC7u); RECOMP_ABI_CALL(0x0002E7FEu, sub_0002E7FE); /* call 0x0002E7FE */

loc_0021DCC7: ;
    esp += 16; return; /* ret 12 */

loc_0021DCCA: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021DCD9u); RECOMP_ABI_CALL(0x00024EA2u, sub_00024EA2); /* call 0x00024EA2 */

loc_0021DCD9: ;
    esp += 16; return; /* ret 12 */

loc_0021DCDC: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021DCEBu); RECOMP_ABI_CALL(0x0002D516u, sub_0002D516); /* call 0x0002D516 */

loc_0021DCEB: ;
    esp += 16; return; /* ret 12 */

loc_0021DCEE: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021DCFDu); RECOMP_ABI_CALL(0x00017AD6u, sub_00017AD6); /* call 0x00017AD6 */

loc_0021DCFD: ;
    esp += 16; return; /* ret 12 */

loc_0021DD00: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021DD0Fu); RECOMP_ABI_CALL(0x0002A02Du, sub_0002A02D); /* call 0x0002A02D */

loc_0021DD0F: ;
    esp += 16; return; /* ret 12 */

loc_0021DD12: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021DD21u); RECOMP_ABI_CALL(0x000132BAu, sub_000132BA); /* call 0x000132BA */

loc_0021DD21: ;
    esp += 16; return; /* ret 12 */

loc_0021DD24: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021DD33u); RECOMP_ABI_CALL(0x0002AD89u, sub_0002AD89); /* call 0x0002AD89 */

loc_0021DD33: ;
    esp += 16; return; /* ret 12 */

loc_0021DD36: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021DD45u); RECOMP_ABI_CALL(0x00020672u, sub_00020672); /* call 0x00020672 */

loc_0021DD45: ;
    esp += 16; return; /* ret 12 */

loc_0021DD48: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021DD57u); RECOMP_ABI_CALL(0x00021AEFu, sub_00021AEF); /* call 0x00021AEF */

loc_0021DD57: ;
    esp += 16; return; /* ret 12 */

loc_0021DD5A: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021DD69u); RECOMP_ABI_CALL(0x0001561Eu, sub_0001561E); /* call 0x0001561E */

loc_0021DD69: ;
    esp += 16; return; /* ret 12 */

loc_0021DD6C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0021DDF0
 * Original: 0x0021DDF0 - 0x0021DEE0 (240 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021DDF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = edi;
    MEM32(esi) = 0x7FABA8;
    PUSH32(esp, 0x0021DE05u); RECOMP_ABI_CALL(0x00020807u, sub_00020807); /* call 0x00020807 */

loc_0021DE05: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x7FB170;
    MEM32(edi) = 0x7FB154;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x11C) = LO8(ebx);
    MEM8(esi + 0x11D) = LO8(ebx);
    MEM8(esi + 0x11E) = LO8(ebx);
    MEM8(esi + 0x11F) = LO8(ebx);
    MEM32(esi + 0x120) = ebx;
    MEM32(esi + 0x124) = ebx;
    MEM8(esi + 0x12C) = LO8(ebx);
    MEM8(esi + 0x12D) = LO8(ebx);
    MEM32(esi + 0x134) = ebx;
    MEM32(esi + 0x13C) = ebx;
    MEM32(esi + 0x138) = ebx;
    MEM32(esi + 0x140) = ebx;
    MEM32(esi + 0x148) = ebx;
    MEM32(esi + 0x144) = ebx;
    ecx = esi + 0x17C;
    MEM32(esi + 0x14C) = ebx;
    PUSH32(esp, 0x0021DE88u); RECOMP_ABI_CALL(0x005C1A58u, sub_005C1A58); /* call 0x005C1A58 */

loc_0021DE88: ;
    ecx = esi + 0x31C;
    MEM8(esi + 0x194) = LO8(ebx);
    MEM8(esi + 0x330) = LO8(ebx);
    MEM32(esi + 0x334) = ebx;
    MEM8(esi + 0x338) = LO8(ebx);
    PUSH32(esp, 0x0021DEABu); RECOMP_ABI_CALL(0x005C19D3u, sub_005C19D3); /* call 0x005C19D3 */

loc_0021DEAB: ;
    ecx = esi + 0x195;
    PUSH32(esp, 0x80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021DEBCu); RECOMP_ABI_CALL(0x0059EBE8u, sub_0059EBE8); /* call 0x0059EBE8 */

loc_0021DEBC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x5C;
    ecx = 0x10;

loc_0021DEC7: ;
    MEM32(eax + -64) = ebx;
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021DEC7; /* jne: not equal / not zero */

loc_0021DED2: ;
    POP32(esp, edi);
    MEM32(esi + 0x33C) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021DF20
 * Original: 0x0021DF20 - 0x0021DF21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DF20(void)
{

loc_0021DF20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021DF30
 * Original: 0x0021DF30 - 0x0021DF31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DF30(void)
{

loc_0021DF30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021DF40
 * Original: 0x0021DF40 - 0x0021DF41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DF40(void)
{

loc_0021DF40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021DF50
 * Original: 0x0021DF50 - 0x0021DF7A (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DF50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021DF50: ;
    MEM8(ecx + 0x12D) = 0;
    PUSH32(esp, 0x0021DF5Cu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021DF5C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA5);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0021DF6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021DF67u); } /* indirect call */
    }

loc_0021DF6A: ;
    PUSH32(esp, 0x7FB1D4);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0021DF76u); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021DF76: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0021DF90
 * Original: 0x0021DF90 - 0x0021E004 (116 bytes, 28 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021DF90: ;
    PUSH32(esp, 0x7FB268);
    PUSH32(esp, 0x20);
    MEM8(ecx + 0x11E) = 1;
    PUSH32(esp, 0x0021DFA3u); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021DFA3: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021DFD9; /* jne: not equal / not zero */

loc_0021DFAE: ;
    PUSH32(esp, 0x7FB234);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0021DFBAu); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021DFBA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0021DFC2u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021DFC2: ;
    edx = MEM32(eax);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = 0xA1;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

loc_0021DFD9: ;
    PUSH32(esp, 0x7FB200);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0021DFE5u); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021DFE5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0021DFEDu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021DFED: ;
    edx = MEM32(eax);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = 0xA4;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_0021E030
 * Original: 0x0021E030 - 0x0021E068 (56 bytes, 15 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E030: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FB27C);
    PUSH32(esp, 0x20);
    MEM8(ecx + 0x11E) = 1;
    MEM8(ecx + 0x12C) = 1;
    PUSH32(esp, 0x0021E04Fu); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021E04F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0021E057u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021E057: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0021E065u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E062u); } /* indirect call */
    }

loc_0021E065: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E080
 * Original: 0x0021E080 - 0x0021E0F5 (117 bytes, 41 insns)
 * Category: game_io
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E080: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FB2B4);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x0021E095u); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021E095: ;
    edi = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021E0EB; /* je: equal / zero */

loc_0021E0A0: ;
    eax = MEM32(esi + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021E0B3; /* je: equal / zero */

loc_0021E0AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021E0B0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021E0B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021E0B3: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esi + 0x124) = edi;
    PUSH32(esp, 0x0021E0C1u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021E0C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x120) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0021E0EB; /* je: equal / zero */

loc_0021E0CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021E0D5u); RECOMP_ABI_CALL(0x0059EBE8u, sub_0059EBE8); /* call 0x0059EBE8 */

loc_0021E0D5: ;
    ecx = MEM32(esi + 0x120);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_0021E0EB: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0021E120
 * Original: 0x0021E120 - 0x0021E134 (20 bytes, 6 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0021E120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E120: ;
    PUSH32(esp, 0x7FB2F0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0021E12Cu); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021E12C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E140
 * Original: 0x0021E140 - 0x0021E1C8 (136 bytes, 40 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E140: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x7FB324);
    PUSH32(esp, 0x20);
    MEM8(esi + 0x12C) = 1;
    MEM8(esi + 0x11E) = 1;
    PUSH32(esp, 0x0021E165u); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021E165: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x0021E175u); RECOMP_ABI_CALL(0x00033C18u, sub_00033C18); /* call 0x00033C18 */

loc_0021E175: ;
    edx = MEM32(esi + 0x124);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esi + 0x120);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x128);
    ecx = esi + 4;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0021E19Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E198u); } /* indirect call */
    }

loc_0021E19B: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0021E1A5u); RECOMP_ABI_CALL(0x00037E58u, sub_00037E58); /* call 0x00037E58 */

loc_0021E1A5: ;
    PUSH32(esp, 0x0021E1AAu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021E1AA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0021E1B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E1B5u); } /* indirect call */
    }

loc_0021E1B8: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0021E1C1u); RECOMP_ABI_CALL(0x0002E2A4u, sub_0002E2A4); /* call 0x0002E2A4 */

loc_0021E1C1: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E1F0
 * Original: 0x0021E1F0 - 0x0021E225 (53 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E1F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E1F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FB360);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x0021E204u); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021E204: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x11E) = 1;
    PUSH32(esp, 0x0021E213u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021E213: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0021E221u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E21Eu); } /* indirect call */
    }

loc_0021E221: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E240
 * Original: 0x0021E240 - 0x0021E255 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E240: ;
    PUSH32(esp, 0x0021E245u); RECOMP_ABI_CALL(0x0001506Fu, sub_0001506F); /* call 0x0001506F */

loc_0021E245: ;
    PUSH32(esp, 0x7FB39C);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0021E251u); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021E251: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0021E260
 * Original: 0x0021E260 - 0x0021E290 (48 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E260: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7FB3CC);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x0021E26Fu); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021E26F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x11E) = 1;
    PUSH32(esp, 0x0021E27Eu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021E27E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0021E28Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E289u); } /* indirect call */
    }

loc_0021E28C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E2A0
 * Original: 0x0021E2A0 - 0x0021E2B7 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E2A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E2A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FB3E4);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0021E2B1u); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021E2B1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E2C0
 * Original: 0x0021E2C0 - 0x0021E4B8 (504 bytes, 202 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E2C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E2C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7FB418);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x0021E2D5u); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021E2D5: ;
    eax = edi + -1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0021E33B; /* ja: above (unsigned >) */

loc_0021E2E0: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21E3C0); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0021E2E7u) goto loc_0021E2E7;
    if (_jt == 0x0021E2F3u) goto loc_0021E2F3;
    if (_jt == 0x0021E2FFu) goto loc_0021E2FF;
    if (_jt == 0x0021E30Bu) goto loc_0021E30B;
    if (_jt == 0x0021E317u) goto loc_0021E317;
    if (_jt == 0x0021E323u) goto loc_0021E323;
    if (_jt == 0x0021E32Fu) goto loc_0021E32F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021E2E7: ;
    MEM32(esi + 0x14C) = 6;
    goto loc_0021E345;

loc_0021E2F3: ;
    MEM32(esi + 0x14C) = 3;
    goto loc_0021E345;

loc_0021E2FF: ;
    MEM32(esi + 0x14C) = 0;
    goto loc_0021E345;

loc_0021E30B: ;
    MEM32(esi + 0x14C) = 4;
    goto loc_0021E345;

loc_0021E317: ;
    MEM32(esi + 0x14C) = 7;
    goto loc_0021E345;

loc_0021E323: ;
    MEM32(esi + 0x14C) = 5;
    goto loc_0021E345;

loc_0021E32F: ;
    MEM32(esi + 0x14C) = 1;
    goto loc_0021E345;

loc_0021E33B: ;
    MEM32(esi + 0x14C) = 2;

loc_0021E345: ;
    esi = MEM32(esi + 0x14C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0021E37C; /* je: equal / zero */

loc_0021E354: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021E37C; /* je: equal / zero */

loc_0021E359: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021E37C; /* jne: not equal / not zero */

loc_0021E35E: ;
    PUSH32(esp, 0x0021E363u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021E363: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = 0xA7;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

loc_0021E37C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021E39F; /* jne: not equal / not zero */

loc_0021E381: ;
    PUSH32(esp, 0x0021E386u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021E386: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = 0xA1;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

loc_0021E39F: ;
    PUSH32(esp, 0x0021E3A4u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021E3A4: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = 0xA4;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

    /* nop */
    g_seh_ebp = ebp; RECOMP_ITAIL(edx); return; /* indirect tail jmp */

    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    RECOMP_UNIMPL("das", 0x0021E3C4u); /* TODO: das */
    if (ecx == 0) goto loc_0021E3E8; /* jecxz */

loc_0021E3C7: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + HI8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loop: count down */
    if (ecx != 0) goto loc_0021E3EC; /* loop: ecx is non-zero */

loc_0021E3CB: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx) = MEM8(ebx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (ecx == 0) goto loc_0021E3F0; /* jecxz */

loc_0021E3CF: ;
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx) = MEM8(ebx) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (ecx == 0) goto loc_0021E3F4; /* jecxz */

loc_0021E3D3: ;
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ebx, HI8(ebx) + HI8(eax));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loop: count down */
    if (ecx != 0) goto loc_0021E3F8; /* loop: ecx is non-zero */

loc_0021E3D7: ;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi) = MEM8(edi) + LO8(edx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (ecx == 0) goto loc_0021E3FC; /* jecxz */

loc_0021E3DB: ;
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

loc_0021E3E8: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_0021E3EC: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_0021E3F0: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_0021E3F4: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_0021E3F8: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_0021E3FC: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    PUSH32(esp, edi);
    PUSH32(esp, 0x7FB44C);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x0021E440u); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021E440: ;
    eax = MEM32(esp + 0x14);
    edx = eax;
    edi = MEM32(edx);
    ecx = esi + 0x17C;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edi = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edi;
    edi = MEM32(edx + 0x10);
    MEM32(ecx + 0x10) = edi;
    edx = MEM32(edx + 0x14);
    MEM32(ecx + 0x14) = edx;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0021E496; /* je: equal / zero */

loc_0021E479: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0021E48A; /* je: equal / zero */

loc_0021E47E: ;
    MEM32(esi + 0x14C) = 0;
    goto loc_0021E4A0;

loc_0021E48A: ;
    MEM32(esi + 0x14C) = 1;
    goto loc_0021E4A0;

loc_0021E496: ;
    MEM32(esi + 0x14C) = 2;

loc_0021E4A0: ;
    PUSH32(esp, 0x0021E4A5u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021E4A5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0021E4B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E4B0u); } /* indirect call */
    }

loc_0021E4B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E4E0
 * Original: 0x0021E4E0 - 0x0021E4F9 (25 bytes, 6 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E4E0: ;
    PUSH32(esp, 0x7FB47C);
    PUSH32(esp, 0x20);
    MEM8(ecx + 0x12C) = 1;
    PUSH32(esp, 0x0021E4F3u); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021E4F3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0021E500
 * Original: 0x0021E500 - 0x0021E50B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E500(void)
{

loc_0021E500: ;
    MEM32(ecx + 0x14C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0021E510
 * Original: 0x0021E510 - 0x0021E561 (81 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E510: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7FB4B0);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x0021E51Fu); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021E51F: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021E55D; /* jne: not equal / not zero */

loc_0021E52B: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14C) = eax;
    PUSH32(esp, 0x0021E545u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021E545: ;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = 0xA1;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

loc_0021E55D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021E580
 * Original: 0x0021E580 - 0x0021E630 (176 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E580: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7FB4E4);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x0021E595u); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0021E595: ;
    eax = edi + -1;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    edi = 1;
    if (CMP_A(_fa, _fb)) goto loc_0021E5F4; /* ja: above (unsigned >) */

loc_0021E5A5: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21E630); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0021E5ACu) goto loc_0021E5AC;
    if (_jt == 0x0021E5B8u) goto loc_0021E5B8;
    if (_jt == 0x0021E5C4u) goto loc_0021E5C4;
    if (_jt == 0x0021E5D0u) goto loc_0021E5D0;
    if (_jt == 0x0021E5DCu) goto loc_0021E5DC;
    if (_jt == 0x0021E5E8u) goto loc_0021E5E8;
    if (_jt == 0x0021E5F4u) goto loc_0021E5F4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021E5AC: ;
    MEM32(esi + 0x14C) = 6;
    goto loc_0021E5FA;

loc_0021E5B8: ;
    MEM32(esi + 0x14C) = 3;
    goto loc_0021E5FA;

loc_0021E5C4: ;
    MEM32(esi + 0x14C) = 0;
    goto loc_0021E5FA;

loc_0021E5D0: ;
    MEM32(esi + 0x14C) = 4;
    goto loc_0021E5FA;

loc_0021E5DC: ;
    MEM32(esi + 0x14C) = 7;
    goto loc_0021E5FA;

loc_0021E5E8: ;
    MEM32(esi + 0x14C) = 5;
    goto loc_0021E5FA;

loc_0021E5F4: ;
    MEM32(esi + 0x14C) = edi;

loc_0021E5FA: ;
    _fa = (uint32_t)(MEM32(esi + 0x14C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021E619; /* je: equal / zero */

loc_0021E602: ;
    PUSH32(esp, 0x0021E607u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021E607: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0xA7);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0021E614u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E611u); } /* indirect call */
    }

loc_0021E614: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0021E619: ;
    PUSH32(esp, 0x0021E61Eu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021E61E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0xA6);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0021E62Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E628u); } /* indirect call */
    }

loc_0021E62B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E690
 * Original: 0x0021E690 - 0x0021E698 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E690: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0002596A(); return; /* tail jmp 0x0002596A */

}

/**
 * sub_0021E6A0
 * Original: 0x0021E6A0 - 0x0021E6BE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E6A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0021E6A8u); RECOMP_ABI_CALL(0x00037E5Du, sub_00037E5D); /* call 0x00037E5D */

loc_0021E6A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021E6B8; /* je: equal / zero */

loc_0021E6AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021E6B5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021E6B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021E6B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E6D0
 * Original: 0x0021E6D0 - 0x0021E71A (74 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021E6D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x7FAC90;
    if (CMP_EQ(_fa, _fb)) goto loc_0021E6FE; /* je: equal / zero */

loc_0021E6E0: ;
    MEM8(eax + 0x330) = 0;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021E6F7; /* je: equal / zero */

loc_0021E6EE: ;
    ecx = eax + 4;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0021E6F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E6F5u); } /* indirect call */
    }

loc_0021E6F7: ;
    MEM32(esi + 4) = 0;

loc_0021E6FE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x7FAC08;
    if (TEST_Z(_fa, _fb)) goto loc_0021E714; /* je: equal / zero */

loc_0021E70B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021E711u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021E711: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021E714: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021E730
 * Original: 0x0021E730 - 0x0021E7A9 (121 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E730: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021E7A7; /* jne: not equal / not zero */

loc_0021E73A: ;
    eax = MEM32(0x904A88);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0021E773; /* ja: above (unsigned >) */

loc_0021E747: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x21E7AC); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0021E74Eu) goto loc_0021E74E;
    if (_jt == 0x0021E752u) goto loc_0021E752;
    if (_jt == 0x0021E759u) goto loc_0021E759;
    if (_jt == 0x0021E760u) goto loc_0021E760;
    if (_jt == 0x0021E767u) goto loc_0021E767;
    if (_jt == 0x0021E76Eu) goto loc_0021E76E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021E74E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0021E773;

loc_0021E752: ;
    esi = 4;
    goto loc_0021E773;

loc_0021E759: ;
    esi = 3;
    goto loc_0021E773;

loc_0021E760: ;
    esi = 1;
    goto loc_0021E773;

loc_0021E767: ;
    esi = 2;
    goto loc_0021E773;

loc_0021E76E: ;
    esi = 5;

loc_0021E773: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x340);
    PUSH32(esp, 0x0021E77Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021E77F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021E790; /* je: equal / zero */

loc_0021E786: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0021E78Eu); RECOMP_ABI_CALL(0x0001C874u, sub_0001C874); /* call 0x0001C874 */

loc_0021E78E: ;
    goto loc_0021E792;

loc_0021E790: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021E792: ;
    ecx = eax;
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x0021E79Cu); RECOMP_ABI_CALL(0x00024E9Du, sub_00024E9D); /* call 0x00024E9D */

loc_0021E79C: ;
    eax = MEM32(edi + 4);
    MEM8(eax + 0x330) = 1;
    POP32(esp, esi);

loc_0021E7A7: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021E820
 * Original: 0x0021E820 - 0x0021E8F0 (208 bytes, 69 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E820: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x98);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x98);
    esi = ecx;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = ebp;
    PUSH32(esp, 0x0021E845u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021E845: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021E878; /* je: equal / zero */

loc_0021E84B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0021E852u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E84Fu); } /* indirect call */
    }

loc_0021E852: ;
    ecx = MEM32(ebp * 4 + 0x7F8FF8);
    edx = MEM32(esp + 0x9C);
    eax = MEM32(edi * 4 + 0x7F8FC0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0021E871u); RECOMP_ABI_CALL(0x000313D7u, sub_000313D7); /* call 0x000313D7 */

loc_0021E871: ;
    ecx = esi;
    PUSH32(esp, 0x0021E878u); RECOMP_ABI_CALL(0x000311E8u, sub_000311E8); /* call 0x000311E8 */

loc_0021E878: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021E892; /* jne: not equal / not zero */

loc_0021E87D: ;
    PUSH32(esp, 0x0021E882u); RECOMP_ABI_CALL(0x0002567Cu, sub_0002567C); /* call 0x0002567C */

loc_0021E882: ;
    MEM32(esi + 0x38) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0021E892: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021E89C; /* je: equal / zero */

loc_0021E897: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021E8E0; /* jne: not equal / not zero */

loc_0021E89C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0021E8A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E8A0u); } /* indirect call */
    }

loc_0021E8A3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0021E8AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E8A7u); } /* indirect call */
    }

loc_0021E8AA: ;
    ebx = eax;
    ecx = esp + 0x10;
    _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x7D6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0021E8BBu); RECOMP_ABI_CALL(0x000196BFu, sub_000196BF); /* call 0x000196BF */

loc_0021E8BB: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0021E8C6u); RECOMP_ABI_CALL(0x000256A9u, sub_000256A9); /* call 0x000256A9 */

loc_0021E8C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0021E8D7u); RECOMP_ABI_CALL(0x00034CF3u, sub_00034CF3); /* call 0x00034CF3 */

loc_0021E8D7: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0021E8E0u); RECOMP_ABI_CALL(0x0001DC9Cu, sub_0001DC9C); /* call 0x0001DC9C */

loc_0021E8E0: ;
    MEM32(esi + 0x38) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0021E930
 * Original: 0x0021E930 - 0x0021EBD4 (676 bytes, 198 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021E930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021E930: ;
    _fb = (uint32_t)(0x6D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6D0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0021E944u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E941u); } /* indirect call */
    }

loc_0021E944: ;
    ecx = esp + 0x30;
    ebx = eax;
    PUSH32(esp, 0x0021E94Fu); RECOMP_ABI_CALL(0x0002E79Fu, sub_0002E79F); /* call 0x0002E79F */

loc_0021E94F: ;
    ecx = esp + 0x124;
    PUSH32(esp, 0x0021E95Bu); RECOMP_ABI_CALL(0x0002DA16u, sub_0002DA16); /* call 0x0002DA16 */

loc_0021E95B: ;
    edi = MEM32(esi + 0x14);
    ecx = esp + 0x138;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x13C) = 0x7F7A10;
    MEM32(esp + 0x17C) = 0x7F9EE4;
    PUSH32(esp, 0x0021E983u); RECOMP_ABI_CALL(0x0001C423u, sub_0001C423); /* call 0x0001C423 */

loc_0021E983: ;
    _fb = (uint32_t)(0x368) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x368;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esp + 0x128;
    PUSH32(esp, 0x0021E996u); RECOMP_ABI_CALL(0x000333E9u, sub_000333E9); /* call 0x000333E9 */

loc_0021E996: ;
    ecx = MEM32(esi + 0x14);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021E9A3u); RECOMP_ABI_CALL(0x00033826u, sub_00033826); /* call 0x00033826 */

loc_0021E9A3: ;
    ecx = MEM32(esi + 0x14);
    eax = esp + 0x178;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021E9B3u); RECOMP_ABI_CALL(0x0002D953u, sub_0002D953); /* call 0x0002D953 */

loc_0021E9B3: ;
    edx = MEM32(ecx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0021E9BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E9BBu); } /* indirect call */
    }

loc_0021E9BE: ;
    ecx = esp + 0x4E0;

loc_0021E9C5: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021E9C5; /* jne: not equal / not zero */

loc_0021E9CF: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0021E9D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E9D4u); } /* indirect call */
    }

loc_0021E9D7: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021E9F3; /* jle: less or equal (signed <=) */

loc_0021E9DD: ;
    /* nop */

loc_0021E9E0: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0021E9E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021E9E6u); } /* indirect call */
    }

loc_0021E9E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021EA53; /* je: equal / zero */

loc_0021E9EE: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021E9E0; /* jl: less (signed <) */

loc_0021E9F3: ;
    MEM32(esp + 0x10) = 0;

loc_0021E9FB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021EA14; /* je: equal / zero */

loc_0021EA00: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021EA14; /* je: equal / zero */

loc_0021EA05: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021EA14; /* je: equal / zero */

loc_0021EA0A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021EA14; /* je: equal / zero */

loc_0021EA0F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021EA59; /* jne: not equal / not zero */

loc_0021EA14: ;
    ecx = MEM32(esi + 0x14);
    eax = ecx + 0x389;
    edi = esp + 0x2E0;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0021EA26: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(edi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021EA26; /* jne: not equal / not zero */

loc_0021EA30: ;
    eax = ecx + 0x396;
    edi = esp + 0x3E0;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0021EA40: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(edi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021EA40; /* jne: not equal / not zero */

loc_0021EA4A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0021EA4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021EA4Cu); } /* indirect call */
    }

loc_0021EA4F: ;
    ebp = eax;
    goto loc_0021EA5D;

loc_0021EA53: ;
    MEM32(esp + 0x10) = edi;
    goto loc_0021E9FB;

loc_0021EA59: ;
    ebp = MEM32(esp + 0x14);

loc_0021EA5D: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0021EA68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021EA62u); } /* indirect call */
    }

loc_0021EA68: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0021EA71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021EA6Eu); } /* indirect call */
    }

loc_0021EA71: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0021EA78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021EA75u); } /* indirect call */
    }

loc_0021EA78: ;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = edi;
    PUSH32(esp, 0x0021EA83u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021EA83: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021EAC9; /* je: equal / zero */

loc_0021EA89: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax * 4 + 0x7F8FF8);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx * 4 + 0x7F8FC0);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x4E8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0021EAB0u); RECOMP_ABI_CALL(0x0002EB23u, sub_0002EB23); /* call 0x0002EB23 */

loc_0021EAB0: ;
    ecx = esi;
    PUSH32(esp, 0x0021EAB7u); RECOMP_ABI_CALL(0x000311E8u, sub_000311E8); /* call 0x000311E8 */

loc_0021EAB7: ;
    ecx = edi;
    PUSH32(esp, 0x0021EABEu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0021EABE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021EAC9; /* je: equal / zero */

loc_0021EAC2: ;
    MEM8(0x8C2250) = 1;

loc_0021EAC9: ;
    PUSH32(esp, 0x0021EACEu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0021EACE: ;
    esi = MEM32(esi + 4);
    edi = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x0021EAE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021EADAu); } /* indirect call */
    }

loc_0021EAE0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021EAFD; /* je: equal / zero */

loc_0021EAE5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021EAFD; /* je: equal / zero */

loc_0021EAEA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021EAFD; /* je: equal / zero */

loc_0021EAEF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021EAFD; /* je: equal / zero */

loc_0021EAF4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021EB99; /* jne: not equal / not zero */

loc_0021EAFD: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0021EB06u); RECOMP_ABI_CALL(0x0001C63Fu, sub_0001C63F); /* call 0x0001C63F */

loc_0021EB06: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0021EB0Fu); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_0021EB0F: ;
    eax = esp + 0x1B4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0021EB21u); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_0021EB21: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0021EB30;

    /* nop */
    /* nop */

loc_0021EB30: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x2E0));
    MEM8(esp + eax + 0x1F4) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021EB30; /* jne: not equal / not zero */

loc_0021EB43: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0021EB50;

    /* nop */
    edi = edi;

loc_0021EB50: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x3E0));
    MEM8(esp + eax + 0x226) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021EB50; /* jne: not equal / not zero */

loc_0021EB63: ;
    MEM32(esp + 0x1F0) = edi;
    MEM32(esp + 0x27C) = ebp;
    PUSH32(esp, 0x0021EB76u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0021EB76: ;
    ecx = esp + 0x1B4;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0021EB87u); RECOMP_ABI_CALL(0x00021FAEu, sub_00021FAE); /* call 0x00021FAE */

loc_0021EB87: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0021EB90u); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_0021EB90: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0021EB99u); RECOMP_ABI_CALL(0x00022C0Bu, sub_00022C0B); /* call 0x00022C0B */

loc_0021EB99: ;
    PUSH32(esp, 0x0021EB9Eu); RECOMP_ABI_CALL(0x00029F15u, sub_00029F15); /* call 0x00029F15 */

loc_0021EB9E: ;
    ecx = esp + 0x124;
    MEM32(esp + 0x178) = 0x7F9EE4;
    MEM32(esp + 0x138) = 0x7F7A10;
    PUSH32(esp, 0x0021EBC0u); RECOMP_ABI_CALL(0x00025DD9u, sub_00025DD9); /* call 0x00025DD9 */

loc_0021EBC0: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x0021EBC9u); RECOMP_ABI_CALL(0x0002F7D5u, sub_0002F7D5); /* call 0x0002F7D5 */

loc_0021EBC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6D0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0021EC80
 * Original: 0x0021EC80 - 0x0021ED47 (199 bytes, 66 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021EC80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xB (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0021ECBD; /* jne: not equal / not zero */

loc_0021EC8D: ;
    ecx = MEM32(esi + 0x33C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021ECBD; /* je: equal / zero */

loc_0021EC98: ;
    eax = MEM32(esi + 0x144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021ECBD; /* je: equal / zero */

loc_0021ECA2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021ECAF; /* jle: less or equal (signed <=) */

loc_0021ECA6: ;
    eax = MEM32(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021ECA2; /* jne: not equal / not zero */

loc_0021ECAD: ;
    goto loc_0021ECBD;

loc_0021ECAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021ECBD; /* je: equal / zero */

loc_0021ECB3: ;
    MEM32(eax + 0x8C) = 1;

loc_0021ECBD: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x154) = eax;
    MEM32(esi + 0x158) = edx;
    MEM32(esi + 0x150) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0021ED05; /* je: equal / zero */

loc_0021ECDB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021ECFE; /* jbe: below or equal (unsigned <=) */

loc_0021ECE1: ;
    edi = MEM32(esp + 0x14);
    ecx = esi + 0x160;
    PUSH32(esp, ebp);
    /* nop */

loc_0021ECF0: ;
    ebp = MEM32(edi + eax * 4);
    MEM32(ecx) = ebp;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021ECF0; /* jb: below (unsigned <) */

loc_0021ECFD: ;
    POP32(esp, ebp);

loc_0021ECFE: ;
    MEM8(esi + 0x12D) = 1;

loc_0021ED05: ;
    SET_LO8(eax, MEM8(esi + 0x338));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021ED27; /* jne: not equal / not zero */

loc_0021ED0F: ;
    PUSH32(esp, 0x0021ED14u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0021ED14: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0021ED22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021ED1Fu); } /* indirect call */
    }

loc_0021ED22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_0021ED27: ;
    SET_LO8(eax, MEM8(esi + 0x12D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021ED42; /* je: equal / zero */

loc_0021ED31: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0021ED3Bu); RECOMP_ABI_CALL(0x005C1863u, sub_005C1863); /* call 0x005C1863 */

loc_0021ED3B: ;
    MEM8(esi + 0x12D) = 0;

loc_0021ED42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0021ED80
 * Original: 0x0021ED80 - 0x0021ED84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021ED80(void)
{

loc_0021ED80: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_0021ED90
 * Original: 0x0021ED90 - 0x0021ED94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021ED90(void)
{

loc_0021ED90: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_0021EDA0
 * Original: 0x0021EDA0 - 0x0021EDA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EDA0(void)
{

loc_0021EDA0: ;
    eax = (int32_t)MEMF(esp + 4); /* cvtss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_0021EDB0
 * Original: 0x0021EDB0 - 0x0021EE21 (113 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EDB0(void)
{

loc_0021EDB0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 4);
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0021EE40
 * Original: 0x0021EE40 - 0x0021EE49 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EE40(void)
{

loc_0021EE40: ;
    eax = ecx;
    MEM32(eax) = 0x7FBCD8;
    esp += 4; return; /* ret */

}

/**
 * sub_0021EE50
 * Original: 0x0021EE50 - 0x0021EE57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EE50(void)
{

loc_0021EE50: ;
    MEM32(ecx) = 0x7FBCD8;
    esp += 4; return; /* ret */

}

/**
 * sub_0021EE60
 * Original: 0x0021EE60 - 0x0021EE7F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021EE60: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FBCD8;
    if (TEST_Z(_fa, _fb)) goto loc_0021EE79; /* je: equal / zero */

loc_0021EE70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021EE76u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021EE76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021EE79: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021EE90
 * Original: 0x0021EE90 - 0x0021EE9A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EE90(void)
{

loc_0021EE90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021EEA0
 * Original: 0x0021EEA0 - 0x0021EEAA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EEA0(void)
{

loc_0021EEA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021EEB0
 * Original: 0x0021EEB0 - 0x0021EECB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EEB0(void)
{

loc_0021EEB0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x9094C4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0021EECAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021EEC7u); } /* indirect call */
    }

loc_0021EECA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021EEE0
 * Original: 0x0021EEE0 - 0x0021EEE9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EEE0(void)
{

loc_0021EEE0: ;
    eax = ecx;
    MEM32(eax) = 0x7FBCE4;
    esp += 4; return; /* ret */

}

/**
 * sub_0021EEF0
 * Original: 0x0021EEF0 - 0x0021EEF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EEF0(void)
{

loc_0021EEF0: ;
    MEM32(ecx) = 0x7FBCD8;
    esp += 4; return; /* ret */

}

/**
 * sub_0021EF00
 * Original: 0x0021EF00 - 0x0021EF1F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021EF00: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FBCD8;
    if (TEST_Z(_fa, _fb)) goto loc_0021EF19; /* je: equal / zero */

loc_0021EF10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021EF16u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021EF16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021EF19: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021EF30
 * Original: 0x0021EF30 - 0x0021EF4B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EF30(void)
{

loc_0021EF30: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x909334);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0021EF4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021EF47u); } /* indirect call */
    }

loc_0021EF4A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021EF60
 * Original: 0x0021EF60 - 0x0021EF63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EF60(void)
{

loc_0021EF60: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021EF70
 * Original: 0x0021EF70 - 0x0021EF74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EF70(void)
{

loc_0021EF70: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0021EF80
 * Original: 0x0021EF80 - 0x0021EF84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EF80(void)
{

loc_0021EF80: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0021EF90
 * Original: 0x0021EF90 - 0x0021EF98 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EF90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021EF90: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esp += 4; return; /* ret */

}

/**
 * sub_0021EFA0
 * Original: 0x0021EFA0 - 0x0021EFA8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EFA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021EFA0: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esp += 4; return; /* ret */

}

/**
 * sub_0021EFB0
 * Original: 0x0021EFB0 - 0x0021EFB5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EFB0(void)
{

loc_0021EFB0: ;
    eax = ZX8(MEM8(ecx + 3));
    esp += 4; return; /* ret */

}

/**
 * sub_0021EFC0
 * Original: 0x0021EFC0 - 0x0021EFC9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EFC0(void)
{

loc_0021EFC0: ;
    eax = ecx;
    MEM32(eax) = 0x7FBCF0;
    esp += 4; return; /* ret */

}

/**
 * sub_0021EFD0
 * Original: 0x0021EFD0 - 0x0021EFD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EFD0(void)
{

loc_0021EFD0: ;
    MEM32(ecx) = 0x7FBCD8;
    esp += 4; return; /* ret */

}

/**
 * sub_0021EFE0
 * Original: 0x0021EFE0 - 0x0021EFFF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021EFE0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FBCD8;
    if (TEST_Z(_fa, _fb)) goto loc_0021EFF9; /* je: equal / zero */

loc_0021EFF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021EFF6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021EFF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021EFF9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021F010
 * Original: 0x0021F010 - 0x0021F036 (38 bytes, 10 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F010: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x7FBD18);
    PUSH32(esp, 0x0021F01Cu); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_0021F01C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x7FBCFC);
    MEM32(0x8F9598) = eax;
    PUSH32(esp, 0x0021F02Du); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_0021F02D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F9594) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0021F040
 * Original: 0x0021F040 - 0x0021F07D (61 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F040: ;
    eax = MEM32(0x8F9594);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F05E; /* je: equal / zero */

loc_0021F049: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021F051u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_0021F051: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F9594) = 0;

loc_0021F05E: ;
    eax = MEM32(0x8F9598);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F07C; /* je: equal / zero */

loc_0021F067: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021F06Fu); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_0021F06F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F9598) = 0;

loc_0021F07C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021F090
 * Original: 0x0021F090 - 0x0021F0CA (58 bytes, 18 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F090: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x7FBD18);
    MEM32(esi) = 0x7FBD30;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x0021F0ADu); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_0021F0AD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x7FBCFC);
    MEM32(0x8F9598) = eax;
    PUSH32(esp, 0x0021F0BEu); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_0021F0BE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F9594) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F0E0
 * Original: 0x0021F0E0 - 0x0021F15E (126 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F0E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x7FBD30;
    if (CMP_EQ(_fa, _fb)) goto loc_0021F10A; /* je: equal / zero */

loc_0021F0F1: ;
    PUSH32(esp, 0x0021F0F6u); RECOMP_ABI_CALL(0x00023868u, sub_00023868); /* call 0x00023868 */

loc_0021F0F6: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F103; /* je: equal / zero */

loc_0021F0FD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0021F103u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021F101u); } /* indirect call */
    }

loc_0021F103: ;
    MEM32(esi + 0x28) = 0;

loc_0021F10A: ;
    PUSH32(esp, 0x0021F10Fu); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_0021F10F: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021F11Fu); RECOMP_ABI_CALL(0x0055D588u, sub_0055D588); /* call 0x0055D588 */

loc_0021F11F: ;
    eax = MEM32(0x8F9594);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0021F13E; /* je: equal / zero */

loc_0021F129: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021F131u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_0021F131: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F9594) = 0;

loc_0021F13E: ;
    eax = MEM32(0x8F9598);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F15C; /* je: equal / zero */

loc_0021F147: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021F14Fu); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_0021F14F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F9598) = 0;

loc_0021F15C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F180
 * Original: 0x0021F180 - 0x0021F28A (266 bytes, 93 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021F180: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0021F18Eu); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_0021F18E: ;
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0021F19Eu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0021F19E: ;
    ecx = eax;
    PUSH32(esp, 0x0021F1A5u); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_0021F1A5: ;
    ebx = eax;
    eax = ebx + 1;
    PUSH32(esp, 0x300);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021F1B5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021F1B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0021F1CAu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0021F1CA: ;
    ecx = eax;
    PUSH32(esp, 0x0021F1D1u); RECOMP_ABI_CALL(0x00022913u, sub_00022913); /* call 0x00022913 */

loc_0021F1D1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(edi + ebx) = 0;
    ecx = MEM32(0x9094C4);
    edx = MEM32(ecx);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0021F1E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021F1E6u); } /* indirect call */
    }

loc_0021F1E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F1F6; /* je: equal / zero */

loc_0021F1ED: ;
    ecx = eax;
    PUSH32(esp, 0x0021F1F4u); RECOMP_ABI_CALL(0x0002BE6Eu, sub_0002BE6E); /* call 0x0002BE6E */

loc_0021F1F4: ;
    goto loc_0021F1F8;

loc_0021F1F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021F1F8: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x28) = eax;
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esi + 0x28);
    eax = esp + 0x14;
    MEM32(esp + 0x14) = 0x7FBCF0;
    PUSH32(esp, 0);
    MEM32(edx + 0x10) = eax;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021F21Fu); RECOMP_ABI_CALL(0x00035360u, sub_00035360); /* call 0x00035360 */

loc_0021F21F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021F225u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0021F225: ;
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0021F230u); RECOMP_ABI_CALL(0x00017C02u, sub_00017C02); /* call 0x00017C02 */

loc_0021F230: ;
    eax = MEM32(0x8F9594);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F24E; /* je: equal / zero */

loc_0021F239: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021F241u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_0021F241: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F9594) = 0;

loc_0021F24E: ;
    PUSH32(esp, 0x0021F253u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_0021F253: ;
    ecx = MEM32(eax + 4);
    edi = esi + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021F269u); RECOMP_ABI_CALL(0x0055D26Du, sub_0055D26D); /* call 0x0055D26D */

loc_0021F269: ;
    eax = MEM32(edi);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0x0021F279u); RECOMP_ABI_CALL(0x0002D6C9u, sub_0002D6C9); /* call 0x0002D6C9 */

loc_0021F279: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0021F280u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021F27Du); } /* indirect call */
    }

loc_0021F280: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021F2D0
 * Original: 0x0021F2D0 - 0x0021F2EF (31 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F2D0(void)
{

loc_0021F2D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021F300
 * Original: 0x0021F300 - 0x0021F337 (55 bytes, 21 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F300: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F30D; /* je: equal / zero */

loc_0021F308: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;

loc_0021F30D: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F31A; /* je: equal / zero */

loc_0021F315: ;
    edx = MEM32(ecx + 8);
    MEM32(eax) = edx;

loc_0021F31A: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F327; /* je: equal / zero */

loc_0021F322: ;
    edx = MEM32(ecx + 0xC);
    MEM32(eax) = edx;

loc_0021F327: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F334; /* je: equal / zero */

loc_0021F32F: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(eax) = ecx;

loc_0021F334: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0021F350
 * Original: 0x0021F350 - 0x0021F3A6 (86 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F350: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021F37Du); RECOMP_ABI_CALL(0x00557980u, sub_00557980); /* call 0x00557980 */

loc_0021F37D: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    eax = MEM32(esi + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021F3A1u); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_0021F3A1: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0021F3C0
 * Original: 0x0021F3C0 - 0x0021F3E7 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F3C0(void)
{

loc_0021F3C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x20);
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021F3E5u); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_0021F3E5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F3F0
 * Original: 0x0021F3F0 - 0x0021F403 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F3F0(void)
{

loc_0021F3F0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 4); /* cvtss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_0021F410
 * Original: 0x0021F410 - 0x0021F440 (48 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F410(void)
{

loc_0021F410: ;
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
 * sub_0021F450
 * Original: 0x0021F450 - 0x0021F456 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F450(void)
{

loc_0021F450: ;
    eax = 0x4F4A771;
    esp += 4; return; /* ret */

}

/**
 * sub_0021F460
 * Original: 0x0021F460 - 0x0021F4AE (78 bytes, 25 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F460: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x7FBD18);
    MEM32(esi) = 0x7FBD30;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    PUSH32(esp, 0x0021F47Eu); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_0021F47E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x7FBCFC);
    MEM32(0x8F9598) = eax;
    PUSH32(esp, 0x0021F48Fu); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_0021F48F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(0x8F9594) = eax;
    POP32(esp, edi);
    MEM32(esi) = 0x7FBD4C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F4D0
 * Original: 0x0021F4D0 - 0x0021F521 (81 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F4D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F4D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021F4DCu); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_0021F4DC: ;
    edi = MEM32(eax + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0xF) = LO8(ebx);
    MEM8(esp + 0xE) = LO8(ebx);
    MEM8(esp + 0xD) = LO8(ebx);
    MEM8(esp + 0xC) = LO8(ebx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0021F504u); RECOMP_ABI_CALL(0x00557F14u, sub_00557F14); /* call 0x00557F14 */

loc_0021F504: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0021F50Cu); RECOMP_ABI_CALL(0x000353C9u, sub_000353C9); /* call 0x000353C9 */

loc_0021F50C: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0021F515u); RECOMP_ABI_CALL(0x0002D6C9u, sub_0002D6C9); /* call 0x0002D6C9 */

loc_0021F515: ;
    ecx = esi;
    PUSH32(esp, 0x0021F51Cu); RECOMP_ABI_CALL(0x0002C6C0u, sub_0002C6C0); /* call 0x0002C6C0 */

loc_0021F51C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F540
 * Original: 0x0021F540 - 0x0021F543 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F540(void)
{

loc_0021F540: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021F550
 * Original: 0x0021F550 - 0x0021F556 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F550(void)
{

loc_0021F550: ;
    eax = 0x7FBD68;
    esp += 4; return; /* ret */

}

/**
 * sub_0021F560
 * Original: 0x0021F560 - 0x0021F577 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F560: ;
    eax = MEM32(ecx + 0x38);
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021F571; /* jbe: below or equal (unsigned <=) */

loc_0021F56B: ;
    MEM32(ecx + 0x3C) = eax;
    esp += 8; return; /* ret 4 */

loc_0021F571: ;
    MEM32(ecx + 0x3C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021F580
 * Original: 0x0021F580 - 0x0021F585 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F580: ;
    eax = MEM32(ecx + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0021F590
 * Original: 0x0021F590 - 0x0021F59D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F590(void)
{

loc_0021F590: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x98) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021F5A0
 * Original: 0x0021F5A0 - 0x0021F5A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F5A0(void)
{

loc_0021F5A0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F5B0
 * Original: 0x0021F5B0 - 0x0021F5B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F5B0(void)
{

loc_0021F5B0: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F5C0
 * Original: 0x0021F5C0 - 0x0021F5CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F5C0(void)
{

loc_0021F5C0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x99) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021F5D0
 * Original: 0x0021F5D0 - 0x0021F5DE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F5D0(void)
{

loc_0021F5D0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021F5F0
 * Original: 0x0021F5F0 - 0x0021F610 (32 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F5F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0021F608; /* jne: not equal / not zero */

loc_0021F600: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_0021F608: ;
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021F620
 * Original: 0x0021F620 - 0x0021F637 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0021F620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0021F620: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0021F634; /* jp: parity */

loc_0021F62E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0021F634: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0021F640
 * Original: 0x0021F640 - 0x0021F64B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F640(void)
{

loc_0021F640: ;
    eax = MEM32(ecx + 0x14);
    eax = eax + eax * 2;
    SET_LO8(eax, MEM8(ecx + eax * 4 + 0x1B));
    esp += 4; return; /* ret */

}

/**
 * sub_0021F650
 * Original: 0x0021F650 - 0x0021F65B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F650(void)
{

loc_0021F650: ;
    eax = MEM32(ecx + 0x14);
    eax = eax + eax * 2;
    SET_LO8(eax, MEM8(ecx + eax * 4 + 0x1C));
    esp += 4; return; /* ret */

}

/**
 * sub_0021F660
 * Original: 0x0021F660 - 0x0021F66B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F660(void)
{

loc_0021F660: ;
    eax = MEM32(ecx + 0x14);
    eax = eax + eax * 2;
    SET_LO8(eax, MEM8(ecx + eax * 4 + 0x1D));
    esp += 4; return; /* ret */

}

/**
 * sub_0021F670
 * Original: 0x0021F670 - 0x0021F67B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F670(void)
{

loc_0021F670: ;
    eax = MEM32(ecx + 0x14);
    eax = eax + eax * 2;
    SET_LO8(eax, MEM8(ecx + eax * 4 + 0x1E));
    esp += 4; return; /* ret */

}

/**
 * sub_0021F680
 * Original: 0x0021F680 - 0x0021F6E8 (104 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0021F680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F680: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_0021F6E3; /* jle: less or equal (signed <=) */

loc_0021F693: ;
    xmm2 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    esi = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_0021F6A3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    xmm0 = xmm2; /* movaps */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F6B5; /* je: equal / zero */

loc_0021F6AB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F6B5; /* je: equal / zero */

loc_0021F6B0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021F6B8; /* jne: not equal / not zero */

loc_0021F6B5: ;
    xmm0 = xmm1; /* movaps */

loc_0021F6B8: ;
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm3 = XMM_MEM(eax + esi + 0x10); /* movaps */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm0); /* mulps */
    XMM_STORE(eax + 0x10, xmm3); /* movaps */
    xmm3 = XMM_MEM(eax + 0x20); /* movaps */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    xmm3 = XMM_MUL(xmm3, xmm0); /* mulps */
    XMM_STORE(eax + 0x20, xmm3); /* movaps */
    if (CMP_L(_fas, _fbs)) goto loc_0021F6A3; /* jl: less (signed <) */

loc_0021F6E3: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0021F710
 * Original: 0x0021F710 - 0x0021F716 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F710(void)
{

loc_0021F710: ;
    eax = 0x7FBD84;
    esp += 4; return; /* ret */

}

/**
 * sub_0021F720
 * Original: 0x0021F720 - 0x0021F728 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F720(void)
{

loc_0021F720: ;
    MEM8(ecx + 0x36C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0021F730
 * Original: 0x0021F730 - 0x0021F738 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F730(void)
{

loc_0021F730: ;
    MEM8(ecx + 0x36C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0021F740
 * Original: 0x0021F740 - 0x0021F865 (293 bytes, 112 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021F740: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x0021F74Eu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0021F74E: ;
    ecx = eax;
    PUSH32(esp, 0x0021F755u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_0021F755: ;
    ebx = MEM32(esp + 0x1C);
    ecx = esp + 0x10;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0021F76Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021F767u); } /* indirect call */
    }

loc_0021F76D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x3F4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if (CMP_NE(_fa, _fb)) goto loc_0021F789; /* jne: not equal / not zero */

loc_0021F77E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0021F785u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021F782u); } /* indirect call */
    }

loc_0021F785: ;
    MEM32(esp + 0x14) = eax;

loc_0021F789: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x41 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0021F7D9; /* je: equal / zero */

loc_0021F78E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x42 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0021F859; /* jle: less or equal (signed <=) */

loc_0021F797: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x44 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0021F859; /* jg: greater (signed >) */

loc_0021F7A0: ;
    _fa = (uint32_t)(MEM32(ebp + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x3F4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021F7C3; /* jne: not equal / not zero */

loc_0021F7A9: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F821; /* je: equal / zero */

loc_0021F7B1: ;
    edi = eax + 0x157B;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0021F7C3: ;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x157C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x157C)) >> 32) & 1);
    edi = edi + 0x157C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0021F7D9: ;
    ebx = MEM32(ebp + 0x360);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ebx, ~LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(ebx));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFF9Cu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x15E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x15E0)) >> 32) & 1);
    eax = eax + 0x15E0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x3F4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021F853; /* jne: not equal / not zero */

loc_0021F800: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x46);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0021F811u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021F80Bu); } /* indirect call */
    }

loc_0021F811: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, MEM8(esp + 0x1C));
    if (CMP_NE(_fa, _fb)) goto loc_0021F831; /* jne: not equal / not zero */

loc_0021F81D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021F845; /* jne: not equal / not zero */

loc_0021F821: ;
    edi = MEM32(esp + 0x14);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0021F831: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021F845; /* jne: not equal / not zero */

loc_0021F835: ;
    edi = edi + eax + -1;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0021F845: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0021F853: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021F859: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0021F8B0
 * Original: 0x0021F8B0 - 0x0021F94B (155 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021F8B0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA0);
    edi = ecx;
    PUSH32(esp, 0x0021F8C6u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021F8C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021F8D8; /* je: equal / zero */

loc_0021F8CD: ;
    ecx = eax;
    PUSH32(esp, 0x0021F8D4u); RECOMP_ABI_CALL(0x0003129Cu, sub_0003129C); /* call 0x0003129C */

loc_0021F8D4: ;
    esi = eax;
    goto loc_0021F8DA;

loc_0021F8D8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021F8DA: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0021F8E3u); RECOMP_ABI_CALL(0x00027F94u, sub_00027F94); /* call 0x00027F94 */

loc_0021F8E3: ;
    eax = MEM32(edi + 0x3F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = 0x7FBDC8;
    if (CMP_EQ(_fa, _fb)) goto loc_0021F8FD; /* je: equal / zero */

loc_0021F8F5: ;
    MEM32(esp + 0x1C) = 0x7FBDB4;

loc_0021F8FD: ;
    ecx = MEM32(esp + 0xB0);
    edx = MEM32(esp + 0xAC);
    eax = esp + 0x1C;
    MEM32(esp + 0x10) = eax;
    eax = esp + 8;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = 0x7FBDA4;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = 0x7DFBF8;
    PUSH32(esp, 0x0021F937u); RECOMP_ABI_CALL(0x0002B937u, sub_0002B937); /* call 0x0002B937 */

loc_0021F937: ;
    POP32(esp, edi);
    MEM8(esi + 0x98) = 1;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021F980
 * Original: 0x0021F980 - 0x0021FA25 (165 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021F980(void)
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

loc_0021F980: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AACB4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0021F9B5; /* jp: parity */

loc_0021F99B: ;
    eax = MEM32(esi + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0021F9B1; /* jge: greater or equal (signed >=) */

loc_0021F9AB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0021F9B1: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0021F9B5: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0021F9BEu); RECOMP_ABI_CALL(0x0002745Eu, sub_0002745E); /* call 0x0002745E */

loc_0021F9BE: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x0021F9C7u); RECOMP_ABI_CALL(0x00024EEDu, sub_00024EED); /* call 0x00024EED */

loc_0021F9C7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FB8FC)); /* fmul dword ptr [0x7fb8fc] */
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0021F9FE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0021F9EE: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    SET_LO8(ebx, 1);
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_0021F9FE: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x1C); /* cvtss2si */
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    ecx = esi;
    MEM32(esi + 0x3C) = eax;
    PUSH32(esp, 0x0021FA20u); RECOMP_ABI_CALL(0x00023D81u, sub_00023D81); /* call 0x00023D81 */

loc_0021FA20: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0021FA50
 * Original: 0x0021FA50 - 0x0021FA99 (73 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021FA50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x0021FA5Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0021FA5E: ;
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021FA78; /* je: equal / zero */

loc_0021FA69: ;
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0021FA74u); RECOMP_ABI_CALL(0x00014A25u, sub_00014A25); /* call 0x00014A25 */

loc_0021FA74: ;
    esi = eax;
    goto loc_0021FA7A;

loc_0021FA78: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021FA7A: ;
    ecx = MEM32(edi + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0021FA85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021FA82u); } /* indirect call */
    }

loc_0021FA85: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0021FA94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021FA91u); } /* indirect call */
    }

loc_0021FA94: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021FAB0
 * Original: 0x0021FAB0 - 0x0021FB07 (87 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021FAB0: ;
    ecx = MEM32(0x909334);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0021FAC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021FAC2u); } /* indirect call */
    }

loc_0021FAC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021FAD4; /* je: equal / zero */

loc_0021FAC9: ;
    ecx = eax;
    PUSH32(esp, 0x0021FAD0u); RECOMP_ABI_CALL(0x000213D3u, sub_000213D3); /* call 0x000213D3 */

loc_0021FAD0: ;
    esi = eax;
    goto loc_0021FAD6;

loc_0021FAD4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021FAD6: ;
    eax = MEM32(0x909394);
    ecx = MEM32(eax + 8);
    eax = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0021FAF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021FAF3u); } /* indirect call */
    }

loc_0021FAF6: ;
    PUSH32(esp, 0x0021FAFBu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0021FAFB: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0021FB03u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_0021FB03: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021FB20
 * Original: 0x0021FB20 - 0x0021FB40 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021FB20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021FB26u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0021FB26: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021FB3E; /* je: equal / zero */

loc_0021FB2E: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0021FB36u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0021FB36: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0021FB3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021FB3Cu); } /* indirect call */
    }

loc_0021FB3E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0021FB50
 * Original: 0x0021FB50 - 0x0021FB73 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FB50(void)
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

loc_0021FB50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021FB56u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0021FB56: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3D;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esp) = edx;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB2D0)); /* fmul dword ptr [0x7ab2d0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7FB8F4)); /* fadd dword ptr [0x7fb8f4] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0021FB80
 * Original: 0x0021FB80 - 0x0021FBC5 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FB80(void)
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

loc_0021FB80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 0x30;

loc_0021FB88: ;
    PUSH32(esp, 0x0021FB8Du); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0021FB8D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3D;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = edi;
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB2D0)); /* fmul dword ptr [0x7ab2d0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7FB8F4)); /* fadd dword ptr [0x7fb8f4] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021FBBBu); RECOMP_ABI_CALL(0x00033B32u, sub_00033B32); /* call 0x00033B32 */

loc_0021FBBB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021FB88; /* jb: below (unsigned <) */

loc_0021FBC1: ;
    POP32(esp, edi);
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
 * sub_0021FBE0
 * Original: 0x0021FBE0 - 0x0021FC0F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021FBE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0021FBE9u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0021FBE9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3E8;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = esi + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1F4 (32-bit) */
    SET_LO8(edx, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    MEM8(esp + 4) = LO8(edx);
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021FC0Cu); RECOMP_ABI_CALL(0x000214E1u, sub_000214E1); /* call 0x000214E1 */

loc_0021FC0C: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0021FC20
 * Original: 0x0021FC20 - 0x0021FC2B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FC20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0021FC20: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0021FC2Au); RECOMP_ABI_CALL(0x00030F95u, sub_00030F95); /* call 0x00030F95 */

loc_0021FC2A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021FC30
 * Original: 0x0021FC30 - 0x0021FC38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021FC30: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00030F95(); return; /* tail jmp 0x00030F95 */

}

/**
 * sub_0021FC40
 * Original: 0x0021FC40 - 0x0021FC48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021FC40: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002F951(); return; /* tail jmp 0x0002F951 */

}

/**
 * sub_0021FC50
 * Original: 0x0021FC50 - 0x0021FC58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021FC50: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000214E1(); return; /* tail jmp 0x000214E1 */

}

/**
 * sub_0021FC60
 * Original: 0x0021FC60 - 0x0021FD38 (216 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021FC60: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x3F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021FD33; /* jne: not equal / not zero */

loc_0021FC74: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021FC7Cu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0021FC7C: ;
    ecx = eax;
    PUSH32(esp, 0x0021FC83u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_0021FC83: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_0021FC90: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0021FC98u); RECOMP_ABI_CALL(0x00030F95u, sub_00030F95); /* call 0x00030F95 */

loc_0021FC98: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x0021FCA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021FC9Eu); } /* indirect call */
    }

loc_0021FCA4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xD (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021FC90; /* jl: less (signed <) */

loc_0021FCAA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0021FCB0: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0021FCCCu); RECOMP_ABI_CALL(0x000199CBu, sub_000199CB); /* call 0x000199CB */

loc_0021FCCC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD454)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ebp = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x0021FD00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021FCFAu); } /* indirect call */
    }

loc_0021FD00: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x0021FD10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021FD0Au); } /* indirect call */
    }

loc_0021FD10: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0021FCB0; /* jb: below (unsigned <) */

loc_0021FD16: ;
    ecx = ebx;
    PUSH32(esp, 0x0021FD1Du); RECOMP_ABI_CALL(0x0002F951u, sub_0002F951); /* call 0x0002F951 */

loc_0021FD1D: ;
    edx = MEM32(esi);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x38);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x0021FD30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021FD2Au); } /* indirect call */
    }

loc_0021FD30: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0021FD33: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0021FD70
 * Original: 0x0021FD70 - 0x0021FD9E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FD70(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0021FD70: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8B53A0)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0021FD8F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0021FD80: ;
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0021FD80; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0021FD8F: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0021FD9D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0021FD94: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0021FD94; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0021FD9D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0021FDB0
 * Original: 0x0021FDB0 - 0x0021FE3B (139 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FDB0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0021FDB0: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x8B53A0)); /* movss */
    xmm1 = xmm4; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0021FDD2; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_0021FDC3: ;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0021FDC3; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0021FDD2: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0021FDE0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0021FDD7: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0021FDD7; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0021FDE0: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1 = xmm3; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0021FDFF; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_0021FDEE: ;
    edi = edi;

loc_0021FDF0: ;
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm5; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0021FDF0; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0021FDFF: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0021FE0D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0021FE04: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0021FE04; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0021FE0D: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7FB530); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0021FE25; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7FB530)) */

loc_0021FE1D: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_0021FE21: ;
    xmm0 = xmm1; /* movaps */
    esp += 4; return; /* ret */

loc_0021FE25: ;
    xmm2 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0021FE21; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0021FE32: ;
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    esp += 4; return; /* ret */

}

/**
 * sub_0021FE60
 * Original: 0x0021FE60 - 0x00220053 (499 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FE60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021FE60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7BFAE8); /* mulss */
    if (CMP_A(_fa, _fb)) goto loc_00220050; /* ja: above (unsigned >) */

loc_0021FE7A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x220054); /* switch: 9 entries, 9 targets */
    if (_jt == 0x0021FE81u) goto loc_0021FE81;
    if (_jt == 0x0021FEAEu) goto loc_0021FEAE;
    if (_jt == 0x0021FEE0u) goto loc_0021FEE0;
    if (_jt == 0x0021FF12u) goto loc_0021FF12;
    if (_jt == 0x0021FF1Cu) goto loc_0021FF1C;
    if (_jt == 0x0021FF5Bu) goto loc_0021FF5B;
    if (_jt == 0x0021FF99u) goto loc_0021FF99;
    if (_jt == 0x0021FFDCu) goto loc_0021FFDC;
    if (_jt == 0x00220019u) goto loc_00220019;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0021FE81: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x8B538C)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FB534)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8B5388)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0021FEAE: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FB910); /* mulss */
    eax = MEM32(esp + 8);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FB534)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FB908); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0021FEE0: ;
    eax = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FB914); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x7FB534)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FBDF0); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0021FF12: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FB910); /* mulss */
    goto loc_0021FF24;

loc_0021FF1C: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FB914); /* mulss */

loc_0021FF24: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    eax = MEM32(esp + 8);
    xmm1.f[0] = xmm1.f[0] + MEMF(0x7A9980); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7FB534); /* mulss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FB908); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0021FF5B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FB538); /* mulss */
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(0x7FB534)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x7FBDEC)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD474)); /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0021FF99: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FB538); /* mulss */
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(0x7FB534)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x7B980C)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FBDE8); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_0021FFDC: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7FBDE4); /* mulss */
    eax = MEM32(esp + 8);
    xmm1.f[0] = xmm1.f[0] + MEMF(0x7FB534); /* addss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7FBDE0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD380); /* mulss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_00220019: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7FB534)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FB914)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FB908); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB868); /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_00220050: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0021FF54
 * Original: 0x0021FF54 - 0x00220053 (255 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021FF54(void)
{

loc_0021FF54: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00220019
 * Original: 0x00220019 - 0x00220053 (58 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220019(void)
{

loc_00220019: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7FB534)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FB914)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FB908); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB868); /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00220100
 * Original: 0x00220100 - 0x00220223 (291 bytes, 81 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00220100: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    xmm5 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00220125; /* jne: not equal / not zero */

loc_00220113: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002201F9; /* jnp: not parity */

loc_00220125: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM8(ecx + 0x24) = 0;
    MEM32(ecx) = edx;
    PUSH32(esp, 0x00220135u); RECOMP_ABI_CALL(0x00033691u, sub_00033691); /* call 0x00033691 */

loc_00220135: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xC); /* subss */
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00220168; /* jp: parity */

loc_00220160: ;
    xmm5 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_00220168: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8B53A0)); /* movss */
    MEMF(ecx + 0x20) = xmm5.f[0]; /* movss */
    xmm1 = xmm4; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0022019F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_00220188: ;
    goto loc_00220190;

    /* nop */

loc_00220190: ;
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm6; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00220190; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0022019F: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002201AD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_002201A4: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_002201A4; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_002201AD: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1 = xmm3; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002201C4; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_002201B5: ;
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm6; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_002201B5; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_002201C4: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002201D9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_002201C9: ;
    /* nop */

loc_002201D0: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_002201D0; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_002201D9: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7FB530); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002201FF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7FB530)) */

loc_002201E9: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_002201ED: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm5.f[0]; /* divss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */

loc_002201F9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002201FF: ;
    xmm2 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002201ED; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0022020C: ;
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm5.f[0]; /* divss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00220270
 * Original: 0x00220270 - 0x00220553 (739 bytes, 151 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00220270(void)
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

loc_00220270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1D4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB8B0); /* addss */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_002202BA; /* jge: greater or equal (signed >=) */

loc_002202B4: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_002202BA: ;
    ecx = MEM32(ebp + 0x10);
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002202CA; /* jge: greater or equal (signed >=) */

loc_002202C4: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_002202CA: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    ebx = MEM32(ebp + 8);
    edx = esp + 0x18;
    ecx = ebx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x41200000);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002202E3u); RECOMP_ABI_CALL(0x00557A00u, sub_00557A00); /* call 0x00557A00 */

loc_002202E3: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = sin(fp_top()); /* fsin */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = MEM32(0x8B53C0);
    ecx = MEM32(0x8B53C4);
    edx = MEM32(0x8B53C8);
    xmm6 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 8); /* subss */
    MEMF(esp + 0xD4) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0xC); /* subss */
    MEMF(esp + 0xD8) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x14); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x18); /* subss */
    xmm5 = xmm0; /* movaps */
    MEMF(esp + 0xA0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x80) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEMF(esp + 0x88) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    fp_top() = -fp_top(); /* fchs */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7BFAE8); /* mulss */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x168;
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002204F6u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_002204F6: ;
    esi = eax;
    ecx = 0x10;
    edi = esp + 0xEC;
    eax = esp + 0xAC;
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
    PUSH32(esp, eax);
    ecx = esp + 0xF0;
    PUSH32(esp, ecx);
    edx = esp + 0x1B4;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00220523u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_00220523: ;
    esi = eax;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    edi = esp + 0x120;
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
    eax = esp + 0x120;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022054Au); RECOMP_ABI_CALL(0x00557FF4u, sub_00557FF4); /* call 0x00557FF4 */

loc_0022054A: ;
    POP32(esp, edi);
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
 * sub_00220610
 * Original: 0x00220610 - 0x00220625 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220610(void)
{

loc_00220610: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00220624u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220622u); } /* indirect call */
    }

loc_00220624: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00220630
 * Original: 0x00220630 - 0x00220641 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220630(void)
{

loc_00220630: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00220640u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022063Du); } /* indirect call */
    }

loc_00220640: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00220650
 * Original: 0x00220650 - 0x0022067E (46 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220650: ;
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
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00220675u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00220675: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00220690
 * Original: 0x00220690 - 0x00220697 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00220690: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001A975(); return; /* tail jmp 0x0001A975 */

}

/**
 * sub_002206A0
 * Original: 0x002206A0 - 0x002206B5 (21 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002206A0(void)
{

loc_002206A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002206AFu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_002206AF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002206C0
 * Original: 0x002206C0 - 0x002206DB (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002206C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002206C0: ;
    eax = MEM32(ecx);
    ecx = ZX8(MEM8(eax + 0x13));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags == 0)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002206F0
 * Original: 0x002206F0 - 0x00220705 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002206F0(void)
{

loc_002206F0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00220704u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220702u); } /* indirect call */
    }

loc_00220704: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00220710
 * Original: 0x00220710 - 0x00220721 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220710(void)
{

loc_00220710: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00220720u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022071Du); } /* indirect call */
    }

loc_00220720: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00220730
 * Original: 0x00220730 - 0x0022075E (46 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220730: ;
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
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00220755u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00220755: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00220770
 * Original: 0x00220770 - 0x0022077A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220770(void)
{

loc_00220770: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00220778u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00220778: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00220780
 * Original: 0x00220780 - 0x00220787 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00220780: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001A975(); return; /* tail jmp 0x0001A975 */

}

/**
 * sub_00220790
 * Original: 0x00220790 - 0x002207A5 (21 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220790(void)
{

loc_00220790: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022079Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0022079F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002207B0
 * Original: 0x002207B0 - 0x002207B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002207B0(void)
{

loc_002207B0: ;
    eax = 0xD;
    esp += 4; return; /* ret */

}

/**
 * sub_002207C0
 * Original: 0x002207C0 - 0x002207CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002207C0(void)
{

loc_002207C0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002207D0
 * Original: 0x002207D0 - 0x002207DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002207D0(void)
{

loc_002207D0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002207E0
 * Original: 0x002207E0 - 0x002207EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002207E0(void)
{

loc_002207E0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002207F0
 * Original: 0x002207F0 - 0x002207FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002207F0(void)
{

loc_002207F0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00220800
 * Original: 0x00220800 - 0x0022080A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220800(void)
{

loc_00220800: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00220810
 * Original: 0x00220810 - 0x00220838 (40 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220810: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022081Bu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0022081B: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220832; /* je: equal / zero */

loc_00220826: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00220832u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022082Fu); } /* indirect call */
    }

loc_00220832: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00220850
 * Original: 0x00220850 - 0x00220954 (260 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220850: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00220865u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220863u); } /* indirect call */
    }

loc_00220865: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022088E; /* je: equal / zero */

loc_0022086B: ;
    ecx = MEM32(0x8B5334);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00220889u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00220889: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00220890;

loc_0022088E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00220890: ;
    MEM32(esi + 0x2C) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002208A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002208A2u); } /* indirect call */
    }

loc_002208A4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002208CC; /* je: equal / zero */

loc_002208AA: ;
    eax = MEM32(0x8B5338);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002208C7u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_002208C7: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002208CE;

loc_002208CC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002208CE: ;
    MEM32(esi + 0x30) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002208E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002208E0u); } /* indirect call */
    }

loc_002208E2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022090A; /* je: equal / zero */

loc_002208E8: ;
    eax = MEM32(0x8B533C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40F4B4FA);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00220905u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00220905: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0022090C;

loc_0022090A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022090C: ;
    MEM32(esi + 0x34) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00220920u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022091Eu); } /* indirect call */
    }

loc_00220920: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022094C; /* je: equal / zero */

loc_00220926: ;
    eax = MEM32(0x8B5340);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40F4B4FA);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00220943u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00220943: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x38) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0022094C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x38) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002209A0
 * Original: 0x002209A0 - 0x00220A51 (177 bytes, 49 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002209A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002209A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    ecx = 0x10;
    edi = esp + 0x40;
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
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C4074)); /* movss */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00220A39u); RECOMP_ABI_CALL(0x005A07A1u, sub_005A07A1); /* call 0x005A07A1 */

loc_00220A39: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00220A48u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00220A48: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00220A80
 * Original: 0x00220A80 - 0x00220AA8 (40 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00220A8Bu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00220A8B: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00220AA2; /* je: equal / zero */

loc_00220A96: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00220AA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220A9Fu); } /* indirect call */
    }

loc_00220AA2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00220AC0
 * Original: 0x00220AC0 - 0x00220B3B (123 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00220AC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00220ACFu); RECOMP_ABI_CALL(0x0002DA0Cu, sub_0002DA0C); /* call 0x0002DA0C */

loc_00220ACF: ;
    edi = MEM32(esi + 0x24);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x13) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(ebx);
    MEM8(esp + 0x11) = LO8(ebx);
    MEM8(esp + 0x10) = LO8(ebx);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00220AF7u); RECOMP_ABI_CALL(0x00557F14u, sub_00557F14); /* call 0x00557F14 */

loc_00220AF7: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0x394;
    PUSH32(esp, 0x00220B0Bu); RECOMP_ABI_CALL(0x0001A2A4u, sub_0001A2A4); /* call 0x0001A2A4 */

loc_00220B0B: ;
    ecx = ebp;
    PUSH32(esp, 0x00220B12u); RECOMP_ABI_CALL(0x0002C6C0u, sub_0002C6C0); /* call 0x0002C6C0 */

loc_00220B12: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00220B35u); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_00220B35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00220B60
 * Original: 0x00220B60 - 0x00220E72 (786 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00220B60: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00220B6Eu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00220B6E: ;
    ecx = eax;
    PUSH32(esp, 0x00220B75u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00220B75: ;
    ebx = MEM32(esi + 0x35C);
    ecx = esp + 0x18;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebx = ebx & 0xFFFFFE7Fu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x35C) = ebx;
    eax = MEM32(edi);
    PUSH32(esp, 8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00220B9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220B94u); } /* indirect call */
    }

loc_00220B9A: ;
    edx = MEM32(esi + 0x35C);
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esi + 0x35C);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esp + 0x1C;
    ebx = ebx ^ edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi + 0x35C) = ebx;
    eax = MEM32(edi);
    PUSH32(esp, 0xA);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00220BC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220BC2u); } /* indirect call */
    }

loc_00220BC8: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi + 0x35C);
    ebx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00220BFD; /* jne: not equal / not zero */

loc_00220BDB: ;
    edx = MEM32(esi + 0x370);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x35C) = eax;
    MEM8(edx + 0x99) = 0;
    goto loc_00220C1C;

loc_00220BFD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    eax = eax & 0xFFFFDFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x35C) = eax;
    eax = MEM32(esi + 0x370);
    MEM8(eax + 0x99) = LO8(ebx);

loc_00220C1C: ;
    MEMF(esi + 0x3BC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x35C);
    ecx = ecx & 0xFC7FFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = esi + 0x33C;
    MEM32(esi + 0x35C) = ecx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00220C4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220C49u); } /* indirect call */
    }

loc_00220C4F: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00220C57u); RECOMP_ABI_CALL(0x0002F6CCu, sub_0002F6CC); /* call 0x0002F6CC */

loc_00220C57: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00220C5Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00220C5F: ;
    ecx = eax;
    PUSH32(esp, 0x00220C66u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00220C66: ;
    ecx = esp + 0x14;
    ebp = eax;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x43);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00220C7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220C74u); } /* indirect call */
    }

loc_00220C7A: ;
    ecx = MEM32(esi + 0x3F4);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00220CA7; /* jne: not equal / not zero */

loc_00220C87: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00220C8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220C8Cu); } /* indirect call */
    }

loc_00220C8F: ;
    _fa = (uint32_t)(MEM32(esi + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3F4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00220CA7; /* jne: not equal / not zero */

loc_00220C97: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00220CB0; /* je: equal / zero */

loc_00220C9F: ;
    eax = ecx + 0x157B;
    goto loc_00220CB0;

loc_00220CA7: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x157C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x157C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00220CB0: ;
    edx = MEM32(esi + 0x360);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x3FFF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = edx;
    ebp = ebp ^ eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x360) = ebp;
    PUSH32(esp, 0x00220CCFu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00220CCF: ;
    ecx = eax;
    PUSH32(esp, 0x00220CD6u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00220CD6: ;
    ecx = esp + 0x14;
    ebp = eax;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x44);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00220CEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220CE4u); } /* indirect call */
    }

loc_00220CEA: ;
    ecx = MEM32(esi + 0x3F4);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00220D17; /* jne: not equal / not zero */

loc_00220CF7: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00220CFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220CFCu); } /* indirect call */
    }

loc_00220CFF: ;
    _fa = (uint32_t)(MEM32(esi + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3F4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00220D17; /* jne: not equal / not zero */

loc_00220D07: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00220D20; /* je: equal / zero */

loc_00220D0F: ;
    eax = ecx + 0x157B;
    goto loc_00220D20;

loc_00220D17: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x157C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x157C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00220D20: ;
    ecx = MEM32(esi + 0x360);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx;
    eax = eax & 0x7FFC0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx ^ eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x13;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi + 0x360) = ebx;
    eax = MEM32(edi);
    PUSH32(esp, 0x45);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00220D4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220D45u); } /* indirect call */
    }

loc_00220D4B: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esi + 0x360);
    if (CMP_EQ(_fa, _fb)) goto loc_00220D60; /* je: equal / zero */

loc_00220D59: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00220D65;

loc_00220D60: ;
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00220D65: ;
    PUSH32(esp, 0x41);
    ecx = esi;
    MEM32(esi + 0x360) = eax;
    PUSH32(esp, 0x00220D74u); RECOMP_ABI_CALL(0x0002476Du, sub_0002476D); /* call 0x0002476D */

loc_00220D74: ;
    edx = MEM32(esi + 0x364);
    ebp = MEM32(esi + 0x364);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x3FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esp + 0x20;
    ebp = ebp ^ edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi + 0x364) = ebp;
    eax = MEM32(edi);
    PUSH32(esp, 0x1D);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00220DA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220D9Bu); } /* indirect call */
    }

loc_00220DA1: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esi + 0x35C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1B) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    edx = edx & 0x38000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esp + 0x24;
    ebx = ebx ^ edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi + 0x35C) = ebx;
    eax = MEM32(edi);
    PUSH32(esp, 0x21);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00220DD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220DCCu); } /* indirect call */
    }

loc_00220DD2: ;
    ecx = MEM32(esi + 0x35C);
    edx = MEM32(esp + 0x24);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx;
    edx = edx & 0x1E00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esp + 0x28;
    ebp = ebp ^ edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi + 0x35C) = ebp;
    eax = MEM32(edi);
    PUSH32(esp, 0x1F);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00220E02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220DFCu); } /* indirect call */
    }

loc_00220E02: ;
    edx = MEM32(esi + 0x360);
    ecx = MEM32(esp + 0x28);
    ebp = MEM32(esi + 0x360);
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esp + 0x2C;
    ebp = ebp ^ edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi + 0x360) = ebp;
    eax = MEM32(edi);
    PUSH32(esp, 0x1E);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00220E30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220E2Au); } /* indirect call */
    }

loc_00220E30: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00220E51; /* jne: not equal / not zero */

loc_00220E38: ;
    eax = MEM32(esi + 0x35C);
    POP32(esp, edi);
    eax = eax & 0xFBFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x35C) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00220E51: ;
    ecx = MEM32(esi + 0x35C);
    ecx = ecx | 0x4000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x35C) = ecx;
    MEM32(esi + 0x368) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00220F40
 * Original: 0x00220F40 - 0x00220FEA (170 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00220F40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00220F4Cu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00220F4C: ;
    ecx = eax;
    PUSH32(esp, 0x00220F53u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00220F53: ;
    ecx = esp + 0xB;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00220F66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220F60u); } /* indirect call */
    }

loc_00220F66: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00220F99; /* je: equal / zero */

loc_00220F6E: ;
    ecx = MEM32(edi + 0x3FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x36 (32-bit) */
    eax = edi + 0x3FC;
    if (CMP_EQ(_fa, _fb)) goto loc_00220FE4; /* je: equal / zero */

loc_00220F7F: ;
    edx = MEM32(edi + 0x3F8);
    MEM32(eax) = 0x36;
    ecx = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00220F93u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00220F93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00220F99: ;
    eax = MEM32(esi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x11);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00220FAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220FA4u); } /* indirect call */
    }

loc_00220FAA: ;
    PUSH32(esp, 0x00220FAFu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00220FAF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00220FB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220FB3u); } /* indirect call */
    }

loc_00220FB6: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00220FC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00220FC1u); } /* indirect call */
    }

loc_00220FC4: ;
    edx = MEM32(edi + 0x3FC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = edi + 0x3FC;
    if (CMP_EQ(_fa, _fb)) goto loc_00220FE4; /* je: equal / zero */

loc_00220FD4: ;
    edx = MEM32(edi + 0x3F8);
    MEM32(ecx) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x00220FE4u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00220FE4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00221020
 * Original: 0x00221020 - 0x0022107A (90 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221020: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00221073; /* je: equal / zero */

loc_0022102F: ;
    PUSH32(esp, edi);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(eax);
    edi = esi + 0x380;
    ecx = esp + 8;
    MEM32(edi) = eax;
    PUSH32(esp, 0x00221046u); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_00221046: ;
    eax = MEM32(esi + 0x370);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00221069; /* je: equal / zero */

loc_00221050: ;
    esi = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00221066u); RECOMP_ABI_CALL(0x00016267u, sub_00016267); /* call 0x00016267 */

loc_00221066: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00221069: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00221072u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00221072: ;
    POP32(esp, edi);

loc_00221073: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00221090
 * Original: 0x00221090 - 0x0022110E (126 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00221090: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002210E2; /* jp: parity */

loc_002210A7: ;
    ecx = esp + 4;
    PUSH32(esp, 0x002210B0u); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_002210B0: ;
    eax = MEM32(esi + 0x370);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x380) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x380)) >> 32) & 1);
    esi = esi + 0x380;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002210CFu); RECOMP_ABI_CALL(0x00016267u, sub_00016267); /* call 0x00016267 */

loc_002210CF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    PUSH32(esp, 0x002210DBu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_002210DB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002210E2: ;
    eax = MEM32(esi + 0x2C);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    ecx = MEM32(esi + 0x370);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x380) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x380)) >> 32) & 1);
    esi = esi + 0x380;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00221104u); RECOMP_ABI_CALL(0x00016267u, sub_00016267); /* call 0x00016267 */

loc_00221104: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00221130
 * Original: 0x00221130 - 0x002211FB (203 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221130: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x388);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_00221155; /* je: equal / zero */

loc_0022114B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00221153u); RECOMP_ABI_CALL(0x000160D2u, sub_000160D2); /* call 0x000160D2 */

loc_00221153: ;
    goto loc_00221189;

loc_00221155: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0022115Eu); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_0022115E: ;
    eax = MEM32(esi + 0x370);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x380;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0022117Du); RECOMP_ABI_CALL(0x00016267u, sub_00016267); /* call 0x00016267 */

loc_0022117D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, 0x00221189u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00221189: ;
    eax = MEM32(esi + 0x38C);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002211BF; /* je: equal / zero */

loc_00221199: ;
    eax = MEM32(esi + 0x374);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x384) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x384;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002211B4u); RECOMP_ABI_CALL(0x00016267u, sub_00016267); /* call 0x00016267 */

loc_002211B4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002211BF: ;
    ecx = esp + 8;
    PUSH32(esp, 0x002211C8u); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_002211C8: ;
    ecx = MEM32(esi + 0x374);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x384) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x384;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002211E7u); RECOMP_ABI_CALL(0x00016267u, sub_00016267); /* call 0x00016267 */

loc_002211E7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, 0x002211F3u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_002211F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00221230
 * Original: 0x00221230 - 0x0022123E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221230(void)
{

loc_00221230: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x3C0);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00221250
 * Original: 0x00221250 - 0x0022126F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221250: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x388);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022126D; /* je: equal / zero */

loc_0022125B: ;
    ecx = esp;
    MEM32(esp) = 1;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0022126Du); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0022126D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00221280
 * Original: 0x00221280 - 0x002212B0 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221280: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x388);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002212A2; /* je: equal / zero */

loc_0022128E: ;
    ecx = esp + 4;
    MEM32(esp + 4) = 0;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x002212A2u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_002212A2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x380) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002212C0
 * Original: 0x002212C0 - 0x0022132A (106 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002212C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002212C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi + 0x3F4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    if (CMP_NE(_fa, _fb)) goto loc_002212E8; /* jne: not equal / not zero */

loc_002212E1: ;
    PUSH32(esp, 0x7FBE18);
    goto loc_002212ED;

loc_002212E8: ;
    PUSH32(esp, 0x7FBDF4);

loc_002212ED: ;
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002212F8u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_002212F8: ;
    ecx = esp + 0x2C;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00221311u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00221311: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0022131Bu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0022131B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x404) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00221350
 * Original: 0x00221350 - 0x002213BB (107 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00221350: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi + 0x3F4);
    PUSH32(esp, 0);
    ebx = 1;
    PUSH32(esp, 0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, 0);
    eax = esp + 0x20;
    if (CMP_NE(_fa, _fb)) goto loc_0022137D; /* jne: not equal / not zero */

loc_00221376: ;
    PUSH32(esp, 0x7FBE18);
    goto loc_00221382;

loc_0022137D: ;
    PUSH32(esp, 0x7FBDF4);

loc_00221382: ;
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022138Du); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0022138D: ;
    ecx = esp + 0x30;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x002213A2u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_002213A2: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002213ACu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_002213AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x404) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002213E0
 * Original: 0x002213E0 - 0x00221488 (168 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002213E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002213E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x3C0;
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(edx + 0x20) = ecx;
    MEM32(edx + 0x24) = ecx;
    MEM32(edx + 0x28) = ecx;
    MEM32(edx + 0x2C) = ecx;
    MEM32(edx + 0x30) = ecx;
    PUSH32(esp, edi);
    edi = 4;
    MEM32(eax) = edi;
    MEM32(esi + 0x3E4) = edi;
    eax = 6;
    MEM32(esi + 0x3E0) = eax;
    MEM32(esi + 0x3DC) = 3;
    MEM32(esi + 0x3EC) = 9;
    MEM32(esi + 0x3F0) = edi;
    MEM32(esi + 0x3D0) = eax;
    PUSH32(esp, ecx);
    MEM32(esi + 0x3C4) = 1;
    ecx = esi + 0x30;
    MEM32(esi + 0x3C8) = edi;
    PUSH32(esp, 0x00221465u); RECOMP_ABI_CALL(0x00030F95u, sub_00030F95); /* call 0x00030F95 */

loc_00221465: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00221485; /* ja: above (unsigned >) */

loc_0022146B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x221488); /* switch: 4 entries, 2 targets */
    if (_jt == 0x00221472u) goto loc_00221472;
    if (_jt == 0x0022147Fu) goto loc_0022147F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00221472: ;
    POP32(esp, edi);
    MEM32(esi + 0x3D8) = 0xA;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0022147F: ;
    MEM32(esi + 0x3D8) = edi;

loc_00221485: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002214D0
 * Original: 0x002214D0 - 0x002215FF (303 bytes, 64 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002214D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002214D0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    eax = 1;
    if (CMP_A(_fa, _fb)) goto loc_002215FC; /* ja: above (unsigned >) */

loc_002214E2: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x221600); /* switch: 9 entries, 9 targets */
    if (_jt == 0x002214E9u) goto loc_002214E9;
    if (_jt == 0x00221506u) goto loc_00221506;
    if (_jt == 0x00221526u) goto loc_00221526;
    if (_jt == 0x00221543u) goto loc_00221543;
    if (_jt == 0x0022155Fu) goto loc_0022155F;
    if (_jt == 0x0022157Fu) goto loc_0022157F;
    if (_jt == 0x0022159Fu) goto loc_0022159F;
    if (_jt == 0x002215BCu) goto loc_002215BC;
    if (_jt == 0x002215DCu) goto loc_002215DC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002214E9: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 5;
    edx = 0x13;
    MEM32(ecx + 4) = 5;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    esp += 4; return; /* ret */

loc_00221506: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0x15;
    MEM32(ecx + 4) = 0x16;
    MEM32(ecx + 8) = 0x17;
    MEM32(ecx + 0xC) = 0x14;
    esp += 4; return; /* ret */

loc_00221526: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0xB;
    edx = 0xA;
    MEM32(ecx + 4) = 0xB;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    esp += 4; return; /* ret */

loc_00221543: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 3;
    MEM32(ecx + 8) = 2;
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

loc_0022155F: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 8;
    MEM32(ecx + 4) = 6;
    MEM32(ecx + 8) = 7;
    MEM32(ecx + 0xC) = 9;
    esp += 4; return; /* ret */

loc_0022157F: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0x11;
    MEM32(ecx + 4) = 0xD;
    MEM32(ecx + 8) = 0x12;
    MEM32(ecx + 0xC) = 0xE;
    esp += 4; return; /* ret */

loc_0022159F: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0xF;
    edx = 0xC;
    MEM32(ecx + 4) = 0x10;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    esp += 4; return; /* ret */

loc_002215BC: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0x1A;
    MEM32(ecx + 4) = 0x19;
    MEM32(ecx + 8) = 0x1C;
    MEM32(ecx + 0xC) = 0x18;
    esp += 4; return; /* ret */

loc_002215DC: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0x1D;
    MEM32(ecx + 4) = 0x1E;
    MEM32(ecx + 8) = 0x1B;
    MEM32(ecx + 0xC) = 0x1F;
    esp += 4; return; /* ret */

loc_002215FC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00221720
 * Original: 0x00221720 - 0x002218F7 (471 bytes, 142 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221720(void)
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

loc_00221720: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00221736u); RECOMP_ABI_CALL(0x00033691u, sub_00033691); /* call 0x00033691 */

loc_00221736: ;
    edi = MEM32(esp + 0x1C);
    ecx = edi;
    PUSH32(esp, 0x00221741u); RECOMP_ABI_CALL(0x00024EEDu, sub_00024EED); /* call 0x00024EED */

loc_00221741: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xC)); /* fsub dword ptr [esi + 0xc] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00221771; /* jbe: below or equal (unsigned <=) */

loc_0022175F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00221784;

loc_00221771: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */

loc_00221784: ;
    ecx = edi;
    PUSH32(esp, 0x0022178Bu); RECOMP_ABI_CALL(0x00024EEDu, sub_00024EED); /* call 0x00024EED */

loc_0022178B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_002217BB; /* jbe: below or equal (unsigned <=) */

loc_002217A9: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    goto loc_002217CE;

loc_002217BB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */

loc_002217CE: ;
    ecx = edi;
    PUSH32(esp, 0x002217D5u); RECOMP_ABI_CALL(0x00024EEDu, sub_00024EED); /* call 0x00024EED */

loc_002217D5: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8B53A0)); /* movss */
    xmm1 = xmm4; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0022180F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_002217FA: ;
    /* nop */

loc_00221800: ;
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm5; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00221800; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0022180F: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0022181D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00221814: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00221814; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0022181D: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1 = xmm3; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00221834; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_00221825: ;
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm5; /* movaps */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00221825; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_00221834: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00221849; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00221839: ;
    /* nop */

loc_00221840: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00221840; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00221849: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7FB530); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0022188F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7FB530)) */

loc_00221859: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_0022185D: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_00221863: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_002218AC; /* jbe: below or equal (unsigned <=) */

loc_00221877: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    POP32(esp, edi);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0022188F: ;
    xmm5 = XMM_SCALAR(MEMF(0x7DE4F4)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0022185D; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm1.f[0]) */

loc_0022189C: ;
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_00221863;

loc_002218AC: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esi + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_002218EF; /* je: equal / zero */

loc_002218BD: ;
    _fca = xmm4.f[0]; _fcb = MEMF(0x7FB534); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esi;
    PUSH32(esp, 0x40800000);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002218E4; /* jnp: not parity */

loc_002218D1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002218D8u); RECOMP_ABI_CALL(0x00022887u, sub_00022887); /* call 0x00022887 */

loc_002218D8: ;
    POP32(esp, edi);
    MEM8(esi + 0x24) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002218E4: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x002218EBu); RECOMP_ABI_CALL(0x00022887u, sub_00022887); /* call 0x00022887 */

loc_002218EB: ;
    MEM8(esi + 0x24) = 1;

loc_002218EF: ;
    POP32(esp, edi);
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
 * sub_00221970
 * Original: 0x00221970 - 0x00221985 (21 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221970(void)
{

loc_00221970: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022197Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0022197F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00221990
 * Original: 0x00221990 - 0x00221A2B (155 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221990: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi) = 0x7FBD4C;
    if (CMP_EQ(_fa, _fb)) goto loc_002219BB; /* je: equal / zero */

loc_002219A4: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002219ACu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_002219AC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002219BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002219B8u); } /* indirect call */
    }

loc_002219BB: ;
    edi = MEM32(esi + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x2C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_002219DC; /* je: equal / zero */

loc_002219C5: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002219CDu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_002219CD: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002219DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002219D9u); } /* indirect call */
    }

loc_002219DC: ;
    edi = MEM32(esi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x30) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_002219FD; /* je: equal / zero */

loc_002219E6: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002219EEu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_002219EE: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002219FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002219FAu); } /* indirect call */
    }

loc_002219FD: ;
    edi = MEM32(esi + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x34) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00221A1E; /* je: equal / zero */

loc_00221A07: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00221A0Fu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00221A0F: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00221A1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00221A1Bu); } /* indirect call */
    }

loc_00221A1E: ;
    POP32(esp, edi);
    MEM32(esi + 0x38) = ebx;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000265A4(); return; /* tail jmp 0x000265A4 */

}

/**
 * sub_00221A00
 * Original: 0x00221A00 - 0x00221A2B (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00221A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00221A00: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x34) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00221A1E; /* je: equal / zero */

loc_00221A07: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00221A0Fu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00221A0F: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00221A1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00221A1Bu); } /* indirect call */
    }

loc_00221A1E: ;
    POP32(esp, edi);
    MEM32(esi + 0x38) = ebx;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000265A4(); return; /* tail jmp 0x000265A4 */

}
