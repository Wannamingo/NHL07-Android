/**
 * nhl_07_recomp - Recompiled code chunk 128
 * Functions: 250 (0x001CF340 - 0x001D6460)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001CF340
 * Original: 0x001CF340 - 0x001CF353 (19 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF340(void)
{

loc_001CF340: ;
    ecx = MEM32(0x8F451C);
    PUSH32(esp, 0x001CF34Bu); RECOMP_ABI_CALL(0x0002C459u, sub_0002C459); /* call 0x0002C459 */

loc_001CF34B: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF360
 * Original: 0x001CF360 - 0x001CF54A (490 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF360: ;
    _fb = (uint32_t)(0x1AC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1AC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001CF37Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF377u); } /* indirect call */
    }

loc_001CF37A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF388; /* je: equal / zero */

loc_001CF380: ;
    ecx = ZX8(MEM8(edi + 4));
    MEM32(esp + 0x10) = ecx;

loc_001CF388: ;
    ecx = MEM32(ebp + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CF390u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF38Du); } /* indirect call */
    }

loc_001CF390: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF4DB; /* je: equal / zero */

loc_001CF39A: ;
    SET_LO8(ebx, 1);

loc_001CF39C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = ZX8(MEM8(esi + 4));
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001CF4D7; /* je: equal / zero */

loc_001CF3AC: ;
    ecx = esp + 0xAE;
    PUSH32(esp, 0x001CF3B8u); RECOMP_ABI_CALL(0x0002312Eu, sub_0002312E); /* call 0x0002312E */

loc_001CF3B8: ;
    ecx = esp + 0x22;
    PUSH32(esp, 0x001CF3C1u); RECOMP_ABI_CALL(0x0002312Eu, sub_0002312E); /* call 0x0002312E */

loc_001CF3C1: ;
    PUSH32(esp, 0x8C);
    ecx = esp + 0xA8;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CF3D4u); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_001CF3D4: ;
    PUSH32(esp, 0x8C);
    edx = esp + 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CF3E4u); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_001CF3E4: ;
    MEM8(esp + 0xBF) = LO8(ebx);
    MEM8(esp + 0x33) = LO8(ebx);
    SET_LO8(ecx, MEM8(edi + 3));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001CF42F; /* jbe: below or equal (unsigned <=) */

loc_001CF3FA: ;
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001CF42F; /* jbe: below or equal (unsigned <=) */

loc_001CF401: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001CF407; /* ja: above (unsigned >) */

loc_001CF405: ;
    SET_LO8(eax, LO8(ecx));

loc_001CF407: ;
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(edi + 3) = LO8(ecx);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    MEM8(esi + 3) = MEM8(esi + 3) - LO8(eax);
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    ecx = SX8(LO8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CF429; /* jle: less or equal (signed <=) */

loc_001CF418: ;
    edx = ecx;
    /* nop */

loc_001CF420: ;
    ecx = MEM32(ebp + 0x3C);
    MEM32(ecx + 0x24) = MEM32(ecx + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF420; /* jne: not equal / not zero */

loc_001CF429: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + 2) = MEM8(edi + 2) + LO8(eax);
    _fa = (uint32_t)(MEM8(edi + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + 2) = MEM8(esi + 2) + LO8(eax);
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_001CF42F: ;
    SET_LO8(eax, MEM8(edi + 3));
    SET_LO8(edx, MEM8(edi + 2));
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(edi + 3) = LO8(eax);
    MEM8(edi + 2) = LO8(edx);
    if (CMP_A(_fa, _fb)) goto loc_001CF44B; /* ja: above (unsigned >) */

loc_001CF443: ;
    ecx = MEM32(ebp + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001CF44Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF448u); } /* indirect call */
    }

loc_001CF44B: ;
    SET_LO8(eax, MEM8(esi + 3));
    SET_LO8(edx, MEM8(esi + 2));
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 3) = LO8(eax);
    MEM8(esi + 2) = LO8(edx);
    if (CMP_A(_fa, _fb)) goto loc_001CF467; /* ja: above (unsigned >) */

loc_001CF45F: ;
    ecx = MEM32(ebp + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CF467u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF464u); } /* indirect call */
    }

loc_001CF467: ;
    ecx = esp + 0x13A;
    PUSH32(esp, 0x001CF473u); RECOMP_ABI_CALL(0x0002312Eu, sub_0002312E); /* call 0x0002312E */

loc_001CF473: ;
    eax = esp + 0x130;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0xAC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CF48Du); RECOMP_ABI_CALL(0x00028F7Au, sub_00028F7A); /* call 0x00028F7A */

loc_001CF48D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF4AF; /* je: equal / zero */

loc_001CF494: ;
    ecx = MEM32(ebp + 0x3C);
    eax = MEM32(ecx);
    edx = esp + 0x130;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001CF4A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF4A1u); } /* indirect call */
    }

loc_001CF4A4: ;
    SET_LO8(eax, MEM8(ebp + 0x29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF4AF; /* je: equal / zero */

loc_001CF4AB: ;
    MEM8(ebp + 0x29) = 0;

loc_001CF4AF: ;
    ecx = MEM32(ebp + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001CF4B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF4B4u); } /* indirect call */
    }

loc_001CF4B7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF4C5; /* je: equal / zero */

loc_001CF4BD: ;
    ecx = ZX8(MEM8(edi + 4));
    MEM32(esp + 0x10) = ecx;

loc_001CF4C5: ;
    ecx = MEM32(ebp + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CF4CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF4CAu); } /* indirect call */
    }

loc_001CF4CD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF39C; /* jne: not equal / not zero */

loc_001CF4D7: ;
    ebx = MEM32(esp + 0x14);

loc_001CF4DB: ;
    ecx = MEM32(ebp + 0x38);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    MEM32(ebp + 0x38) = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF53F; /* jne: not equal / not zero */

loc_001CF4F0: ;
    ecx = MEM32(ebp + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001CF4F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF4F5u); } /* indirect call */
    }

loc_001CF4F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF515; /* jne: not equal / not zero */

loc_001CF4FB: ;
    ecx = MEM32(ebp + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001CF502u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF500u); } /* indirect call */
    }

loc_001CF502: ;
    _fb = (uint32_t)(MEM32(ebp + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CF515; /* jle: less or equal (signed <=) */

loc_001CF509: ;
    ecx = MEM32(ebp + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001CF510u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF50Eu); } /* indirect call */
    }

loc_001CF510: ;
    _fb = (uint32_t)(MEM32(ebp + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_001CF532;

loc_001CF515: ;
    ecx = MEM32(ebp + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001CF51Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF51Au); } /* indirect call */
    }

loc_001CF51C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF538; /* jne: not equal / not zero */

loc_001CF520: ;
    edx = MEM32(esp + 0x10);
    eax = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CF538; /* jle: less or equal (signed <=) */

loc_001CF52D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_001CF532: ;
    ecx = MEM32(ebp + 0x3C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + eax;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CF538: ;
    MEM32(ebp + 0x38) = 0;

loc_001CF53F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1AC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1AC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CF5D0
 * Original: 0x001CF5D0 - 0x001CF5F7 (39 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF5D0: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF5F4; /* jne: not equal / not zero */

loc_001CF5D7: ;
    edx = MEM32(ecx + 0x184);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x10);
    eax = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001CF5F4; /* jne: not equal / not zero */

loc_001CF5EB: ;
    ecx = MEM32(ecx + 0x180);
    MEM32(ecx + 0x40) = eax;

loc_001CF5F4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CF600
 * Original: 0x001CF600 - 0x001CF687 (135 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF600: ;
    ecx = MEM32(esp + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x778);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x8F5B18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8F5B18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = 2;
    edx = ecx + 0x14C;
    edi = edi;

loc_001CF620: ;
    ecx = esi + -2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12 (32-bit) */
    ecx = MEM32(edx + -84);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12 (32-bit) */
    ecx = MEM32(edx);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx + 0x54);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12 (32-bit) */
    ecx = MEM32(edx + 0xA8);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12 (32-bit) */
    ecx = MEM32(edx + 0xFC);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + -2;
    _fb = (uint32_t)(0x1A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1A4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CF620; /* jl: less (signed <) */

loc_001CF685: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF6B0
 * Original: 0x001CF6B0 - 0x001CF6DB (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF6B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    MEM32(esi) = 0x7F0C78;
    PUSH32(esp, 0x001CF6C5u); RECOMP_ABI_CALL(0x00020CA8u, sub_00020CA8); /* call 0x00020CA8 */

loc_001CF6C5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CF6D5; /* je: equal / zero */

loc_001CF6CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CF6D2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CF6D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CF6D5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF6F0
 * Original: 0x001CF6F0 - 0x001CF726 (54 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF6F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF6F0: ;
    PUSH32(esp, esi);
    MEM32(0x8B3FE8) = MEM32(0x8B3FE8) + 1;
    _fa = (uint32_t)(MEM32(0x8B3FE8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    ecx = MEM32(ecx + 0x58);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C42F0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CF71Bu); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_001CF71B: ;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF740
 * Original: 0x001CF740 - 0x001CF77D (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF740: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001CF77B; /* je: equal / zero */

loc_001CF74E: ;
    MEM32(0x8B3FE8) = MEM32(0x8B3FE8) + 1;
    _fa = (uint32_t)(MEM32(0x8B3FE8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(esi + 0x58);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C42F0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CF774u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_001CF774: ;
    MEM32(esi + 0x4C) = 0;

loc_001CF77B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF790
 * Original: 0x001CF790 - 0x001CF7E7 (87 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF790: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0xC;
    MEM32(esi) = 0x7F0D90;
    MEM32(edi) = 0x7F0D84;
    if (CMP_EQ(_fa, _fb)) goto loc_001CF7B1; /* je: equal / zero */

loc_001CF7AA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001CF7B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF7AEu); } /* indirect call */
    }

loc_001CF7B1: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF7C5; /* je: equal / zero */

loc_001CF7B8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001CF7BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF7BCu); } /* indirect call */
    }

loc_001CF7BE: ;
    MEM32(esi + 0x38) = 0;

loc_001CF7C5: ;
    eax = MEM32(0x8F44F4);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x001CF7D2u); RECOMP_ABI_CALL(0x00017E23u, sub_00017E23); /* call 0x00017E23 */

loc_001CF7D2: ;
    PUSH32(esp, 0x001CF7D7u); RECOMP_ABI_CALL(0x0002AD6Bu, sub_0002AD6B); /* call 0x0002AD6B */

loc_001CF7D7: ;
    ecx = edi;
    PUSH32(esp, 0x001CF7DEu); RECOMP_ABI_CALL(0x000323C2u, sub_000323C2); /* call 0x000323C2 */

loc_001CF7DE: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7F0C44;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF800
 * Original: 0x001CF800 - 0x001CF808 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF800: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000116EA(); return; /* tail jmp 0x000116EA */

}

/**
 * sub_001CF810
 * Original: 0x001CF810 - 0x001CF84F (63 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF810(void)
{

loc_001CF810: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x58) = 2;
    PUSH32(esp, 0x001CF82Cu); RECOMP_ABI_CALL(0x0002366Fu, sub_0002366F); /* call 0x0002366F */

loc_001CF82C: ;
    MEM8(esi + 0x5C) = 1;
    edx = MEM32(0x8F24EC);
    ecx = MEM32(edx + 0x2C);
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x001CF841u); RECOMP_ABI_CALL(0x0002C440u, sub_0002C440); /* call 0x0002C440 */

loc_001CF841: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    MEM8(0x8F6A2E) = 2;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CF860
 * Original: 0x001CF860 - 0x001CF8E4 (132 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF860: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF878; /* je: equal / zero */

loc_001CF86A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CF871u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF86Eu); } /* indirect call */
    }

loc_001CF871: ;
    MEM32(esi + 0x50) = 0;

loc_001CF878: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF8B7; /* je: equal / zero */

loc_001CF87F: ;
    eax = MEM32(0x8F44F4);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF895; /* je: equal / zero */

loc_001CF88E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CF895u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF892u); } /* indirect call */
    }

loc_001CF895: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 3 (32-bit) */
    MEM32(esi + 0x30) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001CF8B7; /* jne: not equal / not zero */

loc_001CF8A2: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF8B0; /* je: equal / zero */

loc_001CF8A9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CF8B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF8ADu); } /* indirect call */
    }

loc_001CF8B0: ;
    MEM32(esi + 0x34) = 0;

loc_001CF8B7: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF8C8; /* je: equal / zero */

loc_001CF8BE: ;
    edx = MEM32(eax + 4);
    ecx = eax + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001CF8C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF8C6u); } /* indirect call */
    }

loc_001CF8C8: ;
    eax = MEM32(esi + 0x28);
    ecx = esi;
    MEM32(esi + 0x58) = 1;
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x001CF8DCu); RECOMP_ABI_CALL(0x0002D250u, sub_0002D250); /* call 0x0002D250 */

loc_001CF8DC: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002CADF(); return; /* tail jmp 0x0002CADF */

}

/**
 * sub_001CF910
 * Original: 0x001CF910 - 0x001CF95B (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF910: ;
    eax = MEM32(0x8F44F4);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    edx = edx & 0xFFFFFFDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = edx;
    eax = MEM32(esi + 0x60);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 0x14) = LO8(ebx);
    ecx = MEM32(0x8FC644);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF934u); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_001CF934: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF941; /* je: equal / zero */

loc_001CF93B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001CF941u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF93Fu); } /* indirect call */
    }

loc_001CF941: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x60) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001CF955; /* je: equal / zero */

loc_001CF94B: ;
    edx = MEM32(eax + 4);
    ecx = eax + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001CF955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF953u); } /* indirect call */
    }

loc_001CF955: ;
    MEM32(esi + 0x28) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF970
 * Original: 0x001CF970 - 0x001CFA35 (197 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF987; /* je: equal / zero */

loc_001CF97D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CF984u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF981u); } /* indirect call */
    }

loc_001CF984: ;
    MEM32(esi + 0x50) = ebx;

loc_001CF987: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF9BC; /* je: equal / zero */

loc_001CF98C: ;
    eax = MEM32(0x8F44F4);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF9A2; /* je: equal / zero */

loc_001CF99B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CF9A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF99Fu); } /* indirect call */
    }

loc_001CF9A2: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 3 (32-bit) */
    MEM32(esi + 0x30) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_001CF9BC; /* jne: not equal / not zero */

loc_001CF9AB: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF9B9; /* je: equal / zero */

loc_001CF9B2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CF9B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF9B6u); } /* indirect call */
    }

loc_001CF9B9: ;
    MEM32(esi + 0x34) = ebx;

loc_001CF9BC: ;
    _fa = (uint32_t)(MEM8(esi + 0x5C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x5C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF9D3; /* je: equal / zero */

loc_001CF9C1: ;
    ecx = MEM32(0x8F24EC);
    ecx = MEM32(ecx + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CF9D0u); RECOMP_ABI_CALL(0x0001F227u, sub_0001F227); /* call 0x0001F227 */

loc_001CF9D0: ;
    MEM8(esi + 0x5C) = LO8(ebx);

loc_001CF9D3: ;
    eax = MEM32(esi + 0x58);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001CF9F3; /* je: equal / zero */

loc_001CF9D9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001CFA0E; /* je: equal / zero */

loc_001CF9DC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF9FA; /* jne: not equal / not zero */

loc_001CF9DF: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF9F0; /* je: equal / zero */

loc_001CF9E6: ;
    edx = MEM32(eax + 4);
    ecx = eax + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001CF9F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF9EEu); } /* indirect call */
    }

loc_001CF9F0: ;
    MEM32(esi + 0x2C) = ebx;

loc_001CF9F3: ;
    ecx = esi;
    PUSH32(esp, 0x001CF9FAu); RECOMP_ABI_CALL(0x00030540u, sub_00030540); /* call 0x00030540 */

loc_001CF9FA: ;
    ecx = MEM32(0x8FC62C);
    PUSH32(esp, 0x001CFA05u); RECOMP_ABI_CALL(0x00022B7Fu, sub_00022B7F); /* call 0x00022B7F */

loc_001CFA05: ;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x2C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CFA0E: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFA1E; /* je: equal / zero */

loc_001CFA15: ;
    ecx = eax + 4;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001CFA1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFA1Cu); } /* indirect call */
    }

loc_001CFA1E: ;
    MEM32(esi + 0x2C) = ebx;
    ecx = MEM32(0x8FC62C);
    PUSH32(esp, 0x001CFA2Cu); RECOMP_ABI_CALL(0x00022B7Fu, sub_00022B7F); /* call 0x00022B7F */

loc_001CFA2C: ;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x2C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CFA70
 * Original: 0x001CFA70 - 0x001CFA81 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFA70(void)
{

loc_001CFA70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8F24EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CFA80u); RECOMP_ABI_CALL(0x00012E96u, sub_00012E96); /* call 0x00012E96 */

loc_001CFA80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CFA90
 * Original: 0x001CFA90 - 0x001CFB3D (173 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFA90: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8F4508);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFABE; /* je: equal / zero */

loc_001CFA9A: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = 0;
    MEM32(esp) = edx;
    edx = MEM32(esp);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(eax + 0x20) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001CFABBu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CFAB8u); } /* indirect call */
    }

loc_001CFABB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CFABE: ;
    PUSH32(esp, 0x001CFAC3u); RECOMP_ABI_CALL(0x0001A6FAu, sub_0001A6FA); /* call 0x0001A6FA */

loc_001CFAC3: ;
    PUSH32(esp, 0x001CFAC8u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001CFAC8: ;
    ecx = eax;
    PUSH32(esp, 0x001CFACFu); RECOMP_ABI_CALL(0x00029DA8u, sub_00029DA8); /* call 0x00029DA8 */

loc_001CFACF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFB39; /* je: equal / zero */

loc_001CFAD3: ;
    SET_LO8(ecx, MEM8(0x8F4BD4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(eax + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_001CFB0A; /* jne: not equal / not zero */

loc_001CFAE0: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + ecx * 2;
    SET_LO16(eax, MEM16(eax + edx * 4));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFB39; /* jne: not equal / not zero */

loc_001CFAF4: ;
    edx = ZX16(LO16(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFFFFFCu (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CFB39; /* jne: not equal / not zero */

loc_001CFAFF: ;
    MEM8(0x8F4BD4) = 1;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001CFB0A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + ecx * 4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + ecx * 4), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CFB39; /* jne: not equal / not zero */

loc_001CFB16: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CFB1Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_001CFB1C: ;
    esi = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CFB25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFB22u); } /* indirect call */
    }

loc_001CFB25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CFB31; /* jl: less (signed <) */

loc_001CFB2A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x001CFB31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFB2Eu); } /* indirect call */
    }

loc_001CFB31: ;
    MEM8(0x8F4BD4) = 0;
    POP32(esp, esi);

loc_001CFB39: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CFB70
 * Original: 0x001CFB70 - 0x001CFBB0 (64 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFB70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFB70: ;
    eax = ecx;
    MEM32(eax) = 0x7F0D9C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax + 4;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    edx = eax + 0x14;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = 1;
    MEM32(eax + 0x24) = 0x1398;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x5C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001CFBC0
 * Original: 0x001CFBC0 - 0x001CFBC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFBC0(void)
{

loc_001CFBC0: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001CFBD0
 * Original: 0x001CFBD0 - 0x001CFBD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFBD0(void)
{

loc_001CFBD0: ;
    eax = 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_001CFBE0
 * Original: 0x001CFBE0 - 0x001CFC02 (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFBE0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F0D9C;
    if (TEST_Z(_fa, _fb)) goto loc_001CFBFC; /* je: equal / zero */

loc_001CFBF0: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CFBFCu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001CFBFC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CFC10
 * Original: 0x001CFC10 - 0x001CFC4B (59 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFC10: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi) = 0x7F0CFC;
    if (CMP_EQ(_fa, _fb)) goto loc_001CFC2C; /* je: equal / zero */

loc_001CFC20: ;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CFC2Cu); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_001CFC2C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x7F0C50;
    if (TEST_Z(_fa, _fb)) goto loc_001CFC45; /* je: equal / zero */

loc_001CFC39: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CFC45u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001CFC45: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CFC60
 * Original: 0x001CFC60 - 0x001CFC88 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFC60: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFC7C; /* je: equal / zero */

loc_001CFC6A: ;
    eax = MEM32(0x8F24EC);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CFC78u); RECOMP_ABI_CALL(0x0001F227u, sub_0001F227); /* call 0x0001F227 */

loc_001CFC78: ;
    MEM8(esi + 0x10) = 0;

loc_001CFC7C: ;
    ecx = MEM32(0x8F24EC);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00021A0E(); return; /* tail jmp 0x00021A0E */

}

/**
 * sub_001CFCA0
 * Original: 0x001CFCA0 - 0x001CFD5E (190 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFCA0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x44);
    MEM32(esi) = 0x7F0D24;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001CFCCBu); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CFCCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFCDF; /* je: equal / zero */

loc_001CFCCF: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x001CFCDDu); RECOMP_ABI_CALL(0x00013DF5u, sub_00013DF5); /* call 0x00013DF5 */

loc_001CFCDD: ;
    goto loc_001CFCE1;

loc_001CFCDF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CFCE1: ;
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(0x8BFE84);
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    edx = MEM32(0x8BFE7C);
    ecx = 0x8BFE7C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CFD0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFD0Bu); } /* indirect call */
    }

loc_001CFD0E: ;
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(0x8BFE7C);
    ecx = 0x8BFE7C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CFD1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFD1Bu); } /* indirect call */
    }

loc_001CFD1E: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0x8F24F0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esi + 4;
    PUSH32(esp, 0x35F09);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, ecx);
    MEM8(0x8F4504) = LO8(ebx);
    PUSH32(esp, 0x001CFD47u); RECOMP_ABI_CALL(0x0059E682u, sub_0059E682); /* call 0x0059E682 */

loc_001CFD47: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CFD50u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001CFD50: ;
    ecx = eax;
    PUSH32(esp, 0x001CFD57u); RECOMP_ABI_CALL(0x00037EC6u, sub_00037EC6); /* call 0x00037EC6 */

loc_001CFD57: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CFD90
 * Original: 0x001CFD90 - 0x001CFDAE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFD90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CFD98u); RECOMP_ABI_CALL(0x0002430Du, sub_0002430D); /* call 0x0002430D */

loc_001CFD98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CFDA8; /* je: equal / zero */

