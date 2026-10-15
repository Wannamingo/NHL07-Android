/**
 * nhl_07_recomp - Recompiled code chunk 262
 * Functions: 250 (0x0060D766 - 0x0061012E)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0060D766
 * Original: 0x0060D766 - 0x0060D77A (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D766(void)
{

loc_0060D766: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    eax = MEM32(eax + ecx + 0x19C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D77A
 * Original: 0x0060D77A - 0x0060D78E (20 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D77A(void)
{

loc_0060D77A: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    eax = MEM32(eax + ecx + 0x1A0);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D78E
 * Original: 0x0060D78E - 0x0060D7C3 (53 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D78E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D78E: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0060D7A2; /* je: equal / zero */

loc_0060D799: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060D79Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D79Bu); } /* indirect call */
    }

loc_0060D79E: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0060D7A2: ;
    PUSH32(esp, 8);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x64;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_0060D7A8: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D7BA; /* je: equal / zero */

loc_0060D7AE: ;
    MEM32(esi + -32) = MEM32(esi + -32) & 0;
    _fa = (uint32_t)(MEM32(esi + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060D7B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D7B4u); } /* indirect call */
    }

loc_0060D7B7: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0060D7BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0060D7A8; /* jne: not equal / not zero */

loc_0060D7C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060D7C3
 * Original: 0x0060D7C3 - 0x0060D7E3 (32 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D7C3(void)
{

loc_0060D7C3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0060D7D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D7CEu); } /* indirect call */
    }

loc_0060D7D1: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD8);
    eax = esi + edi + 0x178;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D7E3
 * Original: 0x0060D7E3 - 0x0060D81C (57 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D7E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060D7E3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x28;
    ecx = esi + 0x2C;
    MEM32(esi) = 0x88149C;
    MEM32(esi + 0x24) = 0x881490;
    MEM32(edi) = 0x881480;
    PUSH32(esp, 0x0060D805u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060D805: ;
    ecx = edi;
    PUSH32(esp, 0x0060D80Cu); RECOMP_ABI_CALL(0x004AD9A0u, sub_004AD9A0); /* call 0x004AD9A0 */

loc_0060D80C: ;
    POP32(esp, edi);
    MEM32(esi + 0x24) = 0x881444;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060F0DC(); return; /* tail jmp 0x0060F0DC */

}

/**
 * sub_0060D81C
 * Original: 0x0060D81C - 0x0060D911 (245 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060D81C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D81C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D83C; /* je: equal / zero */

loc_0060D82B: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060D835u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D832u); } /* indirect call */
    }

loc_0060D835: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0060D90C;

loc_0060D83C: ;
    PUSH32(esp, MEM32(0x8E4DC4));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D84Au); RECOMP_ABI_CALL(0x004ABAD7u, sub_004ABAD7); /* call 0x004ABAD7 */

loc_0060D84A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0060D866; /* je: equal / zero */

loc_0060D850: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D855u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0060D855: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0060D85Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D859u); } /* indirect call */
    }

loc_0060D85C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0060D863u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D860u); } /* indirect call */
    }

loc_0060D863: ;
    MEM32(ebp + 8) = eax;

loc_0060D866: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    edi = esi + 0x2C;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D874u); RECOMP_ABI_CALL(0x004DDA93u, sub_004DDA93); /* call 0x004DDA93 */

loc_0060D874: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    MEM32(esi + 0x84) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D884u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060D884: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D88Fu); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_0060D88F: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060D896u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D893u); } /* indirect call */
    }

loc_0060D896: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x863910);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D8A4u); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_0060D8A4: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8814C8);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D8B5u); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_0060D8B5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D8BAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060D8BA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D8C6u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060D8C6: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D8E6; /* je: equal / zero */

loc_0060D8CF: ;
    eax = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -32);
    ecx = ebp + -32;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0060D8DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D8D9u); } /* indirect call */
    }

loc_0060D8DC: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D8E4u); RECOMP_ABI_CALL(0x0060D533u, sub_0060D533); /* call 0x0060D533 */

loc_0060D8E4: ;
    goto loc_0060D8E8;

loc_0060D8E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060D8E8: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D8EEu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060D8EE: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D8F5u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060D8F5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D8FCu); RECOMP_ABI_CALL(0x004E32BDu, sub_004E32BD); /* call 0x004E32BD */

loc_0060D8FC: ;
    edi = eax;
    ecx = ebp + -32;
    MEM32(esi + 0x40) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060D909u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_0060D909: ;
    eax = edi;
    POP32(esp, edi);

loc_0060D90C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060D911
 * Original: 0x0060D911 - 0x0060D914 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D911(void)
{

loc_0060D911: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0060D914
 * Original: 0x0060D914 - 0x0060D940 (44 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D914(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D914: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x64;

loc_0060D919: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D92C; /* je: equal / zero */

loc_0060D91E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060D919; /* jb: below (unsigned <) */

loc_0060D927: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0060D929: ;
    esp += 12; return; /* ret 8 */

loc_0060D92C: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x44) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + edx * 4 + 0x64) = eax;
    SET_LO8(eax, 1);
    goto loc_0060D929;

}

/**
 * sub_0060D940
 * Original: 0x0060D940 - 0x0060D967 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D940: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x44;
    PUSH32(esp, esi);

loc_0060D946: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060D959; /* je: equal / zero */

loc_0060D94E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060D946; /* jb: below (unsigned <) */

loc_0060D957: ;
    goto loc_0060D963;

loc_0060D959: ;
    MEM32(ecx + eax * 4 + 0x44) = MEM32(ecx + eax * 4 + 0x44) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + eax * 4 + 0x64) = MEM32(ecx + eax * 4 + 0x64) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0060D963: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D967
 * Original: 0x0060D967 - 0x0060D96F (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D967(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060D967: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060D565(); return; /* tail jmp 0x0060D565 */

}

/**
 * sub_0060D96F
 * Original: 0x0060D96F - 0x0060D99B (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D96F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D96F: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0060D97F;

    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0060D97F;

loc_0060D97F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060D987u); RECOMP_ABI_CALL(0x0060D7E3u, sub_0060D7E3); /* call 0x0060D7E3 */

loc_0060D987: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060D995; /* je: equal / zero */

loc_0060D98E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060D994u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060D994: ;
    POP32(esp, ecx);

loc_0060D995: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D977
 * Original: 0x0060D977 - 0x0060D99B (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D977(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D977: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0060D97F;

loc_0060D97F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060D987u); RECOMP_ABI_CALL(0x0060D7E3u, sub_0060D7E3); /* call 0x0060D7E3 */

loc_0060D987: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060D995; /* je: equal / zero */

loc_0060D98E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060D994u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060D994: ;
    POP32(esp, ecx);

loc_0060D995: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D97F
 * Original: 0x0060D97F - 0x0060D99B (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D97F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060D97F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060D987u); RECOMP_ABI_CALL(0x0060D7E3u, sub_0060D7E3); /* call 0x0060D7E3 */

loc_0060D987: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060D995; /* je: equal / zero */

loc_0060D98E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060D994u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060D994: ;
    POP32(esp, ecx);

loc_0060D995: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060D99B
 * Original: 0x0060D99B - 0x0060DA53 (184 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060D99B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060D99B: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax + esi;
    PUSH32(esp, 4);
    ebx = edi + 0x178;
    PUSH32(esp, 0x881470);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0060D9C0u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0060D9C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0060DA4B; /* jne: not equal / not zero */

loc_0060D9CB: ;
    eax = MEM32(esp + 0x10);
    eax = eax + esi + 0x8C;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0060DA4B; /* jne: not equal / not zero */

loc_0060D9DB: ;
    MEM8(eax) = 1;
    PUSH32(esp, 0x0060D9E3u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0060D9E3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0060D9EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060D9E7u); } /* indirect call */
    }

loc_0060D9EA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = esi;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ebx = esi + 0x28;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ebx = edi + 0x178;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0060DA0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DA0Bu); } /* indirect call */
    }

loc_0060DA0E: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = esi;
    PUSH32(esp, 0x0060DA1Au); RECOMP_ABI_CALL(0x0060D914u, sub_0060D914); /* call 0x0060D914 */

loc_0060DA1A: ;
    PUSH32(esp, MEM32(0x8D7C30));
    PUSH32(esp, 0x8814D4);
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0060DA32u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_0060DA32: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0060DA3Au); RECOMP_ABI_CALL(0x004DC9EFu, sub_004DC9EF); /* call 0x004DC9EF */

loc_0060DA3A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x17D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x17D)) >> 32) & 1);
    edi = edi + 0x17D;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0060DA4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DA48u); } /* indirect call */
    }

loc_0060DA4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060DA53
 * Original: 0x0060DA53 - 0x0060DAB8 (101 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DA53(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DA53: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    ecx = esi + -40;
    PUSH32(esp, 0x0060DA64u); RECOMP_ABI_CALL(0x0060D940u, sub_0060D940); /* call 0x0060D940 */

loc_0060DA64: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DA6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DA6Au); } /* indirect call */
    }

loc_0060DA6D: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    PUSH32(esp, 0x8814DC);
    eax = eax + esi + 0x150;
    PUSH32(esp, 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060DA8Cu); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_0060DA8C: ;
    edi = MEM32(esi + -20);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFE0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060DAB2; /* jbe: below or equal (unsigned <=) */

loc_0060DA9B: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0060DAA3u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_0060DAA3: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060DAADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DAABu); } /* indirect call */
    }

loc_0060DAAD: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060DA9B; /* jb: below (unsigned <) */

loc_0060DAB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060DAB8
 * Original: 0x0060DAB8 - 0x0060DB16 (94 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DAB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060DAB8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, ebp);
    ecx = esi + -40;
    PUSH32(esp, 0x0060DACBu); RECOMP_ABI_CALL(0x0060D940u, sub_0060D940); /* call 0x0060D940 */

loc_0060DACB: ;
    PUSH32(esp, 0x0060DAD0u); RECOMP_ABI_CALL(0x004DC9EFu, sub_004DC9EF); /* call 0x004DC9EF */

loc_0060DAD0: ;
    edx = MEM32(eax);
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    ecx = ecx + esi + 0x150;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(0x8D7C34));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0060DAEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DAECu); } /* indirect call */
    }

loc_0060DAEF: ;
    edi = MEM32(esi + -20);
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFE0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060DB0F; /* jbe: below or equal (unsigned <=) */

loc_0060DAFB: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0060DB03u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_0060DB03: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060DB0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DB08u); } /* indirect call */
    }

loc_0060DB0A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060DAFB; /* jb: below (unsigned <) */

loc_0060DB0F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060DB26
 * Original: 0x0060DB26 - 0x0060DB43 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DB26(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DB26: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8814E4;
    if (TEST_Z(_fa, _fb)) goto loc_0060DB3D; /* je: equal / zero */

loc_0060DB36: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060DB3Cu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060DB3C: ;
    POP32(esp, ecx);

loc_0060DB3D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060DB43
 * Original: 0x0060DB43 - 0x0060DB75 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DB43(void)
{

loc_0060DB43: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060DB4Bu); RECOMP_ABI_CALL(0x004E31B4u, sub_004E31B4); /* call 0x004E31B4 */

loc_0060DB4B: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x6C6C766C);
    ecx = esi;
    MEM32(esi) = 0x881500;
    MEM32(esi + 8) = 0x8814F0;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0060DB6Fu); RECOMP_ABI_CALL(0x004E3221u, sub_004E3221); /* call 0x004E3221 */

loc_0060DB6F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060DB75
 * Original: 0x0060DB75 - 0x0060DB9E (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DB75(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DB75: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881500;
    MEM32(esi + 8) = 0x8814F0;
    PUSH32(esp, 0x0060DB8Au); RECOMP_ABI_CALL(0x004E31F2u, sub_004E31F2); /* call 0x004E31F2 */

loc_0060DB8A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060DB98; /* je: equal / zero */

loc_0060DB91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060DB97u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060DB97: ;
    POP32(esp, ecx);

loc_0060DB98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060DB9E
 * Original: 0x0060DB9E - 0x0060DBA9 (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DB9E(void)
{

loc_0060DB9E: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DBA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DBA5u); } /* indirect call */
    }

loc_0060DBA8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0060DBA9
 * Original: 0x0060DBA9 - 0x0060DBDE (53 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DBA9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DBA9: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DBD9; /* je: equal / zero */

loc_0060DBAF: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_0060DBD2; /* je: equal / zero */

loc_0060DBBD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69706572) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x69706572 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0060DBCE; /* je: equal / zero */

loc_0060DBC7: ;
    PUSH32(esp, 0);

loc_0060DBC9: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DBCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DBC9u); } /* indirect call */
    }

loc_0060DBCC: ;
    goto loc_0060DBD9;

loc_0060DBCE: ;
    PUSH32(esp, 1);
    goto loc_0060DBC9;

loc_0060DBD2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0x10));
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0060DBD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DBD7u); } /* indirect call */
    }

loc_0060DBD9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060DBDE
 * Original: 0x0060DBDE - 0x0060DBE9 (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DBDE(void)
{

loc_0060DBDE: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DBE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DBE5u); } /* indirect call */
    }

loc_0060DBE8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0060DBE9
 * Original: 0x0060DBE9 - 0x0060DBFA (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DBE9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DBE9: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DBF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DBF4u); } /* indirect call */
    }

loc_0060DBF7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060DBFA
 * Original: 0x0060DBFA - 0x0060DCDA (224 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060DBFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DBFA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DC1A; /* je: equal / zero */

loc_0060DC09: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DC13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DC10u); } /* indirect call */
    }

loc_0060DC13: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0060DCD5;

loc_0060DC1A: ;
    PUSH32(esp, MEM32(0x8E4DC8));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DC28u); RECOMP_ABI_CALL(0x004ABAD7u, sub_004ABAD7); /* call 0x004ABAD7 */

loc_0060DC28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0060DC44; /* je: equal / zero */

loc_0060DC2E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DC33u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0060DC33: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0060DC3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DC37u); } /* indirect call */
    }

loc_0060DC3A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0060DC41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DC3Eu); } /* indirect call */
    }

loc_0060DC41: ;
    MEM32(ebp + 8) = eax;

loc_0060DC44: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    MEM32(esi + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DC52u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060DC52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DC5Du); RECOMP_ABI_CALL(0x004DCBBBu, sub_004DCBBB); /* call 0x004DCBBB */

loc_0060DC5D: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -32;
    PUSH32(esp, 0x863910);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DC6Du); RECOMP_ABI_CALL(0x004DCD3Eu, sub_004DCD3E); /* call 0x004DCD3E */

loc_0060DC6D: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0x881510);
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DC7Eu); RECOMP_ABI_CALL(0x004DCDDCu, sub_004DCDDC); /* call 0x004DCDDC */

loc_0060DC7E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DC83u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060DC83: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DC8Fu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060DC8F: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DCAF; /* je: equal / zero */

loc_0060DC98: ;
    eax = esi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -32);
    ecx = ebp + -32;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0060DCA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DCA2u); } /* indirect call */
    }