loc_001CFD9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CFDA5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CFDA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CFDA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CFDC0
 * Original: 0x001CFDC0 - 0x001CFE08 (72 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFDC0: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 0xE;
    PUSH32(esp, 0x001CFDD2u); RECOMP_ABI_CALL(0x0002312Eu, sub_0002312E); /* call 0x0002312E */

loc_001CFDD2: ;
    eax = MEM32(esp + 0x94);
    PUSH32(esp, 0x8C);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CFDE9u); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_001CFDE9: ;
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    MEM8(esp + 7) = 2;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CFDFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CFDFBu); } /* indirect call */
    }

loc_001CFDFE: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CFE20
 * Original: 0x001CFE20 - 0x001CFE7A (90 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CFE20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CFE28u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001CFE28: ;
    edi = MEM32(esp + 0x10);
    esi = eax;
    MEM32(0x8F4510) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CFE36: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    ecx = esi;
    PUSH32(esp, 1);
    eax = ZX8(LO8(ebx));
    if (CMP_EQ(_fa, _fb)) goto loc_001CFE45; /* je: equal / zero */

loc_001CFE41: ;
    PUSH32(esp, 4);
    goto loc_001CFE47;

loc_001CFE45: ;
    PUSH32(esp, 2);

loc_001CFE47: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CFE4Du); RECOMP_ABI_CALL(0x00030EAAu, sub_00030EAA); /* call 0x00030EAA */

loc_001CFE4D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001CFE36; /* jb: below (unsigned <) */

loc_001CFE53: ;
    SET_LO8(eax, MEM8(0x8F450C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001CFE72; /* jne: not equal / not zero */

loc_001CFE5F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x13A2B);
    PUSH32(esp, 0x001CFE6Fu); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_001CFE6F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CFE72: ;
    MEM8(0x8F450C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001CFE90
 * Original: 0x001CFE90 - 0x001CFEB9 (41 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFE90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFE90: ;
    SET_LO8(eax, MEM8(0x8F450C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFEA6; /* je: equal / zero */

loc_001CFE99: ;
    PUSH32(esp, 0x13A2B);
    PUSH32(esp, 0x001CFEA3u); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_001CFEA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CFEA6: ;
    MEM8(0x8F450C) = 0;
    PUSH32(esp, 0x001CFEB2u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001CFEB2: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0001E890(); return; /* tail jmp 0x0001E890 */

}

/**
 * sub_001CFED0
 * Original: 0x001CFED0 - 0x001CFFF9 (297 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFED0: ;
    eax = MEM32(0x8F44F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFFF8; /* je: equal / zero */

loc_001CFEDD: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CFFF8; /* je: equal / zero */

loc_001CFEE6: ;
    eax = MEM32(0x8F4514);
    PUSH32(esp, ebp);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(0x8F4518) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001CFF45; /* jne: not equal / not zero */

loc_001CFEFA: ;
    PUSH32(esp, 0x001CFEFFu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001CFEFF: ;
    PUSH32(esp, 0x001CFF04u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_001CFF04: ;
    PUSH32(esp, 8);
    ecx = eax + 0x21C;
    PUSH32(esp, 0x001CFF11u); RECOMP_ABI_CALL(0x0001E8A4u, sub_0001E8A4); /* call 0x0001E8A4 */

loc_001CFF11: ;
    PUSH32(esp, 0x001CFF16u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001CFF16: ;
    PUSH32(esp, 8);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x001CFF20u); RECOMP_ABI_CALL(0x00022BCFu, sub_00022BCF); /* call 0x00022BCF */

loc_001CFF20: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFF45; /* je: equal / zero */

loc_001CFF24: ;
    MEM32(0x8F4514) = 1;
    PUSH32(esp, 0x001CFF33u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001CFF33: ;
    PUSH32(esp, 0x001CFF38u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_001CFF38: ;
    PUSH32(esp, 8);
    ecx = eax + 0x21C;
    PUSH32(esp, 0x001CFF45u); RECOMP_ABI_CALL(0x00035428u, sub_00035428); /* call 0x00035428 */

loc_001CFF45: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CFF4Bu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001CFF4B: ;
    ecx = eax;
    PUSH32(esp, 0x001CFF52u); RECOMP_ABI_CALL(0x0002D845u, sub_0002D845); /* call 0x0002D845 */

loc_001CFF52: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFF9C; /* je: equal / zero */

loc_001CFF58: ;
    PUSH32(esp, edi);
    /* nop */

loc_001CFF60: ;
    edi = MEM32(esi + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CFF69u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001CFF69: ;
    ecx = eax;
    PUSH32(esp, 0x001CFF70u); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_001CFF70: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CFF94; /* je: equal / zero */

loc_001CFF75: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    _fa = (uint32_t)(MEM8(esi + eax * 4 + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + eax * 4 + 1), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CFF94; /* jne: not equal / not zero */

loc_001CFF85: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFF92; /* je: equal / zero */

loc_001CFF8A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0xFF00 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CFF94; /* jne: not equal / not zero */

loc_001CFF92: ;
    ebp = edi;

loc_001CFF94: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CFF60; /* jne: not equal / not zero */

loc_001CFF9B: ;
    POP32(esp, edi);

loc_001CFF9C: ;
    PUSH32(esp, 0x001CFFA1u); RECOMP_ABI_CALL(0x00023395u, sub_00023395); /* call 0x00023395 */

loc_001CFFA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001CFFF7; /* je: equal / zero */

loc_001CFFA6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFFF7; /* je: equal / zero */

loc_001CFFAB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, 0xFF00 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CFFD4; /* jne: not equal / not zero */

loc_001CFFB3: ;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001CFFC8u); RECOMP_ABI_CALL(0x00018E54u, sub_00018E54); /* call 0x00018E54 */

loc_001CFFC8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x8F4518) = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001CFFD4: ;
    eax = MEM32(0x8F4514);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CFFF7; /* je: equal / zero */

loc_001CFFDD: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 9);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001CFFEDu); RECOMP_ABI_CALL(0x00018E54u, sub_00018E54); /* call 0x00018E54 */

loc_001CFFED: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x8F4518) = 1;

loc_001CFFF7: ;
    POP32(esp, ebp);

loc_001CFFF8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CFFD3
 * Original: 0x001CFFD3 - 0x001CFFF9 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFFD3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFFD3: ;
    esp += 4; return; /* ret */

    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 9);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001CFFEDu); RECOMP_ABI_CALL(0x00018E54u, sub_00018E54); /* call 0x00018E54 */

loc_001CFFED: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x8F4518) = 1;

loc_001CFFF7: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001CFFF7
 * Original: 0x001CFFF7 - 0x001CFFF9 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFFF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFFF7: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0050
 * Original: 0x001D0050 - 0x001D0074 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0050: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x630);
    PUSH32(esp, 0x001D005Eu); RECOMP_ABI_CALL(0x0059E46Eu, sub_0059E46E); /* call 0x0059E46E */

loc_001D005E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D006E; /* je: equal / zero */

loc_001D0065: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D006Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D006B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D006E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0080
 * Original: 0x001D0080 - 0x001D00B2 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0080: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x20);
    eax = esi + 0x610;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 0x630) = eax;
    PUSH32(esp, 0x001D0099u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001D0099: ;
    ecx = MEM32(esi + 0x630);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D00A7u); RECOMP_ABI_CALL(0x0059E463u, sub_0059E463); /* call 0x0059E463 */

loc_001D00A7: ;
    ecx = esi;
    PUSH32(esp, 0x001D00AEu); RECOMP_ABI_CALL(0x0002C459u, sub_0002C459); /* call 0x0002C459 */

loc_001D00AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D00C0
 * Original: 0x001D00C0 - 0x001D014F (143 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D00C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D00C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(esi + 0x60C));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0142; /* jne: not equal / not zero */

loc_001D00D9: ;
    ecx = MEM32(0x897814);
    PUSH32(esp, 0x001D00E4u); RECOMP_ABI_CALL(0x0002AE1Au, sub_0002AE1A); /* call 0x0002AE1A */

loc_001D00E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0142; /* je: equal / zero */

loc_001D00E8: ;
    SET_LO8(edx, MEM8(esi + 0x60C));
    ecx = MEM32(0x897814);
    MEM8(esp + 4) = LO8(edx);
    PUSH32(esp, 0x001D00FDu); RECOMP_ABI_CALL(0x000184EFu, sub_000184EF); /* call 0x000184EF */

loc_001D00FD: ;
    MEM32(esp + 8) = eax;
    eax = MEM32(0x8BFE50);
    ecx = 0x8BFE50;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001D010Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D010Bu); } /* indirect call */
    }

loc_001D010E: ;
    SET_LO8(ecx, MEM8(esi + 0x60D));
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    MEM8(esp + 5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001D012D; /* je: equal / zero */

loc_001D0122: ;
    MEM8(esp + 5) = 1;
    MEM8(esi + 0x60D) = LO8(eax);

loc_001D012D: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001D0139u); RECOMP_ABI_CALL(0x00016C8Au, sub_00016C8A); /* call 0x00016C8A */

loc_001D0139: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0142; /* jne: not equal / not zero */

loc_001D013D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001D0142: ;
    MEM8(esi + 0x60C) = MEM8(esi + 0x60C) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x60C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D0180
 * Original: 0x001D0180 - 0x001D01A4 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0180: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x5470);
    PUSH32(esp, 0x001D018Eu); RECOMP_ABI_CALL(0x0059E46Eu, sub_0059E46E); /* call 0x0059E46E */

loc_001D018E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D019E; /* je: equal / zero */

loc_001D0195: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D019Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D019B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D019E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D01B0
 * Original: 0x001D01B0 - 0x001D01E2 (50 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D01B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D01B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x20);
    eax = esi + 0x5450;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 0x5470) = eax;
    PUSH32(esp, 0x001D01C9u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001D01C9: ;
    ecx = MEM32(esi + 0x5470);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D01D7u); RECOMP_ABI_CALL(0x0059E463u, sub_0059E463); /* call 0x0059E463 */

loc_001D01D7: ;
    ecx = esi;
    PUSH32(esp, 0x001D01DEu); RECOMP_ABI_CALL(0x0002EB41u, sub_0002EB41); /* call 0x0002EB41 */

loc_001D01DE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D01F0
 * Original: 0x001D01F0 - 0x001D024F (95 bytes, 41 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D01F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D01F0: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D024B; /* je: equal / zero */

loc_001D01FF: ;
    SET_LO8(eax, LO8(eax) & 0xDF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ecx + 1) = LO8(eax);
    eax = ZX8(MEM8(ecx));
    PUSH32(esp, esi);
    esi = eax + ecx;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D024A; /* jle: less or equal (signed <=) */

loc_001D021F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = edx;
    /* nop */

loc_001D0230: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D0241u); RECOMP_ABI_CALL(0x00024BBEu, sub_00024BBE); /* call 0x00024BBE */

loc_001D0241: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D0230; /* jne: not equal / not zero */

loc_001D0247: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001D024A: ;
    POP32(esp, esi);

loc_001D024B: ;
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001D0270
 * Original: 0x001D0270 - 0x001D0314 (164 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0270: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x544C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001D0308; /* je: equal / zero */

loc_001D0289: ;
    ebp = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);

loc_001D0291: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D02F4; /* jne: not equal / not zero */

loc_001D0296: ;
    ecx = MEM32(esi + 0x5470);
    PUSH32(esp, 0x001D02A1u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_001D02A1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001D02AAu); RECOMP_ABI_CALL(0x0001AAC4u, sub_0001AAC4); /* call 0x0001AAC4 */

loc_001D02AA: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D02DA; /* ja: above (unsigned >) */

loc_001D02B1: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x1D0314); /* switch: 5 entries, 3 targets */
    if (_jt == 0x001D02B8u) goto loc_001D02B8;
    if (_jt == 0x001D02D3u) goto loc_001D02D3;
    if (_jt == 0x001D02DAu) goto loc_001D02DA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001D02B8: ;
    eax = MEM32(esi + 0x5448);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x8000007Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001D02CB; /* jns: not sign (positive) */

loc_001D02C6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFF80u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D02CB: ;
    MEM32(esi + 0x5448) = eax;
    goto loc_001D02DA;

loc_001D02D3: ;
    MEM8(esi + 0x544C) = 0;

loc_001D02DA: ;
    ecx = MEM32(esi + 0x5470);
    PUSH32(esp, 0x001D02E5u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_001D02E5: ;
    SET_LO8(eax, MEM8(esi + 0x544C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0291; /* jne: not equal / not zero */

loc_001D02EF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0308; /* je: equal / zero */

loc_001D02F4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0308; /* je: equal / zero */

loc_001D02F8: ;
    ecx = esi;
    PUSH32(esp, 0x001D02FFu); RECOMP_ABI_CALL(0x0002EB41u, sub_0002EB41); /* call 0x0002EB41 */

loc_001D02FF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001D0308: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D0380
 * Original: 0x001D0380 - 0x001D0390 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0380(void)
{

loc_001D0380: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001D03A0
 * Original: 0x001D03A0 - 0x001D03B0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D03A0(void)
{

loc_001D03A0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001D03C0
 * Original: 0x001D03C0 - 0x001D03FA (58 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D03C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D03C0: ;
    eax = MEM32(0x8F44F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D03F9; /* jne: not equal / not zero */

loc_001D03C9: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x450);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D03DDu); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D03DD: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D03EF; /* je: equal / zero */

loc_001D03E3: ;
    PUSH32(esp, 0x001D03E8u); RECOMP_ABI_CALL(0x00031738u, sub_00031738); /* call 0x00031738 */

loc_001D03E8: ;
    MEM32(0x8F44F8) = ecx;
    esp += 4; return; /* ret */

loc_001D03EF: ;
    MEM32(0x8F44F8) = 0;

loc_001D03F9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D0410
 * Original: 0x001D0410 - 0x001D044B (59 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0410: ;
    eax = MEM32(0x8F44F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D0432; /* je: equal / zero */

loc_001D041C: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D0428u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001D0428: ;
    MEM32(0x8F44F8) = 0;

loc_001D0432: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D0445; /* je: equal / zero */

loc_001D0439: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D0445u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001D0445: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0460
 * Original: 0x001D0460 - 0x001D04AF (79 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0460: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0;
    eax = MEM32(0x8F44F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D04A8; /* jne: not equal / not zero */

loc_001D0472: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x450);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D0486u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D0486: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D049E; /* je: equal / zero */

loc_001D048C: ;
    PUSH32(esp, 0x001D0491u); RECOMP_ABI_CALL(0x00031738u, sub_00031738); /* call 0x00031738 */

loc_001D0491: ;
    MEM32(0x8F44F8) = ecx;
    MEM32(esi) = MEM32(esi) | 0x10;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D049E: ;
    MEM32(0x8F44F8) = 0;

loc_001D04A8: ;
    MEM32(esi) = MEM32(esi) | 0x10;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D04D0
 * Original: 0x001D04D0 - 0x001D04E1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D04D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D04D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x7F0C44;
    esp += 4; return; /* ret */

}

/**
 * sub_001D04F0
 * Original: 0x001D04F0 - 0x001D0504 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D04F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D04F0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x7F0C50;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001D0510
 * Original: 0x001D0510 - 0x001D052D (29 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0510: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x7F0DB0;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0540
 * Original: 0x001D0540 - 0x001D0561 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0540: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D0548u); RECOMP_ABI_CALL(0x00015015u, sub_00015015); /* call 0x00015015 */

loc_001D0548: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D055B; /* je: equal / zero */

loc_001D054F: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D055Bu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001D055B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0570
 * Original: 0x001D0570 - 0x001D0613 (163 bytes, 52 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0570: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001D05F8; /* jne: not equal / not zero */

loc_001D0581: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D05F8; /* jne: not equal / not zero */

loc_001D0587: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D0591u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D058Eu); } /* indirect call */
    }

loc_001D0591: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0607; /* je: equal / zero */

loc_001D0595: ;
    PUSH32(esp, edi);
    ecx = esp + 0x12;
    PUSH32(esp, 0x001D059Fu); RECOMP_ABI_CALL(0x0002312Eu, sub_0002312E); /* call 0x0002312E */

loc_001D059F: ;
    SET_LO8(eax, MEM8(esi + 0x184));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = MEM32(esp + 0xA0);
    if (CMP_EQ(_fa, _fb)) goto loc_001D05D5; /* je: equal / zero */

loc_001D05B0: ;
    edx = MEM32(esp + 0xA4);
    eax = MEM32(esp + 0x9C);
    ecx = esi + 0x178;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F4520);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D05D5u); RECOMP_ABI_CALL(0x00013CCEu, sub_00013CCE); /* call 0x00013CCE */

loc_001D05D5: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esi + 0xE4;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D05E7u); RECOMP_ABI_CALL(0x0002DFE3u, sub_0002DFE3); /* call 0x0002DFE3 */

loc_001D05E7: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001D05F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D05F4u); } /* indirect call */
    }

loc_001D05F7: ;
    POP32(esp, edi);

loc_001D05F8: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_001D0607: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001D0640
 * Original: 0x001D0640 - 0x001D0722 (226 bytes, 63 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0640: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x8F4520);
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x178;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = ebp;
    PUSH32(esp, 0x001D065Bu); RECOMP_ABI_CALL(0x000359E1u, sub_000359E1); /* call 0x000359E1 */

loc_001D065B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D071A; /* jle: less or equal (signed <=) */

loc_001D0663: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    ebx = 1;
    edi = 0xFFFFFFFBu;

loc_001D0673: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001D070E; /* jne: not equal / not zero */

loc_001D067F: ;
    _fa = (uint32_t)(MEM32(esi + 0x180)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x180), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D06A1; /* jne: not equal / not zero */

loc_001D0687: ;
    eax = esi + 0x178;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = ebp;
    PUSH32(esp, 0x001D0697u); RECOMP_ABI_CALL(0x00019273u, sub_00019273); /* call 0x00019273 */

loc_001D0697: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x180) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001D06CB; /* je: equal / zero */

loc_001D06A1: ;
    eax = MEM32(0x8F44F8);
    MEM32(eax + 0x3FC) = MEM32(eax + 0x3FC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x3FC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001D06B1u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001D06B1: ;
    PUSH32(esp, 0x001D06B6u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_001D06B6: ;
    PUSH32(esp, 3);
    ecx = eax + 0x21C;
    PUSH32(esp, 0x001D06C3u); RECOMP_ABI_CALL(0x0001E8A4u, sub_0001E8A4); /* call 0x0001E8A4 */

loc_001D06C3: ;
    MEM32(esi + 0x180) = ebx;
    goto loc_001D06F2;

loc_001D06CB: ;
    eax = MEM32(esi + 0x174);
    eax = eax & MEM32(esi + 0x170);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D070E; /* je: equal / zero */

loc_001D06DB: ;
    PUSH32(esp, 0x001D06E0u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001D06E0: ;
    PUSH32(esp, 0x001D06E5u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_001D06E5: ;
    PUSH32(esp, 3);
    ecx = eax + 0x21C;
    PUSH32(esp, 0x001D06F2u); RECOMP_ABI_CALL(0x0001E8A4u, sub_0001E8A4); /* call 0x0001E8A4 */

loc_001D06F2: ;
    ecx = MEM32(esi + 0x170);
    eax = MEM32(esi + 0x174);
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x170) = ecx;
    MEM32(esi + 0x174) = eax;

loc_001D070E: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D0673; /* jne: not equal / not zero */

loc_001D0718: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001D071A: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D0760
 * Original: 0x001D0760 - 0x001D080C (172 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0760: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18C);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0806; /* je: equal / zero */

loc_001D0776: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D0787u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D0787: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D07AE; /* je: equal / zero */

loc_001D078B: ;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    ecx = esi + 4;
    MEM32(eax) = 0x7F0DB0;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0;
    goto loc_001D07B0;

loc_001D07AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D07B0: ;
    edx = MEM32(esi + 0x1B8);
    MEM32(esi + edx * 4 + 0x1A0) = eax;
    MEM32(esi + 0x1B8) = MEM32(esi + 0x1B8) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = 2;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D07E2u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D07E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D07FC; /* je: equal / zero */

loc_001D07E6: ;
    PUSH32(esp, 0x8C);
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0x001D07F4u); RECOMP_ABI_CALL(0x000177A2u, sub_000177A2); /* call 0x000177A2 */

loc_001D07F4: ;
    MEM32(esi) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001D07FC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001D0806: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D0840
 * Original: 0x001D0840 - 0x001D08C4 (132 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0840: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 4);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    esi = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    eax = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001D08B0; /* je: equal / zero */

loc_001D0860: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001D0894; /* je: equal / zero */

loc_001D0863: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001D0878; /* je: equal / zero */

loc_001D0866: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = ecx;
    esp += 8; return; /* ret 4 */

loc_001D0878: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D0884u); RECOMP_ABI_CALL(0x00035FD6u, sub_00035FD6); /* call 0x00035FD6 */

loc_001D0884: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = ecx;
    esp += 8; return; /* ret 4 */

loc_001D0894: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D08A0u); RECOMP_ABI_CALL(0x00020131u, sub_00020131); /* call 0x00020131 */

loc_001D08A0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = ecx;
    esp += 8; return; /* ret 4 */

loc_001D08B0: ;
    eax = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, eax (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D08F0
 * Original: 0x001D08F0 - 0x001D09FC (268 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D08F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D08F0: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6A31);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(0x8F6B76);
    MEM32(esi + 4) = ecx;
    edx = (uint32_t)(int32_t)SMEM16(0x8F6B74);
    MEM32(esi + 8) = edx;
    eax = (uint32_t)(int32_t)SMEM16(0x8F6BA4);
    MEM32(esi + 0xC) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(0x8F6B92);
    MEM32(esi + 0x10) = ecx;
    edx = (uint32_t)(int32_t)SMEM16(0x8F6B88);
    MEM32(esi + 0x14) = edx;
    eax = (uint32_t)(int32_t)SMEM16(0x8F6B8A);
    MEM32(esi + 0x18) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(0x8F6B7C);
    PUSH32(esp, 0);
    MEM32(esi + 0x1C) = ecx;
    PUSH32(esp, 0x001D094Bu); RECOMP_ABI_CALL(0x0002EE0Cu, sub_0002EE0C); /* call 0x0002EE0C */

loc_001D094B: ;
    MEM32(esi + 0x20) = eax;
    edx = (uint32_t)(int32_t)SMEM8(0x8F6A32);
    MEM32(esi + 0x24) = edx;
    eax = (uint32_t)(int32_t)SMEM16(0x8F6BD2);
    MEM32(esi + 0x28) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(0x8F6BD0);
    MEM32(esi + 0x2C) = ecx;
    edx = (uint32_t)(int32_t)SMEM16(0x8F6C00);
    MEM32(esi + 0x30) = edx;
    eax = (uint32_t)(int32_t)SMEM16(0x8F6BEE);
    MEM32(esi + 0x34) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(0x8F6BE4);
    MEM32(esi + 0x38) = ecx;
    edx = (uint32_t)(int32_t)SMEM16(0x8F6BE6);
    MEM32(esi + 0x3C) = edx;
    eax = (uint32_t)(int32_t)SMEM16(0x8F6BD8);
    PUSH32(esp, 1);
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0x001D09A5u); RECOMP_ABI_CALL(0x0002EE0Cu, sub_0002EE0C); /* call 0x0002EE0C */

loc_001D09A5: ;
    MEM32(esi + 0x44) = eax;
    SET_LO8(eax, MEM8(0x8F6C09));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D09D8; /* jne: not equal / not zero */

loc_001D09B4: ;
    SET_LO8(eax, MEM8(0x8F6BAD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D09D8; /* jne: not equal / not zero */

loc_001D09BD: ;
    SET_LO8(eax, MEM8(0x8F6C0D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D09D8; /* jne: not equal / not zero */

loc_001D09C6: ;
    SET_LO8(eax, MEM8(0x8F6BB1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D09D8; /* jne: not equal / not zero */

loc_001D09CF: ;
    MEM32(esi + 0x48) = 0;
    goto loc_001D09DF;

loc_001D09D8: ;
    MEM32(esi + 0x48) = 1;

loc_001D09DF: ;
    ecx = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x50) = ecx;
    edx = MEM32(0x8F6A68);
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x4C) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0A40
 * Original: 0x001D0A40 - 0x001D0BF3 (435 bytes, 154 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D0A40: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(esp + 0x64));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(0x8B3FE4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x8B3FE4) = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0x40;
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D0A76; /* je: equal / zero */

loc_001D0A6E: ;
    MEM32(esp + 0x60) = MEM32(esp + 0x60) | 0x80;
    _fa = (uint32_t)(MEM32(esp + 0x60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001D0A76: ;
    SET_LO8(eax, MEM8(esp + 0x60));
    ebx = MEM32(esp + 0x64);
    edi = MEM32(esp + 0x68);
    MEM8(esp + 0x1C) = LO8(eax);
    eax = 2;
    MEM8(esp + 0x1D) = LO8(ebx);
    MEM32(esp + 0x14) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D0A95: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D0ADC; /* jge: greater or equal (signed >=) */

loc_001D0A99: ;
    SET_LO8(edx, MEM8(esp + 0x74));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0AAE; /* je: equal / zero */

loc_001D0AA1: ;
    SET_LO8(edx, MEM8(edi + esi * 4));
    MEM8(ecx + eax) = LO8(edx);
    eax = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001D0ACE;

loc_001D0AAE: ;
    edx = MEM32(edi + esi * 4);
    MEM32(esp + 0x60) = edx;
    PUSH32(esp, 4);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D0AC4u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_001D0AC4: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D0ACE: ;
    ecx = MEM32(esp + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001D0A95; /* jl: less (signed <) */

loc_001D0ADC: ;
    esi = 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D0B12; /* jle: less or equal (signed <=) */

loc_001D0AE5: ;
    edx = MEM32(edi + esi * 4);
    MEM32(esp + 0x74) = edx;
    PUSH32(esp, 4);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D0AFBu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_001D0AFB: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001D0AE5; /* jl: less (signed <) */

loc_001D0B12: ;
    ebx = MEM32(esp + 0x6C);
    MEM8(ecx + eax) = LO8(ebx);
    eax = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001D0B46; /* jle: less or equal (signed <=) */

loc_001D0B28: ;
    edi = MEM32(esp + 0x70);
    /* nop */

loc_001D0B30: ;
    eax = MEM32(edi + esi * 4);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001D0B3Du); RECOMP_ABI_CALL(0x0001C3F6u, sub_0001C3F6); /* call 0x0001C3F6 */

loc_001D0B3D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0B30; /* jl: less (signed <) */

loc_001D0B42: ;
    eax = MEM32(esp + 0x14);

loc_001D0B46: ;
    SET_LO8(ecx, MEM8(ebp + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0BBC; /* je: equal / zero */

loc_001D0B4D: ;
    ecx = MEM32(ebp + 0x4C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D0B8F; /* jl: less (signed <) */

loc_001D0B57: ;
    ebx = MEM32(0x8B3FE8);
    PUSH32(esp, 0);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x8B3FE8) = ebx;
    eax = MEM32(ebp + 0x4C);
    edx = MEM32(ebp + 0x50);
    ecx = MEM32(ebp + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C42F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D0B84u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_001D0B84: ;
    eax = MEM32(esp + 0x14);
    MEM32(ebp + 0x4C) = 0;

loc_001D0B8F: ;
    edx = MEM32(ebp + 0x50);
    ebx = MEM32(ebp + 0x4C);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0x001D0BA5u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_001D0BA5: ;
    eax = MEM32(ebp + 0x4C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebp + 0x4C) = eax;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

loc_001D0BBC: ;
    esi = MEM32(0x8B3FE8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x8B3FE8) = esi;
    ecx = MEM32(ebp + 0x58);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8C42F0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D0BE7u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_001D0BE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001D0C60
 * Original: 0x001D0C60 - 0x001D0D59 (249 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0C60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F0DBC);
    edi = esi + 0xC;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi) = 0x7F0C44;
    PUSH32(esp, 0x001D0C88u); RECOMP_ABI_CALL(0x000243B2u, sub_000243B2); /* call 0x000243B2 */

loc_001D0C88: ;
    MEM32(edi) = 0x7F0D84;
    edi = 1;
    MEM32(esi) = 0x7F0D90;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM8(esi + 0x3C) = LO8(ebx);
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    MEM32(esi + 0x60) = ebx;
    PUSH32(esp, 0x001D0CC8u); RECOMP_ABI_CALL(0x0002CE86u, sub_0002CE86); /* call 0x0002CE86 */

loc_001D0CC8: ;
    PUSH32(esp, 0x001D0CCDu); RECOMP_ABI_CALL(0x0001EEB2u, sub_0001EEB2); /* call 0x0001EEB2 */

loc_001D0CCD: ;
    eax = MEM32(0x8F44F4);
    edx = MEM32(eax);
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x30000);
    PUSH32(esp, 0x20000);
    MEM32(eax) = edx;
    PUSH32(esp, 0x001D0CE7u); RECOMP_ABI_CALL(0x005CC92Bu, sub_005CC92B); /* call 0x005CC92B */

loc_001D0CE7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D0CEEu); RECOMP_ABI_CALL(0x005CC92Bu, sub_005CC92B); /* call 0x005CC92B */

loc_001D0CEE: ;
    ecx = MEM32(0x8FC63C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x60);
    PUSH32(esp, ebx);
    MEM32(0x8F24E8) = ebx;
    PUSH32(esp, 0x001D0D06u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D0D06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0D40; /* je: equal / zero */

loc_001D0D0A: ;
    MEM32(eax) = 0x7F0D9C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax + 4;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    edx = eax + 0x14;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(eax + 0x24) = 0x1398;
    MEM32(eax + 0x2C) = edi;
    MEM32(eax + 0x28) = edi;
    MEM32(eax + 0x5C) = ebx;
    goto loc_001D0D42;

loc_001D0D40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D0D42: ;
    MEM32(esi + 0x54) = eax;
    ecx = MEM32(0x8FC62C);
    POP32(esp, edi);
    MEM32(ecx + 0x80) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0DA0
 * Original: 0x001D0DA0 - 0x001D0DC1 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0DA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D0DA8u); RECOMP_ABI_CALL(0x0002ADF2u, sub_0002ADF2); /* call 0x0002ADF2 */

loc_001D0DA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D0DBB; /* je: equal / zero */

loc_001D0DAF: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D0DBBu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001D0DBB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0DD0
 * Original: 0x001D0DD0 - 0x001D0DFB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0DD0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi) = 0x7F0CFC;
    MEM8(esi + 0x14) = LO8(eax);
    ecx = MEM32(0x8FC630);
    PUSH32(esp, 0x001D0DF2u); RECOMP_ABI_CALL(0x000147B9u, sub_000147B9); /* call 0x000147B9 */

loc_001D0DF2: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esi + 0xC) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0E10
 * Original: 0x001D0E10 - 0x001D0E27 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0E10: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x7F0DC8;
    MEM32(eax + 0xC) = ecx;
    MEM8(eax + 0x10) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D0E30
 * Original: 0x001D0E30 - 0x001D0E52 (34 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0E30: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F0C44;
    if (TEST_Z(_fa, _fb)) goto loc_001D0E4C; /* je: equal / zero */

loc_001D0E40: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D0E4Cu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001D0E4C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D0E60
 * Original: 0x001D0E60 - 0x001D0E99 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0E60: ;
    eax = MEM32(0x8F4508);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0E98; /* jne: not equal / not zero */

loc_001D0E69: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x001D0E70u); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_001D0E70: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0E8E; /* je: equal / zero */

loc_001D0E77: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001D0E88u); RECOMP_ABI_CALL(0x000345BEu, sub_000345BE); /* call 0x000345BE */

loc_001D0E88: ;
    MEM32(0x8F4508) = eax;
    esp += 4; return; /* ret */

loc_001D0E8E: ;
    MEM32(0x8F4508) = 0;

loc_001D0E98: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D0EB0
 * Original: 0x001D0EB0 - 0x001D0F13 (99 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0EB0: ;
    eax = MEM32(0x8F451C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0F10; /* jne: not equal / not zero */

loc_001D0EB9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x634);
    PUSH32(esp, 0x001D0EC4u); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_001D0EC4: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0F02; /* je: equal / zero */

loc_001D0ECD: ;
    PUSH32(esp, 0x20);
    eax = esi + 0x610;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 0x630) = eax;
    PUSH32(esp, 0x001D0EE3u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001D0EE3: ;
    ecx = MEM32(esi + 0x630);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D0EF1u); RECOMP_ABI_CALL(0x0059E463u, sub_0059E463); /* call 0x0059E463 */

loc_001D0EF1: ;
    ecx = esi;
    PUSH32(esp, 0x001D0EF8u); RECOMP_ABI_CALL(0x0002C459u, sub_0002C459); /* call 0x0002C459 */

loc_001D0EF8: ;
    MEM32(0x8F451C) = esi;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D0F02: ;
    MEM32(0x8F451C) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D0F10: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D0F30
 * Original: 0x001D0F30 - 0x001D0F5C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0F30: ;
    eax = MEM32(0x8F451C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0F5B; /* je: equal / zero */

loc_001D0F39: ;
    ecx = MEM32(eax + 0x630);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x001D0F47u); RECOMP_ABI_CALL(0x0059E46Eu, sub_0059E46E); /* call 0x0059E46E */

loc_001D0F47: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D0F4Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D0F4D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F451C) = 0;
    POP32(esp, esi);

loc_001D0F5B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D0F70
 * Original: 0x001D0F70 - 0x001D0FD3 (99 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0F70: ;
    eax = MEM32(0x8F4520);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D0FD0; /* jne: not equal / not zero */

loc_001D0F79: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5474);
    PUSH32(esp, 0x001D0F84u); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_001D0F84: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D0FC2; /* je: equal / zero */

loc_001D0F8D: ;
    PUSH32(esp, 0x20);
    eax = esi + 0x5450;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 0x5470) = eax;
    PUSH32(esp, 0x001D0FA3u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001D0FA3: ;
    ecx = MEM32(esi + 0x5470);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D0FB1u); RECOMP_ABI_CALL(0x0059E463u, sub_0059E463); /* call 0x0059E463 */

loc_001D0FB1: ;
    ecx = esi;
    PUSH32(esp, 0x001D0FB8u); RECOMP_ABI_CALL(0x0002EB41u, sub_0002EB41); /* call 0x0002EB41 */

loc_001D0FB8: ;
    MEM32(0x8F4520) = esi;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D0FC2: ;
    MEM32(0x8F4520) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D0FD0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D0FF0
 * Original: 0x001D0FF0 - 0x001D101C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D0FF0: ;
    eax = MEM32(0x8F4520);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D101B; /* je: equal / zero */

loc_001D0FF9: ;
    ecx = MEM32(eax + 0x5470);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x001D1007u); RECOMP_ABI_CALL(0x0059E46Eu, sub_0059E46E); /* call 0x0059E46E */

loc_001D1007: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D100Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D100D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F4520) = 0;
    POP32(esp, esi);

loc_001D101B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D1030
 * Original: 0x001D1030 - 0x001D1066 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1030: ;
    eax = MEM32(0x8F44F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1065; /* jne: not equal / not zero */

loc_001D1039: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D104Au); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D104A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D105B; /* je: equal / zero */

loc_001D104E: ;
    ecx = eax;
    PUSH32(esp, 0x001D1055u); RECOMP_ABI_CALL(0x000124AAu, sub_000124AA); /* call 0x000124AA */

loc_001D1055: ;
    MEM32(0x8F44F4) = eax;
    esp += 4; return; /* ret */

loc_001D105B: ;
    MEM32(0x8F44F4) = 0;

loc_001D1065: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D1080
 * Original: 0x001D1080 - 0x001D10C3 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1080: ;
    eax = MEM32(0x8F44F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D10C2; /* je: equal / zero */

loc_001D1089: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x8F44F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D10AB; /* je: equal / zero */

loc_001D1095: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D10A1u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001D10A1: ;
    MEM32(0x8F44F8) = 0;

loc_001D10AB: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D10B7u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001D10B7: ;
    MEM32(0x8F44F4) = 0;
    POP32(esp, esi);

loc_001D10C2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D10E0
 * Original: 0x001D10E0 - 0x001D1384 (676 bytes, 199 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D10E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D10E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D1104; /* je: equal / zero */

loc_001D10F3: ;
    MEM32(esi + 0x14) = 0x7F0E10;
    MEM32(esi + 0x1C0) = 0x7F0C5C;

loc_001D1104: ;
    MEM32(esi + 4) = 0x7F0C74;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 8) = 0x7F0C44;
    eax = MEM32(esi + 0x14);
    MEM32(esi) = 0x7F0DFC;
    MEM32(esi + 4) = 0x7F0DF8;
    MEM32(esi + 8) = 0x7F0DEC;
    ecx = MEM32(eax + 4);
    MEM32(ecx + esi + 0x14) = 0x7F0DD4;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 4);
    ecx = eax + -428;
    MEM32(eax + esi + 0x10) = ecx;
    ecx = esi + 0x62;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    PUSH32(esp, 0x001D115Bu); RECOMP_ABI_CALL(0x0002312Eu, sub_0002312E); /* call 0x0002312E */

loc_001D115B: ;
    ecx = esi + 0xEE;
    PUSH32(esp, 0x001D1166u); RECOMP_ABI_CALL(0x0002312Eu, sub_0002312E); /* call 0x0002312E */

loc_001D1166: ;
    edx = MEM32(0x8F24EC);
    MEM32(esi + 0x188) = edx;
    MEM32(esi + 0x18C) = ebx;
    MEM32(esi + 0x190) = ebx;
    MEM32(esi + 0x1B8) = ebx;
    _fa = (uint32_t)(MEM32(0x8F4500)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F4500), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D137C; /* jne: not equal / not zero */

loc_001D1190: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(0x8F44FC) = esi;
    PUSH32(esp, 0x001D119Du); RECOMP_ABI_CALL(0x00014CAAu, sub_00014CAA); /* call 0x00014CAA */

loc_001D119D: ;
    ecx = MEM32(0x8F451C);
    PUSH32(esp, 0x001D11A8u); RECOMP_ABI_CALL(0x0002C459u, sub_0002C459); /* call 0x0002C459 */

loc_001D11A8: ;
    PUSH32(esp, 0x8C);
    eax = esi + 0x58;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D11B7u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001D11B7: ;
    PUSH32(esp, 0x8C);
    ecx = esi + 0xE4;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D11C9u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001D11C9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x44);
    MEM32(esi + 0x3C) = ebx;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D11DEu); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D11DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ebp = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001D11F3; /* je: equal / zero */

loc_001D11E7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x14);
    ecx = eax;
    PUSH32(esp, 0x001D11F1u); RECOMP_ABI_CALL(0x00013DF5u, sub_00013DF5); /* call 0x00013DF5 */

loc_001D11F1: ;
    goto loc_001D11F5;

loc_001D11F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D11F5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x44);
    MEM32(esi + 0x40) = eax;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D1207u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D1207: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1217; /* je: equal / zero */

loc_001D120B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x14);
    ecx = eax;
    PUSH32(esp, 0x001D1215u); RECOMP_ABI_CALL(0x00013DF5u, sub_00013DF5); /* call 0x00013DF5 */

loc_001D1215: ;
    goto loc_001D1219;

loc_001D1217: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D1219: ;
    ecx = MEM32(esi + 0x188);
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x18) = ebx;
    MEM8(esi + 0x28) = 1;
    MEM8(esi + 0x29) = LO8(ebx);
    MEM8(esi + 0x2A) = LO8(ebx);
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 0x20) = ebp;
    MEM32(esi + 0x24) = ebx;
    MEM8(esi + 0x34) = LO8(ebx);
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0x184) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001D1297; /* je: equal / zero */

loc_001D124B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    edi = esi + 0x178;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x170) = ebp;
    MEM32(esi + 0x174) = ebp;
    MEM32(edi) = ebx;
    MEM32(esi + 0x17C) = ebp;
    PUSH32(esp, 0x001D1270u); RECOMP_ABI_CALL(0x00030B3Au, sub_00030B3A); /* call 0x00030B3A */

loc_001D1270: ;
    edx = MEM32(edi);
    eax = edx;
    MEM32(esi + 0x30) = edx;
    MEM32(edi) = ebx;
    MEM32(esi + 0x17C) = eax;
    PUSH32(esp, 0x001D1284u); RECOMP_ABI_CALL(0x0002BB58u, sub_0002BB58); /* call 0x0002BB58 */

loc_001D1284: ;
    ecx = MEM32(0x8F4520);
    PUSH32(esp, 0x001D128Fu); RECOMP_ABI_CALL(0x0002EB41u, sub_0002EB41); /* call 0x0002EB41 */

loc_001D128F: ;
    MEM32(esi + 0x180) = ebp;
    goto loc_001D129A;

loc_001D1297: ;
    MEM32(esi + 0x30) = ebx;

loc_001D129A: ;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    SET_LO8(eax, MEM8(esi + 0x184));
    POP32(esp, edi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    eax = MEM32(esi + 0x188);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_001D12C3; /* je: equal / zero */

loc_001D12B5: ;
    ecx = MEM32(eax + 0x28);
    MEM32(esi + 0x18C) = ecx;
    edx = MEM32(eax + 0x28);
    goto loc_001D12CF;

loc_001D12C3: ;
    ecx = MEM32(eax + 0x2C);
    MEM32(esi + 0x18C) = ecx;
    edx = MEM32(eax + 0x2C);

loc_001D12CF: ;
    eax = MEM32(edx + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    PUSH32(esp, 0x8C42E8);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    ecx = eax;
    MEM32(esi + 0x190) = eax;
    PUSH32(esp, 0x001D12EBu); RECOMP_ABI_CALL(0x00017C39u, sub_00017C39); /* call 0x00017C39 */

loc_001D12EB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    MEM32(esi + 0x194) = eax;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D1300u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D1300: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1314; /* je: equal / zero */

loc_001D1304: ;
    PUSH32(esp, 0x8C);
    PUSH32(esp, 5);
    ecx = eax;
    PUSH32(esp, 0x001D1312u); RECOMP_ABI_CALL(0x000177A2u, sub_000177A2); /* call 0x000177A2 */

loc_001D1312: ;
    goto loc_001D1316;

loc_001D1314: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D1316: ;
    ecx = MEM32(esi + 0x190);
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 5);
    PUSH32(esp, 0x001D1329u); RECOMP_ABI_CALL(0x00017C39u, sub_00017C39); /* call 0x00017C39 */

loc_001D1329: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    MEM32(esi + 0x198) = eax;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D133Eu); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D133E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1352; /* je: equal / zero */

loc_001D1342: ;
    PUSH32(esp, 0x8C);
    PUSH32(esp, 0x15);
    ecx = eax;
    PUSH32(esp, 0x001D1350u); RECOMP_ABI_CALL(0x000177A2u, sub_000177A2); /* call 0x000177A2 */

loc_001D1350: ;
    goto loc_001D1354;

loc_001D1352: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D1354: ;
    ecx = MEM32(esi + 0x190);
    PUSH32(esp, esi);
    PUSH32(esp, 0x15);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 6);
    PUSH32(esp, 0x001D1367u); RECOMP_ABI_CALL(0x00017C39u, sub_00017C39); /* call 0x00017C39 */

loc_001D1367: ;
    ecx = MEM32(esi + 0x18C);
    MEM32(esi + 0x19C) = eax;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D137Cu); RECOMP_ABI_CALL(0x0002C440u, sub_0002C440); /* call 0x0002C440 */

loc_001D137C: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D1430
 * Original: 0x001D1430 - 0x001D1433 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1430: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D1440
 * Original: 0x001D1440 - 0x001D1448 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1440: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000169CE(); return; /* tail jmp 0x000169CE */

}

/**
 * sub_001D1450
 * Original: 0x001D1450 - 0x001D145E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1450: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000169CE(); return; /* tail jmp 0x000169CE */

}

/**
 * sub_001D1470
 * Original: 0x001D1470 - 0x001D1478 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1470: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00032377(); return; /* tail jmp 0x00032377 */

}

/**
 * sub_001D1480
 * Original: 0x001D1480 - 0x001D1488 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1480: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000187E7(); return; /* tail jmp 0x000187E7 */

}

/**
 * sub_001D1490
 * Original: 0x001D1490 - 0x001D1603 (371 bytes, 108 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1490: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    MEM32(esi) = 0x7F0DFC;
    MEM32(esi + 4) = 0x7F0DF8;
    MEM32(esi + 8) = 0x7F0DEC;
    ecx = MEM32(eax + 4);
    ebp = esi + 8;
    MEM32(ecx + esi + 0x14) = 0x7F0DD4;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 4);
    ecx = eax + -428;
    MEM32(eax + esi + 0x10) = ecx;
    eax = MEM32(0x8F4500);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D15F2; /* je: equal / zero */