loc_0060DCA5: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DCADu); RECOMP_ABI_CALL(0x0060DB43u, sub_0060DB43); /* call 0x0060DB43 */

loc_0060DCAD: ;
    goto loc_0060DCB1;

loc_0060DCAF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060DCB1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DCB7u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060DCB7: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DCBEu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060DCBE: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DCC5u); RECOMP_ABI_CALL(0x004E32BDu, sub_004E32BD); /* call 0x004E32BD */

loc_0060DCC5: ;
    edi = eax;
    ecx = ebp + -32;
    MEM32(esi + 0x14) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DCD2u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_0060DCD2: ;
    eax = edi;
    POP32(esp, edi);

loc_0060DCD5: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060DCDA
 * Original: 0x0060DCDA - 0x0060DCDE (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DCDA(void)
{

loc_0060DCDA: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0060DCDE
 * Original: 0x0060DCDE - 0x0060DCE6 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DCDE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060DCDE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060DB75(); return; /* tail jmp 0x0060DB75 */

}

/**
 * sub_0060DCE6
 * Original: 0x0060DCE6 - 0x0060DD14 (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DCE6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DCE6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060DCEEu); RECOMP_ABI_CALL(0x0060F111u, sub_0060F111); /* call 0x0060F111 */

loc_0060DCEE: ;
    MEM32(esi + 8) = 0x8814E4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi) = 0x881528;
    MEM32(esi + 8) = 0x88151C;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060DD14
 * Original: 0x0060DD14 - 0x0060DD1C (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DD14(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060DD14: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060DF9A(); return; /* tail jmp 0x0060DF9A */

}

/**
 * sub_0060DD1C
 * Original: 0x0060DD1C - 0x0060DD47 (43 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DD1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060DD1C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881528;
    MEM32(esi + 8) = 0x88151C;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DD38; /* je: equal / zero */

loc_0060DD33: ;
    PUSH32(esp, 0x0060DD38u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060DD38: ;
    MEM32(esi + 8) = 0x8814E4;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060F123(); return; /* tail jmp 0x0060F123 */

}

/**
 * sub_0060DD47
 * Original: 0x0060DD47 - 0x0060DD5E (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0060DD47(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DD47: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DD5B; /* je: equal / zero */

loc_0060DD4E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x881568);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DD5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DD57u); } /* indirect call */
    }

loc_0060DD5A: ;
    esp += 4; return; /* ret */

loc_0060DD5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DD5E
 * Original: 0x0060DD5E - 0x0060DD75 (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0060DD5E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DD5E: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DD72; /* je: equal / zero */

loc_0060DD65: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x881574);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DD71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DD6Eu); } /* indirect call */
    }

loc_0060DD71: ;
    esp += 4; return; /* ret */

loc_0060DD72: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DD75
 * Original: 0x0060DD75 - 0x0060DD8C (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0060DD75(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DD75: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DD89; /* je: equal / zero */

loc_0060DD7C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x881580);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DD88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DD85u); } /* indirect call */
    }

loc_0060DD88: ;
    esp += 4; return; /* ret */

loc_0060DD89: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DD8C
 * Original: 0x0060DD8C - 0x0060DDA3 (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0060DD8C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DD8C: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DDA0; /* je: equal / zero */

loc_0060DD93: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x88158C);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DD9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DD9Cu); } /* indirect call */
    }

loc_0060DD9F: ;
    esp += 4; return; /* ret */

loc_0060DDA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DDA3
 * Original: 0x0060DDA3 - 0x0060DDBA (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0060DDA3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DDA3: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DDB7; /* je: equal / zero */

loc_0060DDAA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x881598);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DDB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DDB3u); } /* indirect call */
    }

loc_0060DDB6: ;
    esp += 4; return; /* ret */

loc_0060DDB7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DDBA
 * Original: 0x0060DDBA - 0x0060DDD1 (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0060DDBA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DDBA: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DDCE; /* je: equal / zero */

loc_0060DDC1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8815A4);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DDCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DDCAu); } /* indirect call */
    }

loc_0060DDCD: ;
    esp += 4; return; /* ret */

loc_0060DDCE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DDD1
 * Original: 0x0060DDD1 - 0x0060DDE8 (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0060DDD1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DDD1: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DDE5; /* je: equal / zero */

loc_0060DDD8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8815B0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DDE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DDE1u); } /* indirect call */
    }

loc_0060DDE4: ;
    esp += 4; return; /* ret */

loc_0060DDE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DDE8
 * Original: 0x0060DDE8 - 0x0060DDFF (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0060DDE8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DDE8: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DDFC; /* je: equal / zero */

loc_0060DDEF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8815BC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DDFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DDF8u); } /* indirect call */
    }

loc_0060DDFB: ;
    esp += 4; return; /* ret */

loc_0060DDFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DDFF
 * Original: 0x0060DDFF - 0x0060DE16 (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0060DDFF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DDFF: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DE13; /* je: equal / zero */

loc_0060DE06: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8815C8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DE12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DE0Fu); } /* indirect call */
    }

loc_0060DE12: ;
    esp += 4; return; /* ret */

loc_0060DE13: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DE16
 * Original: 0x0060DE16 - 0x0060DE2D (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0060DE16(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DE16: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DE2A; /* je: equal / zero */

loc_0060DE1D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8815D4);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DE29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DE26u); } /* indirect call */
    }

loc_0060DE29: ;
    esp += 4; return; /* ret */

loc_0060DE2A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DE2D
 * Original: 0x0060DE2D - 0x0060DE44 (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0060DE2D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DE2D: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DE41; /* je: equal / zero */

loc_0060DE34: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8815E0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DE40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DE3Du); } /* indirect call */
    }

loc_0060DE40: ;
    esp += 4; return; /* ret */

loc_0060DE41: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DE44
 * Original: 0x0060DE44 - 0x0060DE5B (23 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0060DE44(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DE44: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DE58; /* je: equal / zero */

loc_0060DE4B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8815EC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060DE57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DE54u); } /* indirect call */
    }

loc_0060DE57: ;
    esp += 4; return; /* ret */

loc_0060DE58: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DE5B
 * Original: 0x0060DE5B - 0x0060DEAF (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DE5B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DE5B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    ecx = MEM32(ecx + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0060DE71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DE6Eu); } /* indirect call */
    }

loc_0060DE71: ;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060DE75: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8815F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0060DE8Cu); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_0060DE8C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060DE94u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060DE94: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060DE75; /* jne: not equal / not zero */

loc_0060DE9D: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    eax = esi + -1;
    POP32(esp, esi);
    PUSH32(esp, 0x0060DEABu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060DEAB: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DEAF
 * Original: 0x0060DEAF - 0x0060DF19 (106 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060DEAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DEAF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0060DEBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DEB9u); } /* indirect call */
    }

loc_0060DEBC: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    edi = eax;
    esi = 0x7B891F;
    if (CMP_EQ(_fa, _fb)) goto loc_0060DEEB; /* je: equal / zero */

loc_0060DEC9: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x8815F8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DEE0u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_0060DEE0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DEE8u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060DEE8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0060DEEB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DF13; /* je: equal / zero */

loc_0060DEF1: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x881600);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DF08u); RECOMP_ABI_CALL(0x005E3F40u, sub_005E3F40); /* call 0x005E3F40 */

loc_0060DF08: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DF10u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060DF10: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0060DF13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0060DF19
 * Original: 0x0060DF19 - 0x0060DF9A (129 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060DF19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DF19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DF2Eu); RECOMP_ABI_CALL(0x004DCC43u, sub_004DCC43); /* call 0x004DCC43 */

loc_0060DF2E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DF33u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060DF33: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DF3Fu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060DF3F: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060DF5B; /* je: equal / zero */

loc_0060DF48: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DF4Du); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060DF4D: ;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DF59u); RECOMP_ABI_CALL(0x004DD485u, sub_004DD485); /* call 0x004DD485 */

loc_0060DF59: ;
    goto loc_0060DF5D;

loc_0060DF5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060DF5D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DF63u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060DF63: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DF6Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060DF6A: ;
    PUSH32(esp, eax);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DF73u); RECOMP_ABI_CALL(0x004B2F44u, sub_004B2F44); /* call 0x004B2F44 */

loc_0060DF73: ;
    edi = esi + -8;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DF7Du); RECOMP_ABI_CALL(0x0060DE5Bu, sub_0060DE5B); /* call 0x0060DE5B */

loc_0060DF7D: ;
    ecx = MEM32(esi + 0x10);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060DF8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060DF8Au); } /* indirect call */
    }

loc_0060DF8C: ;
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060DF94u); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_0060DF94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060DF9A
 * Original: 0x0060DF9A - 0x0060DFB6 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DF9A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DF9A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060DFA2u); RECOMP_ABI_CALL(0x0060DD1Cu, sub_0060DD1C); /* call 0x0060DD1C */

loc_0060DFA2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060DFB0; /* je: equal / zero */

loc_0060DFA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060DFAFu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060DFAF: ;
    POP32(esp, ecx);

loc_0060DFB0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060DFB6
 * Original: 0x0060DFB6 - 0x0060DFD1 (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DFB6(void)
{

loc_0060DFB6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060DFBEu); RECOMP_ABI_CALL(0x0060F150u, sub_0060F150); /* call 0x0060F150 */

loc_0060DFBE: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = eax;
    MEM32(esi) = 0x881608;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060DFD1
 * Original: 0x0060DFD1 - 0x0060DFD5 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DFD1(void)
{

loc_0060DFD1: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0060DFD5
 * Original: 0x0060DFD5 - 0x0060DFDC (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DFD5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DFD5: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DFDC
 * Original: 0x0060DFDC - 0x0060DFEE (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DFDC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060DFDC: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0060DFEE
 * Original: 0x0060DFEE - 0x0060E010 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060DFEE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060DFEE: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881608;
    PUSH32(esp, 0x0060DFFCu); RECOMP_ABI_CALL(0x0060F162u, sub_0060F162); /* call 0x0060F162 */

loc_0060DFFC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060E00A; /* je: equal / zero */

loc_0060E003: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060E009u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060E009: ;
    POP32(esp, ecx);

loc_0060E00A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E010
 * Original: 0x0060E010 - 0x0060E022 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E010(void)
{

loc_0060E010: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060E018u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060E018: ;
    MEM32(esi) = 0x881618;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060E022
 * Original: 0x0060E022 - 0x0060E02D (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E022(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060E022: ;
    MEM32(ecx) = 0x881618;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060E02D
 * Original: 0x0060E02D - 0x0060E053 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E02D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E02D: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881618;
    PUSH32(esp, 0x0060E03Bu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060E03B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060E049; /* je: equal / zero */

loc_0060E042: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060E048u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060E048: ;
    POP32(esp, ecx);

loc_0060E049: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E053
 * Original: 0x0060E053 - 0x0060E06C (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E053(void)
{

loc_0060E053: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060E060u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E05Du); } /* indirect call */
    }

loc_0060E060: ;
    ecx = esi + -8;
    PUSH32(esp, 0x0060E068u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060E068: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E06C
 * Original: 0x0060E06C - 0x0060E086 (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E06C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E06C: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060E07Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E078u); } /* indirect call */
    }

loc_0060E07A: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E086
 * Original: 0x0060E086 - 0x0060E0A1 (27 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E086(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E086: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060E095u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E092u); } /* indirect call */
    }

loc_0060E095: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E0A1
 * Original: 0x0060E0A1 - 0x0060E0EF (78 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E0A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060E0A1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x881668;
    MEM32(edi) = 0x88165C;
    if (CMP_EQ(_fa, _fb)) goto loc_0060E0C0; /* je: equal / zero */

loc_0060E0BB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060E0C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E0BDu); } /* indirect call */
    }

loc_0060E0C0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060E0D7; /* je: equal / zero */

loc_0060E0C7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060E0CDu); RECOMP_ABI_CALL(0x00611B90u, sub_00611B90); /* call 0x00611B90 */

loc_0060E0CD: ;
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x0060E0D5u); RECOMP_ABI_CALL(0x00611BA0u, sub_00611BA0); /* call 0x00611BA0 */

loc_0060E0D5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0060E0D7: ;
    ecx = esi + 0x18;
    PUSH32(esp, 0x0060E0DFu); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060E0DF: ;
    ecx = edi;
    PUSH32(esp, 0x0060E0E6u); RECOMP_ABI_CALL(0x0060808Bu, sub_0060808B); /* call 0x0060808B */

loc_0060E0E6: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060F1A1(); return; /* tail jmp 0x0060F1A1 */

}

/**
 * sub_0060E0EF
 * Original: 0x0060E0EF - 0x0060E100 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E0EF(void)
{

loc_0060E0EF: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, MEM32(ecx + 0xC));
    PUSH32(esp, 0x0060E0FBu); RECOMP_ABI_CALL(0x00611E20u, sub_00611E20); /* call 0x00611E20 */

loc_0060E0FB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E100
 * Original: 0x0060E100 - 0x0060E19B (155 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060E100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0060E11Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E118u); } /* indirect call */
    }

loc_0060E11B: ;
    PUSH32(esp, 0x7C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7E94C4);
    PUSH32(esp, 0x18);
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E131u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060E131: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + -28)) & 0xFFu; _fb = (uint32_t)(0x21) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -28), 0x21 (8-bit) */
    eax = ebp + -28;
    if (CMP_NE(_fa, _fb)) goto loc_0060E140; /* jne: not equal / not zero */

loc_0060E13D: ;
    eax = ebp + -27;

loc_0060E140: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E146u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0060E146: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -32) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E157u); RECOMP_ABI_CALL(0x00611E40u, sub_00611E40); /* call 0x00611E40 */

loc_0060E157: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -36) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0060E185; /* je: equal / zero */

loc_0060E161: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E166u); RECOMP_ABI_CALL(0x004DC9EFu, sub_004DC9EF); /* call 0x004DC9EF */

loc_0060E166: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    edi = esi + 0x2C;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -36));
    ecx = esi + 0x18;
    PUSH32(esp, MEM32(ebp + -32));
    ebx = eax;
    eax = MEM32(ecx);
    esi = MEM32(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060E17Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E17Bu); } /* indirect call */
    }

loc_0060E17E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(esi); PUSH32(esp, 0x0060E183u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E181u); } /* indirect call */
    }

loc_0060E183: ;
    goto loc_0060E18A;

loc_0060E185: ;
    edi = esi + 0x2C;
    MEM8(edi) = LO8(ebx);

loc_0060E18A: ;
    ecx = MEM32(ebp + -4);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E197u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060E197: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E19B
 * Original: 0x0060E19B - 0x0060E1AF (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E19B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E19B: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, MEM32(ecx + 0xC));
    PUSH32(esp, 0x0060E1A7u); RECOMP_ABI_CALL(0x00611E20u, sub_00611E20); /* call 0x00611E20 */

loc_0060E1A7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E1AF
 * Original: 0x0060E1AF - 0x0060E1C5 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E1AF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E1AF: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, MEM32(ecx + 0xC));
    PUSH32(esp, 0x0060E1BBu); RECOMP_ABI_CALL(0x00611E20u, sub_00611E20); /* call 0x00611E20 */

loc_0060E1BB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E1C5
 * Original: 0x0060E1C5 - 0x0060E211 (76 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060E1C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E1C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(0x8E19F0);
    PUSH32(esp, MEM32(ecx + 0xC));
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E1DEu); RECOMP_ABI_CALL(0x00611E20u, sub_00611E20); /* call 0x00611E20 */

loc_0060E1DE: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -32;
    PUSH32(esp, 0x8813D0);
    PUSH32(esp, 0x19);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E1F9u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060E1F9: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E202u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0060E202: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E20Du); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060E20D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060E211
 * Original: 0x0060E211 - 0x0060E251 (64 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E211(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E211: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0x881694);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0060E21Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E21Cu); } /* indirect call */
    }

loc_0060E21F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    edi = MEM32(esp + 0x10);
    MEM8(edi) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0060E24C; /* je: equal / zero */

loc_0060E22B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0060E233u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E230u); } /* indirect call */
    }

loc_0060E233: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, MEM32(esp + 0x20));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060E249u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060E249: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0060E24C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060E259
 * Original: 0x0060E259 - 0x0060E2EF (150 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060E259(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E259: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E273u); RECOMP_ABI_CALL(0x00611EA0u, sub_00611EA0); /* call 0x00611EA0 */

loc_0060E273: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0060E2DE; /* jle: less or equal (signed <=) */

loc_0060E27E: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0060E2DD; /* jle: less or equal (signed <=) */

loc_0060E285: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0060E28Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E28Au); } /* indirect call */
    }

loc_0060E28D: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x19);
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E2A2u); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060E2A2: ;
    eax = ebp + -32;
    PUSH32(esp, 0x7E4E88);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E2B0u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_0060E2B0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060E2D3; /* jne: not equal / not zero */

loc_0060E2B7: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060E2DA; /* je: equal / zero */

loc_0060E2BC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0060E2C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E2C1u); } /* indirect call */
    }

loc_0060E2C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E2CDu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0060E2CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0060E2DA; /* je: equal / zero */

loc_0060E2D3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0060E285; /* jl: less (signed <) */

loc_0060E2D8: ;
    goto loc_0060E2DD;

loc_0060E2DA: ;
    MEM32(ebp + -36) = edi;

loc_0060E2DD: ;
    POP32(esp, edi);

loc_0060E2DE: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -36);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E2EBu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060E2EB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E2EF
 * Original: 0x0060E2EF - 0x0060E348 (89 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060E2EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E2EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0060E308u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E305u); } /* indirect call */
    }

loc_0060E308: ;
    ecx = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060E33B; /* je: equal / zero */

loc_0060E311: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0060E319u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E316u); } /* indirect call */
    }

loc_0060E319: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -32;
    PUSH32(esp, 0x8813D0);
    PUSH32(esp, 0x19);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E32Fu); RECOMP_ABI_CALL(0x005E5900u, sub_005E5900); /* call 0x005E5900 */

loc_0060E32F: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E338u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0060E338: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0060E33B: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E344u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060E344: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060E348
 * Original: 0x0060E348 - 0x0060E350 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E348(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060E348: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060E558(); return; /* tail jmp 0x0060E558 */

}

/**
 * sub_0060E350
 * Original: 0x0060E350 - 0x0060E3E4 (148 bytes, 53 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E350: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0060E35Au); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060E35A: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x0060E364u); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_0060E364: ;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(edi) = 0x8816A0;
    edi = esi + 0xC;
    ecx = edi;
    MEM32(esi) = 0x88169C;
    PUSH32(esp, 0x0060E37Eu); RECOMP_ABI_CALL(0x004E02AEu, sub_004E02AE); /* call 0x004E02AE */

loc_0060E37E: ;
    PUSH32(esp, 0x0060E383u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060E383: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = esi + 0x10;
    PUSH32(esp, 0x0060E390u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060E390: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    MEM32(esi + 0x24) = eax;
    MEM8(esi + 0x28) = 1;
    PUSH32(esp, 0x0060E3A6u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_0060E3A6: ;
    eax = MEM32(edi);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0060E3B1u); RECOMP_ABI_CALL(0x00611EA0u, sub_00611EA0); /* call 0x00611EA0 */

loc_0060E3B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_G(_fas, _fbs)) goto loc_0060E3DC; /* jg: greater (signed >) */

loc_0060E3B6: ;
    edi = MEM32(edi);
    ecx = edi + 0x18;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060E3C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E3BDu); } /* indirect call */
    }

loc_0060E3C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0060E3C7u); RECOMP_ABI_CALL(0x00611BF0u, sub_00611BF0); /* call 0x00611BF0 */

loc_0060E3C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0060E3DC; /* je: equal / zero */

loc_0060E3CD: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060E3D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E3D5u); } /* indirect call */
    }

loc_0060E3D8: ;
    MEM8(esi + 0x28) = 0;

loc_0060E3DC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060E3E4
 * Original: 0x0060E3E4 - 0x0060E408 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E3E4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E3E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0060E3EC;

loc_0060E3EC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060E3F4u); RECOMP_ABI_CALL(0x0060E408u, sub_0060E408); /* call 0x0060E408 */

loc_0060E3F4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060E402; /* je: equal / zero */

loc_0060E3FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060E401u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060E401: ;
    POP32(esp, ecx);

loc_0060E402: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E3EC
 * Original: 0x0060E3EC - 0x0060E408 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E3EC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E3EC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060E3F4u); RECOMP_ABI_CALL(0x0060E408u, sub_0060E408); /* call 0x0060E408 */

loc_0060E3F4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060E402; /* je: equal / zero */

loc_0060E3FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060E401u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060E401: ;
    POP32(esp, ecx);

loc_0060E402: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E408
 * Original: 0x0060E408 - 0x0060E43F (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E408(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060E408: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    ecx = esi + 0x10;
    MEM32(esi) = 0x88169C;
    MEM32(edi) = 0x8816A0;
    PUSH32(esp, 0x0060E423u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060E423: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060E42F; /* je: equal / zero */

loc_0060E42A: ;
    PUSH32(esp, 0x0060E42Fu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060E42F: ;
    ecx = edi;
    PUSH32(esp, 0x0060E436u); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_0060E436: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060E43F
 * Original: 0x0060E43F - 0x0060E4D4 (149 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060E43F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E43F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    eax = MEM32(esi + 0x24);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0060E483; /* je: equal / zero */

loc_0060E457: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0060E4B8; /* jne: not equal / not zero */

loc_0060E45A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E461u); RECOMP_ABI_CALL(0x00611DF0u, sub_00611DF0); /* call 0x00611DF0 */

loc_0060E461: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0060E473; /* jle: less or equal (signed <=) */

loc_0060E467: ;
    ecx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 4));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060E471u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E46Fu); } /* indirect call */
    }

loc_0060E471: ;
    goto loc_0060E4B5;

loc_0060E473: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0060E4B8; /* jge: greater or equal (signed >=) */

loc_0060E475: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    eax = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0060E4B1; /* jne: not equal / not zero */

loc_0060E47F: ;
    PUSH32(esp, 1);
    goto loc_0060E4B2;

loc_0060E483: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E489u); RECOMP_ABI_CALL(0x00611EA0u, sub_00611EA0); /* call 0x00611EA0 */

loc_0060E489: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0060E4B8; /* jle: less or equal (signed <=) */

loc_0060E48E: ;
    ecx = esi + 8;
    eax = MEM32(ecx);
    MEM32(esi + 0x24) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060E49Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E49Au); } /* indirect call */
    }

loc_0060E49D: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E4A5u); RECOMP_ABI_CALL(0x00611CE0u, sub_00611CE0); /* call 0x00611CE0 */

loc_0060E4A5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060E4B8; /* je: equal / zero */

loc_0060E4AC: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);

loc_0060E4B1: ;
    PUSH32(esp, ebx);

loc_0060E4B2: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060E4B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E4B2u); } /* indirect call */
    }

loc_0060E4B5: ;
    MEM8(esi + 0x20) = LO8(ebx);

loc_0060E4B8: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0060E4CA; /* jne: not equal / not zero */

loc_0060E4C2: ;
    ecx = esi + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E4CAu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060E4CA: ;
    SET_LO8(eax, MEM8(ebp + -1));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E4D4
 * Original: 0x0060E4D4 - 0x0060E4F9 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E4D4(void)
{

loc_0060E4D4: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, 0x0060E4E2u); RECOMP_ABI_CALL(0x00611B90u, sub_00611B90); /* call 0x00611B90 */

loc_0060E4E2: ;
    POP32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060E4EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E4EAu); } /* indirect call */
    }

loc_0060E4ED: ;
    ecx = esi + -8;
    PUSH32(esp, 0x0060E4F5u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060E4F5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E4F9
 * Original: 0x0060E4F9 - 0x0060E558 (95 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E4F9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E4F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0060E502u); RECOMP_ABI_CALL(0x0060F18Fu, sub_0060F18F); /* call 0x0060F18F */

loc_0060E502: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x0060E50Cu); RECOMP_ABI_CALL(0x00608082u, sub_00608082); /* call 0x00608082 */

loc_0060E50C: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x881668;
    MEM32(edi) = 0x88165C;
    PUSH32(esp, 0x0060E525u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060E525: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 0x18;
    PUSH32(esp, 0x0060E532u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060E532: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x28);
    eax = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060E548u); RECOMP_ABI_CALL(0x00611B00u, sub_00611B00); /* call 0x00611B00 */

loc_0060E548: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    MEM8(esi + 0x2C) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E558
 * Original: 0x0060E558 - 0x0060E574 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E558(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E558: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060E560u); RECOMP_ABI_CALL(0x0060E0A1u, sub_0060E0A1); /* call 0x0060E0A1 */

loc_0060E560: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060E56E; /* je: equal / zero */

loc_0060E567: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060E56Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060E56D: ;
    POP32(esp, ecx);

loc_0060E56E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E574
 * Original: 0x0060E574 - 0x0060E5FA (134 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E574(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060E574: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0060E58E; /* je: equal / zero */

loc_0060E57F: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060E58Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E587u); } /* indirect call */
    }

loc_0060E58A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0060E5F5;

loc_0060E58E: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x0060E59Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060E59A: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x0060E5A4u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060E5A4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0060E5BD; /* je: equal / zero */

loc_0060E5AB: ;
    ecx = esi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060E5BBu); RECOMP_ABI_CALL(0x0060E350u, sub_0060E350); /* call 0x0060E350 */

loc_0060E5BB: ;
    goto loc_0060E5BF;

loc_0060E5BD: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060E5BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060E5C5u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060E5C5: ;
    ecx = eax;
    PUSH32(esp, 0x0060E5CCu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060E5CC: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x3A98);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060E5F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E5EFu); } /* indirect call */
    }

loc_0060E5F2: ;
    MEM32(esi + 0x10) = eax;

loc_0060E5F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060E5FA
 * Original: 0x0060E5FA - 0x0060E626 (44 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E5FA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E5FA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x0060E606u); RECOMP_ABI_CALL(0x00611EA0u, sub_00611EA0); /* call 0x00611EA0 */

loc_0060E606: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_0060E611; /* jge: greater or equal (signed >=) */

loc_0060E60D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0060E621;

loc_0060E611: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0060E61Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E617u); } /* indirect call */
    }

loc_0060E61A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060E621; /* je: equal / zero */

loc_0060E61F: ;
    edi = eax;

loc_0060E621: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060E626
 * Original: 0x0060E626 - 0x0060E638 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E626(void)
{

loc_0060E626: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060E62Eu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060E62E: ;
    MEM32(esi) = 0x8816B0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060E63D
 * Original: 0x0060E63D - 0x0060E659 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E63D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E63D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060E645u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060E645: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060E653; /* je: equal / zero */

loc_0060E64C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060E652u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060E652: ;
    POP32(esp, ecx);

loc_0060E653: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E659
 * Original: 0x0060E659 - 0x0060E68A (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E659(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060E659: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi) = 0x8816C8;
    PUSH32(esp, 0x0060E66Au); RECOMP_ABI_CALL(0x00613E30u, sub_00613E30); /* call 0x00613E30 */

loc_0060E66A: ;
    POP32(esp, ecx);
    PUSH32(esp, 0x0060E670u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060E670: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060E67Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E677u); } /* indirect call */
    }

loc_0060E67A: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x0060E682u); RECOMP_ABI_CALL(0x004E1D94u, sub_004E1D94); /* call 0x004E1D94 */

loc_0060E682: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060E68A
 * Original: 0x0060E68A - 0x0060E68E (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E68A(void)
{

loc_0060E68A: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0060E68E
 * Original: 0x0060E68E - 0x0060E692 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E68E(void)
{

loc_0060E68E: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0060E692
 * Original: 0x0060E692 - 0x0060E696 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E692(void)
{

loc_0060E692: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0060E696
 * Original: 0x0060E696 - 0x0060E6A0 (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E696(void)
{

loc_0060E696: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E6A0
 * Original: 0x0060E6A0 - 0x0060E6F7 (87 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E6A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E6A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0060E6A9u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060E6A9: ;
    eax = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    ecx = esi + 0x10;
    MEM32(esi) = 0x8816C8;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0060E6C3u); RECOMP_ABI_CALL(0x004DF218u, sub_004DF218); /* call 0x004DF218 */

loc_0060E6C3: ;
    PUSH32(esp, 0x0060E6C8u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060E6C8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xB);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0060E6D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E6D1u); } /* indirect call */
    }

loc_0060E6D3: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0060E6DFu); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_0060E6DF: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x0060E6EDu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_0060E6ED: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060E6F7
 * Original: 0x0060E6F7 - 0x0060E713 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E6F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E6F7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060E6FFu); RECOMP_ABI_CALL(0x0060E659u, sub_0060E659); /* call 0x0060E659 */

loc_0060E6FF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060E70D; /* je: equal / zero */

loc_0060E706: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060E70Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060E70C: ;
    POP32(esp, ecx);

loc_0060E70D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E713
 * Original: 0x0060E713 - 0x0060E765 (82 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E713(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E713: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0060E761; /* jbe: below or equal (unsigned <=) */

loc_0060E71C: ;
    PUSH32(esp, edi);
    edi = ecx + 0x18;

loc_0060E720: ;
    PUSH32(esp, 0x0060E725u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060E725: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0060E731u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060E731: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060E742; /* je: equal / zero */

loc_0060E738: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0060E740u); RECOMP_ABI_CALL(0x0060F1CEu, sub_0060F1CE); /* call 0x0060F1CE */

loc_0060E740: ;
    goto loc_0060E744;

loc_0060E742: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060E744: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060E74Au); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060E74A: ;
    ecx = eax;
    PUSH32(esp, 0x0060E751u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060E751: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0060E759u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060E759: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060E720; /* jb: below (unsigned <) */

loc_0060E760: ;
    POP32(esp, edi);

loc_0060E761: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E769
 * Original: 0x0060E769 - 0x0060E7C8 (95 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E769(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E769: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060E771u); RECOMP_ABI_CALL(0x0060F30Cu, sub_0060F30C); /* call 0x0060F30C */

loc_0060E771: ;
    MEM32(esi) = 0x8816E4;
    PUSH32(esp, 0x0060E77Cu); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060E77C: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 8;
    PUSH32(esp, 0x0060E789u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060E789: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x58) = MEM32(esi + 0x58) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x1C) = 1;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x5C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0060E7AD; /* je: equal / zero */

loc_0060E7A4: ;
    MEM8(esi + 0x54) = 1;
    MEM32(esi + 0x3C) = eax;
    goto loc_0060E7B0;

loc_0060E7AD: ;
    MEM8(esi + 0x54) = LO8(ecx);

loc_0060E7B0: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ecx);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060E7BCu); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_0060E7BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x4C) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060E7C8
 * Original: 0x0060E7C8 - 0x0060E7D0 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E7C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060E7C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_0060E7D0
 * Original: 0x0060E7D0 - 0x0060E813 (67 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060E7D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), 2 (32-bit) */
    MEM32(esi) = 0x8816E4;
    if (CMP_NE(_fa, _fb)) goto loc_0060E803; /* jne: not equal / not zero */