loc_001D14D9: ;
    eax = MEM32(0x8F451C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(0x8F44FC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D1505; /* je: equal / zero */

loc_001D14E9: ;
    ecx = MEM32(eax + 0x630);
    edi = eax;
    PUSH32(esp, 0x001D14F6u); RECOMP_ABI_CALL(0x0059E46Eu, sub_0059E46E); /* call 0x0059E46E */

loc_001D14F6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D14FCu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D14FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F451C) = ebx;

loc_001D1505: ;
    _fa = (uint32_t)(MEM8(esi + 0x184)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x184), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1532; /* je: equal / zero */

loc_001D150D: ;
    eax = MEM32(0x8F4520);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1532; /* je: equal / zero */

loc_001D1516: ;
    ecx = MEM32(eax + 0x5470);
    edi = eax;
    PUSH32(esp, 0x001D1523u); RECOMP_ABI_CALL(0x0059E46Eu, sub_0059E46E); /* call 0x0059E46E */

loc_001D1523: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D1529u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D1529: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F4520) = ebx;

loc_001D1532: ;
    ecx = MEM32(esi + 0x18C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001D153Eu); RECOMP_ABI_CALL(0x0001F227u, sub_0001F227); /* call 0x0001F227 */

loc_001D153E: ;
    edx = MEM32(esi + 0x194);
    ecx = MEM32(esi + 0x190);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D1550u); RECOMP_ABI_CALL(0x00020CA8u, sub_00020CA8); /* call 0x00020CA8 */

loc_001D1550: ;
    eax = MEM32(esi + 0x198);
    ecx = MEM32(esi + 0x190);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D1562u); RECOMP_ABI_CALL(0x00020CA8u, sub_00020CA8); /* call 0x00020CA8 */

loc_001D1562: ;
    ecx = MEM32(esi + 0x19C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x190);
    PUSH32(esp, 0x001D1574u); RECOMP_ABI_CALL(0x00020CA8u, sub_00020CA8); /* call 0x00020CA8 */

loc_001D1574: ;
    eax = MEM32(esi + 0x1B8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D15A2; /* jle: less or equal (signed <=) */

loc_001D1580: ;
    ebp = esi + 0x1A0;

loc_001D1586: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1594; /* je: equal / zero */

loc_001D158D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001D1594u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1591u); } /* indirect call */
    }

loc_001D1594: ;
    eax = MEM32(esi + 0x1B8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D1586; /* jl: less (signed <) */

loc_001D15A2: ;
    ecx = MEM32(0x8F4508);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001D15BA; /* je: equal / zero */

loc_001D15AD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001D15B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D15B1u); } /* indirect call */
    }

loc_001D15B4: ;
    MEM32(0x8F4508) = ebx;

loc_001D15BA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D15C0u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_001D15C0: ;
    ecx = eax;
    PUSH32(esp, 0x001D15C7u); RECOMP_ABI_CALL(0x00022CF6u, sub_00022CF6); /* call 0x00022CF6 */

loc_001D15C7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001D15CEu); RECOMP_ABI_CALL(0x00020BD1u, sub_00020BD1); /* call 0x00020BD1 */

loc_001D15CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001D15D6u); RECOMP_ABI_CALL(0x00014BBAu, sub_00014BBA); /* call 0x00014BBA */

loc_001D15D6: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D15E4; /* je: equal / zero */

loc_001D15DD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001D15E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D15E1u); } /* indirect call */
    }

loc_001D15E4: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D15F2; /* je: equal / zero */

loc_001D15EB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001D15F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D15EFu); } /* indirect call */
    }

loc_001D15F2: ;
    MEM32(esi + 8) = 0x7F0C44;
    MEM32(esi) = 0x7F0C30;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D1660
 * Original: 0x001D1660 - 0x001D19D9 (889 bytes, 288 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1660: ;
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x184));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D167D; /* je: equal / zero */

loc_001D1676: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D167Du); RECOMP_ABI_CALL(0x000215FEu, sub_000215FE); /* call 0x000215FE */

loc_001D167D: ;
    ecx = esp + 0x16;
    PUSH32(esp, 0x001D1686u); RECOMP_ABI_CALL(0x0002312Eu, sub_0002312E); /* call 0x0002312E */

loc_001D1686: ;
    PUSH32(esp, 0x001D168Bu); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_001D168B: ;
    _fb = (uint32_t)(0x212) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x212;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8C);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D16A0u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_001D16A0: ;
    ecx = MEM32(esi + 0x18C);
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001D19C4; /* ja: above (unsigned >) */

loc_001D16BB: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x1D19DC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001D16C2u) goto loc_001D16C2;
    if (_jt == 0x001D1936u) goto loc_001D1936;
    if (_jt == 0x001D1987u) goto loc_001D1987;
    if (_jt == 0x001D19C4u) goto loc_001D19C4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001D16C2: ;
    ecx = MEM32(esi + 0x24);
    eax = ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1921; /* jne: not equal / not zero */

loc_001D16DB: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x40);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001D16EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D16E8u); } /* indirect call */
    }

loc_001D16EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D18D0; /* je: equal / zero */

loc_001D16F3: ;
    ecx = esp + 0x1C2;
    PUSH32(esp, 0x001D16FFu); RECOMP_ABI_CALL(0x0002312Eu, sub_0002312E); /* call 0x0002312E */

loc_001D16FF: ;
    ecx = esp + 0xAA;
    PUSH32(esp, 0x001D170Bu); RECOMP_ABI_CALL(0x0002312Eu, sub_0002312E); /* call 0x0002312E */

loc_001D170B: ;
    PUSH32(esp, 0x8C);
    ebx = esi + 0x58;
    ecx = esp + 0x1BC;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D1721u); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_001D1721: ;
    edx = MEM32(esi + 0x48);
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D1739; /* jle: less or equal (signed <=) */

loc_001D1732: ;
    MEM8(esp + 0x17) = 0xFF;
    goto loc_001D1743;

loc_001D1739: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fb = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esp + 0x17) = LO8(eax);

loc_001D1743: ;
    SET_LO8(ecx, MEM8(esi + 0x34));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x28));
    eax = esp + 0xA0;
    MEM8(esp + 0x16) = LO8(ecx);
    ecx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D1763u); RECOMP_ABI_CALL(0x000147D7u, sub_000147D7); /* call 0x000147D7 */

loc_001D1763: ;
    SET_LO8(ecx, MEM8(esi + 0x184));
    edi = MEM32(0x8F451C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D17CE; /* je: equal / zero */

loc_001D1776: ;
    ecx = esp + 0x136;
    ebp = eax;
    PUSH32(esp, 0x001D1784u); RECOMP_ABI_CALL(0x0002312Eu, sub_0002312E); /* call 0x0002312E */

loc_001D1784: ;
    PUSH32(esp, 5);
    edx = esp + 0x130;
    PUSH32(esp, edx);
    ecx = edi;
    MEM8(esp + 0x134) = 5;
    MEM8(esp + 0x135) = 0x20;
    PUSH32(esp, 0x001D17A5u); RECOMP_ABI_CALL(0x00024812u, sub_00024812); /* call 0x00024812 */

loc_001D17A5: ;
    ecx = esi + 0x178;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    eax = esp + 0x138;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F4520);
    PUSH32(esp, 0x001D17C5u); RECOMP_ABI_CALL(0x00013CCEu, sub_00013CCE); /* call 0x00013CCE */

loc_001D17C5: ;
    ecx = edi;
    PUSH32(esp, 0x001D17CCu); RECOMP_ABI_CALL(0x0002D89Fu, sub_0002D89F); /* call 0x0002D89F */

loc_001D17CC: ;
    goto loc_001D17E0;

loc_001D17CE: ;
    PUSH32(esp, eax);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001D17DEu); RECOMP_ABI_CALL(0x00024812u, sub_00024812); /* call 0x00024812 */

loc_001D17DE: ;
    ebp = eax;

loc_001D17E0: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x18C);
    PUSH32(esp, eax);
    MEM8(esp + 0xA8) = 0;
    MEM8(esp + 0x1C) = 0;
    PUSH32(esp, 0x001D17FCu); RECOMP_ABI_CALL(0x000203A2u, sub_000203A2); /* call 0x000203A2 */

loc_001D17FC: ;
    PUSH32(esp, ebp);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x19C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D1814u); RECOMP_ABI_CALL(0x00020A5Fu, sub_00020A5F); /* call 0x00020A5F */

loc_001D1814: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D18B6; /* jne: not equal / not zero */

loc_001D181C: ;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D182B; /* je: equal / zero */

loc_001D1823: ;
    MEM8(esi + 0x28) = 0;
    MEM8(esi + 0x29) = 1;

loc_001D182B: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D1838u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1835u); } /* indirect call */
    }

loc_001D1838: ;
    SET_LO8(eax, MEM8(esp + 0xA3));
    edx = MEM32(esi + 0x1C);
    ebx = MEM32(esi + 0x48);
    ecx = ZX8(LO8(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(esi + 0x34));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esi + 0x184));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x48) = ebx;
    MEM8(esi + 0x34) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001D1868; /* jne: not equal / not zero */

loc_001D1861: ;
    ecx = edi;
    PUSH32(esp, 0x001D1868u); RECOMP_ABI_CALL(0x0002D89Fu, sub_0002D89F); /* call 0x0002D89F */

loc_001D1868: ;
    ebx = MEM32(esi + 0x50);
    edx = MEM32(esi + 0x54);
    edi = esi + 0x4C;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = edx;
    PUSH32(esp, 0x001D1880u); RECOMP_ABI_CALL(0x000163BBu, sub_000163BB); /* call 0x000163BB */

loc_001D1880: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1924; /* je: equal / zero */

loc_001D1888: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D1924; /* jle: less or equal (signed <=) */

loc_001D1894: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x20) = eax;
    ecx = esi;
    MEM32(edi) = ebp;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebp;
    PUSH32(esp, 0x001D18ABu); RECOMP_ABI_CALL(0x000219A5u, sub_000219A5); /* call 0x000219A5 */

loc_001D18AB: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001D18B6: ;
    PUSH32(esp, 0x8C);
    eax = esp + 0x1BC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D18C9u); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_001D18C9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D18DB;

loc_001D18D0: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = eax;

loc_001D18DB: ;
    ebp = MEM32(esi + 0x4C);
    edx = MEM32(esi + 0x54);
    edi = esi + 0x4C;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    MEM32(edi) = ebp;
    MEM32(edi + 8) = edx;
    PUSH32(esp, 0x001D18F2u); RECOMP_ABI_CALL(0x0001E183u, sub_0001E183); /* call 0x0001E183 */

loc_001D18F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D190C; /* je: equal / zero */

loc_001D18F6: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D190C; /* jge: greater or equal (signed >=) */

loc_001D18FE: ;
    edx = eax + eax;
    MEM32(esi + 0x20) = edx;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;

loc_001D190C: ;
    ecx = esi;
    MEM32(esi + 0x24) = ebx;
    PUSH32(esp, 0x001D1916u); RECOMP_ABI_CALL(0x000219A5u, sub_000219A5); /* call 0x000219A5 */

loc_001D1916: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001D1921: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x48) = MEM32(esi + 0x48) + edi;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D1924: ;
    ecx = esi;
    PUSH32(esp, 0x001D192Bu); RECOMP_ABI_CALL(0x000219A5u, sub_000219A5); /* call 0x000219A5 */

loc_001D192B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001D1936: ;
    SET_LO8(ecx, MEM8(esi + 0x184));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1962; /* jne: not equal / not zero */

loc_001D1940: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, 4);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x198);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x001D1962u); RECOMP_ABI_CALL(0x00020A5Fu, sub_00020A5F); /* call 0x00020A5F */

loc_001D1962: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D196Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D196Cu); } /* indirect call */
    }

loc_001D196F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D197B; /* jne: not equal / not zero */

loc_001D1973: ;
    eax = MEM32(0x8F4508);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D197B: ;
    MEM32(esi + 0x48) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001D1987: ;
    PUSH32(esp, 0x8C);
    ecx = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D1997u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001D1997: ;
    ecx = MEM32(esi + 0x3C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    MEM8(esp + 0xC) = 0x6E;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D19ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D19A9u); } /* indirect call */
    }

loc_001D19AC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D197B; /* jne: not equal / not zero */

loc_001D19B0: ;
    eax = MEM32(0x8F4508);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x48) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001D19C4: ;
    eax = MEM32(0x8F4508);
    ecx = MEM32(eax + 0x24);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(eax + 0x24) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x234) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x234;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D1AD0
 * Original: 0x001D1AD0 - 0x001D1B41 (113 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1AD0: ;
    SET_LO8(eax, MEM8(0x8F4556));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1AE1; /* jne: not equal / not zero */

loc_001D1AD9: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1B3E; /* je: equal / zero */

loc_001D1AE1: ;
    ecx = MEM32(0x8F24EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1B3E; /* jne: not equal / not zero */

loc_001D1AEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1AF4; /* je: equal / zero */

loc_001D1AEF: ;
    PUSH32(esp, 0x001D1AF4u); RECOMP_ABI_CALL(0x0001E953u, sub_0001E953); /* call 0x0001E953 */

loc_001D1AF4: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D1B05u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D1B05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1B27; /* je: equal / zero */

loc_001D1B09: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x001D1B15u); RECOMP_ABI_CALL(0x0002EDDFu, sub_0002EDDF); /* call 0x0002EDDF */

loc_001D1B15: ;
    PUSH32(esp, 1);
    MEM32(0x8F24EC) = eax;
    PUSH32(esp, 0x001D1B21u); RECOMP_ABI_CALL(0x00014E8Fu, sub_00014E8F); /* call 0x00014E8F */

loc_001D1B21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001D1B27: ;
    PUSH32(esp, 1);
    MEM32(0x8F24EC) = 0;
    PUSH32(esp, 0x001D1B38u); RECOMP_ABI_CALL(0x00014E8Fu, sub_00014E8F); /* call 0x00014E8F */

loc_001D1B38: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001D1B3E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D1B60
 * Original: 0x001D1B60 - 0x001D1C26 (198 bytes, 69 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1B60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4C);
    edi = ecx;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D1B76u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D1B76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1B9B; /* je: equal / zero */

loc_001D1B7A: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE4A);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x001D1B99u); RECOMP_ABI_CALL(0x00022BDEu, sub_00022BDE); /* call 0x00022BDE */

loc_001D1B99: ;
    goto loc_001D1B9D;

loc_001D1B9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D1B9D: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 0x28) = eax;
    MEM32(edi + 0x2C) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edi + 0x4C) = ecx;
    MEM32(edi + 0x44) = edx;
    MEM32(edi + 0x48) = eax;
    eax = MEM32(0x8F44F4);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    ecx = ecx | 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x18);
    MEM32(eax) = ecx;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D1BD3u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D1BD3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1BFD; /* je: equal / zero */

loc_001D1BD9: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi) = 0x7F0CFC;
    MEM8(esi + 0x14) = LO8(ebx);
    ecx = MEM32(0x8FC630);
    PUSH32(esp, 0x001D1BF6u); RECOMP_ABI_CALL(0x000147B9u, sub_000147B9); /* call 0x000147B9 */

loc_001D1BF6: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esi + 0xC) = eax;
    goto loc_001D1BFF;

loc_001D1BFD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D1BFF: ;
    MEM32(edi + 0x60) = esi;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D1C0Eu); RECOMP_ABI_CALL(0x0001B70Du, sub_0001B70D); /* call 0x0001B70D */

loc_001D1C0E: ;
    MEM8(esi + 0x14) = 1;
    PUSH32(esp, 0x001D1C17u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_001D1C17: ;
    ecx = eax;
    PUSH32(esp, 0x001D1C1Eu); RECOMP_ABI_CALL(0x0001E692u, sub_0001E692); /* call 0x0001E692 */

loc_001D1C1E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001D1C60
 * Original: 0x001D1C60 - 0x001D1CA8 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1C60: ;
    eax = MEM32(0x8F44F0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1CA4; /* jne: not equal / not zero */

loc_001D1C6C: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001D1C7Bu); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D1C7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1C9A; /* je: equal / zero */

loc_001D1C7F: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM8(eax + 0x10) = LO8(ebx);
    MEM32(eax) = 0x7F0DC8;
    MEM32(0x8F44F0) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001D1C9A: ;
    MEM32(0x8F44F0) = ebx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001D1CA4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D1CC0
 * Original: 0x001D1CC0 - 0x001D1D09 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1CC0: ;
    PUSH32(esp, 0x001D1CC5u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_001D1CC5: ;
    SET_LO8(ecx, MEM8(eax + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1D08; /* je: equal / zero */

loc_001D1CCC: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D1CE0u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D1CE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1CF1; /* je: equal / zero */

loc_001D1CE4: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x001D1CEDu); RECOMP_ABI_CALL(0x0001381Eu, sub_0001381E); /* call 0x0001381E */

loc_001D1CED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1CF9; /* jne: not equal / not zero */

loc_001D1CF1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F4500) = eax;
    esp += 4; return; /* ret */

loc_001D1CF9: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 4);
    eax = edx + eax + 0x14;
    MEM32(0x8F4500) = eax;

loc_001D1D08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D1D20
 * Original: 0x001D1D20 - 0x001D1D70 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D1D20: ;
    MEM32(ecx + 0xC) = 4;
    PUSH32(esp, 0x001D1D2Cu); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_001D1D2C: ;
    SET_LO8(ecx, MEM8(eax + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1D6F; /* je: equal / zero */

loc_001D1D33: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D1D47u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D1D47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1D58; /* je: equal / zero */

loc_001D1D4B: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x001D1D54u); RECOMP_ABI_CALL(0x0001381Eu, sub_0001381E); /* call 0x0001381E */

loc_001D1D54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1D60; /* jne: not equal / not zero */

loc_001D1D58: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F4500) = eax;
    esp += 4; return; /* ret */

loc_001D1D60: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 4);
    eax = edx + eax + 0x14;
    MEM32(0x8F4500) = eax;

loc_001D1D6F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D1D90
 * Original: 0x001D1D90 - 0x001D1DD7 (71 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1D90: ;
    ecx = MEM32(0x8F44FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1DAA; /* je: equal / zero */

loc_001D1D9A: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1DBB; /* je: equal / zero */

loc_001D1DA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001D1DB1; /* jg: greater (signed >) */

loc_001D1DA9: ;
    POP32(esp, esi);

loc_001D1DAA: ;
    esp += 4; return; /* ret */

loc_001D1DAB: ;
    ecx = MEM32(0x8F44FC);

loc_001D1DB1: ;
    PUSH32(esp, 0x001D1DB6u); RECOMP_ABI_CALL(0x00020979u, sub_00020979); /* call 0x00020979 */

loc_001D1DB6: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D1DAB; /* jne: not equal / not zero */

loc_001D1DB9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D1DBB: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D1DAA; /* jle: less or equal (signed <=) */

loc_001D1DC3: ;
    edx = MEM32(ecx + 0x48);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x48) = edx;
    ecx = MEM32(0x8F44FC);
    g_seh_ebp = ebp; sub_00020979(); return; /* tail jmp 0x00020979 */

}

/**
 * sub_001D1DF0
 * Original: 0x001D1DF0 - 0x001D1F54 (356 bytes, 111 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D1DF0: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xA4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM8(esp + 0x13) = 0;
    MEM32(edi + 0x58) = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_001D1E66; /* je: equal / zero */

loc_001D1E1B: ;
    edi = MEM32(esp + 0xB4);
    ecx = MEM32(0x8FC63C);
    ebp = edi + 1;
    PUSH32(esp, 0x100);
    eax = ebp * 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D1E3Eu); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D1E3E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001D1E53; /* jle: less or equal (signed <=) */

loc_001D1E44: ;
    ecx = ebx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D1E48: ;
    edx = MEM32(ecx + eax);
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D1E48; /* jne: not equal / not zero */

loc_001D1E53: ;
    ecx = MEM32(0x8FC62C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001D1E5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1E5Bu); } /* indirect call */
    }

loc_001D1E5E: ;
    edi = MEM32(esp + 0x14);
    MEM32(esi + ebp * 4 + -4) = eax;

loc_001D1E66: ;
    ecx = MEM32(esp + 0xAC);
    edx = MEM32(esp + 0xA8);
    eax = MEM32(esp + 0xA4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001D1E8Fu); RECOMP_ABI_CALL(0x000338B2u, sub_000338B2); /* call 0x000338B2 */

loc_001D1E8F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1F2A; /* je: equal / zero */

loc_001D1E97: ;
    ecx = MEM32(0x8FC62C);
    edx = MEM32(ecx);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001D1EA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D1EA4u); } /* indirect call */
    }

loc_001D1EA7: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001D1EB8u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001D1EB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1EE5; /* je: equal / zero */

loc_001D1EBC: ;
    edx = MEM32(esp + 0xA0);
    PUSH32(esp, 0xBB8);
    PUSH32(esp, 7);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE4A);
    PUSH32(esp, 0xE4A);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001D1EE3u); RECOMP_ABI_CALL(0x000374E9u, sub_000374E9); /* call 0x000374E9 */

loc_001D1EE3: ;
    goto loc_001D1EE7;

loc_001D1EE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D1EE7: ;
    MEM32(edi + 0x2C) = eax;
    PUSH32(esp, 0x001D1EEFu); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_001D1EEF: ;
    ecx = eax;
    PUSH32(esp, 0x001D1EF6u); RECOMP_ABI_CALL(0x0001E692u, sub_0001E692); /* call 0x0001E692 */

loc_001D1EF6: ;
    ebp = MEM32(edi + 0x2C);
    ecx = ebp;
    PUSH32(esp, 0x001D1F00u); RECOMP_ABI_CALL(0x0002703Au, sub_0002703A); /* call 0x0002703A */

loc_001D1F00: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1F14; /* je: equal / zero */

loc_001D1F04: ;
    PUSH32(esp, 0x001D1F09u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_001D1F09: ;
    ecx = ebp;
    PUSH32(esp, 0x001D1F10u); RECOMP_ABI_CALL(0x0002703Au, sub_0002703A); /* call 0x0002703A */

loc_001D1F10: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1F04; /* jne: not equal / not zero */

loc_001D1F14: ;
    _fa = (uint32_t)(MEM32(ebp + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x48), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D1F25; /* jne: not equal / not zero */

loc_001D1F1A: ;
    ecx = edi;
    PUSH32(esp, 0x001D1F21u); RECOMP_ABI_CALL(0x0002D250u, sub_0002D250); /* call 0x0002D250 */

loc_001D1F21: ;
    SET_LO8(ebx, 1);
    goto loc_001D1F2E;

loc_001D1F25: ;
    MEM8(esp + 0x13) = 0;

loc_001D1F2A: ;
    SET_LO8(ebx, MEM8(esp + 0x13));

loc_001D1F2E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D1F3E; /* je: equal / zero */

loc_001D1F32: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D1F3Eu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001D1F3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    MEM8(0x8F6A2E) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_001D1FB0
 * Original: 0x001D1FB0 - 0x001D1FFE (78 bytes, 28 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1FB0(void)
{

loc_001D1FB0: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    esi = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0x58) = 1;
    PUSH32(esp, 0x001D1FE0u); RECOMP_ABI_CALL(0x000338B2u, sub_000338B2); /* call 0x000338B2 */

loc_001D1FE0: ;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x001D1FE9u); RECOMP_ABI_CALL(0x0002D250u, sub_0002D250); /* call 0x0002D250 */

loc_001D1FE9: ;
    ecx = esi;
    PUSH32(esp, 0x001D1FF0u); RECOMP_ABI_CALL(0x0002CADFu, sub_0002CADF); /* call 0x0002CADF */

loc_001D1FF0: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    MEM8(0x8F6A2E) = 1;
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001D2020
 * Original: 0x001D2020 - 0x001D2153 (307 bytes, 102 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2020: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 1;
    MEM32(ecx + 0xC) = ebx;
    eax = MEM32(0x8F24EC);
    esi = MEM32(0x8F44F8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x54);
    MEM32(esp + 0x10) = ecx;
    eax = edi + 4;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    PUSH32(esp, 0x10);
    ecx = esi + 0x19C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2060u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_001D2060: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi + 0x14;
    ebp = ecx;
    MEM32(ebp) = edx;
    MEM32(ebp + 4) = edx;
    eax = esi + 0x1BC;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = edx;
    MEM32(ebp + 0xC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D208C; /* je: equal / zero */

loc_001D2080: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D2089u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_001D2089: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D208C: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(edi + 0x28) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D20FD; /* je: equal / zero */

loc_001D2097: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D20B5; /* je: equal / zero */

loc_001D20A8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D20AEu); RECOMP_ABI_CALL(0x0001E17Eu, sub_0001E17E); /* call 0x0001E17E */

loc_001D20AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;

loc_001D20B5: ;
    SET_LO8(edx, MEM8(edi));
    ecx = MEM32(esp + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2136; /* jne: not equal / not zero */

loc_001D20C6: ;
    edi = MEM32(0x8F24EC);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x21C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(edi + 0x58) = ebx;
    PUSH32(esp, 0x001D20E7u); RECOMP_ABI_CALL(0x000338B2u, sub_000338B2); /* call 0x000338B2 */

loc_001D20E7: ;
    ecx = edi;
    PUSH32(esp, 0x001D20EEu); RECOMP_ABI_CALL(0x0002D250u, sub_0002D250); /* call 0x0002D250 */

loc_001D20EE: ;
    ecx = edi;
    PUSH32(esp, 0x001D20F5u); RECOMP_ABI_CALL(0x0002CADFu, sub_0002CADF); /* call 0x0002CADF */

loc_001D20F5: ;
    MEM8(0x8F6A2E) = LO8(ebx);
    goto loc_001D2136;

loc_001D20FD: ;
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(0x8F24EC);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x23C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x23C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(edi + 0x58) = 2;
    PUSH32(esp, 0x001D211Du); RECOMP_ABI_CALL(0x0002366Fu, sub_0002366F); /* call 0x0002366F */

loc_001D211D: ;
    MEM8(edi + 0x5C) = LO8(ebx);
    edx = MEM32(0x8F24EC);
    ecx = MEM32(edx + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D212Fu); RECOMP_ABI_CALL(0x0002C440u, sub_0002C440); /* call 0x0002C440 */

loc_001D212F: ;
    MEM8(0x8F6A2E) = 2;

loc_001D2136: ;
    eax = MEM32(esp + 0x10);
    MEM8(eax + 0x10) = LO8(ebx);
    PUSH32(esp, eax);
    eax = MEM32(0x8F24EC);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, 0x001D214Bu); RECOMP_ABI_CALL(0x0002C440u, sub_0002C440); /* call 0x0002C440 */

loc_001D214B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D2078
 * Original: 0x001D2078 - 0x001D2153 (219 bytes, 71 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2078(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2078: ;
    MEM32(ebp + 8) = edx;
    MEM32(ebp + 0xC) = edx;
    if (_flags /* je: equal / zero */) goto loc_001D208C;

loc_001D2080: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D2089u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_001D2089: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D208C: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(edi + 0x28) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D20FD; /* je: equal / zero */

loc_001D2097: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001D20B5; /* je: equal / zero */

loc_001D20A8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D20AEu); RECOMP_ABI_CALL(0x0001E17Eu, sub_0001E17E); /* call 0x0001E17E */

loc_001D20AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;

loc_001D20B5: ;
    SET_LO8(edx, MEM8(edi));
    ecx = MEM32(esp + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2136; /* jne: not equal / not zero */

loc_001D20C6: ;
    edi = MEM32(0x8F24EC);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x21C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(edi + 0x58) = ebx;
    PUSH32(esp, 0x001D20E7u); RECOMP_ABI_CALL(0x000338B2u, sub_000338B2); /* call 0x000338B2 */

loc_001D20E7: ;
    ecx = edi;
    PUSH32(esp, 0x001D20EEu); RECOMP_ABI_CALL(0x0002D250u, sub_0002D250); /* call 0x0002D250 */

loc_001D20EE: ;
    ecx = edi;
    PUSH32(esp, 0x001D20F5u); RECOMP_ABI_CALL(0x0002CADFu, sub_0002CADF); /* call 0x0002CADF */

loc_001D20F5: ;
    MEM8(0x8F6A2E) = LO8(ebx);
    goto loc_001D2136;

loc_001D20FD: ;
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(0x8F24EC);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x23C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x23C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(edi + 0x58) = 2;
    PUSH32(esp, 0x001D211Du); RECOMP_ABI_CALL(0x0002366Fu, sub_0002366F); /* call 0x0002366F */

loc_001D211D: ;
    MEM8(edi + 0x5C) = LO8(ebx);
    edx = MEM32(0x8F24EC);
    ecx = MEM32(edx + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001D212Fu); RECOMP_ABI_CALL(0x0002C440u, sub_0002C440); /* call 0x0002C440 */

loc_001D212F: ;
    MEM8(0x8F6A2E) = 2;

loc_001D2136: ;
    eax = MEM32(esp + 0x10);
    MEM8(eax + 0x10) = LO8(ebx);
    PUSH32(esp, eax);
    eax = MEM32(0x8F24EC);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, 0x001D214Bu); RECOMP_ABI_CALL(0x0002C440u, sub_0002C440); /* call 0x0002C440 */

loc_001D214B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D21A0
 * Original: 0x001D21A0 - 0x001D21CB (43 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D21A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D21A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D21A8u); RECOMP_ABI_CALL(0x00025B6Du, sub_00025B6D); /* call 0x00025B6D */

loc_001D21A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi + 0x1C0) = 0x7F0C5C;
    if (TEST_Z(_fa, _fb)) goto loc_001D21C5; /* je: equal / zero */

loc_001D21B9: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D21C5u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001D21C5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D21E0
 * Original: 0x001D21E0 - 0x001D2271 (145 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D21E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D21E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001D21E8u); RECOMP_ABI_CALL(0x000112F8u, sub_000112F8); /* call 0x000112F8 */

loc_001D21E8: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x001D21EFu); RECOMP_ABI_CALL(0x00020BD1u, sub_00020BD1); /* call 0x00020BD1 */

loc_001D21EF: ;
    SET_LO8(ecx, MEM8(esi + -60));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D2202u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_001D2202: ;
    ecx = eax;
    PUSH32(esp, 0x001D2209u); RECOMP_ABI_CALL(0x00022CF6u, sub_00022CF6); /* call 0x00022CF6 */

loc_001D2209: ;
    eax = MEM32(0x8F4508);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D2237; /* jne: not equal / not zero */

loc_001D2212: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x001D2219u); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_001D2219: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D2230; /* je: equal / zero */

loc_001D2220: ;
    PUSH32(esp, 0x2689C);
    PUSH32(esp, 0x28);
    ecx = eax;
    PUSH32(esp, 0x001D222Eu); RECOMP_ABI_CALL(0x000345BEu, sub_000345BE); /* call 0x000345BE */

loc_001D222E: ;
    goto loc_001D2232;

loc_001D2230: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D2232: ;
    MEM32(0x8F4508) = eax;

loc_001D2237: ;
    MEM32(esi + -388) = eax;
    edx = MEM32(0x8BFE7C);
    ecx = 0x8BFE7C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001D224Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2248u); } /* indirect call */
    }

loc_001D224B: ;
    MEM32(esi + -404) = eax;
    MEM32(esi + -424) = 1;
    MEM32(esi + -376) = 0;
    MEM32(esi + -392) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D22A0
 * Original: 0x001D22A0 - 0x001D22A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D22A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D22A0: ;
    _fb = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ecx + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0002478B(); return; /* tail jmp 0x0002478B */

}

/**
 * sub_001D22B0
 * Original: 0x001D22B0 - 0x001D22C1 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D22B0(void)
{

loc_001D22B0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = eax + edx * 4;
    eax = ecx + eax * 4;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D22D0
 * Original: 0x001D22D0 - 0x001D22EF (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D22D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D22D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_MEM(eax); /* movaps */
    ecx = MEM32(ebp + 0xC);
    xmm1 = XMM_MEM(ecx); /* movaps */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2300
 * Original: 0x001D2300 - 0x001D231D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2300(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2300: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D2330
 * Original: 0x001D2330 - 0x001D2361 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2330: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(esp + 0xC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = eax;
    esi = MEM32(ecx);
    eax = MEM32(esp + 8);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2370
 * Original: 0x001D2370 - 0x001D2431 (193 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    esi = MEM32(ebp + 0x10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0 = XMM_SCALAR(MEMF(eax + esi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + esi + 0xC)); /* movss */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = 0x10;
    esi = esp + 0x10;
    edi = eax;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
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
 * sub_001D2470
 * Original: 0x001D2470 - 0x001D26A0 (560 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2470(void)
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

loc_001D2470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x78));
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x87DB50;
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
    ecx = MEM32(ebp + 0x10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x18) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x14) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = MEM32(eax + 0xC);
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x1C) = edx;
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    eax = esp + 0x40;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA840)); /* fmul dword ptr [0x7aa840] */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    edx = esp + 0x10;
    PUSH32(esp, eax);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AD374)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_001D25A7; /* jbe: below or equal (unsigned <=) */

loc_001D2589: ;
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    ecx = esp + 0x34;
    goto loc_001D25AB;

loc_001D25A7: ;
    ecx = esp + 0x24;

loc_001D25AB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D25B2u); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_001D25B2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 8); /* divss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    eax = esp + 0x50;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D2667u); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_001D2667: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x78) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x70) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = esp + 0x40;
    edi = eax;
    MEM32(esp + 0x68) = edx;
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

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D2730
 * Original: 0x001D2730 - 0x001D2996 (614 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2730(void)
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
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x78));
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x50)) >> 32) & 1);
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x10); /* movaps */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    XMM_STORE(esp + 0x10, xmm2); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001D283C; /* jnp: not parity */

loc_001D2824: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    xmm2 = XMM_MEM(esp + 0x10); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esp + 0x10, xmm2); /* movaps */

loc_001D283C: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = esp + 0x40;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA840)); /* fmul dword ptr [0x7aa840] */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = esp + 0x10;
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AD374)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_001D289D; /* jbe: below or equal (unsigned <=) */

loc_001D287F: ;
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    ecx = esp + 0x34;
    goto loc_001D28A1;

loc_001D289D: ;
    ecx = esp + 0x24;

loc_001D28A1: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D28A8u); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_001D28A8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 8); /* divss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    eax = esp + 0x50;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D295Du); RECOMP_ABI_CALL(0x0059F412u, sub_0059F412); /* call 0x0059F412 */

loc_001D295D: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x78) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x70) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = esp + 0x40;
    edi = eax;
    MEM32(esp + 0x68) = edx;
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

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D2A30
 * Original: 0x001D2A30 - 0x001D2A36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A30(void)
{

loc_001D2A30: ;
    eax = 0x8F4BD8;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2A40
 * Original: 0x001D2A40 - 0x001D2A46 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A40(void)
{

loc_001D2A40: ;
    MEM32(ecx) = ecx;
    MEM32(ecx + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2A50
 * Original: 0x001D2A50 - 0x001D2A51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A50(void)
{

loc_001D2A50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2A60
 * Original: 0x001D2A60 - 0x001D2A7E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A60(void)
{

loc_001D2A60: ;
    eax = MEM32(0x909394);
    ecx = MEM32(eax + 8);
    eax = MEM32(0x8F4BDC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001D2A73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2A70u); } /* indirect call */
    }

loc_001D2A73: ;
    MEM32(0x8F4BDC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2A90
 * Original: 0x001D2A90 - 0x001D2A96 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2A90(void)
{

loc_001D2A90: ;
    MEM32(ecx) = ecx;
    MEM32(ecx + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2AA0
 * Original: 0x001D2AA0 - 0x001D2AE1 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2AA0: ;
    eax = MEM32(0x909394);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    eax = esi + esi * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7F0E24);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001D2AC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D2ABDu); } /* indirect call */
    }

loc_001D2AC0: ;
    PUSH32(esp, 0xC);
    ecx = 0x8F4BE0;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x8F4BDC) = eax;
    MEM32(0x8F4BE0) = ecx;
    MEM32(0x8F4BE4) = ecx;
    PUSH32(esp, 0x001D2ADFu); RECOMP_ABI_CALL(0x0059C9B7u, sub_0059C9B7); /* call 0x0059C9B7 */

loc_001D2ADF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2B00
 * Original: 0x001D2B00 - 0x001D2B04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2B00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2B00: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D2B10
 * Original: 0x001D2B10 - 0x001D2B1B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2B10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2B10: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D2B20
 * Original: 0x001D2B20 - 0x001D2B31 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D2B20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2B20: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
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
 * sub_001D2B40
 * Original: 0x001D2B40 - 0x001D2B67 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D2B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2B40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0xC); /* divss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_MEM(eax); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(eax, xmm1); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2B70
 * Original: 0x001D2B70 - 0x001D2B9E (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D2B70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2B70: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D2BB0
 * Original: 0x001D2BB0 - 0x001D2BCF (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D2BB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2BB0: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D2BE0
 * Original: 0x001D2BE0 - 0x001D2BF1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D2BE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2BE0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
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
 * sub_001D2C00
 * Original: 0x001D2C00 - 0x001D2C0B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2C00: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7C8)); /* fmul dword ptr [0x7ab7c8] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D2C10
 * Original: 0x001D2C10 - 0x001D2C1B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2C10: ;
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
 * sub_001D2C20
 * Original: 0x001D2C20 - 0x001D2C23 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C20(void)
{

loc_001D2C20: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2C30
 * Original: 0x001D2C30 - 0x001D2C37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C30(void)
{

loc_001D2C30: ;
    eax = MEM32(ecx + 0x550);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2C40
 * Original: 0x001D2C40 - 0x001D2C55 (21 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2C40: ;
    edx = MEM32(ecx + 0x550);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x550) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2C60
 * Original: 0x001D2C60 - 0x001D2C66 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C60(void)
{

loc_001D2C60: ;
    eax = 0x20F4A9A1;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2C70
 * Original: 0x001D2C70 - 0x001D2C90 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2C70(void)
{

loc_001D2C70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F1338);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001D2C84u); RECOMP_ABI_CALL(0x00018E81u, sub_00018E81); /* call 0x00018E81 */