loc_0060E7DF: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060E803; /* jne: not equal / not zero */

loc_0060E7E5: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0060E803; /* jle: less or equal (signed <=) */

loc_0060E7EB: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060E7F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E7F3u); } /* indirect call */
    }

loc_0060E7F6: ;
    PUSH32(esp, MEM32(esi + 0x58));
    PUSH32(esp, MEM32(eax + 0x60));
    PUSH32(esp, 0x0060E801u); RECOMP_ABI_CALL(0x00614EB0u, sub_00614EB0); /* call 0x00614EB0 */

loc_0060E801: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0060E803: ;
    ecx = esi + 8;
    PUSH32(esp, 0x0060E80Bu); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060E80B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060F31E(); return; /* tail jmp 0x0060F31E */

}

/**
 * sub_0060E813
 * Original: 0x0060E813 - 0x0060E897 (132 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060E813(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E813: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x28);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0060E884; /* je: equal / zero */

loc_0060E824: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0060E853; /* je: equal / zero */

loc_0060E827: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0060E84A; /* je: equal / zero */

loc_0060E82B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0060E84A; /* je: equal / zero */

loc_0060E82F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0060E841; /* je: equal / zero */

loc_0060E832: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0060E894; /* jne: not equal / not zero */

loc_0060E835: ;
    ecx = MEM32(eax + 0x20);
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x1C) = ecx;
    goto loc_0060E894;

loc_0060E841: ;
    MEM32(eax + 0x20) = 3;
    goto loc_0060E894;

loc_0060E84A: ;
    MEM32(eax + 0x20) = 4;
    goto loc_0060E894;

loc_0060E853: ;
    _fa = (uint32_t)(MEM8(eax + 0x54)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x54), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_0060E872; /* je: equal / zero */

loc_0060E85D: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060E86Du); RECOMP_ABI_CALL(0x005CFAF0u, sub_005CFAF0); /* call 0x005CFAF0 */

loc_0060E86D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060E87E;

loc_0060E872: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060E87E; /* jne: not equal / not zero */

loc_0060E878: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x18) = eax;

loc_0060E87E: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + edi;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    goto loc_0060E894;

loc_0060E884: ;
    _fa = (uint32_t)(MEM8(eax + 0x54)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x54), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060E890; /* jne: not equal / not zero */

loc_0060E88A: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x18) = eax;

loc_0060E890: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0060E894: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0060E897
 * Original: 0x0060E897 - 0x0060E8DC (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E897(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E897: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060E8A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E8A3u); } /* indirect call */
    }

loc_0060E8A6: ;
    edi = MEM32(eax + 0x60);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi + 8;
    eax = MEM32(ecx);
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x60E813);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060E8BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E8BAu); } /* indirect call */
    }

loc_0060E8BD: ;
    PUSH32(esp, eax);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0060E8C8u); RECOMP_ABI_CALL(0x00614E50u, sub_00614E50); /* call 0x00614E50 */

loc_0060E8C8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x58) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0060E8D9; /* jge: greater or equal (signed >=) */

loc_0060E8D2: ;
    MEM32(esi + 0x1C) = 4;

loc_0060E8D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060E8DC
 * Original: 0x0060E8DC - 0x0060E8EF (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E8DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E8DC: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060E8E9; /* je: equal / zero */

loc_0060E8E4: ;
    edx = MEM32(ecx + 0x34);
    MEM32(eax) = edx;

loc_0060E8E9: ;
    eax = MEM32(ecx + 0x3C);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060E8EF
 * Original: 0x0060E8EF - 0x0060E901 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E8EF(void)
{

loc_0060E8EF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060E8F7u); RECOMP_ABI_CALL(0x0060F34Bu, sub_0060F34B); /* call 0x0060F34B */

loc_0060E8F7: ;
    MEM32(esi) = 0x8816F0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060E901
 * Original: 0x0060E901 - 0x0060E904 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E901(void)
{

loc_0060E901: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0060E90F
 * Original: 0x0060E90F - 0x0060E927 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E90F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060E90F: ;
    PUSH32(esp, 0x881704);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0060E91Du); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_0060E91D: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ecx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E927
 * Original: 0x0060E927 - 0x0060E962 (59 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E927(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E927: ;
    PUSH32(esp, 0x0060E92Cu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060E92C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0060E938u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060E938: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060E950; /* je: equal / zero */

loc_0060E93F: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0060E94Eu); RECOMP_ABI_CALL(0x0060E769u, sub_0060E769); /* call 0x0060E769 */

loc_0060E94E: ;
    goto loc_0060E952;

loc_0060E950: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060E952: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060E958u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060E958: ;
    ecx = eax;
    PUSH32(esp, 0x0060E95Fu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060E95F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060E962
 * Original: 0x0060E962 - 0x0060E97E (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E962(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E962: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060E96Au); RECOMP_ABI_CALL(0x0060E7D0u, sub_0060E7D0); /* call 0x0060E7D0 */

loc_0060E96A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060E978; /* je: equal / zero */

loc_0060E971: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060E977u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060E977: ;
    POP32(esp, ecx);

loc_0060E978: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060E97E
 * Original: 0x0060E97E - 0x0060E9FA (124 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E97E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E97E: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060E9BB; /* jne: not equal / not zero */

loc_0060E988: ;
    MEM32(esi + 0x5C) = 1;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060E99Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E998u); } /* indirect call */
    }

loc_0060E99B: ;
    edi = MEM32(eax + 0x60);
    ecx = esi + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060E9AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060E9A7u); } /* indirect call */
    }

loc_0060E9AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0060E9B1u); RECOMP_ABI_CALL(0x00614D10u, sub_00614D10); /* call 0x00614D10 */

loc_0060E9B1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0060E9CE; /* je: equal / zero */

loc_0060E9B9: ;
    goto loc_0060E9C0;

loc_0060E9BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060E9CE; /* jne: not equal / not zero */

loc_0060E9C0: ;
    ecx = esi;
    MEM32(esi + 0x5C) = 2;
    PUSH32(esp, 0x0060E9CEu); RECOMP_ABI_CALL(0x0060E897u, sub_0060E897); /* call 0x0060E897 */

loc_0060E9CE: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060E9DB; /* je: equal / zero */

loc_0060E9D6: ;
    ecx = MEM32(esi + 0x34);
    MEM32(eax) = ecx;

loc_0060E9DB: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060E9F3; /* je: equal / zero */

loc_0060E9E3: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060E9EE; /* jne: not equal / not zero */

loc_0060E9E9: ;
    eax = MEM32(esi + 0x40);
    goto loc_0060E9F1;

loc_0060E9EE: ;
    eax = MEM32(esi + 0x34);

loc_0060E9F1: ;
    MEM32(ecx) = eax;

loc_0060E9F3: ;
    eax = MEM32(esi + 0x1C);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060E9FA
 * Original: 0x0060E9FA - 0x0060EA1C (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060E9FA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060E9FA: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8816F0;
    PUSH32(esp, 0x0060EA08u); RECOMP_ABI_CALL(0x0060F35Du, sub_0060F35D); /* call 0x0060F35D */

loc_0060EA08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060EA16; /* je: equal / zero */

loc_0060EA0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060EA15u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060EA15: ;
    POP32(esp, ecx);

loc_0060EA16: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060EA1C
 * Original: 0x0060EA1C - 0x0060EA30 (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EA1C(void)
{

loc_0060EA1C: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0060EA2Du); RECOMP_ABI_CALL(0x0060E97Eu, sub_0060E97E); /* call 0x0060E97E */

loc_0060EA2D: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060EA30
 * Original: 0x0060EA30 - 0x0060EABF (143 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060EA30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0060EA3Au); RECOMP_ABI_CALL(0x0060F30Cu, sub_0060F30C); /* call 0x0060F30C */

loc_0060EA3A: ;
    MEM32(esi) = 0x88170C;
    edi = esi + 8;
    PUSH32(esp, 0x0060EA48u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060EA48: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = edi;
    PUSH32(esp, 0x0060EA54u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060EA54: ;
    eax = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    MEM32(esi + 0x1C) = 2;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = ebx;
    PUSH32(esp, 0x0060EA7Au); RECOMP_ABI_CALL(0x006001C0u, sub_006001C0); /* call 0x006001C0 */

loc_0060EA7A: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    POP32(esp, ecx);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x20) = eax;
    MEM8(esi + 0x34) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0060EAB7; /* je: equal / zero */

loc_0060EA8C: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060EA94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060EA91u); } /* indirect call */
    }

loc_0060EA94: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x0060EA9Du); RECOMP_ABI_CALL(0x006002D0u, sub_006002D0); /* call 0x006002D0 */

loc_0060EA9D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0060EAB7; /* jge: greater or equal (signed >=) */

loc_0060EAA4: ;
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x0060EAACu); RECOMP_ABI_CALL(0x00600290u, sub_00600290); /* call 0x00600290 */

loc_0060EAAC: ;
    POP32(esp, ecx);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x1C) = 4;

loc_0060EAB7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060EABF
 * Original: 0x0060EABF - 0x0060EAC7 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EABF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060EABF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_0060EAC7
 * Original: 0x0060EAC7 - 0x0060EB09 (66 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EAC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060EAC7: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x88170C;
    if (CMP_EQ(_fa, _fb)) goto loc_0060EADE; /* je: equal / zero */

loc_0060EAD7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060EADDu); RECOMP_ABI_CALL(0x00600290u, sub_00600290); /* call 0x00600290 */

loc_0060EADD: ;
    POP32(esp, ecx);

loc_0060EADE: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060EAF9; /* je: equal / zero */

loc_0060EAE4: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060EAF9; /* jne: not equal / not zero */

loc_0060EAEA: ;
    PUSH32(esp, 0x0060EAEFu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060EAEF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x28));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060EAF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060EAF6u); } /* indirect call */
    }

loc_0060EAF9: ;
    ecx = esi + 8;
    PUSH32(esp, 0x0060EB01u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060EB01: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060F31E(); return; /* tail jmp 0x0060F31E */

}

/**
 * sub_0060EB09
 * Original: 0x0060EB09 - 0x0060EC72 (361 bytes, 142 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EB09(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060EB09: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0060EBEE; /* jne: not equal / not zero */

loc_0060EB1F: ;
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x0060EB27u); RECOMP_ABI_CALL(0x006006A0u, sub_006006A0); /* call 0x006006A0 */

loc_0060EB27: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0060EB5F; /* jne: not equal / not zero */

loc_0060EB2D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x626F6479);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x0060EB3Cu); RECOMP_ABI_CALL(0x006004B0u, sub_006004B0); /* call 0x006004B0 */

loc_0060EB3C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0060EB5F; /* jle: less or equal (signed <=) */

loc_0060EB43: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), LO8(ebx) (8-bit) */
    MEM32(esi + 0x24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0060EB5F; /* jne: not equal / not zero */

loc_0060EB4B: ;
    PUSH32(esp, 0x0060EB50u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060EB50: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x24));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0060EB5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060EB5Au); } /* indirect call */
    }

loc_0060EB5C: ;
    MEM32(esi + 0x28) = eax;

loc_0060EB5F: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, 3);
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0060EBB1; /* je: equal / zero */

loc_0060EB69: ;
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0060EBAE; /* je: equal / zero */

loc_0060EB70: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x0060EB80u); RECOMP_ABI_CALL(0x006009E0u, sub_006009E0); /* call 0x006009E0 */

loc_0060EB80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0060EBA9; /* jge: greater or equal (signed >=) */

loc_0060EB87: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), LO8(ebx) (8-bit) */
    MEM32(esi + 0x1C) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0060EB9E; /* jne: not equal / not zero */

loc_0060EB8F: ;
    PUSH32(esp, 0x0060EB94u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060EB94: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x28));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060EB9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060EB9Bu); } /* indirect call */
    }

loc_0060EB9E: ;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x30) = ebx;
    goto loc_0060EBB1;

loc_0060EBA9: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0060EBB1;

loc_0060EBAE: ;
    MEM32(esi + 0x1C) = ebx;

loc_0060EBB1: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060EC27; /* jne: not equal / not zero */

loc_0060EBB6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x646F6E65);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x0060EBC5u); RECOMP_ABI_CALL(0x006004B0u, sub_006004B0); /* call 0x006004B0 */

loc_0060EBC5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0060EC27; /* jge: greater or equal (signed >=) */

loc_0060EBCC: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), LO8(ebx) (8-bit) */
    MEM32(esi + 0x1C) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0060EBE3; /* jne: not equal / not zero */

loc_0060EBD4: ;
    PUSH32(esp, 0x0060EBD9u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060EBD9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x28));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060EBE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060EBE0u); } /* indirect call */
    }

loc_0060EBE3: ;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x30) = ebx;
    goto loc_0060EC27;

loc_0060EBEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060EC27; /* jne: not equal / not zero */

loc_0060EBF3: ;
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x0060EBFBu); RECOMP_ABI_CALL(0x006006A0u, sub_006006A0); /* call 0x006006A0 */

loc_0060EBFB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x626F6479);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x0060EC0Au); RECOMP_ABI_CALL(0x006004B0u, sub_006004B0); /* call 0x006004B0 */

loc_0060EC0A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0060EC27; /* jle: less or equal (signed <=) */

loc_0060EC11: ;
    _fa = (uint32_t)(MEM8(esi + 0x34)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x34), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060EC24; /* je: equal / zero */

loc_0060EC16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0060EC24; /* jle: less or equal (signed <=) */

loc_0060EC1B: ;
    MEM32(esi + 0x1C) = 4;
    goto loc_0060EBE3;

loc_0060EC24: ;
    MEM32(esi + 0x1C) = ebp;

loc_0060EC27: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060EC44; /* je: equal / zero */

loc_0060EC2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060EC44; /* je: equal / zero */

loc_0060EC33: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060EC44; /* je: equal / zero */