loc_001D2C84: ;
    MEM32(esi) = 0x7F1328;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2CA0
 * Original: 0x001D2CA0 - 0x001D2CA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2CA0(void)
{

loc_001D2CA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2CB0
 * Original: 0x001D2CB0 - 0x001D2CB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2CB0(void)
{

loc_001D2CB0: ;
    SET_LO8(eax, MEM8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_001D2CC0
 * Original: 0x001D2CC0 - 0x001D2CC9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2CC0(void)
{

loc_001D2CC0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2CD0
 * Original: 0x001D2CD0 - 0x001D2CD5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2CD0(void)
{

loc_001D2CD0: ;
    eax = ZX8(MEM8(ecx + 1));
    esp += 4; return; /* ret */

}

/**
 * sub_001D2CE0
 * Original: 0x001D2CE0 - 0x001D2CEA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2CE0(void)
{

loc_001D2CE0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 1) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2CF0
 * Original: 0x001D2CF0 - 0x001D2CFA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2CF0(void)
{

loc_001D2CF0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 2) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2D00
 * Original: 0x001D2D00 - 0x001D2D06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D00(void)
{

loc_001D2D00: ;
    SET_LO16(eax, ZX8(MEM8(ecx + 3)));
    esp += 4; return; /* ret */

}

/**
 * sub_001D2D10
 * Original: 0x001D2D10 - 0x001D2D1A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D10(void)
{

loc_001D2D10: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 3) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2D20
 * Original: 0x001D2D20 - 0x001D2D26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D20(void)
{

loc_001D2D20: ;
    eax = MEM32(0x8F4C5C);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2D30
 * Original: 0x001D2D30 - 0x001D2D3D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D30(void)
{

loc_001D2D30: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x438) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2D40
 * Original: 0x001D2D40 - 0x001D2D4C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D2D40: ;
    eax = ZX8(MEM8(esp + 4));
    fp_push(MEMF(ecx + eax * 4 + 0x10)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D2D50
 * Original: 0x001D2D50 - 0x001D2D5A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D50(void)
{

loc_001D2D50: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2D60
 * Original: 0x001D2D60 - 0x001D2D64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2D60(void)
{

loc_001D2D60: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2D70
 * Original: 0x001D2D70 - 0x001D2D97 (39 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D2D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001D2D70: ;
    eax = ZX8(MEM8(esp + 8));
    xmm0 = XMM_SCALAR(MEMF(ecx + eax * 4 + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8F4C04); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D2D92; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_001D2D8A: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

loc_001D2D92: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D2DA0
 * Original: 0x001D2DA0 - 0x001D2DD9 (57 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2DA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x414) = eax;
    MEM32(ecx + 0x418) = eax;
    MEM32(ecx + 0x41C) = eax;
    MEM32(ecx + 0x420) = eax;
    MEM32(ecx + 0x424) = eax;
    MEM32(ecx + 0x428) = eax;
    MEM32(ecx + 0x42C) = eax;
    MEM32(ecx + 0x430) = eax;
    MEM32(ecx + 0x434) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2DF0
 * Original: 0x001D2DF0 - 0x001D2DFE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2DF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0x414) = MEM32(ecx + eax * 4 + 0x414) + 1;
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x414)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2E10
 * Original: 0x001D2E10 - 0x001D2E19 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E10(void)
{

loc_001D2E10: ;
    eax = ecx;
    MEM32(eax) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2E20
 * Original: 0x001D2E20 - 0x001D2E2D (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E20(void)
{

loc_001D2E20: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2E30
 * Original: 0x001D2E30 - 0x001D2E33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E30(void)
{

loc_001D2E30: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2E40
 * Original: 0x001D2E40 - 0x001D2E4E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2E40: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    esp += 4; return; /* ret */

}

/**
 * sub_001D2E60
 * Original: 0x001D2E60 - 0x001D2E63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E60(void)
{

loc_001D2E60: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D2E70
 * Original: 0x001D2E70 - 0x001D2E79 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E70(void)
{

loc_001D2E70: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2E80
 * Original: 0x001D2E80 - 0x001D2E83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E80(void)
{

loc_001D2E80: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001D2E90
 * Original: 0x001D2E90 - 0x001D2E9C (12 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D2E90: ;
    eax = MEM32(ecx);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001D2EA0
 * Original: 0x001D2EA0 - 0x001D2EBD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2EA0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001D2EB5; /* jne: not equal / not zero */

loc_001D2EB0: ;
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

loc_001D2EB5: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2ED0
 * Original: 0x001D2ED0 - 0x001D2EE0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D2ED0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D2EDB; /* je: equal / zero */

loc_001D2ED5: ;
    MEM32(ecx) = 0;

loc_001D2EDB: ;
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_001D2EF0
 * Original: 0x001D2EF0 - 0x001D2F16 (38 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2EF0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D2F09; /* je: equal / zero */

loc_001D2EF6: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

loc_001D2F09: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFFF3Bu;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D2F20
 * Original: 0x001D2F20 - 0x001D2F49 (41 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2F20: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001D2F3C; /* jne: not equal / not zero */

loc_001D2F25: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x001D2F2Fu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_001D2F2F: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

loc_001D2F3C: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFFF3Cu;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D2F60
 * Original: 0x001D2F60 - 0x001D2F84 (36 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2F60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2F60: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D2F90
 * Original: 0x001D2F90 - 0x001D2FA5 (21 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2F90(void)
{

loc_001D2F90: ;
    SET_LO16(eax, MEM16(esp + 4));
    SET_LO16(edx, MEM16(esp + 8));
    MEM16(ecx + 0x18) = LO16(eax);
    MEM16(ecx + 0x1A) = LO16(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D2FB0
 * Original: 0x001D2FB0 - 0x001D2FC1 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2FB0: ;
    ecx = MEM32(ecx + 0x10);
    eax = ZX16(MEM16(esp + 4));
    eax = ecx + eax * 4;
    MEM32(eax) = MEM32(eax) | 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2FD0
 * Original: 0x001D2FD0 - 0x001D2FE1 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2FD0: ;
    ecx = MEM32(ecx + 0x10);
    eax = ZX16(MEM16(esp + 4));
    eax = ecx + eax * 4;
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D2FF0
 * Original: 0x001D2FF0 - 0x001D301C (44 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D2FF0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3005; /* jne: not equal / not zero */

loc_001D2FF8: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFD501u;
    esp += 16; return; /* ret 12 */

loc_001D3005: ;
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D3030
 * Original: 0x001D3030 - 0x001D3047 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3030(void)
{

loc_001D3030: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3050
 * Original: 0x001D3050 - 0x001D305A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3050(void)
{

loc_001D3050: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3060
 * Original: 0x001D3060 - 0x001D3079 (25 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3060(void)
{

loc_001D3060: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D3080
 * Original: 0x001D3080 - 0x001D308E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3080(void)
{

loc_001D3080: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D30A0
 * Original: 0x001D30A0 - 0x001D30AE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D30A0(void)
{

loc_001D30A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D30C0
 * Original: 0x001D30C0 - 0x001D30C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D30C0(void)
{

loc_001D30C0: ;
    eax = MEM32(0x8F4C68);
    esp += 4; return; /* ret */

}

/**
 * sub_001D30D0
 * Original: 0x001D30D0 - 0x001D30DF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D30D0(void)
{

loc_001D30D0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(0x8B425C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001D30F0
 * Original: 0x001D30F0 - 0x001D30F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D30F0(void)
{

loc_001D30F0: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001D3100
 * Original: 0x001D3100 - 0x001D3107 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3100(void)
{

loc_001D3100: ;
    eax = ecx + 0x200;
    esp += 4; return; /* ret */

}

/**
 * sub_001D3110
 * Original: 0x001D3110 - 0x001D3117 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3110(void)
{

loc_001D3110: ;
    eax = MEM32(ecx + 0x220);
    esp += 4; return; /* ret */

}

/**
 * sub_001D3120
 * Original: 0x001D3120 - 0x001D3127 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3120(void)
{

loc_001D3120: ;
    eax = MEM32(ecx + 0x224);
    esp += 4; return; /* ret */

}

/**
 * sub_001D3130
 * Original: 0x001D3130 - 0x001D314D (29 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D3130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3130: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x234)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x234) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001D3148; /* jae: above or equal (unsigned >=) */

loc_001D313C: ;
    ecx = MEM32(ecx + 0x228);
    eax = MEM32(ecx + eax * 4);
    esp += 8; return; /* ret 4 */

loc_001D3148: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3160
 * Original: 0x001D3160 - 0x001D3171 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3160(void)
{

loc_001D3160: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x14);
    eax = eax + eax * 4;
    eax = ecx + eax * 8 + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3180
 * Original: 0x001D3180 - 0x001D3190 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3180(void)
{

loc_001D3180: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x14);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D31A0
 * Original: 0x001D31A0 - 0x001D31B1 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D31A0(void)
{

loc_001D31A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x14);
    eax = eax + eax * 4;
    eax = ecx + eax * 8 + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D31C0
 * Original: 0x001D31C0 - 0x001D31D1 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D31C0(void)
{

loc_001D31C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x14);
    eax = eax + eax * 4;
    eax = MEM32(ecx + eax * 8 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D31E0
 * Original: 0x001D31E0 - 0x001D31E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D31E0(void)
{

loc_001D31E0: ;
    eax = MEM32(ecx + 0x22C);
    esp += 4; return; /* ret */

}

/**
 * sub_001D31F0
 * Original: 0x001D31F0 - 0x001D31F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D31F0(void)
{

loc_001D31F0: ;
    eax = MEM32(ecx + 0x230);
    esp += 4; return; /* ret */

}

/**
 * sub_001D3200
 * Original: 0x001D3200 - 0x001D3207 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3200(void)
{

loc_001D3200: ;
    eax = MEM32(ecx + 0x23C);
    esp += 4; return; /* ret */

}

/**
 * sub_001D3210
 * Original: 0x001D3210 - 0x001D3217 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3210(void)
{

loc_001D3210: ;
    eax = MEM32(ecx + 0x240);
    esp += 4; return; /* ret */

}

/**
 * sub_001D3220
 * Original: 0x001D3220 - 0x001D3227 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3220(void)
{

loc_001D3220: ;
    SET_LO8(eax, MEM8(ecx + 0x238));
    esp += 4; return; /* ret */

}

/**
 * sub_001D3230
 * Original: 0x001D3230 - 0x001D329A (106 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3230: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = ecx;
    MEM32(eax) = 0x7F1340;
    edx = eax + 0x20;
    ecx = 0x1E;
    goto loc_001D3250;

    /* nop */

loc_001D3250: ;
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D3250; /* jne: not equal / not zero */

loc_001D3269: ;
    edx = eax + 0x200;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx + -16) = xmm0.f[0]; /* movss */
    MEMF(edx + -12) = xmm0.f[0]; /* movss */
    MEMF(edx + -8) = xmm0.f[0]; /* movss */
    MEMF(edx + -4) = xmm1.f[0]; /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001D32C0
 * Original: 0x001D32C0 - 0x001D32DF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D32C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D32C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F1340;
    if (TEST_Z(_fa, _fb)) goto loc_001D32D9; /* je: equal / zero */

loc_001D32D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D32D6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D32D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D32D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D32F0
 * Original: 0x001D32F0 - 0x001D32FB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D32F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D32F0: ;
    edx = MEM32(ecx + 0x2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_001D3300
 * Original: 0x001D3300 - 0x001D3309 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3300(void)
{

loc_001D3300: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3310
 * Original: 0x001D3310 - 0x001D3331 (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3310: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001D331E; /* je: equal / zero */

loc_001D331B: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D331E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D332B; /* je: equal / zero */

loc_001D3322: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D3328u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D3328: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D332B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3340
 * Original: 0x001D3340 - 0x001D3358 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3340: ;
    edx = MEM32(ecx + 0xC);
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x410) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001D3360
 * Original: 0x001D3360 - 0x001D3398 (56 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3360(void)
{

loc_001D3360: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = eax;
    MEM8(edx + 1) = LO8(eax);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    MEM8(edx + 2) = 0;
    SET_LO8(ecx, MEM8(ecx + 0x8B4040));
    MEM8(edx + 3) = LO8(ecx);
    edx = MEM32(esi);
    SET_LO16(eax, MEM16(eax + 0x8B4044));
    ecx = MEM32(esp + 8);
    MEM16(edx + ecx * 2) = LO16(eax);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D33B0
 * Original: 0x001D33B0 - 0x001D350F (351 bytes, 106 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D33B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D33B0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D34DF; /* je: equal / zero */

loc_001D33C0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D34DF; /* je: equal / zero */

loc_001D33C8: ;
    SET_LO8(eax, MEM8(esi + 0x410));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = ZX8(MEM8(edi + 1));
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    MEM8(esp + 0x14) = LO8(eax);
    if (CMP_A(_fa, _fb)) goto loc_001D349F; /* ja: above (unsigned >) */

loc_001D33E7: ;
    PUSH32(esp, ebp);
    { uint32_t _jt = MEM32(ebx * 4 + 0x1D3510); /* switch: 9 entries, 6 targets */
    if (_jt == 0x001D33EFu) goto loc_001D33EF;
    if (_jt == 0x001D3426u) goto loc_001D3426;
    if (_jt == 0x001D345Au) goto loc_001D345A;
    if (_jt == 0x001D348Eu) goto loc_001D348E;
    if (_jt == 0x001D3495u) goto loc_001D3495;
    if (_jt == 0x001D3499u) goto loc_001D3499;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001D33EF: ;
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F0CCCCD);
    ecx = esi;
    PUSH32(esp, 0x001D3400u); RECOMP_ABI_CALL(0x000266FDu, sub_000266FD); /* call 0x000266FD */

loc_001D3400: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D340E; /* je: equal / zero */

loc_001D3404: ;
    ebx = 7;
    goto loc_001D349E;

loc_001D340E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3EC28F5C);
    ecx = esi;
    PUSH32(esp, 0x001D341Bu); RECOMP_ABI_CALL(0x000266FDu, sub_000266FD); /* call 0x000266FD */

loc_001D341B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D349E; /* je: equal / zero */

loc_001D341F: ;
    ebx = 3;
    goto loc_001D349E;

loc_001D3426: ;
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F0CCCCD);
    ecx = esi;
    PUSH32(esp, 0x001D3437u); RECOMP_ABI_CALL(0x000266FDu, sub_000266FD); /* call 0x000266FD */

loc_001D3437: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3442; /* je: equal / zero */

loc_001D343B: ;
    ebx = 5;
    goto loc_001D349E;

loc_001D3442: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3EC28F5C);
    ecx = esi;
    PUSH32(esp, 0x001D344Fu); RECOMP_ABI_CALL(0x000266FDu, sub_000266FD); /* call 0x000266FD */

loc_001D344F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D349E; /* jne: not equal / not zero */

loc_001D3453: ;
    ebx = 4;
    goto loc_001D349E;

loc_001D345A: ;
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3EC28F5C);
    ecx = esi;
    PUSH32(esp, 0x001D346Bu); RECOMP_ABI_CALL(0x000266FDu, sub_000266FD); /* call 0x000266FD */

loc_001D346B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3476; /* jne: not equal / not zero */

loc_001D346F: ;
    ebx = 8;
    goto loc_001D349E;

loc_001D3476: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3F0CCCCD);
    ecx = esi;
    PUSH32(esp, 0x001D3483u); RECOMP_ABI_CALL(0x000266FDu, sub_000266FD); /* call 0x000266FD */

loc_001D3483: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D349E; /* jne: not equal / not zero */

loc_001D3487: ;
    ebx = 6;
    goto loc_001D349E;

loc_001D348E: ;
    ebx = 1;
    goto loc_001D349E;

loc_001D3495: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D349E;

loc_001D3499: ;
    ebx = 2;

loc_001D349E: ;
    POP32(esp, ebp);

loc_001D349F: ;
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    MEM8(edi + 1) = LO8(ebx);
    MEM8(edi + 2) = 0;
    SET_LO8(edx, MEM8(ecx + 0x8B4040));
    MEM8(edi + 3) = LO8(edx);
    SET_LO16(edx, MEM16(eax + 0x8B4044));
    ecx = MEM32(esi);
    eax = MEM32(esp + 0x10);
    MEM16(ecx + eax * 2) = LO16(edx);
    eax = MEM32(esi + ebx * 4 + 0x414);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + ebx * 4 + 0x414) = eax;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001D34DF: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax + 1) = 2;
    MEM8(eax + 2) = 0;
    SET_LO8(ecx, MEM8(0x8B40B8));
    MEM8(eax + 3) = LO8(ecx);
    edx = MEM32(esi);
    eax = MEM32(esp + 8);
    SET_LO16(ecx, MEM16(0x8B40BC));
    MEM16(edx + eax * 2) = LO16(ecx);
    MEM32(esi + 0x41C) = MEM32(esi + 0x41C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x41C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D35B4
 * Original: 0x001D35B4 - 0x001D35BA (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D35B4(void)
{

loc_001D35B4: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001D35C0
 * Original: 0x001D35C0 - 0x001D35EE (46 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D35C0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001D35C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F4C04)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D35EB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001D35E3: ;
    MEMF(0x8F4C04) = xmm1.f[0]; /* movss */

loc_001D35EB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3600
 * Original: 0x001D3600 - 0x001D3619 (25 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3600(void)
{

loc_001D3600: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB2D0); /* mulss */
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3620
 * Original: 0x001D3620 - 0x001D3643 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3620: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D3642; /* jl: less (signed <) */

loc_001D3628: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D3632; /* jle: less or equal (signed <=) */

loc_001D362D: ;
    eax = 0x3C;

loc_001D3632: ;
    ecx = MEM32(0x8F4C5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3642; /* je: equal / zero */

loc_001D363C: ;
    MEM32(ecx + 0x438) = eax;

loc_001D3642: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D3650
 * Original: 0x001D3650 - 0x001D3670 (32 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3650: ;
    eax = MEM32(0x8F4C5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D366F; /* je: equal / zero */

loc_001D3659: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB2D0); /* mulss */
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */

loc_001D366F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D3680
 * Original: 0x001D3680 - 0x001D36B5 (53 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001D3680: ;
    eax = MEM32(0x8F4C5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D36B4; /* je: equal / zero */

loc_001D3689: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F4C04)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D36B4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001D36AC: ;
    MEMF(0x8F4C04) = xmm1.f[0]; /* movss */

loc_001D36B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D36D0
 * Original: 0x001D36D0 - 0x001D3712 (66 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D36D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001D36D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(eax + 0x1C)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1C), 2 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3711; /* je: equal / zero */

loc_001D36DB: ;
    eax = MEM32(0x8F4C5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3711; /* je: equal / zero */

loc_001D36E4: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F4C04)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7ABD64); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3711; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001D3709: ;
    MEMF(0x8F4C04) = xmm1.f[0]; /* movss */

loc_001D3711: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D3730
 * Original: 0x001D3730 - 0x001D3788 (88 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001D3730: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x3F));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(0x8F4C5C);
    if (CMP_NE(_fa, _fb)) goto loc_001D3756; /* jne: not equal / not zero */

loc_001D3740: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3787; /* je: equal / zero */

loc_001D3744: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F4C04)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AD3C8); /* addss */
    goto loc_001D376A;

loc_001D3756: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3787; /* je: equal / zero */

loc_001D375A: ;
    xmm0 = XMM_SCALAR(MEMF(0x8F4C04)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7B1D9C); /* addss */

loc_001D376A: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3787; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001D377F: ;
    MEMF(0x8F4C04) = xmm1.f[0]; /* movss */

loc_001D3787: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D37A0
 * Original: 0x001D37A0 - 0x001D37E4 (68 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D37A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001D37A0: ;
    xmm1 = XMM_SCALAR(MEMF(0x7F11F8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8F4C04)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D37E3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001D37B5: ;
    eax = MEM32(0x8F4C5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D37E3; /* je: equal / zero */

loc_001D37BE: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AB7CC); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D37E3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001D37DB: ;
    MEMF(0x8F4C04) = xmm1.f[0]; /* movss */

loc_001D37E3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D3800
 * Original: 0x001D3800 - 0x001D382B (43 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3800(void)
{

loc_001D3800: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x550);
    edx = eax + 8;
    MEM32(ecx + 0x550) = edx;
    xmm0 = XMM_SCALAR(MEMF(0x8F4C14)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8F4C10);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3840
 * Original: 0x001D3840 - 0x001D386B (43 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3840(void)
{

loc_001D3840: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x550);
    edx = eax + 8;
    MEM32(ecx + 0x550) = edx;
    xmm0 = XMM_SCALAR(MEMF(0x8F4C14)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8F4C10);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3880
 * Original: 0x001D3880 - 0x001D3894 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D3880: ;
    eax = MEM32(0x8F4C5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D3893; /* je: equal / zero */

loc_001D3889: ;
    MEM32(eax + 0x438) = 0;

loc_001D3893: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D38A0
 * Original: 0x001D38A0 - 0x001D38FF (95 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D38A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D38A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001D38E9; /* je: equal / zero */

loc_001D38AB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001D38CD; /* je: equal / zero */

loc_001D38AE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001D38FC; /* jne: not equal / not zero */

loc_001D38B1: ;
    eax = MEM32(0x8F4C5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D38FC; /* je: equal / zero */

loc_001D38BA: ;
    xmm0 = XMM_SCALAR(MEMF(0x7DA278)); /* movss */
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_001D38CD: ;
    eax = MEM32(0x8F4C5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D38FC; /* je: equal / zero */

loc_001D38D6: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD404)); /* movss */
    MEMF(0x8F4C04) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_001D38E9: ;
    eax = MEM32(0x8F4C5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D38FC; /* je: equal / zero */

loc_001D38F2: ;
    MEM32(eax + 0x438) = 0x3C;

loc_001D38FC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3920
 * Original: 0x001D3920 - 0x001D393B (27 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3920: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49A6FDB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x49A6FDB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D3938; /* jne: not equal / not zero */

loc_001D392C: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000149C6(); return; /* tail jmp 0x000149C6 */

loc_001D3938: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3950
 * Original: 0x001D3950 - 0x001D3959 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3950(void)
{

loc_001D3950: ;
    eax = ecx;
    MEM32(eax) = 0x7F1344;
    esp += 4; return; /* ret */

}

/**
 * sub_001D3960
 * Original: 0x001D3960 - 0x001D3966 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3960(void)
{

loc_001D3960: ;
    eax = MEM32(0x8F4C6C);
    esp += 4; return; /* ret */

}

/**
 * sub_001D3970
 * Original: 0x001D3970 - 0x001D3974 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3970(void)
{

loc_001D3970: ;
    eax = MEM32(ecx + 0x74);
    esp += 4; return; /* ret */

}

/**
 * sub_001D3980
 * Original: 0x001D3980 - 0x001D398F (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3980(void)
{

loc_001D3980: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2 + 0x3C;
    SET_LO16(eax, MEM16(ecx + eax * 2));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D39A0
 * Original: 0x001D39A0 - 0x001D39AF (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D39A0(void)
{

loc_001D39A0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    SET_LO16(eax, MEM16(ecx + eax * 2 + 0x7A));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D39C0
 * Original: 0x001D39C0 - 0x001D39CF (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D39C0(void)
{

loc_001D39C0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    SET_LO16(eax, MEM16(ecx + eax * 2 + 0x7C));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D39E0
 * Original: 0x001D39E0 - 0x001D3A32 (82 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D39E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D39E0: ;
    PUSH32(esp, 0x001D39E5u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_001D39E5: ;
    eax = eax & 0x8000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001D39F1; /* jns: not sign (positive) */

loc_001D39EC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D39F1: ;
    ecx = eax;
    ecx = ecx & 0x80000007u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001D3A00; /* jns: not sign (positive) */

loc_001D39FB: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D3A00: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7F1348); /* mulss */
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D3A50
 * Original: 0x001D3A50 - 0x001D41D9 (1929 bytes, 515 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D3A50(void)
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
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D3A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x54));
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x230);
    PUSH32(esp, edi);
    eax = eax + eax * 4;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3A73u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D3A73: ;
    xmm7 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ebx + 0x14) = eax;
    eax = MEM32(ebx + 0x230);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = xmm7; /* movaps */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x28) = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    if (CMP_BE(_fa, _fb)) goto loc_001D3B65; /* jbe: below or equal (unsigned <=) */

loc_001D3AAB: ;
    MEM32(esp + 0x1C) = esi;
    /* nop */

loc_001D3AB0: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_001D3B68; /* jae: above or equal (unsigned >=) */

loc_001D3AC4: ;
    eax = MEM32(edi + 4);
    ecx = edx + edx * 4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = ecx + eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi)));
    eax = eax - MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D3AD6: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001D3AE4; /* jb: below (unsigned <) */

loc_001D3ADD: ;
    if (CMP_NE(_fa, _fb)) goto loc_001D3AFD; /* jne: not equal / not zero */

loc_001D3ADF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001D3AFD; /* jb: below (unsigned <) */

loc_001D3AE4: ;
    eax = MEM32(esp + 0x20);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x28)) >> 32) & 1);
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001D3B68; /* jge: greater or equal (signed >=) */

loc_001D3AF0: ;
    eax = MEM32(edi + 4);
    esi = eax + ecx;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi)));
    eax = eax - MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_001D3AD6;

loc_001D3AFD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001D3B68; /* jge: greater or equal (signed >=) */

loc_001D3B03: ;
    eax = MEM32(edi + 4);
    edi = MEM32(ebx + 0x14);
    ecx = edx + edx * 4;
    esi = eax + ecx * 8;
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(esp + 0x1C))) >> 32) & 1);
    edi = edi + MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x28);
    ecx = 0xA;
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
    ecx = MEM32(ebp + 8);
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + eax * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + eax * 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001D3B42; /* jl: less (signed <) */

loc_001D3B29: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001D3B42; /* jge: greater or equal (signed >=) */

loc_001D3B30: ;
    ecx = MEM32(ebx + 0x228);
    esi = MEM32(esp + 0x14);
    MEM32(ecx + eax * 4) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;

loc_001D3B42: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 0x230);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x28)) >> 32) & 1);
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = edi;
    if (CMP_B(_fa, _fb)) goto loc_001D3AB0; /* jb: below (unsigned <) */

loc_001D3B65: ;
    edi = MEM32(ebp + 8);

loc_001D3B68: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x230)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x230) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001D3B7A; /* jge: greater or equal (signed >=) */

loc_001D3B74: ;
    MEM32(ebx + 0x230) = eax;

loc_001D3B7A: ;
    eax = MEM32(0x8B4260);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x34) = eax;
    eax = MEM32(ebx + 0x230);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001D3F28; /* js: sign (negative) */

loc_001D3B97: ;
    ecx = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x30) = eax;
    goto loc_001D3BB0;

loc_001D3BA8: ;
    ecx = MEM32(esp + 0x14);
    /* nop */

loc_001D3BB0: ;
    edx = MEM32(ebx + 0x14);
    edi = MEM32(ecx + edx + 4);
    eax = ecx + edx;
    eax = MEM32(eax);
    MEM32(esp + 0x2C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3BC5u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_001D3BC5: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001D3BD1; /* jns: not sign (positive) */

loc_001D3BCC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D3BD1: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7ABE28); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3BEE; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7ABE28)) */

loc_001D3BDF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3BE4u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_001D3BE4: ;
    ecx = (int32_t)MEMF(ebp + 0x14); /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx;

loc_001D3BEE: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_001D3C04; /* jg: greater (signed >) */

loc_001D3BF5: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ebp + 0x14) = xmm0.f[0]; /* movss */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D3C04: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(ecx));
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebp + 0x14); /* divss */
    ecx = (int32_t)xmm1.f[0]; /* cvttss2si */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    MEM32(eax + edx) = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = edi;
    edi = MEM32(ebx + 0x14);
    edx = ecx + -1;
    MEM32(eax + edi + 4) = edx;
    edi = MEM32(esp + 0x28);
    edx = MEM32(ebp + 0x18);
    eax = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = edx + eax + 1;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = ecx;
    MEM32(ebp + 0x18) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001D3EF8; /* jge: greater or equal (signed >=) */

loc_001D3C66: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x34); /* cvtsi2ss */
    eax = esi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x28) = ecx;
    goto loc_001D3C90;

loc_001D3C83: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    eax = MEM32(esp + 0x1C);
    /* nop */