loc_0060EC3A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060EC40u); RECOMP_ABI_CALL(0x00600290u, sub_00600290); /* call 0x00600290 */

loc_0060EC40: ;
    POP32(esp, ecx);
    MEM32(esi + 0x20) = ebx;

loc_0060EC44: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060EC51; /* je: equal / zero */

loc_0060EC4C: ;
    ecx = MEM32(esi + 0x24);
    MEM32(eax) = ecx;

loc_0060EC51: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060EC68; /* je: equal / zero */

loc_0060EC59: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060EC63; /* jne: not equal / not zero */

loc_0060EC5E: ;
    eax = MEM32(esi + 0x30);
    goto loc_0060EC66;

loc_0060EC63: ;
    eax = MEM32(esi + 0x24);

loc_0060EC66: ;
    MEM32(ecx) = eax;

loc_0060EC68: ;
    eax = MEM32(esi + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060EC72
 * Original: 0x0060EC72 - 0x0060EC85 (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EC72(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060EC72: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060EC7F; /* je: equal / zero */

loc_0060EC7A: ;
    edx = MEM32(ecx + 0x24);
    MEM32(eax) = edx;

loc_0060EC7F: ;
    eax = MEM32(ecx + 0x28);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060EC85
 * Original: 0x0060EC85 - 0x0060EC97 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EC85(void)
{

loc_0060EC85: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060EC8Du); RECOMP_ABI_CALL(0x0060F34Bu, sub_0060F34B); /* call 0x0060F34B */

loc_0060EC8D: ;
    MEM32(esi) = 0x881718;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060EC97
 * Original: 0x0060EC97 - 0x0060EC9A (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EC97(void)
{

loc_0060EC97: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0060ECA5
 * Original: 0x0060ECA5 - 0x0060ECD7 (50 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060ECA5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060ECA5: ;
    PUSH32(esp, 0x881734);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0060ECB3u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_0060ECB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0060ECD1; /* je: equal / zero */

loc_0060ECB9: ;
    PUSH32(esp, 0x88172C);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0060ECC7u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_0060ECC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0060ECD1; /* je: equal / zero */

loc_0060ECCD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0060ECD4;

loc_0060ECD1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0060ECD4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060ECD7
 * Original: 0x0060ECD7 - 0x0060ED16 (63 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060ECD7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060ECD7: ;
    PUSH32(esp, 0x0060ECDCu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060ECDC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x0060ECE8u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060ECE8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060ED04; /* je: equal / zero */

loc_0060ECEF: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0060ED02u); RECOMP_ABI_CALL(0x0060EA30u, sub_0060EA30); /* call 0x0060EA30 */

loc_0060ED02: ;
    goto loc_0060ED06;

loc_0060ED04: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060ED06: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060ED0Cu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060ED0C: ;
    ecx = eax;
    PUSH32(esp, 0x0060ED13u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060ED13: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060ED16
 * Original: 0x0060ED16 - 0x0060ED2A (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060ED16(void)
{

loc_0060ED16: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0060ED27u); RECOMP_ABI_CALL(0x0060EB09u, sub_0060EB09); /* call 0x0060EB09 */

loc_0060ED27: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060ED2A
 * Original: 0x0060ED2A - 0x0060ED46 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060ED2A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060ED2A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060ED32u); RECOMP_ABI_CALL(0x0060EAC7u, sub_0060EAC7); /* call 0x0060EAC7 */

loc_0060ED32: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060ED40; /* je: equal / zero */

loc_0060ED39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060ED3Fu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060ED3F: ;
    POP32(esp, ecx);

loc_0060ED40: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060ED46
 * Original: 0x0060ED46 - 0x0060ED68 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060ED46(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060ED46: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881718;
    PUSH32(esp, 0x0060ED54u); RECOMP_ABI_CALL(0x0060F35Du, sub_0060F35D); /* call 0x0060F35D */

loc_0060ED54: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060ED62; /* je: equal / zero */

loc_0060ED5B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060ED61u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060ED61: ;
    POP32(esp, ecx);

loc_0060ED62: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060ED68
 * Original: 0x0060ED68 - 0x0060ED7A (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060ED68(void)
{

loc_0060ED68: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060ED70u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060ED70: ;
    MEM32(esi) = 0x88173C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060ED7A
 * Original: 0x0060ED7A - 0x0060ED85 (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060ED7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060ED7A: ;
    MEM32(ecx) = 0x88173C;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060ED85
 * Original: 0x0060ED85 - 0x0060EDA7 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060ED85(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060ED85: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x88173C;
    PUSH32(esp, 0x0060ED93u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060ED93: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060EDA1; /* je: equal / zero */

loc_0060ED9A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060EDA0u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060EDA0: ;
    POP32(esp, ecx);

loc_0060EDA1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060EDA7
 * Original: 0x0060EDA7 - 0x0060EDB9 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EDA7(void)
{

loc_0060EDA7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060EDAFu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060EDAF: ;
    MEM32(esi) = 0x881758;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060EDB9
 * Original: 0x0060EDB9 - 0x0060EDC4 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EDB9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060EDB9: ;
    MEM32(ecx) = 0x881758;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060EDC4
 * Original: 0x0060EDC4 - 0x0060EDE6 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EDC4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060EDC4: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881758;
    PUSH32(esp, 0x0060EDD2u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060EDD2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060EDE0; /* je: equal / zero */

loc_0060EDD9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060EDDFu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060EDDF: ;
    POP32(esp, ecx);

loc_0060EDE0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060EDE6
 * Original: 0x0060EDE6 - 0x0060EDF8 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EDE6(void)
{

loc_0060EDE6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060EDEEu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060EDEE: ;
    MEM32(esi) = 0x8817EC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060EE03
 * Original: 0x0060EE03 - 0x0060EE8F (140 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EE03(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060EE03: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x8E4DCC));
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0060EE17u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_0060EE17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0060EE41; /* jne: not equal / not zero */

loc_0060EE1D: ;
    PUSH32(esp, 0x0060EE22u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060EE22: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x0060EE2Cu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060EE2C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060EE77; /* je: equal / zero */

loc_0060EE33: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, 0x0060EE3Fu); RECOMP_ABI_CALL(0x0060F64Eu, sub_0060F64E); /* call 0x0060F64E */

loc_0060EE3F: ;
    goto loc_0060EE79;

loc_0060EE41: ;
    PUSH32(esp, MEM32(0x8E4DD4));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0060EE4Du); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_0060EE4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0060EE88; /* jne: not equal / not zero */

loc_0060EE53: ;
    PUSH32(esp, 0x0060EE58u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060EE58: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0060EE62u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060EE62: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060EE77; /* je: equal / zero */

loc_0060EE69: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, 0x0060EE75u); RECOMP_ABI_CALL(0x0060F430u, sub_0060F430); /* call 0x0060F430 */

loc_0060EE75: ;
    goto loc_0060EE79;

loc_0060EE77: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060EE79: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060EE7Fu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060EE7F: ;
    ecx = eax;
    PUSH32(esp, 0x0060EE86u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060EE86: ;
    esi = eax;

loc_0060EE88: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060EE8F
 * Original: 0x0060EE8F - 0x0060EEB1 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EE8F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060EE8F: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8817EC;
    PUSH32(esp, 0x0060EE9Du); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060EE9D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060EEAB; /* je: equal / zero */

loc_0060EEA4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060EEAAu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060EEAA: ;
    POP32(esp, ecx);

loc_0060EEAB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060EEB1
 * Original: 0x0060EEB1 - 0x0060EEC3 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EEB1(void)
{

loc_0060EEB1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060EEB9u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060EEB9: ;
    MEM32(esi) = 0x8817F0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060EEC3
 * Original: 0x0060EEC3 - 0x0060EECE (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EEC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060EEC3: ;
    MEM32(ecx) = 0x8817F0;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060EECE
 * Original: 0x0060EECE - 0x0060EEF0 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EECE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060EECE: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8817F0;
    PUSH32(esp, 0x0060EEDCu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060EEDC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060EEEA; /* je: equal / zero */

loc_0060EEE3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060EEE9u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060EEE9: ;
    POP32(esp, ecx);

loc_0060EEEA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060EEF0
 * Original: 0x0060EEF0 - 0x0060EF02 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EEF0(void)
{

loc_0060EEF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060EEF8u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060EEF8: ;
    MEM32(esi) = 0x881800;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060EF02
 * Original: 0x0060EF02 - 0x0060EF0D (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EF02(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060EF02: ;
    MEM32(ecx) = 0x881800;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060EF0D
 * Original: 0x0060EF0D - 0x0060EF2F (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EF0D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060EF0D: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881800;
    PUSH32(esp, 0x0060EF1Bu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060EF1B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060EF29; /* je: equal / zero */

loc_0060EF22: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060EF28u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060EF28: ;
    POP32(esp, ecx);

loc_0060EF29: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060EF2F
 * Original: 0x0060EF2F - 0x0060EF41 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EF2F(void)
{

loc_0060EF2F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060EF37u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060EF37: ;
    MEM32(esi) = 0x881814;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060EF41
 * Original: 0x0060EF41 - 0x0060EF4C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EF41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060EF41: ;
    MEM32(ecx) = 0x881814;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060EF4C
 * Original: 0x0060EF4C - 0x0060EF6E (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EF4C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060EF4C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881814;
    PUSH32(esp, 0x0060EF5Au); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060EF5A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060EF68; /* je: equal / zero */

loc_0060EF61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060EF67u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060EF67: ;
    POP32(esp, ecx);

loc_0060EF68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060EF6E
 * Original: 0x0060EF6E - 0x0060EFF5 (135 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060EF6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060EF6E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060EF7Cu); RECOMP_ABI_CALL(0x0060F7B4u, sub_0060F7B4); /* call 0x0060F7B4 */

loc_0060EF7C: ;
    MEM32(esi) = 0x881830;
    ebx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060EF8Au); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060EF8A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060EF97u); RECOMP_ABI_CALL(0x004DD979u, sub_004DD979); /* call 0x004DD979 */

loc_0060EF97: ;
    edi = esi + 0x1C;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060EFA2u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060EFA2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060EFAEu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060EFAE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0060EFCB; /* je: equal / zero */

loc_0060EFB8: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060EFC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060EFBDu); } /* indirect call */
    }

loc_0060EFC0: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060EFC9u); RECOMP_ABI_CALL(0x004B6359u, sub_004B6359); /* call 0x004B6359 */

loc_0060EFC9: ;
    goto loc_0060EFCD;

loc_0060EFCB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060EFCD: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060EFD3u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060EFD3: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060EFDAu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060EFDA: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060EFE2u); RECOMP_ABI_CALL(0x004E032Fu, sub_004E032F); /* call 0x004E032F */

loc_0060EFE2: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060EFECu); RECOMP_ABI_CALL(0x004DDA93u, sub_004DDA93); /* call 0x004DDA93 */

loc_0060EFEC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060EFF5
 * Original: 0x0060EFF5 - 0x0060EFFD (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EFF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060EFF5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_0060EFFD
 * Original: 0x0060EFFD - 0x0060F001 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060EFFD(void)
{

loc_0060EFFD: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F001
 * Original: 0x0060F001 - 0x0060F01D (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F001(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F001: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F009u); RECOMP_ABI_CALL(0x0060F01Du, sub_0060F01D); /* call 0x0060F01D */

loc_0060F009: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F017; /* je: equal / zero */

loc_0060F010: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F016u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F016: ;
    POP32(esp, ecx);

loc_0060F017: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F01D
 * Original: 0x0060F01D - 0x0060F042 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F01D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F01D: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881830;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060F032; /* je: equal / zero */

loc_0060F02D: ;
    PUSH32(esp, 0x0060F032u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060F032: ;
    ecx = esi + 8;
    PUSH32(esp, 0x0060F03Au); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060F03A: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060F7C6(); return; /* tail jmp 0x0060F7C6 */

}

/**
 * sub_0060F042
 * Original: 0x0060F042 - 0x0060F054 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F042(void)
{

loc_0060F042: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F04Au); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060F04A: ;
    MEM32(esi) = 0x88183C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F054
 * Original: 0x0060F054 - 0x0060F05F (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F054(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F054: ;
    MEM32(ecx) = 0x88183C;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060F05F
 * Original: 0x0060F05F - 0x0060F081 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F05F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F05F: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x88183C;
    PUSH32(esp, 0x0060F06Du); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060F06D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F07B; /* je: equal / zero */

loc_0060F074: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F07Au); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F07A: ;
    POP32(esp, ecx);

loc_0060F07B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F081
 * Original: 0x0060F081 - 0x0060F093 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F081(void)
{

loc_0060F081: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F089u); RECOMP_ABI_CALL(0x004E131Bu, sub_004E131B); /* call 0x004E131B */

loc_0060F089: ;
    MEM32(esi) = 0x881850;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F093
 * Original: 0x0060F093 - 0x0060F09E (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F093(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F093: ;
    MEM32(ecx) = 0x881850;
    g_seh_ebp = ebp; sub_004E132D(); return; /* tail jmp 0x004E132D */

}

/**
 * sub_0060F09E
 * Original: 0x0060F09E - 0x0060F0C0 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F09E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F09E: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881850;
    PUSH32(esp, 0x0060F0ACu); RECOMP_ABI_CALL(0x004E132Du, sub_004E132D); /* call 0x004E132D */

loc_0060F0AC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F0BA; /* je: equal / zero */

loc_0060F0B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F0B9u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F0B9: ;
    POP32(esp, ecx);

loc_0060F0BA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F0C0
 * Original: 0x0060F0C0 - 0x0060F0DC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F0C0(void)
{

loc_0060F0C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F0C8u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060F0C8: ;
    PUSH32(esp, 1);
    ecx = esi + 8;
    PUSH32(esp, 0x0060F0D2u); RECOMP_ABI_CALL(0x004DDC14u, sub_004DDC14); /* call 0x004DDC14 */

loc_0060F0D2: ;
    MEM32(esi) = 0x88189C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F0DC
 * Original: 0x0060F0DC - 0x0060F0F5 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F0DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F0DC: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x88189C;
    PUSH32(esp, 0x0060F0EDu); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_0060F0ED: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060F0F5
 * Original: 0x0060F0F5 - 0x0060F111 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F0F5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F0F5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F0FDu); RECOMP_ABI_CALL(0x0060F0DCu, sub_0060F0DC); /* call 0x0060F0DC */

loc_0060F0FD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F10B; /* je: equal / zero */

loc_0060F104: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F10Au); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F10A: ;
    POP32(esp, ecx);

loc_0060F10B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F111
 * Original: 0x0060F111 - 0x0060F123 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F111(void)
{

loc_0060F111: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F119u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060F119: ;
    MEM32(esi) = 0x8818C8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F123
 * Original: 0x0060F123 - 0x0060F12E (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F123(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F123: ;
    MEM32(ecx) = 0x8818C8;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060F12E
 * Original: 0x0060F12E - 0x0060F150 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F12E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F12E: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8818C8;
    PUSH32(esp, 0x0060F13Cu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060F13C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F14A; /* je: equal / zero */

loc_0060F143: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F149u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F149: ;
    POP32(esp, ecx);

loc_0060F14A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F150
 * Original: 0x0060F150 - 0x0060F162 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F150(void)
{

loc_0060F150: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F158u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060F158: ;
    MEM32(esi) = 0x881908;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F162
 * Original: 0x0060F162 - 0x0060F16D (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F162(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F162: ;
    MEM32(ecx) = 0x881908;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060F16D
 * Original: 0x0060F16D - 0x0060F18F (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F16D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F16D: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881908;
    PUSH32(esp, 0x0060F17Bu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060F17B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F189; /* je: equal / zero */

loc_0060F182: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F188u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F188: ;
    POP32(esp, ecx);

loc_0060F189: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F18F
 * Original: 0x0060F18F - 0x0060F1A1 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F18F(void)
{

loc_0060F18F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F197u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060F197: ;
    MEM32(esi) = 0x881918;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F1A1
 * Original: 0x0060F1A1 - 0x0060F1AC (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F1A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F1A1: ;
    MEM32(ecx) = 0x881918;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060F1AC
 * Original: 0x0060F1AC - 0x0060F1CE (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F1AC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F1AC: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881918;
    PUSH32(esp, 0x0060F1BAu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060F1BA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F1C8; /* je: equal / zero */

loc_0060F1C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F1C7u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F1C7: ;
    POP32(esp, ecx);

loc_0060F1C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F1CE
 * Original: 0x0060F1CE - 0x0060F2A7 (217 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060F1CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F1CE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F1DCu); RECOMP_ABI_CALL(0x0060F93Fu, sub_0060F93F); /* call 0x0060F93F */

loc_0060F1DC: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 8) = eax;
    MEM32(esi) = 0x881944;
    edi = esi + 0xC;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = ebx;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060F205u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F202u); } /* indirect call */
    }

loc_0060F205: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F20Bu); RECOMP_ABI_CALL(0x00612F70u, sub_00612F70); /* call 0x00612F70 */

loc_0060F20B: ;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F213u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060F213: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F21Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060F21D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060F231; /* je: equal / zero */

loc_0060F224: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F22Fu); RECOMP_ABI_CALL(0x004DFA89u, sub_004DFA89); /* call 0x004DFA89 */

loc_0060F22F: ;
    goto loc_0060F233;

loc_0060F231: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060F233: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F239u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060F239: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F240u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060F240: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F248u); RECOMP_ABI_CALL(0x004DF1F1u, sub_004DF1F1); /* call 0x004DF1F1 */

loc_0060F248: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0060F29E; /* je: equal / zero */

loc_0060F250: ;
    goto loc_0060F254;

loc_0060F252: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060F254: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F259u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060F259: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F263u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060F263: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060F279; /* je: equal / zero */

loc_0060F26A: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax;
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F277u); RECOMP_ABI_CALL(0x0060F7F3u, sub_0060F7F3); /* call 0x0060F7F3 */

loc_0060F277: ;
    goto loc_0060F27B;

loc_0060F279: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060F27B: ;
    ebx = MEM32(edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F283u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060F283: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F28Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060F28A: ;
    PUSH32(esp, eax);
    ecx = ebx + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F293u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060F293: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060F252; /* jne: not equal / not zero */

loc_0060F29E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F2A7
 * Original: 0x0060F2A7 - 0x0060F2C3 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F2A7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F2A7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F2AFu); RECOMP_ABI_CALL(0x0060F2C3u, sub_0060F2C3); /* call 0x0060F2C3 */

loc_0060F2AF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F2BD; /* je: equal / zero */

loc_0060F2B6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F2BCu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F2BC: ;
    POP32(esp, ecx);

loc_0060F2BD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F2C3
 * Original: 0x0060F2C3 - 0x0060F2E0 (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F2C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F2C3: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881944;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060F2D8; /* je: equal / zero */

loc_0060F2D3: ;
    PUSH32(esp, 0x0060F2D8u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060F2D8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0060F951(); return; /* tail jmp 0x0060F951 */

}

/**
 * sub_0060F2E0
 * Original: 0x0060F2E0 - 0x0060F308 (40 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F2E0: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060F2F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F2F3u); } /* indirect call */
    }

loc_0060F2F6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060F303u); RECOMP_ABI_CALL(0x00612F20u, sub_00612F20); /* call 0x00612F20 */

loc_0060F303: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F308
 * Original: 0x0060F308 - 0x0060F30C (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F308(void)
{

loc_0060F308: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F30C
 * Original: 0x0060F30C - 0x0060F31E (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F30C(void)
{

loc_0060F30C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F314u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060F314: ;
    MEM32(esi) = 0x881950;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F31E
 * Original: 0x0060F31E - 0x0060F329 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F31E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F31E: ;
    MEM32(ecx) = 0x881950;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060F329
 * Original: 0x0060F329 - 0x0060F34B (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F329(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F329: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881950;
    PUSH32(esp, 0x0060F337u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060F337: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F345; /* je: equal / zero */

loc_0060F33E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F344u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F344: ;
    POP32(esp, ecx);

loc_0060F345: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F34B
 * Original: 0x0060F34B - 0x0060F35D (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F34B(void)
{

loc_0060F34B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F353u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060F353: ;
    MEM32(esi) = 0x88195C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F35D
 * Original: 0x0060F35D - 0x0060F368 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F35D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F35D: ;
    MEM32(ecx) = 0x88195C;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060F368
 * Original: 0x0060F368 - 0x0060F38A (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F368(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F368: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x88195C;
    PUSH32(esp, 0x0060F376u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060F376: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F384; /* je: equal / zero */

loc_0060F37D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F383u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F383: ;
    POP32(esp, ecx);

loc_0060F384: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F38A
 * Original: 0x0060F38A - 0x0060F3FF (117 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060F38A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F38A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F39Du); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060F39D: ;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F3A9u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060F3A9: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060F3C4; /* je: equal / zero */

loc_0060F3B2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F3B7u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060F3B7: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F3C2u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060F3C2: ;
    ebx = eax;

loc_0060F3C4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F3C9u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0060F3C9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0060F3D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F3CDu); } /* indirect call */
    }

loc_0060F3D0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0060F3D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F3D4u); } /* indirect call */
    }

loc_0060F3D7: ;
    edi = eax;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    MEM32(ebp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F3E8u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060F3E8: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F3EFu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060F3EF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0060F3F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F3F5u); } /* indirect call */
    }

loc_0060F3F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060F3FF
 * Original: 0x0060F3FF - 0x0060F402 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F3FF(void)
{

loc_0060F3FF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F402
 * Original: 0x0060F402 - 0x0060F415 (19 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F402(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F402: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + -48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060F40Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F40Cu); } /* indirect call */
    }

loc_0060F40F: ;
    MEM32(esi + -48) = MEM32(esi + -48) & 0;
    _fa = (uint32_t)(MEM32(esi + -48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F415
 * Original: 0x0060F415 - 0x0060F425 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F415(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F415: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + -48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060F41Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F41Du); } /* indirect call */
    }

loc_0060F41F: ;
    MEM32(esi + -48) = MEM32(esi + -48) & 0;
    _fa = (uint32_t)(MEM32(esi + -48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F425
 * Original: 0x0060F425 - 0x0060F430 (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F425(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F425: ;
    _fb = (uint32_t)(0xFFFFFFA4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFA4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0060F42Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F42Au); } /* indirect call */
    }

loc_0060F42D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F430
 * Original: 0x0060F430 - 0x0060F4B2 (130 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060F430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F443u); RECOMP_ABI_CALL(0x0060F97Eu, sub_0060F97E); /* call 0x0060F97E */

loc_0060F443: ;
    edi = esi + 0x54;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F44Du); RECOMP_ABI_CALL(0x00608352u, sub_00608352); /* call 0x00608352 */

loc_0060F44D: ;
    ecx = esi + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F455u); RECOMP_ABI_CALL(0x0060FA46u, sub_0060FA46); /* call 0x0060FA46 */

loc_0060F455: ;
    ebx = esi + 0x5C;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F45Fu); RECOMP_ABI_CALL(0x004E36E1u, sub_004E36E1); /* call 0x004E36E1 */

loc_0060F45F: ;
    MEM32(esi) = 0x8819C4;
    MEM32(edi) = 0x88199C;
    MEM32(esi + 0x58) = 0x881990;
    MEM32(ebx) = 0x881970;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F47Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0060F47D: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + 0xC) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0060F487u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F484u); } /* indirect call */
    }

loc_0060F487: ;
    ecx = ebp + 0xC;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F495u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_0060F495: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F49Au); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0060F49A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0060F4A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F49Eu); } /* indirect call */
    }

loc_0060F4A1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0060F4A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F4A6u); } /* indirect call */
    }

loc_0060F4A9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060F4B2
 * Original: 0x0060F4B2 - 0x0060F4BA (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F4B2: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_0060F4BA
 * Original: 0x0060F4BA - 0x0060F4C2 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F4BA: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_0060F4C2
 * Original: 0x0060F4C2 - 0x0060F4C5 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4C2(void)
{

loc_0060F4C2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F4C5
 * Original: 0x0060F4C5 - 0x0060F4C8 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4C5(void)
{

loc_0060F4C5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F4C8
 * Original: 0x0060F4C8 - 0x0060F4CB (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4C8(void)
{

loc_0060F4C8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F4CB
 * Original: 0x0060F4CB - 0x0060F4CE (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4CB(void)
{

loc_0060F4CB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F4CE
 * Original: 0x0060F4CE - 0x0060F4D1 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4CE(void)
{

loc_0060F4CE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060F4D1
 * Original: 0x0060F4D1 - 0x0060F4D4 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4D1(void)
{

loc_0060F4D1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060F4D4
 * Original: 0x0060F4D4 - 0x0060F4D7 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4D4(void)
{

loc_0060F4D4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F4D7
 * Original: 0x0060F4D7 - 0x0060F4DA (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4D7(void)
{

loc_0060F4D7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060F4DA
 * Original: 0x0060F4DA - 0x0060F4DD (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4DA(void)
{

loc_0060F4DA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F4DD
 * Original: 0x0060F4DD - 0x0060F4E0 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4DD(void)
{

loc_0060F4DD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F4E0
 * Original: 0x0060F4E0 - 0x0060F4E3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4E0(void)
{

loc_0060F4E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F4E3
 * Original: 0x0060F4E3 - 0x0060F4E6 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4E3(void)
{

loc_0060F4E3: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060F4E6
 * Original: 0x0060F4E6 - 0x0060F4E9 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4E6(void)
{

loc_0060F4E6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F4E9
 * Original: 0x0060F4E9 - 0x0060F4EC (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4E9(void)
{

loc_0060F4E9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060F4EC
 * Original: 0x0060F4EC - 0x0060F4F4 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F4EC: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060F5D9(); return; /* tail jmp 0x0060F5D9 */

}

/**
 * sub_0060F4F4
 * Original: 0x0060F4F4 - 0x0060F4FC (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F4F4: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060F5D9(); return; /* tail jmp 0x0060F5D9 */

}

/**
 * sub_0060F4FC
 * Original: 0x0060F4FC - 0x0060F504 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F4FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F4FC: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060F5D9(); return; /* tail jmp 0x0060F5D9 */

}

/**
 * sub_0060F504
 * Original: 0x0060F504 - 0x0060F57F (123 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060F504(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F504: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x54;
    ebx = esi + 0x5C;
    MEM32(esi) = 0x8819C4;
    MEM32(edi) = 0x88199C;
    MEM32(esi + 0x58) = 0x881990;
    MEM32(ebx) = 0x881970;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F531u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0060F531: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0060F538u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F535u); } /* indirect call */
    }

loc_0060F538: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0060F540u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F53Du); } /* indirect call */
    }

loc_0060F540: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F545u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0060F545: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0060F54Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F54Cu); } /* indirect call */
    }

loc_0060F54F: ;
    ecx = ebp + -4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F55Du); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_0060F55D: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F564u); RECOMP_ABI_CALL(0x004E36EAu, sub_004E36EA); /* call 0x004E36EA */

loc_0060F564: ;
    ecx = esi + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F56Cu); RECOMP_ABI_CALL(0x0060FA4Fu, sub_0060FA4F); /* call 0x0060FA4F */

loc_0060F56C: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F573u); RECOMP_ABI_CALL(0x0060835Bu, sub_0060835B); /* call 0x0060835B */

loc_0060F573: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F57Au); RECOMP_ABI_CALL(0x0060F9BEu, sub_0060F9BE); /* call 0x0060F9BE */

loc_0060F57A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0060F57F
 * Original: 0x0060F57F - 0x0060F5D9 (90 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F57F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F57F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx + -76;
    eax = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0060F5D1; /* jbe: below or equal (unsigned <=) */

loc_0060F594: ;
    PUSH32(esp, ebp);
    ebp = ecx + -84;
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = ebp;
    goto loc_0060F5A3;

loc_0060F59F: ;
    ebp = MEM32(esp + 0x10);

loc_0060F5A3: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0060F5ABu); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_0060F5AB: ;
    esi = MEM32(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x24));
    edx = MEM32(ebp);
    ecx = ebp;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060F5BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F5BCu); } /* indirect call */
    }

loc_0060F5BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060F5C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F5C6u); } /* indirect call */
    }

loc_0060F5C8: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060F59F; /* jb: below (unsigned <) */

loc_0060F5CF: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0060F5D1: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060F5D9
 * Original: 0x0060F5D9 - 0x0060F5F5 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F5D9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F5D9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F5E1u); RECOMP_ABI_CALL(0x0060F504u, sub_0060F504); /* call 0x0060F504 */

loc_0060F5E1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F5EF; /* je: equal / zero */

loc_0060F5E8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F5EEu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F5EE: ;
    POP32(esp, ecx);

loc_0060F5EF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F5F5
 * Original: 0x0060F5F5 - 0x0060F5F8 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F5F5(void)
{

loc_0060F5F5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F5F8
 * Original: 0x0060F5F8 - 0x0060F628 (48 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F5F8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F5F8: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x0060F607u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0060F607: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0060F60Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F60Bu); } /* indirect call */
    }

loc_0060F60E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0060F615u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F612u); } /* indirect call */
    }

loc_0060F615: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0060F624u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F621u); } /* indirect call */
    }

loc_0060F624: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060F628
 * Original: 0x0060F628 - 0x0060F62B (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F628(void)
{

loc_0060F628: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F62B
 * Original: 0x0060F62B - 0x0060F63B (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F62B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F62B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + -48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060F635u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F633u); } /* indirect call */
    }

loc_0060F635: ;
    MEM32(esi + -48) = MEM32(esi + -48) & 0;
    _fa = (uint32_t)(MEM32(esi + -48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F63B
 * Original: 0x0060F63B - 0x0060F64E (19 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F63B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F63B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + -48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060F648u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F645u); } /* indirect call */
    }

loc_0060F648: ;
    MEM32(esi + -48) = MEM32(esi + -48) & 0;
    _fa = (uint32_t)(MEM32(esi + -48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F64E
 * Original: 0x0060F64E - 0x0060F6B3 (101 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060F64E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060F64E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F661u); RECOMP_ABI_CALL(0x0060F97Eu, sub_0060F97E); /* call 0x0060F97E */

loc_0060F661: ;
    edi = esi + 0x54;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F66Bu); RECOMP_ABI_CALL(0x00608451u, sub_00608451); /* call 0x00608451 */

loc_0060F66B: ;
    ebx = esi + 0x58;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F675u); RECOMP_ABI_CALL(0x0060FA73u, sub_0060FA73); /* call 0x0060FA73 */

loc_0060F675: ;
    MEM32(esi) = 0x8819F8;
    MEM32(edi) = 0x8819E8;
    MEM32(ebx) = 0x8819DC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F68Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0060F68C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0060F693u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F690u); } /* indirect call */
    }

loc_0060F693: ;
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F6AAu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_0060F6AA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060F6B3
 * Original: 0x0060F6B3 - 0x0060F6B4 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F6B3(void)
{

loc_0060F6B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0060F6B4
 * Original: 0x0060F6B4 - 0x0060F6BC (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F6B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F6B4: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x54;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060F798(); return; /* tail jmp 0x0060F798 */

}

/**
 * sub_0060F6BC
 * Original: 0x0060F6BC - 0x0060F6C4 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F6BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F6BC: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060F798(); return; /* tail jmp 0x0060F798 */

}

/**
 * sub_0060F6C4
 * Original: 0x0060F6C4 - 0x0060F722 (94 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060F6C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0060F6C4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x54;
    ebx = esi + 0x58;
    MEM32(esi) = 0x8819F8;
    MEM32(edi) = 0x8819E8;
    MEM32(ebx) = 0x8819DC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F6EAu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0060F6EA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0060F6F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F6EEu); } /* indirect call */
    }

loc_0060F6F1: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F708u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_0060F708: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F70Fu); RECOMP_ABI_CALL(0x0060FA7Cu, sub_0060FA7C); /* call 0x0060FA7C */

loc_0060F70F: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F716u); RECOMP_ABI_CALL(0x0060845Au, sub_0060845A); /* call 0x0060845A */

loc_0060F716: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F71Du); RECOMP_ABI_CALL(0x0060F9BEu, sub_0060F9BE); /* call 0x0060F9BE */