loc_001D3C90: ;
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(esp + 0x38)); /* fld float */
    edx = MEM32(ecx + 8);
    edi = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(esp + 0x3C) = edi;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + edx + 0xC)); /* fadd dword ptr [edi + edx + 0xc] */
    esi = MEM32(ebx + 0x220);
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(0x8B4260)); /* fidiv dword ptr [0x8b4260] */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3CBCu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_001D3CBC: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1E;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0xC) = edx;
    edx = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(edi + edx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + edx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + edx + 8)); /* movss */
    eax = edi + edx;
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    eax = MEM32(ecx + 8);
    ecx = MEM32(edi + eax + 0x10);
    MEM32(esi + 0x1C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D3CFFu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_001D3CFF: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001D3D0B; /* jns: not sign (positive) */

loc_001D3D06: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D3D0B: ;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x80000007u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001D3D1A; /* jns: not sign (positive) */

loc_001D3D15: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx | 0xFFFFFFF8u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D3D1A: ;
    ecx = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7F1348); /* mulss */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    _cf = 0; /* logical op clears CF */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((3) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((3) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + edi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7F135C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + edi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7F1358); /* mulss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7F1354); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3D93; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001D3D8E: ;
    xmm0 = xmm2; /* movaps */
    goto loc_001D3D9B;

loc_001D3D93: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3D9B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001D3D98: ;
    xmm0 = xmm1; /* movaps */

loc_001D3D9B: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3E14; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_001D3DA6: ;
    edx = MEM32(ecx + 8);
    xmm3 = XMM_SCALAR(MEMF(edi + edx + 0x14)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm5 = XMM_SCALAR(MEMF(edi + edx + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + edx + 0x1C)); /* movss */
    eax = edi + edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3DCC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_001D3DC9: ;
    xmm3 = xmm1; /* movaps */

loc_001D3DCC: ;
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3DD4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm5.f[0]) */

loc_001D3DD1: ;
    xmm5 = xmm1; /* movaps */

loc_001D3DD4: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3DDC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_001D3DD9: ;
    xmm4 = xmm1; /* movaps */

loc_001D3DDC: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3DE4; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_001D3DE1: ;
    xmm3 = xmm2; /* movaps */

loc_001D3DE4: ;
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3DEC; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm2.f[0]) */

loc_001D3DE9: ;
    xmm5 = xmm2; /* movaps */

loc_001D3DEC: ;
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3DF4; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm2.f[0]) */

loc_001D3DF1: ;
    xmm4 = xmm2; /* movaps */

loc_001D3DF4: ;
    MEMF(ebx + 0x200) = xmm3.f[0]; /* movss */
    MEMF(ebx + 0x204) = xmm5.f[0]; /* movss */
    MEMF(ebx + 0x208) = xmm4.f[0]; /* movss */
    MEMF(ebx + 0x20C) = xmm2.f[0]; /* movss */

loc_001D3E14: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x24); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3E88; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x24)) */

loc_001D3E1B: ;
    eax = MEM32(ecx + 8);
    xmm3 = XMM_SCALAR(MEMF(edi + eax + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edi + eax + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + eax + 0x1C)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3E40; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_001D3E3D: ;
    xmm3 = xmm1; /* movaps */

loc_001D3E40: ;
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3E48; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm5.f[0]) */

loc_001D3E45: ;
    xmm5 = xmm1; /* movaps */

loc_001D3E48: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3E50; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_001D3E4D: ;
    xmm4 = xmm1; /* movaps */

loc_001D3E50: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3E58; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_001D3E55: ;
    xmm3 = xmm2; /* movaps */

loc_001D3E58: ;
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3E60; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm2.f[0]) */

loc_001D3E5D: ;
    xmm5 = xmm2; /* movaps */

loc_001D3E60: ;
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D3E68; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm2.f[0]) */

loc_001D3E65: ;
    xmm4 = xmm2; /* movaps */

loc_001D3E68: ;
    MEMF(ebx + 0x210) = xmm3.f[0]; /* movss */
    MEMF(ebx + 0x214) = xmm5.f[0]; /* movss */
    MEMF(ebx + 0x218) = xmm4.f[0]; /* movss */
    MEMF(ebx + 0x21C) = xmm2.f[0]; /* movss */

loc_001D3E88: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x28);
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x14); /* addss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_001D3C83; /* jne: not equal / not zero */

loc_001D3EB8: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001D3EF4; /* je: equal / zero */

loc_001D3EC1: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + 8);
    esi = MEM32(ebx + 0x14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = MEM32(eax + ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx + esi + 0x18) = edi;
    esi = MEM32(edx + 8);
    esi = MEM32(eax + esi + 4);
    edi = MEM32(ebx + 0x14);
    MEM32(ecx + edi + 0x1C) = esi;
    edx = MEM32(edx + 8);
    esi = MEM32(ebx + 0x14);
    eax = MEM32(eax + edx + 8);
    MEM32(ecx + esi + 0x20) = eax;

loc_001D3EF4: ;
    ecx = MEM32(esp + 0x2C);

loc_001D3EF8: ;
    eax = MEM32(esp + 0x30);
    edi = MEM32(ebp + 8);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x28));
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x30) = eax;
    if ((_fa != 0)) goto loc_001D3BA8; /* jne: not equal / not zero */

loc_001D3F17: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm7 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_001D3F28: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(ebx + 0x22C) = esi;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AB7D4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_001D3F93; /* jbe: below or equal (unsigned <=) */

loc_001D3F4A: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_001D41D0; /* jbe: below or equal (unsigned <=) */

loc_001D3F54: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D3F60: ;
    eax = MEM32(ebx + 0x220);
    xmm2 = XMM_SCALAR(MEMF(edx + eax + 0x18)); /* movss */
    eax = edx + eax + 0x18;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    eax = MEM32(ebx + 0x22C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x20)) >> 32) & 1);
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001D3F60; /* jb: below (unsigned <) */

loc_001D3F8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_001D3F93: ;
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x21C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x218)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebx + 0x208); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x214)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x204); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x210)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x200); /* subss */
    MEMF(esp + 0x4C) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AB7D4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D40E8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AB7D4)) */

loc_001D4023: ;
    xmm1 = XMM_MEM(esp + 0x40); /* movaps */
    eax = MEM32(ebx + 0x22C);
    xmm7.f[0] = xmm7.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = xmm7.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x40, xmm1); /* movaps */
    if (CMP_BE(_fa, _fb)) goto loc_001D41D0; /* jbe: below or equal (unsigned <=) */

loc_001D404C: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D4060: ;
    eax = MEM32(edi + 8);
    xmm2 = XMM_SCALAR(MEMF(eax + ecx + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x208); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + ecx + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebx + 0x204); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x200); /* subss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D40AD; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_001D40A8: ;
    xmm1 = xmm3; /* movaps */
    goto loc_001D40C5;

loc_001D40AD: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D40BE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x30)) */

loc_001D40B4: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    goto loc_001D40C5;

loc_001D40BE: ;
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */

loc_001D40C5: ;
    eax = MEM32(ebx + 0x220);
    MEMF(ecx + eax + 0x18) = xmm1.f[0]; /* movss */
    eax = MEM32(ebx + 0x22C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001D4060; /* jb: below (unsigned <) */

loc_001D40DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_001D40E8: ;
    xmm0 = XMM_SCALAR(MEMF(0x7F1350)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x40);
    MEM32(ebx + 0x200) = ecx;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x44);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD3BC)); /* movss */
    eax = MEM32(esp + 0x48);
    MEM32(ebx + 0x204) = edx;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7F134C)); /* movss */
    edx = MEM32(esp + 0x50);
    MEMF(esp + 0x4C) = xmm7.f[0]; /* movss */
    ecx = MEM32(esp + 0x4C);
    MEM32(ebx + 0x208) = eax;
    MEM32(ebx + 0x210) = edx;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x54);
    MEM32(ebx + 0x20C) = ecx;
    MEMF(esp + 0x58) = xmm7.f[0]; /* movss */
    ecx = MEM32(esp + 0x58);
    MEM32(ebx + 0x214) = eax;
    MEM32(ebx + 0x218) = ecx;
    ecx = MEM32(ebx + 0x22C);
    MEMF(esp + 0x5C) = xmm7.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebx + 0x21C) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_001D41D0; /* jbe: below or equal (unsigned <=) */

loc_001D418C: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_001D4190: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x3C) = eax;
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D41A2; /* jge: greater or equal (signed >=) */

loc_001D419C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_001D41A2: ;
    edx = MEM32(ebx + 0x22C);
    fp_push((double)SMEM32(ebx + 0x22C)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_001D41B8; /* jge: greater or equal (signed >=) */

loc_001D41B2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_001D41B8: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    edx = MEM32(ebx + 0x220);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx + edx + -8) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x22C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x22C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001D4190; /* jb: below (unsigned <) */

loc_001D41D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D43C0
 * Original: 0x001D43C0 - 0x001D43FD (61 bytes, 18 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001D43C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D43C0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = sin(fp_top()); /* fsin */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D4410
 * Original: 0x001D4410 - 0x001D49F0 (1504 bytes, 370 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D4410(void)
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

loc_001D4410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = ecx;
    MEMF(ebx + 0x200) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x204) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x208) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x20C) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEMF(ebx + 0x210) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x214) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x218) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x21C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if (CMP_BE(_fa, _fb)) goto loc_001D4489; /* jbe: below or equal (unsigned <=) */

loc_001D4484: ;
    eax = 0x400;

loc_001D4489: ;
    MEM32(ebx + 0x230) = eax;
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D449Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D449D: ;
    ecx = MEM32(ebx + 0x230);
    ecx = ecx + ecx * 4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ecx;
    MEM32(ebx + 0x14) = eax;
    esi = MEM32(esi + 4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = eax;
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
    ecx = edx;
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
    eax = MEM32(0x8B4260);
    ecx = MEM32(ebx + 0x22C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_001D4714; /* jbe: below or equal (unsigned <=) */

loc_001D44E0: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    /* nop */

loc_001D44F0: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(eax + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + edi + 0xC)); /* fadd dword ptr [ecx + edi + 0xc] */
    esi = MEM32(ebx + 0x220);
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(0x8B4260)); /* fidiv dword ptr [0x8b4260] */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D4511u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_001D4511: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1E;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0xC) = edx;
    edx = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(edx + edi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + edi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + edi + 8)); /* movss */
    eax = edx + edi;
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    SET_LO8(eax, MEM8(0x8B4264));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D455A; /* je: equal / zero */

loc_001D454E: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + edi + 0x10);
    MEM32(esi + 0x1C) = ecx;
    goto loc_001D4567;

loc_001D455A: ;
    xmm0 = XMM_SCALAR(MEMF(0x8B4268)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_001D4567: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D456Cu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_001D456C: ;
    eax = eax & 0x8000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001D4578; /* jns: not sign (positive) */

loc_001D4573: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D4578: ;
    edx = eax;
    edx = edx & 0x80000007u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001D4587; /* jns: not sign (positive) */

loc_001D4582: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFF8u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001D4587: ;
    ecx = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7F1348); /* mulss */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + edi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7F135C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + edi + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7F1358); /* mulss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7F1354); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4600; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_001D45FB: ;
    xmm0 = xmm2; /* movaps */
    goto loc_001D4608;

loc_001D4600: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4608; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001D4605: ;
    xmm0 = xmm1; /* movaps */

loc_001D4608: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4681; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_001D4613: ;
    edx = MEM32(ecx + 8);
    xmm3 = XMM_SCALAR(MEMF(edx + edi + 0x14)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm5 = XMM_SCALAR(MEMF(edx + edi + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edx + edi + 0x1C)); /* movss */
    eax = edx + edi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4639; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_001D4636: ;
    xmm3 = xmm1; /* movaps */

loc_001D4639: ;
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4641; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm5.f[0]) */

loc_001D463E: ;
    xmm5 = xmm1; /* movaps */

loc_001D4641: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4649; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_001D4646: ;
    xmm4 = xmm1; /* movaps */

loc_001D4649: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4651; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_001D464E: ;
    xmm3 = xmm2; /* movaps */

loc_001D4651: ;
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4659; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm2.f[0]) */

loc_001D4656: ;
    xmm5 = xmm2; /* movaps */

loc_001D4659: ;
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4661; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm2.f[0]) */

loc_001D465E: ;
    xmm4 = xmm2; /* movaps */

loc_001D4661: ;
    MEMF(ebx + 0x210) = xmm3.f[0]; /* movss */
    MEMF(ebx + 0x214) = xmm5.f[0]; /* movss */
    MEMF(ebx + 0x218) = xmm4.f[0]; /* movss */
    MEMF(ebx + 0x21C) = xmm2.f[0]; /* movss */

loc_001D4681: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D46F5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_001D4688: ;
    eax = MEM32(ecx + 8);
    xmm3 = XMM_SCALAR(MEMF(eax + edi + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + edi + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + edi + 0x1C)); /* movss */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D46AD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_001D46AA: ;
    xmm3 = xmm1; /* movaps */

loc_001D46AD: ;
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D46B5; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm5.f[0]) */

loc_001D46B2: ;
    xmm5 = xmm1; /* movaps */

loc_001D46B5: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D46BD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_001D46BA: ;
    xmm4 = xmm1; /* movaps */

loc_001D46BD: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D46C5; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_001D46C2: ;
    xmm3 = xmm2; /* movaps */

loc_001D46C5: ;
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D46CD; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm2.f[0]) */

loc_001D46CA: ;
    xmm5 = xmm2; /* movaps */

loc_001D46CD: ;
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D46D5; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm2.f[0]) */

loc_001D46D2: ;
    xmm4 = xmm2; /* movaps */

loc_001D46D5: ;
    MEMF(ebx + 0x200) = xmm3.f[0]; /* movss */
    MEMF(ebx + 0x204) = xmm5.f[0]; /* movss */
    MEMF(ebx + 0x208) = xmm4.f[0]; /* movss */
    MEMF(ebx + 0x20C) = xmm2.f[0]; /* movss */

loc_001D46F5: ;
    eax = MEM32(esp + 0x18);
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x22C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001D44F0; /* jb: below (unsigned <) */

loc_001D4714: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AB7D4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_001D478C; /* jbe: below or equal (unsigned <=) */

loc_001D4730: ;
    eax = MEM32(ebx + 0x22C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001D49E0; /* jbe: below or equal (unsigned <=) */

loc_001D4740: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D4750;

    /* nop */

loc_001D4750: ;
    eax = MEM32(ebx + 0x220);
    xmm1 = XMM_SCALAR(MEMF(eax + edx + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x10); /* subss */
    eax = eax + edx + 0x18;
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    eax = MEM32(ebx + 0x22C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D4750; /* jb: below (unsigned <) */

loc_001D477C: ;
    MEM8(ebx + 0x238) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001D478C: ;
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x21C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x218)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebx + 0x208); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x214)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x204); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x210)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x200); /* subss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm7.f[0]; _fcb = MEMF(0x7AB7D4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D48F1; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs MEMF(0x7AB7D4)) */

loc_001D481C: ;
    xmm6 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    eax = MEM32(ebx + 0x22C);
    xmm6.f[0] = xmm6.f[0] / xmm7.f[0]; /* divss */
    xmm0.f[0] = xmm6.f[0]; /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    XMM_STORE(esp + 0x20, xmm1); /* movaps */
    if (CMP_BE(_fa, _fb)) goto loc_001D49E0; /* jbe: below or equal (unsigned <=) */

loc_001D484D: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D4861: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    xmm2 = XMM_SCALAR(MEMF(eax + ecx + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x208); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + ecx + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x200); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebx + 0x204); /* subss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D48B4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001D48AF: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001D48C7;

loc_001D48B4: ;
    _fca = xmm0.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D48C3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm7.f[0]) */

loc_001D48B9: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    goto loc_001D48C7;

loc_001D48C3: ;
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */

loc_001D48C7: ;
    eax = MEM32(ebx + 0x220);
    MEMF(ecx + eax + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x22C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D4861; /* jb: below (unsigned <) */

loc_001D48E1: ;
    MEM8(ebx + 0x238) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001D48F1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7F1350)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AD3BC)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    MEM32(ebx + 0x200) = ecx;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(ebx + 0x204) = edx;
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7F134C)); /* movss */
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(ebx + 0x208) = eax;
    MEM32(ebx + 0x210) = edx;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x34);
    MEM32(ebx + 0x20C) = ecx;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    MEM32(ebx + 0x214) = eax;
    MEM32(ebx + 0x218) = ecx;
    ecx = MEM32(ebx + 0x22C);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x3C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebx + 0x21C) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_001D49E0; /* jbe: below or equal (unsigned <=) */

loc_001D499D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001D49A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D49B2; /* jge: greater or equal (signed >=) */

loc_001D49AC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_001D49B2: ;
    edx = MEM32(ebx + 0x22C);
    fp_push((double)SMEM32(ebx + 0x22C)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D49C8; /* jge: greater or equal (signed >=) */

loc_001D49C2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_001D49C8: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    edx = MEM32(ebx + 0x220);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx + edx + -8) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x22C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x22C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D49A0; /* jb: below (unsigned <) */

loc_001D49E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0x238) = 1;
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
 * sub_001D4B70
 * Original: 0x001D4B70 - 0x001D4BD7 (103 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x220);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4B8F; /* je: equal / zero */

loc_001D4B80: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D4B86u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D4B86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x220) = edi;

loc_001D4B8F: ;
    eax = MEM32(esi + 0x224);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4BA8; /* je: equal / zero */

loc_001D4B99: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D4B9Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D4B9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x224) = edi;

loc_001D4BA8: ;
    eax = MEM32(esi + 0x228);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4BC1; /* je: equal / zero */

loc_001D4BB2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D4BB8u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D4BB8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x228) = edi;

loc_001D4BC1: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4BD4; /* je: equal / zero */

loc_001D4BC8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D4BCEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D4BCE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = edi;

loc_001D4BD4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001D4BF0
 * Original: 0x001D4BF0 - 0x001D4C00 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4BF0: ;
    eax = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D4C10
 * Original: 0x001D4C10 - 0x001D4C1A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4C10(void)
{

loc_001D4C10: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 1) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D4C20
 * Original: 0x001D4C20 - 0x001D4C95 (117 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D4C20: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4C2C; /* je: equal / zero */

loc_001D4C27: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_001D4C2C: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_001D4C46; /* jne: not equal / not zero */

loc_001D4C38: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001D4C42; /* jne: not equal / not zero */

loc_001D4C3C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D4C42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4C8F; /* je: equal / zero */

loc_001D4C46: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4C8F; /* je: equal / zero */

loc_001D4C4A: ;
    PUSH32(esp, ebx);
    goto loc_001D4C50;

    /* nop */

loc_001D4C50: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D4C80; /* jne: not equal / not zero */

loc_001D4C5A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4C74; /* je: equal / zero */

loc_001D4C5E: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D4C80; /* jne: not equal / not zero */

loc_001D4C6A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001D4C50; /* jne: not equal / not zero */

loc_001D4C74: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D4C80: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D4C8F: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D4CC0
 * Original: 0x001D4CC0 - 0x001D4CC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4CC0: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001D4CD0
 * Original: 0x001D4CD0 - 0x001D4D34 (100 bytes, 44 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001D4CD0: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001D4D2E; /* jne: not equal / not zero */

loc_001D4CD8: ;
    SET_LO8(edx, MEM8(ecx + 4));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D4CEB; /* jne: not equal / not zero */

loc_001D4CE1: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D4D2E; /* jne: not equal / not zero */

loc_001D4CE7: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001D4CEB: ;
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4D30; /* je: equal / zero */

loc_001D4CF2: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4D2E; /* je: equal / zero */

loc_001D4CFA: ;
    PUSH32(esp, ebx);
    goto loc_001D4D00;

    /* nop */

loc_001D4D00: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D4D24; /* jne: not equal / not zero */

loc_001D4D08: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001D4D20; /* je: equal / zero */

loc_001D4D0C: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001D4D24; /* jne: not equal / not zero */

loc_001D4D16: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001D4D00; /* jne: not equal / not zero */

loc_001D4D20: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D4D29;

loc_001D4D24: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001D4D29: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001D4D30; /* je: equal / zero */

loc_001D4D2E: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001D4D30: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D4D50
 * Original: 0x001D4D50 - 0x001D4D55 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4D50(void)
{

loc_001D4D50: ;
    eax = ZX8(MEM8(ecx + 0x11));
    esp += 4; return; /* ret */

}

/**
 * sub_001D4D60
 * Original: 0x001D4D60 - 0x001D4D63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4D60(void)
{

loc_001D4D60: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001D4D70
 * Original: 0x001D4D70 - 0x001D4D73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D4D70: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D4D80
 * Original: 0x001D4D80 - 0x001D4D89 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4D80(void)
{

loc_001D4D80: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001D4D90
 * Original: 0x001D4D90 - 0x001D4E5B (203 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D4D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001D4D90: ;
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7F11FC); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4DAE; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_001D4DA9: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001D4DB5;

loc_001D4DAE: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_001D4DB5: ;
    ecx = MEM32(esp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    ecx = MEM32(esp + 0x10);
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4E36; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_001D4E0E: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4E19; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_001D4E13: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_001D4E19: ;
    eax = MEM32(esp + 4);
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

loc_001D4E36: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4E58; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_001D4E3B: ;
    ecx = MEM32(esp + 4);
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    eax = 2;
    esp += 4; return; /* ret */

loc_001D4E58: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D4E90
 * Original: 0x001D4E90 - 0x001D4FBC (300 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001D4E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001D4E90: ;
    eax = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7F11FC); /* mulss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4EAE; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_001D4EA9: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001D4EB5;

loc_001D4EAE: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_001D4EB5: ;
    ecx = MEM32(esp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    edx = MEM32(esp + 0x10);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4F9B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_001D4F12: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4F1D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_001D4F17: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_001D4F1D: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    eax = 1;

loc_001D4F31: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 8); /* subss */
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    ecx = MEM32(esp + 0x18);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001D4F9B: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D4FB9; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_001D4FA0: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    eax = 2;
    goto loc_001D4F31;

loc_001D4FB9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001D5010
 * Original: 0x001D5010 - 0x001D519A (394 bytes, 122 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D5010(void)
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

loc_001D5010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x54;
    PUSH32(esp, eax);
    ecx = esi + 0x50;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    edi = esi + 0x5C;
    PUSH32(esp, edi);
    ebx = esi + 0x70;
    PUSH32(esp, ebx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5040u); RECOMP_ABI_CALL(0x00557E6Bu, sub_00557E6B); /* call 0x00557E6B */

loc_001D5040: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5092; /* jne: not equal / not zero */

loc_001D5045: ;
    eax = esi + 0x54;
    PUSH32(esp, eax);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    edx = esi + 0x6C;
    PUSH32(esp, edx);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    ecx = esi + 0x64;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = esi + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D506Au); RECOMP_ABI_CALL(0x00557980u, sub_00557980); /* call 0x00557980 */

loc_001D506A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001D5092: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7F1360); /* mulss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    eax = esi + 0x20;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esi + 0x18);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0xC) = edx;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esi + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esi + 0x38) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x34);
    eax = esi + 0x40;
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0x38);
    MEM32(eax + 4) = edx;
    edx = MEM32(esi + 0x3C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x44); /* subss */
    POP32(esp, edi);
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
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
 * sub_001D5200
 * Original: 0x001D5200 - 0x001D5363 (355 bytes, 99 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D5200(void)
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

loc_001D5200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, edi);
    ebx = ecx;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    edi = esp + 0x30;
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
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5260u); RECOMP_ABI_CALL(0x00012B99u, sub_00012B99); /* call 0x00012B99 */