loc_0060F71D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0060F722
 * Original: 0x0060F722 - 0x0060F798 (118 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F722(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F722: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx + -76;
    eax = MEM32(edi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0060F790; /* jbe: below or equal (unsigned <=) */

loc_0060F737: ;
    PUSH32(esp, ebp);
    ebp = ecx + -84;
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = ebp;
    goto loc_0060F746;

loc_0060F742: ;
    ebp = MEM32(esp + 0x14);

loc_0060F746: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060F754; /* jne: not equal / not zero */

loc_0060F74E: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) & eax;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0060F762;

loc_0060F754: ;
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 4);
    eax = ecx + eax + 0xC;
    MEM32(esp + 0x10) = eax;

loc_0060F762: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0060F76Au); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_0060F76A: ;
    esi = MEM32(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    edx = MEM32(ebp);
    ecx = ebp;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060F77Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F77Bu); } /* indirect call */
    }

loc_0060F77E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060F787u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F785u); } /* indirect call */
    }

loc_0060F787: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060F742; /* jb: below (unsigned <) */

loc_0060F78E: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0060F790: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060F798
 * Original: 0x0060F798 - 0x0060F7B4 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F798(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F798: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F7A0u); RECOMP_ABI_CALL(0x0060F6C4u, sub_0060F6C4); /* call 0x0060F6C4 */

loc_0060F7A0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F7AE; /* je: equal / zero */

loc_0060F7A7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F7ADu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F7AD: ;
    POP32(esp, ecx);

loc_0060F7AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F7B4
 * Original: 0x0060F7B4 - 0x0060F7C6 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F7B4(void)
{

loc_0060F7B4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F7BCu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060F7BC: ;
    MEM32(esi) = 0x881A10;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F7C6
 * Original: 0x0060F7C6 - 0x0060F7D1 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F7C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F7C6: ;
    MEM32(ecx) = 0x881A10;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060F7D1
 * Original: 0x0060F7D1 - 0x0060F7F3 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F7D1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F7D1: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881A10;
    PUSH32(esp, 0x0060F7DFu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060F7DF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F7ED; /* je: equal / zero */

loc_0060F7E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F7ECu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F7EC: ;
    POP32(esp, ecx);

loc_0060F7ED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F7F3
 * Original: 0x0060F7F3 - 0x0060F8D7 (228 bytes, 87 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060F7F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F7F3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F800u); RECOMP_ABI_CALL(0x006100D3u, sub_006100D3); /* call 0x006100D3 */

loc_0060F800: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0xC) = eax;
    MEM32(esi) = 0x881A20;
    edi = esi + 0x10;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = ebx;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, MEM32(esi + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060F832u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F82Fu); } /* indirect call */
    }

loc_0060F832: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F838u); RECOMP_ABI_CALL(0x00613010u, sub_00613010); /* call 0x00613010 */

loc_0060F838: ;
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F840u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060F840: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F84Au); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060F84A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060F85E; /* je: equal / zero */

loc_0060F851: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F85Cu); RECOMP_ABI_CALL(0x004DF9EFu, sub_004DF9EF); /* call 0x004DF9EF */

loc_0060F85C: ;
    goto loc_0060F860;

loc_0060F85E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060F860: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F866u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060F866: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F86Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060F86D: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F875u); RECOMP_ABI_CALL(0x004E0A10u, sub_004E0A10); /* call 0x004E0A10 */

loc_0060F875: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0060F8CE; /* je: equal / zero */

loc_0060F87D: ;
    goto loc_0060F881;

loc_0060F87F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060F881: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F886u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060F886: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F890u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060F890: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060F8A9; /* je: equal / zero */

loc_0060F897: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax;
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F8A7u); RECOMP_ABI_CALL(0x0060FDC3u, sub_0060FDC3); /* call 0x0060FDC3 */

loc_0060F8A7: ;
    goto loc_0060F8AB;

loc_0060F8A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060F8AB: ;
    ebx = MEM32(edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F8B3u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060F8B3: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F8BAu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060F8BA: ;
    PUSH32(esp, eax);
    ecx = ebx + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060F8C3u); RECOMP_ABI_CALL(0x004DB91Cu, sub_004DB91C); /* call 0x004DB91C */

loc_0060F8C3: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060F87F; /* jne: not equal / not zero */

loc_0060F8CE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060F8D7
 * Original: 0x0060F8D7 - 0x0060F8F3 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F8D7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F8D7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F8DFu); RECOMP_ABI_CALL(0x0060F8F3u, sub_0060F8F3); /* call 0x0060F8F3 */

loc_0060F8DF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F8ED; /* je: equal / zero */

loc_0060F8E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F8ECu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F8EC: ;
    POP32(esp, ecx);

loc_0060F8ED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F8F3
 * Original: 0x0060F8F3 - 0x0060F910 (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F8F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F8F3: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881A20;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060F908; /* je: equal / zero */

loc_0060F903: ;
    PUSH32(esp, 0x0060F908u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060F908: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_006100E5(); return; /* tail jmp 0x006100E5 */

}

/**
 * sub_0060F910
 * Original: 0x0060F910 - 0x0060F93B (43 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F910: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060F926u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060F923u); } /* indirect call */
    }

loc_0060F926: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060F936u); RECOMP_ABI_CALL(0x00612FA0u, sub_00612FA0); /* call 0x00612FA0 */

loc_0060F936: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F93B
 * Original: 0x0060F93B - 0x0060F93F (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F93B(void)
{

loc_0060F93B: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F93F
 * Original: 0x0060F93F - 0x0060F951 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F93F(void)
{

loc_0060F93F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F947u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060F947: ;
    MEM32(esi) = 0x881A2C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060F951
 * Original: 0x0060F951 - 0x0060F95C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F951(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F951: ;
    MEM32(ecx) = 0x881A2C;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060F95C
 * Original: 0x0060F95C - 0x0060F97E (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F95C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F95C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881A2C;
    PUSH32(esp, 0x0060F96Au); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_0060F96A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F978; /* je: equal / zero */

loc_0060F971: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F977u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F977: ;
    POP32(esp, ecx);

loc_0060F978: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F97E
 * Original: 0x0060F97E - 0x0060F9BE (64 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F97E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F97E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F986u); RECOMP_ABI_CALL(0x00610112u, sub_00610112); /* call 0x00610112 */

loc_0060F986: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x881A38;
    PUSH32(esp, 0x0060F999u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060F999: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 0x2C;
    PUSH32(esp, 0x0060F9A6u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060F9A6: ;
    PUSH32(esp, 0x0060F9ABu); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060F9AB: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi + 0x40;
    PUSH32(esp, 0x0060F9B8u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060F9B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060F9BE
 * Original: 0x0060F9BE - 0x0060F9DF (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F9BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F9BE: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x40;
    MEM32(esi) = 0x881A38;
    PUSH32(esp, 0x0060F9CFu); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060F9CF: ;
    ecx = esi + 0x2C;
    PUSH32(esp, 0x0060F9D7u); RECOMP_ABI_CALL(0x004DDA4Fu, sub_004DDA4F); /* call 0x004DDA4F */

loc_0060F9D7: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0061012E(); return; /* tail jmp 0x0061012E */

}

/**
 * sub_0060F9DF
 * Original: 0x0060F9DF - 0x0060F9FB (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F9DF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060F9DF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060F9E7u); RECOMP_ABI_CALL(0x0060F9BEu, sub_0060F9BE); /* call 0x0060F9BE */

loc_0060F9E7: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060F9F5; /* je: equal / zero */

loc_0060F9EE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060F9F4u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060F9F4: ;
    POP32(esp, ecx);

loc_0060F9F5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060F9FB
 * Original: 0x0060F9FB - 0x0060FA46 (75 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060F9FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060F9FB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(esp) = MEM32(esp) & 0;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 8;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0060FA41; /* jbe: below or equal (unsigned <=) */

loc_0060FA13: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);

loc_0060FA15: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = ebx;
    PUSH32(esp, 0x0060FA20u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_0060FA20: ;
    edi = MEM32(eax);
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060FA2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FA28u); } /* indirect call */
    }

loc_0060FA2B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x0060FA31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FA2Eu); } /* indirect call */
    }

loc_0060FA31: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0060FA15; /* jb: below (unsigned <) */

loc_0060FA3F: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0060FA41: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0060FA46
 * Original: 0x0060FA46 - 0x0060FA4F (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FA46(void)
{

loc_0060FA46: ;
    eax = ecx;
    MEM32(eax) = 0x881A50;
    esp += 4; return; /* ret */

}

/**
 * sub_0060FA4F
 * Original: 0x0060FA4F - 0x0060FA56 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FA4F(void)
{

loc_0060FA4F: ;
    MEM32(ecx) = 0x881A50;
    esp += 4; return; /* ret */

}

/**
 * sub_0060FA56
 * Original: 0x0060FA56 - 0x0060FA73 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FA56(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FA56: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881A50;
    if (TEST_Z(_fa, _fb)) goto loc_0060FA6D; /* je: equal / zero */

loc_0060FA66: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060FA6Cu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060FA6C: ;
    POP32(esp, ecx);

loc_0060FA6D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060FA73
 * Original: 0x0060FA73 - 0x0060FA7C (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FA73(void)
{

loc_0060FA73: ;
    eax = ecx;
    MEM32(eax) = 0x881A5C;
    esp += 4; return; /* ret */

}

/**
 * sub_0060FA7C
 * Original: 0x0060FA7C - 0x0060FA83 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FA7C(void)
{

loc_0060FA7C: ;
    MEM32(ecx) = 0x881A5C;
    esp += 4; return; /* ret */

}

/**
 * sub_0060FA83
 * Original: 0x0060FA83 - 0x0060FAA0 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FA83(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FA83: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881A5C;
    if (TEST_Z(_fa, _fb)) goto loc_0060FA9A; /* je: equal / zero */

loc_0060FA93: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060FA99u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0060FA99: ;
    POP32(esp, ecx);

loc_0060FA9A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060FAA0
 * Original: 0x0060FAA0 - 0x0060FAD1 (49 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FAA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060FABB; /* je: equal / zero */

loc_0060FAAC: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060FAB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FAB4u); } /* indirect call */
    }

loc_0060FAB7: ;
    MEM8(esi + 8) = 0;

loc_0060FABB: ;
    SET_LO8(ebx, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060FACA; /* jne: not equal / not zero */

loc_0060FAC2: ;
    ecx = esi + -8;
    PUSH32(esp, 0x0060FACAu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060FACA: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060FAD1
 * Original: 0x0060FAD1 - 0x0060FADC (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FAD1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FAD1: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0060FAD9u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060FAD9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060FADC
 * Original: 0x0060FADC - 0x0060FAF7 (27 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FADC(void)
{

loc_0060FADC: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060FAEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FAE8u); } /* indirect call */
    }

loc_0060FAEB: ;
    ecx = esi + -8;
    PUSH32(esp, 0x0060FAF3u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060FAF3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060FAF7
 * Original: 0x0060FAF7 - 0x0060FD7A (643 bytes, 228 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060FAF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FAF7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060FB21; /* je: equal / zero */

loc_0060FB13: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x28) = ebx;
    MEM8(eax + 0x10) = LO8(ebx);
    goto loc_0060FD6F;

loc_0060FB21: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x20), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0060FB7C; /* je: equal / zero */

loc_0060FB2B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FB30u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060FB30: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FB3Au); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060FB3A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060FB56; /* je: equal / zero */

loc_0060FB41: ;
    PUSH32(esp, MEM32(esi + 0x24));
    ecx = eax;
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, MEM32(esi + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FB54u); RECOMP_ABI_CALL(0x0061018Cu, sub_0061018C); /* call 0x0061018C */

loc_0060FB54: ;
    goto loc_0060FB58;

loc_0060FB56: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060FB58: ;
    ecx = MEM32(esi + 0xC);
    edi = MEM32(ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FB63u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060FB63: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FB6Au); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060FB6A: ;
    ecx = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edi); PUSH32(esp, 0x0060FB71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FB6Fu); } /* indirect call */
    }

loc_0060FB71: ;
    MEM8(esi + 0x20) = LO8(ebx);
    MEM8(esi + 0x10) = LO8(ebx);
    goto loc_0060FD6D;

loc_0060FB7C: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060FB8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FB8Cu); } /* indirect call */
    }

loc_0060FB8F: ;
    PUSH32(esp, eax);
    MEM32(ebp + -48) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FB98u); RECOMP_ABI_CALL(0x006136B0u, sub_006136B0); /* call 0x006136B0 */

loc_0060FB98: ;
    edi = eax;
    MEM32(ebp + 0x10) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FBA2u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_0060FBA2: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FBACu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060FBAC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060FBBF; /* je: equal / zero */