loc_001D5260: ;
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x50)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001D5336; /* ja: above (unsigned >) (xmm3.f[0] vs xmm0.f[0]) */

loc_001D5280: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x18)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001D5336; /* ja: above (unsigned >) (xmm0.f[0] vs xmm5.f[0]) */

loc_001D52BE: ;
    xmm5 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001D5336; /* ja: above (unsigned >) (xmm0.f[0] vs xmm5.f[0]) */

loc_001D52E6: ;
    xmm5 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001D5336; /* ja: above (unsigned >) (xmm0.f[0] vs xmm5.f[0]) */

loc_001D530E: ;
    xmm5 = XMM_SCALAR(MEMF(ebx + 0x44)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x40)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D5341; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_001D5336: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_001D5341: ;
    ecx = esp + 0x10;
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5350u); RECOMP_ABI_CALL(0x0001772Au, sub_0001772A); /* call 0x0001772A */

loc_001D5350: ;
    edx = MEM32(ebp + 0x14);
    POP32(esp, edi);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D53C0
 * Original: 0x001D53C0 - 0x001D581F (1119 bytes, 286 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D53C0(void)
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

loc_001D53C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, edi);
    ebx = ecx;
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esp + 0x58;
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5457u); RECOMP_ABI_CALL(0x00012B99u, sub_00012B99); /* call 0x00012B99 */

loc_001D5457: ;
    edx = esp + 0x90;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D546Du); RECOMP_ABI_CALL(0x00012B99u, sub_00012B99); /* call 0x00012B99 */

loc_001D546D: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x50)); /* movss */
    esi = MEM32(ebp + 0x18);
    edi = MEM32(ebp + 0x14);
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D5516; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001D5491: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x50)); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_001D57A8; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_001D54AC: ;
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] / xmm0.f[0]; /* divss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D54BE; /* jb: below (unsigned <) (xmm4.f[0] vs xmm3.f[0]) */

loc_001D54B9: ;
    xmm0 = xmm4; /* movaps */
    goto loc_001D54C5;

loc_001D54BE: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */

loc_001D54C5: ;
    eax = MEM32(edi);
    ecx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    SMEM32(esp + 0x34) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); /* fist */
    fp_top() = RECOMP_FP_PC((double)SMEM32(esp + 0x34) - fp_top()); /* fisubr dword ptr [esp + 0x34] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x34);
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi) = eax;
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(ebx + 0x50); /* subss */
    MEMF(esp + 0x28) = xmm4.f[0]; /* movss */
    goto loc_001D557E;

loc_001D5516: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x50)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D557E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001D552D: ;
    xmm5.f[0] = xmm5.f[0] - xmm4.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] / xmm5.f[0]; /* divss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D553F; /* jb: below (unsigned <) (xmm4.f[0] vs xmm3.f[0]) */

loc_001D553A: ;
    xmm0 = xmm4; /* movaps */
    goto loc_001D5546;

loc_001D553F: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */

loc_001D5546: ;
    eax = MEM32(edi);
    ecx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x38); /* cvttss2si */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esi) = eax;
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] - MEMF(ebx + 0x50); /* subss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */

loc_001D557E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    edx = ebx + 0x10;
    eax = ebx + 0x20;
    ecx = ebx + 0x30;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x8C) = ebx;
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x80) = edx;
    MEM32(esp + 0x84) = eax;
    MEM32(esp + 0x88) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_001D55D0: ;
    eax = MEM32(esp + ebx * 4 + 0x80);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7F11FC); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    ecx = MEM32(esi);
    edx = MEM32(edi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D55F2; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_001D55ED: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001D55F9;

loc_001D55F2: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_001D55F9: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D5660; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_001D5650: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_001D579A; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm3.f[0]) */

loc_001D5659: ;
    eax = 1;
    goto loc_001D566E;

loc_001D5660: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001D57A8; /* jb: below (unsigned <) (xmm1.f[0] vs xmm3.f[0]) */

loc_001D5669: ;
    eax = 2;

loc_001D566E: ;
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001D57A8; /* je: equal / zero */

loc_001D56E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5736; /* jne: not equal / not zero */

loc_001D56E7: ;
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x48);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    SMEM32(esp + 0x34) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); /* fist */
    fp_top() = RECOMP_FP_PC((double)SMEM32(esp + 0x34) - fp_top()); /* fisubr dword ptr [esp + 0x34] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x34);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = ecx;
    goto loc_001D5788;

loc_001D5736: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D579A; /* jne: not equal / not zero */

loc_001D573B: ;
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x48);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    SMEM32(esp + 0x3C) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); /* fist */
    fp_top() = RECOMP_FP_PC((double)SMEM32(esp + 0x3C) - fp_top()); /* fisubr dword ptr [esp + 0x3c] */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x7C);
    ecx = MEM32(esp + 0x3C);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi) = ecx;

loc_001D5788: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_001D579A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D57B3; /* jge: greater or equal (signed >=) */

loc_001D57A0: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    goto loc_001D55D0;

loc_001D57A8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

loc_001D57B3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = MEM32(ebp + 0x1C);
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AA840); /* addss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_001D5810; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_001D580D: ;
    xmm0 = xmm1; /* movaps */

loc_001D5810: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D5940
 * Original: 0x001D5940 - 0x001D59AB (107 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5940(void)
{

loc_001D5940: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = ecx;
    MEM32(eax) = 0x7F1364;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x74) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001D59D0
 * Original: 0x001D59D0 - 0x001D59D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D59D0(void)
{

loc_001D59D0: ;
    MEM32(ecx) = 0x7F1364;
    esp += 4; return; /* ret */

}

/**
 * sub_001D59E0
 * Original: 0x001D59E0 - 0x001D5A79 (153 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D59E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D59E0: ;
    eax = MEM32(0x8F4C6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5A78; /* jne: not equal / not zero */

loc_001D59ED: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1880);
    PUSH32(esp, 0x001D59F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D59F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5A6E; /* je: equal / zero */

loc_001D5A00: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(eax) = 0x7F1364;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x74) = 0;
    MEM32(0x8F4C6C) = eax;
    esp += 4; return; /* ret */

loc_001D5A6E: ;
    MEM32(0x8F4C6C) = 0;

loc_001D5A78: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D5AA0
 * Original: 0x001D5AA0 - 0x001D5ABB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5AA0: ;
    ecx = MEM32(0x8F4C6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5ABA; /* je: equal / zero */

loc_001D5AAA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D5AB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5AAEu); } /* indirect call */
    }

loc_001D5AB0: ;
    MEM32(0x8F4C6C) = 0;

loc_001D5ABA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D5AD0
 * Original: 0x001D5AD0 - 0x001D5AD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5AD0(void)
{

loc_001D5AD0: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_001D5AE0
 * Original: 0x001D5AE0 - 0x001D5AE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5AE0(void)
{

loc_001D5AE0: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_001D5AF0
 * Original: 0x001D5AF0 - 0x001D5B10 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5AF0: ;
    eax = MEM32(0x8F4C70);
    ecx = MEM32(0x8B4270);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(0x8F4C70) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001D5B0F; /* jle: less or equal (signed <=) */

loc_001D5B05: ;
    MEM32(0x8F4C70) = 0;

loc_001D5B0F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D5B20
 * Original: 0x001D5B20 - 0x001D5B33 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5B20: ;
    MEM32(0x8F4C70) = MEM32(0x8F4C70) - 1;
    _fa = (uint32_t)(MEM32(0x8F4C70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001D5B32; /* jns: not sign (positive) */

loc_001D5B28: ;
    eax = MEM32(0x8B4270);
    MEM32(0x8F4C70) = eax;

loc_001D5B32: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D5B40
 * Original: 0x001D5B40 - 0x001D5B7E (62 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5B40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001D5B4Du); RECOMP_ABI_CALL(0x000115E1u, sub_000115E1); /* call 0x000115E1 */

loc_001D5B4D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi) = 0x7F1368;
    MEM32(0x8F4C74) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5B90
 * Original: 0x001D5B90 - 0x001D5B91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5B90(void)
{

loc_001D5B90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D5BA0
 * Original: 0x001D5BA0 - 0x001D5C1B (123 bytes, 40 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5BA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001D5BADu); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_001D5BAD: ;
    ecx = esi;
    PUSH32(esp, 0x001D5BB4u); RECOMP_ABI_CALL(0x0002D0CFu, sub_0002D0CF); /* call 0x0002D0CF */

loc_001D5BB4: ;
    PUSH32(esp, 0x7F13DC);
    ecx = esi;
    PUSH32(esp, 0x001D5BC0u); RECOMP_ABI_CALL(0x000353CEu, sub_000353CE); /* call 0x000353CE */

loc_001D5BC0: ;
    ecx = esi;
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0x001D5BCAu); RECOMP_ABI_CALL(0x0002D0CFu, sub_0002D0CF); /* call 0x0002D0CF */

loc_001D5BCA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F13CC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001D5BD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5BD3u); } /* indirect call */
    }

loc_001D5BD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5BE5; /* je: equal / zero */

loc_001D5BDA: ;
    MEM32(esi + 0x78) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D5BE5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F13BC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001D5BF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5BEEu); } /* indirect call */
    }

loc_001D5BF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5C00; /* je: equal / zero */

loc_001D5BF5: ;
    MEM32(esi + 0x78) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001D5C00: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F13A4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001D5C0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D5C09u); } /* indirect call */
    }

loc_001D5C0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5C17; /* je: equal / zero */

loc_001D5C10: ;
    MEM32(esi + 0x78) = 0xFFFFFFFFu;

loc_001D5C17: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5C40
 * Original: 0x001D5C40 - 0x001D5C45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D5C40: ;
    g_seh_ebp = ebp; sub_00027747(); return; /* tail jmp 0x00027747 */

}

/**
 * sub_001D5C50
 * Original: 0x001D5C50 - 0x001D5C61 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5C50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5C5E; /* je: equal / zero */

loc_001D5C58: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x70) = eax;

loc_001D5C5E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5C70
 * Original: 0x001D5C70 - 0x001D5C7A (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5C70(void)
{

loc_001D5C70: ;
    MEM32(ecx + 0x70) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D5C80
 * Original: 0x001D5C80 - 0x001D5E59 (473 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001D5C80(void)
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

loc_001D5C80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x50) = 1;
    eax = MEM32(0x8F4C80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001D5D57; /* jne: not equal / not zero */

loc_001D5C9F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5CABu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D5CAB: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5CCB; /* je: equal / zero */

loc_001D5CB4: ;
    PUSH32(esp, 0x2BC57);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5CC3u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_001D5CC3: ;
    MEM32(0x8F4C80) = esi;
    goto loc_001D5CD5;

loc_001D5CCB: ;
    MEM32(0x8F4C80) = 0;

loc_001D5CD5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D5CF0;

    /* nop */
    /* nop */

loc_001D5CF0: ;
    esi = MEM32(0x8B4260);
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = esi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_001D5D0B; /* jge: greater or equal (signed >=) */

loc_001D5D05: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_001D5D0B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7C8)); /* fmul dword ptr [0x7ab7c8] */
    esi = MEM32(0x8F4C80);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = sin(fp_top()); /* fsin */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E0 (32-bit) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esi) = edi;
    fp_top() = -fp_top(); /* fchs */
    MEM32(esi + 4) = edx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x18);
    MEM32(esi + 8) = edi;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0x1C);
    MEM32(esi + 0xC) = edi;
    if (CMP_B(_fa, _fb)) goto loc_001D5CF0; /* jb: below (unsigned <) */

loc_001D5D57: ;
    eax = MEM32(0x8F4C78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5E01; /* jne: not equal / not zero */

loc_001D5D64: ;
    eax = ZX16(MEM16(0x8B4278));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5D76u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D5D76: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x8B4278)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x8B4278), LO16(edi) (16-bit) */
    MEM32(0x8F4C78) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001D5E01; /* jbe: below or equal (unsigned <=) */

loc_001D5D89: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001D5D90;

    /* nop */

loc_001D5D90: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5D95u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_001D5D95: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F4;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = XMM_SCALAR(MEMF(0x7AB8B0)); /* movss */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(0x8F4C78);
    MEMF(esi + edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + edx) = xmm1.f[0]; /* movss */
    MEMF(esi + edx + 8) = xmm1.f[0]; /* movss */
    eax = esi + edx;
    eax = MEM32(0x8F4C78);
    MEMF(esi + eax + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8F4C78);
    MEM32(esi + ecx + 0xC) = 0;
    edx = MEM32(0x8F4C78);
    eax = esi + edx;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    eax = ZX16(MEM16(0x8B4278));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D5D90; /* jl: less (signed <) */

loc_001D5E01: ;
    eax = MEM32(0x8F4C7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D5E53; /* jne: not equal / not zero */

loc_001D5E0A: ;
    eax = ZX16(MEM16(0x8B4278));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5E1Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001D5E1B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x8B4278)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x8B4278), LO16(esi) (16-bit) */
    MEM32(0x8F4C7C) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001D5E53; /* jbe: below or equal (unsigned <=) */

loc_001D5E2E: ;
    edi = edi;

loc_001D5E30: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001D5E35u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_001D5E35: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(0x8F4C7C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + esi * 2 + -2) = LO16(edx);
    ecx = ZX16(MEM16(0x8B4278));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D5E30; /* jl: less (signed <) */

loc_001D5E53: ;
    POP32(esp, edi);
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
 * sub_001D5ED0
 * Original: 0x001D5ED0 - 0x001D5F25 (85 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D5ED0: ;
    eax = MEM32(0x8F4C80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5EEC; /* je: equal / zero */

loc_001D5ED9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D5EDFu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D5EDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F4C80) = 0;

loc_001D5EEC: ;
    eax = MEM32(0x8F4C78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5F08; /* je: equal / zero */

loc_001D5EF5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D5EFBu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D5EFB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F4C78) = 0;

loc_001D5F08: ;
    eax = MEM32(0x8F4C7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D5F24; /* je: equal / zero */

loc_001D5F11: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D5F17u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001D5F17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F4C7C) = 0;

loc_001D5F24: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D5F40
 * Original: 0x001D5F40 - 0x001D60EB (427 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D5F40(void)
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

loc_001D5F40: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8F4C7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001D60E5; /* je: equal / zero */

loc_001D5F53: ;
    eax = MEM32(0x8F4C6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D60E5; /* je: equal / zero */

loc_001D5F60: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x8B4278)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x8B4278), LO16(ebp) (16-bit) */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001D60E4; /* jbe: below or equal (unsigned <=) */

loc_001D5F8B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D5F90: ;
    ecx = MEM32(0x8F4C7C);
    SET_LO16(eax, MEM16(ecx + ebp * 2));
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ecx + 0x5C);
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edx = ZX16(LO16(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001D603D; /* jb: below (unsigned <) */

loc_001D5FAE: ;
    edx = MEM32(0x8F4C6C);
    esi = MEM32(edx + 0x74);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D603B; /* jle: less or equal (signed <=) */

loc_001D5FBF: ;
    PUSH32(esp, 0x001D5FC4u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_001D5FC4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = MEM32(0x8F4C6C);
    ecx = edx + edx * 2 + 0x3C;
    ebx = ZX16(MEM16(eax + ecx * 2));
    edx = edx + edx * 2;
    esi = ZX16(MEM16(eax + edx * 2 + 0x7A));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001D5FEF; /* jle: less or equal (signed <=) */

loc_001D5FE3: ;
    PUSH32(esp, 0x001D5FE8u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_001D5FE8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001D5FF1;

loc_001D5FEF: ;
    edx = ebx;

loc_001D5FF1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D603B; /* jl: less (signed <) */

loc_001D5FF5: ;
    eax = MEM32(0x8F4C68);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x22C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x22C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001D603B; /* jge: greater or equal (signed >=) */

loc_001D6002: ;
    eax = MEM32(eax + 0x220);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    xmm0 = XMM_SCALAR(MEMF(eax + edx + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + edx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7F13E8); /* addss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x8F4C78);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */

loc_001D603B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001D603D: ;
    ecx = MEM32(0x8F4C7C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM16(ecx + ebp * 2) = LO16(eax);
    eax = MEM32(0x8F4C78);
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + eax + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + eax + 4); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + eax); /* subss */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x24;
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001D608Fu); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_001D608F: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7B43AC); /* mulss */
    xmm1.f[0] = (float)(int32_t)MEM32(0x8B4260); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7B43F0); /* addss */
    eax = MEM32(0x8F4C78);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(edi + eax + 0xC) = edx;
    ecx = ZX16(MEM16(0x8B4278));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001D5F90; /* jl: less (signed <) */

loc_001D60E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001D60E4: ;
    POP32(esp, ebp);

loc_001D60E5: ;
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
 * sub_001D6160
 * Original: 0x001D6160 - 0x001D6163 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6160(void)
{

loc_001D6160: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D6170
 * Original: 0x001D6170 - 0x001D6175 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6170(void)
{

loc_001D6170: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D6180
 * Original: 0x001D6180 - 0x001D6185 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6180(void)
{

loc_001D6180: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D6190
 * Original: 0x001D6190 - 0x001D6199 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6190(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001D6190: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001D61A0
 * Original: 0x001D61A0 - 0x001D620E (110 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D61A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D61A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D61C3; /* je: equal / zero */

loc_001D61A9: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x7F13F4);
    PUSH32(esp, 0x7F13EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D61BEu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001D61BE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001D61F4;

loc_001D61C3: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esp + 4;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x001D61D9u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_001D61D9: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001D61E2: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001D61E2; /* jne: not equal / not zero */

loc_001D61EC: ;
    ecx = esp;
    PUSH32(esp, 0x001D61F4u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_001D61F4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D6203; /* je: equal / zero */

loc_001D61FB: ;
    MEM32(esp + 8) = 0;

loc_001D6203: ;
    ecx = esp + 8;
    PUSH32(esp, 0x001D620Cu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_001D620C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D6230
 * Original: 0x001D6230 - 0x001D62B1 (129 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6230: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x7F13FC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D624Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001D624D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = 0;
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D6273u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_001D6273: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x001D6280u); RECOMP_ABI_CALL(0x0057287Du, sub_0057287D); /* call 0x0057287D */

loc_001D6280: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6296; /* je: equal / zero */

loc_001D6288: ;
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001D6293u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_001D6293: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001D6296: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001D62A4u); RECOMP_ABI_CALL(0x00572B5Eu, sub_00572B5E); /* call 0x00572B5E */

loc_001D62A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D62E0
 * Original: 0x001D62E0 - 0x001D630B (43 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D62E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D62E0: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x001D62F6u); RECOMP_ABI_CALL(0x0055A6F1u, sub_0055A6F1); /* call 0x0055A6F1 */

loc_001D62F6: ;
    esi = MEM32(esi);
    edx = MEM32(esp + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 0x18) = 0;
    MEM16(esi + 0x1A) = LO16(edx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D6320
 * Original: 0x001D6320 - 0x001D6335 (21 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6320(void)
{

loc_001D6320: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x001D6332u); RECOMP_ABI_CALL(0x005599F1u, sub_005599F1); /* call 0x005599F1 */

loc_001D6332: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D6340
 * Original: 0x001D6340 - 0x001D6346 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6340(void)
{

loc_001D6340: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_001D6350
 * Original: 0x001D6350 - 0x001D6356 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6350(void)
{

loc_001D6350: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_001D6360
 * Original: 0x001D6360 - 0x001D6375 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6360(void)
{

loc_001D6360: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001D6374u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D6372u); } /* indirect call */
    }

loc_001D6374: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D6380
 * Original: 0x001D6380 - 0x001D6391 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6380(void)
{

loc_001D6380: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001D6390u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001D638Du); } /* indirect call */
    }

loc_001D6390: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001D63A0
 * Original: 0x001D63A0 - 0x001D63CE (46 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D63A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D63A0: ;
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
    PUSH32(esp, 0x20F4A9A1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D63C5u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_001D63C5: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001D63E0
 * Original: 0x001D63E0 - 0x001D63EA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D63E0(void)
{

loc_001D63E0: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001D63E8u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_001D63E8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001D63F0
 * Original: 0x001D63F0 - 0x001D63F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D63F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D63F0: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0001A975(); return; /* tail jmp 0x0001A975 */

}

/**
 * sub_001D6400
 * Original: 0x001D6400 - 0x001D6404 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6400(void)
{

loc_001D6400: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001D6410
 * Original: 0x001D6410 - 0x001D641C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6410(void)
{

loc_001D6410: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D6420
 * Original: 0x001D6420 - 0x001D642B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6420: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001D6430
 * Original: 0x001D6430 - 0x001D6443 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6430: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001D6440; /* je: equal / zero */

loc_001D6438: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;

loc_001D6440: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001D6450
 * Original: 0x001D6450 - 0x001D6453 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6450(void)
{

loc_001D6450: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001D6460
 * Original: 0x001D6460 - 0x001D64D2 (114 bytes, 40 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D6460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001D6460: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001D6478; /* jne: not equal / not zero */

loc_001D646C: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_001D64AA;

loc_001D6478: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001D6482u); RECOMP_ABI_CALL(0x00574405u, sub_00574405); /* call 0x00574405 */

loc_001D6482: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001D64AAu); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_001D64AA: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x001D64B3u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_001D64B3: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001D64C2; /* je: equal / zero */

loc_001D64BA: ;
    MEM32(esp + 0x14) = 0;

loc_001D64C2: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x001D64CBu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_001D64CB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}