loc_0060FBB3: ;
    PUSH32(esp, ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FBBDu); RECOMP_ABI_CALL(0x004DF503u, sub_004DF503); /* call 0x004DF503 */

loc_0060FBBD: ;
    goto loc_0060FBC1;

loc_0060FBBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060FBC1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FBC7u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060FBC7: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FBCEu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060FBCE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    MEM32(ebp + -40) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0060FC39; /* jle: less or equal (signed <=) */

loc_0060FBD8: ;
    PUSH32(esp, 0x20);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FBE8u); RECOMP_ABI_CALL(0x006139C0u, sub_006139C0); /* call 0x006139C0 */

loc_0060FBE8: ;
    MEM32(ebp + -52) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FBF0u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060FBF0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FBFAu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0060FBFA: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -44) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0060FC17; /* je: equal / zero */

loc_0060FC04: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FC09u); RECOMP_ABI_CALL(0x004DC96Bu, sub_004DC96B); /* call 0x004DC96B */

loc_0060FC09: ;
    ecx = MEM32(ebp + -44);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -52));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FC15u); RECOMP_ABI_CALL(0x004DD9B8u, sub_004DD9B8); /* call 0x004DD9B8 */

loc_0060FC15: ;
    goto loc_0060FC19;

loc_0060FC17: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0060FC19: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FC1Fu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_0060FC1F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FC26u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0060FC26: ;
    ecx = MEM32(ebp + -40);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FC33u); RECOMP_ABI_CALL(0x004DB93Cu, sub_004DB93C); /* call 0x004DB93C */

loc_0060FC33: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0060FBD8; /* jl: less (signed <) */

loc_0060FC39: ;
    PUSH32(esp, MEM32(ebp + -40));
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FC44u); RECOMP_ABI_CALL(0x004E10BEu, sub_004E10BE); /* call 0x004E10BE */

loc_0060FC44: ;
    PUSH32(esp, 0x190);
    eax = ebp + -452;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FC58u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_0060FC58: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FC69u); RECOMP_ABI_CALL(0x00613100u, sub_00613100); /* call 0x00613100 */

loc_0060FC69: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x34);
    ecx = MEM32(ecx + 0x1C);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(ebp + 0xC) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0060FC84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FC81u); } /* indirect call */
    }

loc_0060FC84: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x62756464) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x62756464 (32-bit) */
    MEM32(ebp + -40) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0060FCF4; /* jne: not equal / not zero */

loc_0060FC90: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8640E0);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0060FCA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FCA5u); } /* indirect call */
    }

loc_0060FCA8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060FCB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FCADu); } /* indirect call */
    }

loc_0060FCB0: ;
    edi = MEM32(eax + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060FCC3; /* jne: not equal / not zero */

loc_0060FCB7: ;
    MEM32(esi + 0x28) = 5;
    goto loc_0060FD6D;

loc_0060FCC3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(ebp + 0x10) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0060FD43; /* jbe: below or equal (unsigned <=) */

loc_0060FCCA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -44) = eax;

loc_0060FCD0: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + -44);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FCDBu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060FCDB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0060FCE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FCDFu); } /* indirect call */
    }

loc_0060FCE2: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    MEM32(ebp + ecx * 4 + -452) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0060FCD0; /* jb: below (unsigned <) */

loc_0060FCF4: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x636C7562) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x636C7562 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0060FD43; /* jne: not equal / not zero */

loc_0060FCFD: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060FD64; /* je: equal / zero */

loc_0060FD02: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + -40); PUSH32(esp, 0x0060FD05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FD02u); } /* indirect call */
    }

loc_0060FD05: ;
    edi = MEM32(eax + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(ebp + -44) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0060FD64; /* je: equal / zero */

loc_0060FD0F: ;
    MEM32(ebp + 0x10) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0060FD43; /* jbe: below or equal (unsigned <=) */

loc_0060FD14: ;
    goto loc_0060FD19;

loc_0060FD16: ;
    eax = MEM32(ebp + -44);

loc_0060FD19: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x64 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0060FD43; /* jae: above or equal (unsigned >=) */

loc_0060FD1F: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FD2Au); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0060FD2A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0060FD31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FD2Eu); } /* indirect call */
    }

loc_0060FD31: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    MEM32(ebp + ecx * 4 + -452) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0060FD16; /* jb: below (unsigned <) */

loc_0060FD43: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x60FAF7);
    PUSH32(esp, edi);
    eax = ebp + -452;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FD5Du); RECOMP_ABI_CALL(0x00613320u, sub_00613320); /* call 0x00613320 */

loc_0060FD5D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060FD69; /* je: equal / zero */

loc_0060FD64: ;
    MEM32(esi + 0x28) = ebx;
    goto loc_0060FD6D;

loc_0060FD69: ;
    MEM8(esi + 0x20) = 1;

loc_0060FD6D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0060FD6F: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FD78u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_0060FD78: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0060FD7A
 * Original: 0x0060FD7A - 0x0060FD9E (36 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FD7A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FD7A: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    edx = esi + -8;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0060FD8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FD8Au); } /* indirect call */
    }

loc_0060FD8C: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x0060FD9Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_0060FD9A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060FD9E
 * Original: 0x0060FD9E - 0x0060FDC3 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FD9E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FD9E: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    edx = esi + -8;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0060FDB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FDAEu); } /* indirect call */
    }

loc_0060FDB1: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x0060FDBFu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_0060FDBF: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0060FDC3
 * Original: 0x0060FDC3 - 0x0060FE06 (67 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FDC3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FDC3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0060FDCCu); RECOMP_ABI_CALL(0x006104ABu, sub_006104AB); /* call 0x006104AB */

loc_0060FDCC: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x0060FDD6u); RECOMP_ABI_CALL(0x006083F7u, sub_006083F7); /* call 0x006083F7 */

loc_0060FDD6: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x14) = eax;
    MEM32(esi) = 0x881A78;
    MEM32(edi) = 0x881A6C;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0060FE06
 * Original: 0x0060FE06 - 0x0060FE0E (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FE06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060FE06: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0060FFF1(); return; /* tail jmp 0x0060FFF1 */

}

/**
 * sub_0060FE0E
 * Original: 0x0060FE0E - 0x0060FE3D (47 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FE0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060FE0E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x881A78;
    MEM32(edi) = 0x881A6C;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060FE2D; /* je: equal / zero */

loc_0060FE28: ;
    PUSH32(esp, 0x0060FE2Du); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060FE2D: ;
    ecx = edi;
    PUSH32(esp, 0x0060FE34u); RECOMP_ABI_CALL(0x00608400u, sub_00608400); /* call 0x00608400 */

loc_0060FE34: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_006104BD(); return; /* tail jmp 0x006104BD */

}

/**
 * sub_0060FE3D
 * Original: 0x0060FE3D - 0x0060FE6B (46 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FE3D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FE3D: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060FE53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FE50u); } /* indirect call */
    }

loc_0060FE53: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0060FE66u); RECOMP_ABI_CALL(0x00613060u, sub_00613060); /* call 0x00613060 */

loc_0060FE66: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060FE6B
 * Original: 0x0060FE6B - 0x0060FEDE (115 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060FE6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FE6B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esi + 0xC));
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060FE8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FE8Cu); } /* indirect call */
    }

loc_0060FE8F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FE95u); RECOMP_ABI_CALL(0x00613180u, sub_00613180); /* call 0x00613180 */

loc_0060FE95: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060FEABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FEA8u); } /* indirect call */
    }

loc_0060FEAB: ;
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FEB7u); RECOMP_ABI_CALL(0x006132C0u, sub_006132C0); /* call 0x006132C0 */

loc_0060FEB7: ;
    PUSH32(esp, 3);
    edi = esi + 0x23;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FEC4u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_0060FEC4: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(esi + 0x24) = LO8(eax);
    MEM8(edi) = LO8(ecx);
    eax = edi;
    POP32(esp, edi);
    MEM8(esi + 0x25) = 0;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0060FEDE
 * Original: 0x0060FEDE - 0x0060FF06 (40 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FEDE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FEDE: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0060FEF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FEF1u); } /* indirect call */
    }

loc_0060FEF4: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x0060FF02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FEFCu); } /* indirect call */
    }

loc_0060FF02: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0060FF06
 * Original: 0x0060FF06 - 0x0060FF9E (152 bytes, 52 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0060FF06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FF06: ;
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
    PUSH32(esp, 0x0060FF13u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0060FF13: ;
    edi = esi + 8;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FF1Du); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_0060FF1D: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi) = 0x881A9C;
    MEM32(edi) = 0x881A8C;
    MEM8(esi + 0x10) = 1;
    MEM32(esi + 0x1C) = eax;
    MEM8(esi + 0x20) = 0;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x28) = MEM32(esi + 0x28) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FF58u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_0060FF58: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0060FF6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0060FF68u); } /* indirect call */
    }

loc_0060FF6B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x60FAF7);
    PUSH32(esp, 1);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x18));
    MEM32(ebp + -4) = 0x7B891F;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0060FF8Bu); RECOMP_ABI_CALL(0x00613320u, sub_00613320); /* call 0x00613320 */

loc_0060FF8B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060FF96; /* je: equal / zero */

loc_0060FF92: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0060FF96: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0060FF9E
 * Original: 0x0060FF9E - 0x0060FFC2 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FF9E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FF9E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0060FFA6;

loc_0060FFA6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060FFAEu); RECOMP_ABI_CALL(0x0060FFC2u, sub_0060FFC2); /* call 0x0060FFC2 */

loc_0060FFAE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060FFBC; /* je: equal / zero */

loc_0060FFB5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060FFBBu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060FFBB: ;
    POP32(esp, ecx);

loc_0060FFBC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060FFA6
 * Original: 0x0060FFA6 - 0x0060FFC2 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FFA6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FFA6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060FFAEu); RECOMP_ABI_CALL(0x0060FFC2u, sub_0060FFC2); /* call 0x0060FFC2 */

loc_0060FFAE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0060FFBC; /* je: equal / zero */

loc_0060FFB5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0060FFBBu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0060FFBB: ;
    POP32(esp, ecx);

loc_0060FFBC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0060FFC2
 * Original: 0x0060FFC2 - 0x0060FFF1 (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FFC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0060FFC2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x881A9C;
    MEM32(edi) = 0x881A8C;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0060FFE1; /* je: equal / zero */

loc_0060FFDC: ;
    PUSH32(esp, 0x0060FFE1u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0060FFE1: ;
    ecx = edi;
    PUSH32(esp, 0x0060FFE8u); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_0060FFE8: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_0060FFF1
 * Original: 0x0060FFF1 - 0x0061000D (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0060FFF1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0060FFF1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0060FFF9u); RECOMP_ABI_CALL(0x0060FE0Eu, sub_0060FE0E); /* call 0x0060FE0E */

loc_0060FFF9: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00610007; /* je: equal / zero */

loc_00610000: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00610006u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00610006: ;
    POP32(esp, ecx);

loc_00610007: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00610000
 * Original: 0x00610000 - 0x0061000D (13 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00610000(void)
{

loc_00610000: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00610006u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_00610006: ;
    POP32(esp, ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0061000D
 * Original: 0x0061000D - 0x006100D3 (198 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0061000D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0061000D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x18;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0061001F; /* je: equal / zero */

loc_0061001B: ;
    PUSH32(esp, 2);
    goto loc_00610049;

loc_0061001F: ;
    eax = MEM32(0x90E7AC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0061003Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00610038u); } /* indirect call */
    }

loc_0061003B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00610041u); RECOMP_ABI_CALL(0x00613180u, sub_00613180); /* call 0x00613180 */

loc_00610041: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00610057; /* je: equal / zero */

loc_00610048: ;
    PUSH32(esp, ebx);

loc_00610049: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00610053u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00610050u); } /* indirect call */
    }

loc_00610053: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_006100CD;

loc_00610057: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00610063u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_00610063: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0061006Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0061006D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0061008E; /* je: equal / zero */

loc_00610074: ;
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0061008Cu); RECOMP_ABI_CALL(0x0060FF06u, sub_0060FF06); /* call 0x0060FF06 */

loc_0061008C: ;
    goto loc_00610090;

loc_0061008E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00610090: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00610096u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_00610096: ;
    ecx = eax;
    PUSH32(esp, 0x0061009Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0061009D: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3A98);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x006100C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006100C0u); } /* indirect call */
    }

loc_006100C3: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x006100CBu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_006100CB: ;
    eax = MEM32(edi);

loc_006100CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0061001B
 * Original: 0x0061001B - 0x006100D3 (184 bytes, 70 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0061001B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0061001B: ;
    PUSH32(esp, 2);
    goto loc_00610049;

    eax = MEM32(0x90E7AC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0061003Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00610038u); } /* indirect call */
    }

loc_0061003B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00610041u); RECOMP_ABI_CALL(0x00613180u, sub_00613180); /* call 0x00613180 */

loc_00610041: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00610057; /* je: equal / zero */

loc_00610048: ;
    PUSH32(esp, ebx);

loc_00610049: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00610053u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00610050u); } /* indirect call */
    }

loc_00610053: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_006100CD;

loc_00610057: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00610063u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_00610063: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0061006Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_0061006D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0061008E; /* je: equal / zero */

loc_00610074: ;
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0061008Cu); RECOMP_ABI_CALL(0x0060FF06u, sub_0060FF06); /* call 0x0060FF06 */

loc_0061008C: ;
    goto loc_00610090;

loc_0061008E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00610090: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00610096u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_00610096: ;
    ecx = eax;
    PUSH32(esp, 0x0061009Du); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_0061009D: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3A98);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x006100C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x006100C0u); } /* indirect call */
    }

loc_006100C3: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x006100CBu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_006100CB: ;
    eax = MEM32(edi);

loc_006100CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_006100D3
 * Original: 0x006100D3 - 0x006100E5 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006100D3(void)
{

loc_006100D3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x006100DBu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_006100DB: ;
    MEM32(esi) = 0x881AA0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006100E5
 * Original: 0x006100E5 - 0x006100F0 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006100E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_006100E5: ;
    MEM32(ecx) = 0x881AA0;
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_006100F0
 * Original: 0x006100F0 - 0x00610112 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006100F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006100F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x881AA0;
    PUSH32(esp, 0x006100FEu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_006100FE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0061010C; /* je: equal / zero */

loc_00610105: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0061010Bu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_0061010B: ;
    POP32(esp, ecx);

loc_0061010C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00610112
 * Original: 0x00610112 - 0x0061012E (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00610112(void)
{

loc_00610112: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0061011Au); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_0061011A: ;
    PUSH32(esp, 0x64);
    ecx = esi + 8;
    PUSH32(esp, 0x00610124u); RECOMP_ABI_CALL(0x004DDB9Cu, sub_004DDB9C); /* call 0x004DDB9C */

loc_00610124: ;
    MEM32(esi) = 0x881AAC;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0061012E
 * Original: 0x0061012E - 0x00610147 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0061012E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0061012E: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x881AAC;
    PUSH32(esp, 0x0061013Fu); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_0061013F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}
