/**
 * nhl_07_recomp - Recompiled code chunk 168
 * Functions: 250 (0x00354170 - 0x00360F10)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00354170
 * Original: 0x00354170 - 0x00354175 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354170: ;
    g_seh_ebp = ebp; sub_0001C040(); return; /* tail jmp 0x0001C040 */

}

/**
 * sub_00354180
 * Original: 0x00354180 - 0x003541EB (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00354180: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00354197u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00354197: ;
    eax = MEM32(esp + 0xB4);
    PUSH32(esp, 0x80);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003541AEu); RECOMP_ABI_CALL(0x000289F8u, sub_000289F8); /* call 0x000289F8 */

loc_003541AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x20F4A9A1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003541CAu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_003541CA: ;
    ecx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003541DBu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003541DB: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003541E4u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_003541E4: ;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00354210
 * Original: 0x00354210 - 0x003542A0 (144 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00354210: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00354299; /* jne: not equal / not zero */

loc_0035421F: ;
    eax = MEM32(esp + 0xB4);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00354233u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00354233: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035423Fu); RECOMP_ABI_CALL(0x0002F6CCu, sub_0002F6CC); /* call 0x0002F6CC */

loc_0035423F: ;
    ecx = MEM32(esp + 0xC0);
    edx = MEM32(esp + 0xBC);
    PUSH32(esp, 0x80);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00354260u); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_00354260: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esp + 0x44;
    PUSH32(esp, 0x20F4A9A1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035427Cu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035427C: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x0035428Du); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035428D: ;
    edx = MEM32(esp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00354296u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00354296: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00354299: ;
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003542D0
 * Original: 0x003542D0 - 0x0035434F (127 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003542D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003542D0: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00354308; /* jge: greater or equal (signed >=) */

loc_003542F3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003542FF; /* jne: not equal / not zero */

loc_003542F8: ;
    ecx = 0xC;
    goto loc_00354308;

loc_003542FF: ;
    edx = 0xB;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx;

loc_00354308: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 0x38));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM16(eax + 0x38) = MEM16(eax + 0x38) ^ LO16(edx);
    _fa = (uint32_t)(MEM16(eax + 0x38)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0xC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ebx, MEM8(eax + 0x38));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x84);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM16(eax + 0x38) = MEM16(eax + 0x38) ^ LO16(edx);
    _fa = (uint32_t)(MEM16(eax + 0x38)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    eax = MEM32(0x8FCBB0);
    ecx = ecx + eax + 0x44;
    PUSH32(esp, 0x0035434Bu); RECOMP_ABI_CALL(0x00012F6Du, sub_00012F6D); /* call 0x00012F6D */

loc_0035434B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00354370
 * Original: 0x00354370 - 0x003543C7 (87 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00354370: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x8FCBB0);
    eax = MEM32(ebx + 0xC84);
    eax = MEM32(eax);
    ecx = ZX8(MEM8(eax + 0x13));
    _fb = (uint32_t)(0xA74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xA74;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    edi = esp + 0xC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = 1;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_003543C2; /* jne: not equal / not zero */

loc_003543A1: ;
    ecx = MEM32(0x8FCB94);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003543ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003543A9u); } /* indirect call */
    }

loc_003543AC: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx + 0x120;
    PUSH32(esp, 0x003543C2u); RECOMP_ABI_CALL(0x000276B6u, sub_000276B6); /* call 0x000276B6 */

loc_003543C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003543E0
 * Original: 0x003543E0 - 0x003543F6 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003543E0(void)
{

loc_003543E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82BC74;
    PUSH32(esp, 0x003543EEu); RECOMP_ABI_CALL(0x0001E561u, sub_0001E561); /* call 0x0001E561 */

loc_003543EE: ;
    MEM32(esi) = 0x829E64;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00354400
 * Original: 0x00354400 - 0x0035445D (93 bytes, 41 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00354400: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00354416u); RECOMP_ABI_CALL(0x00030E1Eu, sub_00030E1E); /* call 0x00030E1E */

loc_00354416: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035443B; /* je: equal / zero */

loc_0035441A: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035442D; /* jne: not equal / not zero */

loc_00354422: ;
    esi = MEM32(eax + 0x10);
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x18) = edi;
    goto loc_0035443B;

loc_0035442D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035443B; /* jne: not equal / not zero */

loc_00354432: ;
    esi = MEM32(eax + 0xC);
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x14) = edi;

loc_0035443B: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00354455; /* je: equal / zero */

loc_00354443: ;
    edx = MEM32(esp + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00354452u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00354450u); } /* indirect call */
    }

loc_00354452: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00354455: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00354480
 * Original: 0x00354480 - 0x003544B1 (49 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00354480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00354480: ;
    edx = MEM32(esp + 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035448Fu); RECOMP_ABI_CALL(0x00030E1Eu, sub_00030E1E); /* call 0x00030E1E */

loc_0035448F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003544AC; /* je: equal / zero */

loc_00354493: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003544A1; /* jne: not equal / not zero */

loc_0035449B: ;
    eax = MEM32(eax + 0x18);
    esp += 8; return; /* ret 4 */

loc_003544A1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003544AC; /* jne: not equal / not zero */

loc_003544A6: ;
    eax = MEM32(eax + 0x14);
    esp += 8; return; /* ret 4 */

loc_003544AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003544C0
 * Original: 0x003544C0 - 0x00354515 (85 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003544C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003544C0: ;
    SET_LO8(edx, MEM8(0x8FCA98));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    PUSH32(esp, esi);
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_003544E0; /* jns: not sign (positive) */

loc_003544CF: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(edx);
    esi = MEM32(ecx);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    esi = esi + ecx + 4;
    MEM32(edx) = esi;

loc_003544E0: ;
    SET_LO8(edx, MEM8(0x8FCA94));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_003544FB; /* jns: not sign (positive) */

loc_003544EA: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edx);
    esi = MEM32(eax);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2C);
    esi = esi + eax + 4;
    MEM32(edx) = esi;

loc_003544FB: ;
    POP32(esp, esi);
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = ecx;
    ecx = MEM32(0x8FCBB0);
    _fb = (uint32_t)(0xB94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002005A(); return; /* tail jmp 0x0002005A */

}

/**
 * sub_00354530
 * Original: 0x00354530 - 0x003545CC (156 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00354530: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82BCC0;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x84) = eax;
    MEM8(esi + 0x88) = LO8(eax);
    xmm1.f[0] = (float)(int32_t)MEM32(0x8BFE58); /* cvtsi2ss */
    MEMF(esi + 0x80) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(esi + 0x60, xmm0); /* movaps */
    PUSH32(esp, 0x003545C1u); RECOMP_ABI_CALL(0x00036AF8u, sub_00036AF8); /* call 0x00036AF8 */

loc_003545C1: ;
    ecx = esi;
    PUSH32(esp, 0x003545C8u); RECOMP_ABI_CALL(0x0001CB3Fu, sub_0001CB3F); /* call 0x0001CB3F */

loc_003545C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00354600
 * Original: 0x00354600 - 0x0035461E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00354600: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00354608u); RECOMP_ABI_CALL(0x0002A609u, sub_0002A609); /* call 0x0002A609 */

loc_00354608: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00354618; /* je: equal / zero */

loc_0035460F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00354615u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00354615: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00354618: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00354630
 * Original: 0x00354630 - 0x0035465B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00354630: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x0035463Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035463C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00354650; /* je: equal / zero */

loc_00354643: ;
    ecx = eax;
    PUSH32(esp, 0x0035464Au); RECOMP_ABI_CALL(0x0002B897u, sub_0002B897); /* call 0x0002B897 */

loc_0035464A: ;
    MEM32(0x8FCBB8) = eax;
    esp += 4; return; /* ret */

loc_00354650: ;
    MEM32(0x8FCBB8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00354670
 * Original: 0x00354670 - 0x00354732 (194 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00354670: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0035467Eu); RECOMP_ABI_CALL(0x000258DEu, sub_000258DE); /* call 0x000258DE */

loc_0035467E: ;
    MEM32(esi) = 0x82C514;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0xC4) = ebx;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(esi + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    XMM_STORE(esi + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    XMM_STORE(esi + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    XMM_STORE(esi + 0xB0, xmm0); /* movaps */
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x6C) = ebx;
    eax = 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi + 0xE4;
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xD4) = eax;
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xDC) = ebx;
    MEM8(esi + 0xE0) = LO8(ebx);
    PUSH32(esp, 0x00354718u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00354718: ;
    MEM32(esi + 0xE8) = ebx;
    MEM32(esi + 0xEC) = ebx;
    MEM8(esi + 0xF0) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00354770
 * Original: 0x00354770 - 0x00354773 (3 bytes, 1 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354770(void)
{

loc_00354770: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00354780
 * Original: 0x00354780 - 0x00354787 (7 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354780(void)
{

loc_00354780: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00354790
 * Original: 0x00354790 - 0x003547B4 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354790: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xE4;
    MEM32(esi) = 0x82C514;
    PUSH32(esp, 0x003547A4u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003547A4: ;
    ecx = esi + 0x50;
    PUSH32(esp, 0x003547ACu); RECOMP_ABI_CALL(0x0001A795u, sub_0001A795); /* call 0x0001A795 */

loc_003547AC: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00029EE3(); return; /* tail jmp 0x00029EE3 */

}

/**
 * sub_003547C0
 * Original: 0x003547C0 - 0x003547D9 (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003547C0(void)
{

loc_003547C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x50;
    PUSH32(esp, 0x003547CBu); RECOMP_ABI_CALL(0x0001A795u, sub_0001A795); /* call 0x0001A795 */

loc_003547CB: ;
    MEM32(esi + 0xD8) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003547E0
 * Original: 0x003547E0 - 0x00354829 (73 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003547E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003547E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(edx, MEM8(esi + 0xF0));
    ecx = MEM32(esi + 0xE4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    edx = MEM32(esi + 0xD4);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xD0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xD8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi + 0x50;
    PUSH32(esp, 0x0035481Cu); RECOMP_ABI_CALL(0x0002627Au, sub_0002627A); /* call 0x0002627A */

loc_0035481C: ;
    eax = MEM32(0x8FCAC4);
    MEM32(esi + 0xEC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00354840
 * Original: 0x00354840 - 0x0035487B (59 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00354840: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xF0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035485B; /* je: equal / zero */

loc_0035484D: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00354857u); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_00354857: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0035485B: ;
    eax = MEM32(0x8FCAC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00354877; /* jne: not equal / not zero */

loc_00354864: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00354870u); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_00354870: ;
    ecx = esi;
    PUSH32(esp, 0x00354877u); RECOMP_ABI_CALL(0x00013A80u, sub_00013A80); /* call 0x00013A80 */

loc_00354877: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00354890
 * Original: 0x00354890 - 0x003548DE (78 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00354890: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x44;
    edi = esi + 0x58;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi) = 0x82BD18;
    MEM32(eax) = 0x82BD14;
    PUSH32(esp, 0x003548AEu); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_003548AE: ;
    ecx = esi + 0x70;
    PUSH32(esp, 0x003548B6u); RECOMP_ABI_CALL(0x0001F083u, sub_0001F083); /* call 0x0001F083 */

loc_003548B6: ;
    ecx = edi;
    PUSH32(esp, 0x003548BDu); RECOMP_ABI_CALL(0x00017301u, sub_00017301); /* call 0x00017301 */

loc_003548BD: ;
    ecx = esi;
    PUSH32(esp, 0x003548C4u); RECOMP_ABI_CALL(0x00029EE3u, sub_00029EE3); /* call 0x00029EE3 */

loc_003548C4: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003548D7; /* je: equal / zero */

loc_003548CB: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003548D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003548D4u); } /* indirect call */
    }

loc_003548D7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00354900
 * Original: 0x00354900 - 0x00354A02 (258 bytes, 108 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354900: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFDu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0035492E; /* ja: above (unsigned >) */

loc_0035490E: ;
    edx = ZX8(MEM8(edx + 0x35494C));
    { uint32_t _jt = MEM32(edx * 4 + 0x35493C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0035491Cu) goto loc_0035491C;
    if (_jt == 0x00354925u) goto loc_00354925;
    if (_jt == 0x0035492Eu) goto loc_0035492E;
    if (_jt == 0x00354937u) goto loc_00354937;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0035491C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002F2DA(); return; /* tail jmp 0x0002F2DA */

loc_00354925: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00030BB7(); return; /* tail jmp 0x00030BB7 */

loc_0035492E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00016294(); return; /* tail jmp 0x00016294 */

loc_00354937: ;
    esp += 8; return; /* ret 4 */

    eax = ZX8(MEM8(eax + 0x354A28));
    { uint32_t _jt = MEM32(eax * 4 + 0x354A04); /* switch: 9 entries, 8 targets */
    if (_jt == 0x00354990u) goto loc_00354990;
    if (_jt == 0x003549A4u) goto loc_003549A4;
    if (_jt == 0x003549B1u) goto loc_003549B1;
    if (_jt == 0x003549BEu) goto loc_003549BE;
    if (_jt == 0x003549CBu) goto loc_003549CB;
    if (_jt == 0x003549D8u) goto loc_003549D8;
    if (_jt == 0x003549F5u) goto loc_003549F5;
    if (_jt == 0x003549FDu) goto loc_003549FD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00354990: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00354997u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00354994u); } /* indirect call */
    }

loc_00354997: ;
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0035499Fu); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_0035499F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003549A4: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003549ACu); RECOMP_ABI_CALL(0x0002EFDDu, sub_0002EFDD); /* call 0x0002EFDD */

loc_003549AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003549B1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003549B9u); RECOMP_ABI_CALL(0x0001F6FFu, sub_0001F6FF); /* call 0x0001F6FF */

loc_003549B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003549BE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003549C6u); RECOMP_ABI_CALL(0x0002B13Fu, sub_0002B13F); /* call 0x0002B13F */

loc_003549C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003549CB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003549D3u); RECOMP_ABI_CALL(0x000353F1u, sub_000353F1); /* call 0x000353F1 */

loc_003549D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003549D8: ;
    ecx = esi;
    PUSH32(esp, 0x003549DFu); RECOMP_ABI_CALL(0x0002D0CFu, sub_0002D0CF); /* call 0x0002D0CF */

loc_003549DF: ;
    PUSH32(esp, 0x82C544);
    ecx = esi;
    PUSH32(esp, 0x003549EBu); RECOMP_ABI_CALL(0x000353CEu, sub_000353CE); /* call 0x000353CE */

loc_003549EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003549FD; /* je: equal / zero */

loc_003549EF: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40) = eax;

loc_003549F5: ;
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003549FDu); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_003549FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00354A02
 * Original: 0x00354A02 - 0x00354A70 (110 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354A02(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00354A02: ;
    edi = edi;
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax ^ 0x3549FD00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -1107282615) = MEM8(eax + -1107282615) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax + -1107282615)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax ^ 0x3549CB00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax ^ 0x3549B100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ecx, HI8(ecx) + HI8(edx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax ^ 0x3549F500;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + 0x8080808)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(eax + 0x8080808);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx) = MEM8(ecx) | LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0 /* seg:es */);
    MEM8(edi) = MEM8(edi) | LO8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00354A70
 * Original: 0x00354A70 - 0x00354AF3 (131 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00354A70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00354A7Eu); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_00354A7E: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00354AEE; /* jne: not equal / not zero */

loc_00354A85: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00354AEE; /* jne: not equal / not zero */

loc_00354A8C: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00354AEE; /* jne: not equal / not zero */

loc_00354A93: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3A20);
    MEM8(esi + 0x4C) = 1;
    PUSH32(esp, 0x00354AA3u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00354AA3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00354AB3; /* je: equal / zero */

loc_00354AAA: ;
    ecx = eax;
    PUSH32(esp, 0x00354AB1u); RECOMP_ABI_CALL(0x00028539u, sub_00028539); /* call 0x00028539 */

loc_00354AB1: ;
    goto loc_00354AB5;

loc_00354AB3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00354AB5: ;
    MEM32(0x8FCB6C) = eax;
    MEM32(esi + 0x48) = eax;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00354AC9u); RECOMP_ABI_CALL(0x0002A523u, sub_0002A523); /* call 0x0002A523 */

loc_00354AC9: ;
    edi = MEM32(esi + 0x48);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 2);
    MEM32(edi + 0x1C) = ecx;
    PUSH32(esp, 0x00354AD9u); RECOMP_ABI_CALL(0x005589ADu, sub_005589AD); /* call 0x005589AD */

loc_00354AD9: ;
    edx = MEM32(edi + 0x10);
    ecx = edi + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00354AEEu); RECOMP_ABI_CALL(0x0055A6ACu, sub_0055A6AC); /* call 0x0055A6AC */

loc_00354AEE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00354B20
 * Original: 0x00354B20 - 0x00354BA3 (131 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00354B20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00354B2Eu); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_00354B2E: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00354B9E; /* jne: not equal / not zero */

loc_00354B35: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00354B9E; /* jne: not equal / not zero */

loc_00354B3C: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00354B9E; /* jne: not equal / not zero */

loc_00354B43: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x90);
    MEM8(esi + 0x4C) = 1;
    PUSH32(esp, 0x00354B53u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00354B53: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00354B63; /* je: equal / zero */

loc_00354B5A: ;
    ecx = eax;
    PUSH32(esp, 0x00354B61u); RECOMP_ABI_CALL(0x0002B897u, sub_0002B897); /* call 0x0002B897 */

loc_00354B61: ;
    goto loc_00354B65;

loc_00354B63: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00354B65: ;
    MEM32(0x8FCBB8) = eax;
    MEM32(esi + 0x48) = eax;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00354B79u); RECOMP_ABI_CALL(0x0001F3A3u, sub_0001F3A3); /* call 0x0001F3A3 */

loc_00354B79: ;
    edi = MEM32(esi + 0x48);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, 2);
    MEM32(edi + 0x1C) = ecx;
    PUSH32(esp, 0x00354B89u); RECOMP_ABI_CALL(0x005589ADu, sub_005589AD); /* call 0x005589AD */

loc_00354B89: ;
    edx = MEM32(edi + 0x10);
    ecx = edi + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00354B9Eu); RECOMP_ABI_CALL(0x0055A6ACu, sub_0055A6AC); /* call 0x0055A6AC */

loc_00354B9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00354BD0
 * Original: 0x00354BD0 - 0x00354C2C (92 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354BD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00354C05; /* ja: above (unsigned >) */

loc_00354BE2: ;
    eax = ZX8(MEM8(eax + 0x354C40));
    { uint32_t _jt = MEM32(eax * 4 + 0x354C2C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00354BF0u) goto loc_00354BF0;
    if (_jt == 0x00354BFDu) goto loc_00354BFD;
    if (_jt == 0x00354C05u) goto loc_00354C05;
    if (_jt == 0x00354C12u) goto loc_00354C12;
    if (_jt == 0x00354C1Fu) goto loc_00354C1F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00354BF0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00354BF8u); RECOMP_ABI_CALL(0x00021FE5u, sub_00021FE5); /* call 0x00021FE5 */

loc_00354BF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00354BFD: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00354C05u); RECOMP_ABI_CALL(0x00021171u, sub_00021171); /* call 0x00021171 */

loc_00354C05: ;
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00354C0Du); RECOMP_ABI_CALL(0x00027747u, sub_00027747); /* call 0x00027747 */

loc_00354C0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00354C12: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00354C1Au); RECOMP_ABI_CALL(0x0001B9A6u, sub_0001B9A6); /* call 0x0001B9A6 */

loc_00354C1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00354C1F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00354C27u); RECOMP_ABI_CALL(0x0001E6E7u, sub_0001E6E7); /* call 0x0001E6E7 */

loc_00354C27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00354CA1
 * Original: 0x00354CA1 - 0x00354CAE (13 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354CA1(void)
{

loc_00354CA1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00354CA9u); RECOMP_ABI_CALL(0x0002E4E8u, sub_0002E4E8); /* call 0x0002E4E8 */

loc_00354CA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00354F09
 * Original: 0x00354F09 - 0x00354F1E (21 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354F09(void)
{

loc_00354F09: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00354F11u); RECOMP_ABI_CALL(0x00021171u, sub_00021171); /* call 0x00021171 */

loc_00354F11: ;
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00354F19u); RECOMP_ABI_CALL(0x00027747u, sub_00027747); /* call 0x00027747 */

loc_00354F19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00354F1E
 * Original: 0x00354F1E - 0x003555B7 (1689 bytes, 687 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354F1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354F1E: ;
    edi = edi;
    eax = MEM32(0x900354C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax ^ 0x354CAE00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esp + ecx * 2 + 0x4F110035) = MEM8(esp + ecx * 2 + 0x4F110035) + LO8(edx);
    _fa = (uint32_t)(MEM8(esp + ecx * 2 + 0x4F110035)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = eax ^ 0x4040000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(1) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    edi = 0x82C870;
    esi = ebx;
    ecx = 7;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00355034; /* je: equal / zero */

loc_0035501C: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x82C864);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00355029u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00355029: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003552D6; /* jne: not equal / not zero */

loc_00355034: ;
    edi = 0x82C848;
    esi = ebx;
    ecx = 0x15;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00355580; /* je: equal / zero */

loc_0035504A: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x82C834);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00355057u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00355057: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355580; /* je: equal / zero */

loc_00355062: ;
    edi = 0x82C818;
    esi = ebx;
    ecx = 0x16;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00355555; /* je: equal / zero */

loc_00355078: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x82C7FC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00355085u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00355085: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355555; /* je: equal / zero */

loc_00355090: ;
    edi = 0x82C7E8;
    esi = ebx;
    ecx = 0x10;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0035552A; /* je: equal / zero */

loc_003550A6: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x82C7D4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003550B3u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_003550B3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035552A; /* je: equal / zero */

loc_003550BE: ;
    edi = 0x82C7B8;
    esi = ebx;
    ecx = 0x17;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_003554FB; /* je: equal / zero */

loc_003550D4: ;
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x82C79C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003550E1u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_003550E1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003554FB; /* je: equal / zero */

loc_003550EC: ;
    edi = 0x82C784;
    esi = ebx;
    ecx = 0x12;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_003554C9; /* je: equal / zero */

loc_00355102: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x82C76C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0035510Fu); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0035510F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003554C9; /* je: equal / zero */

loc_0035511A: ;
    edi = 0x82C754;
    esi = ebx;
    ecx = 0x14;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00355497; /* je: equal / zero */

loc_00355130: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x82C738);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0035513Du); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0035513D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355497; /* je: equal / zero */

loc_00355148: ;
    edi = 0x82C720;
    esi = ebx;
    ecx = 0x12;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00355468; /* je: equal / zero */

loc_0035515E: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x82C708);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0035516Bu); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0035516B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355468; /* je: equal / zero */

loc_00355176: ;
    edi = 0x82C6F4;
    esi = ebx;
    ecx = 0xF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00355439; /* je: equal / zero */

loc_0035518C: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x82C6E0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00355199u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00355199: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355439; /* je: equal / zero */

loc_003551A4: ;
    edi = 0x82C6C8;
    esi = ebx;
    ecx = 0x13;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0035540A; /* je: equal / zero */

loc_003551BA: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x82C6B0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003551C7u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_003551C7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035540A; /* je: equal / zero */

loc_003551D2: ;
    edi = 0x82C698;
    esi = ebx;
    ecx = 0x12;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_003553DB; /* je: equal / zero */

loc_003551E8: ;
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x82C680);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003551F5u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_003551F5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003553DB; /* je: equal / zero */

loc_00355200: ;
    edi = 0x82C664;
    esi = ebx;
    ecx = 0x16;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_003553A9; /* je: equal / zero */

loc_00355216: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x82C648);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00355223u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00355223: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003553A9; /* je: equal / zero */

loc_0035522E: ;
    edi = 0x82C628;
    esi = ebx;
    ecx = 0x19;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00355377; /* je: equal / zero */

loc_00355244: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x82C608);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00355251u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00355251: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355377; /* je: equal / zero */

loc_0035525C: ;
    edi = 0x82C5EC;
    esi = ebx;
    ecx = 0x15;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00355348; /* je: equal / zero */

loc_00355272: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x82C5D0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0035527Fu); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0035527F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355348; /* je: equal / zero */

loc_0035528A: ;
    edi = 0x82C5AC;
    esi = ebx;
    ecx = 0x1D;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00355319; /* je: equal / zero */

loc_0035529C: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x82C588);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003552A9u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_003552A9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355319; /* je: equal / zero */

loc_003552B0: ;
    edi = 0x82C56C;
    esi = ebx;
    ecx = 0x15;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_003552EA; /* je: equal / zero */

loc_003552C2: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x82C550);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003552CFu); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_003552CF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003552EA; /* je: equal / zero */

loc_003552D6: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x003552E3u); RECOMP_ABI_CALL(0x000282CDu, sub_000282CD); /* call 0x000282CD */

loc_003552E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003552EA: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003552FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003552FBu); } /* indirect call */
    }

loc_003552FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_00355306: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00355312u); RECOMP_ABI_CALL(0x000278E1u, sub_000278E1); /* call 0x000278E1 */

loc_00355312: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00355319: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0035532Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035532Au); } /* indirect call */
    }

loc_0035532D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_00355335: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00355341u); RECOMP_ABI_CALL(0x00034A32u, sub_00034A32); /* call 0x00034A32 */

loc_00355341: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00355348: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0035535Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00355359u); } /* indirect call */
    }

loc_0035535C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_00355364: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00355370u); RECOMP_ABI_CALL(0x00034640u, sub_00034640); /* call 0x00034640 */

loc_00355370: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00355377: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD0);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0035538Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035538Bu); } /* indirect call */
    }

loc_0035538E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_00355396: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003553A2u); RECOMP_ABI_CALL(0x00027C0Bu, sub_00027C0B); /* call 0x00027C0B */

loc_003553A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003553A9: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003553C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003553BDu); } /* indirect call */
    }

loc_003553C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_003553C8: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003553D4u); RECOMP_ABI_CALL(0x0001AA51u, sub_0001AA51); /* call 0x0001AA51 */

loc_003553D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003553DB: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003553EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003553ECu); } /* indirect call */
    }

loc_003553EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_003553F7: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00355403u); RECOMP_ABI_CALL(0x0001DFADu, sub_0001DFAD); /* call 0x0001DFAD */

loc_00355403: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0035540A: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0035541Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035541Bu); } /* indirect call */
    }

loc_0035541E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_00355426: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00355432u); RECOMP_ABI_CALL(0x00018120u, sub_00018120); /* call 0x00018120 */

loc_00355432: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00355439: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0035544Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035544Au); } /* indirect call */
    }

loc_0035544D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_00355455: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00355461u); RECOMP_ABI_CALL(0x000209D8u, sub_000209D8); /* call 0x000209D8 */

loc_00355461: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00355468: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0035547Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00355479u); } /* indirect call */
    }

loc_0035547C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_00355484: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00355490u); RECOMP_ABI_CALL(0x0002799Au, sub_0002799A); /* call 0x0002799A */

loc_00355490: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00355497: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x6CC);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003554AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003554ABu); } /* indirect call */
    }

loc_003554AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_003554B6: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003554C2u); RECOMP_ABI_CALL(0x000365F3u, sub_000365F3); /* call 0x000365F3 */

loc_003554C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003554C9: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003554E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003554DDu); } /* indirect call */
    }

loc_003554E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_003554E8: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003554F4u); RECOMP_ABI_CALL(0x0002DBA6u, sub_0002DBA6); /* call 0x0002DBA6 */

loc_003554F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003554FB: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0035550Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035550Cu); } /* indirect call */
    }

loc_0035550F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_00355517: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00355523u); RECOMP_ABI_CALL(0x000208C0u, sub_000208C0); /* call 0x000208C0 */

loc_00355523: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0035552A: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0035553Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035553Bu); } /* indirect call */
    }

loc_0035553E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_00355542: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0035554Eu); RECOMP_ABI_CALL(0x00034DE8u, sub_00034DE8); /* call 0x00034DE8 */

loc_0035554E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00355555: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00355569u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00355566u); } /* indirect call */
    }

loc_00355569: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_0035556D: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00355579u); RECOMP_ABI_CALL(0x00024164u, sub_00024164); /* call 0x00024164 */

loc_00355579: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00355580: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00355597u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00355594u); } /* indirect call */
    }

loc_00355597: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003555AE; /* je: equal / zero */

loc_0035559B: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003555A7u); RECOMP_ABI_CALL(0x00033B8Cu, sub_00033B8C); /* call 0x00033B8C */

loc_003555A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003555AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00355730
 * Original: 0x00355730 - 0x0035578F (95 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355730: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x82AD6C;
    if (CMP_EQ(_fa, _fb)) goto loc_00355749; /* je: equal / zero */

loc_00355740: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00355746u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00355746: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00355749: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355768; /* je: equal / zero */

loc_00355751: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00355759u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00355759: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00355768u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00355765u); } /* indirect call */
    }

loc_00355768: ;
    ecx = esi;
    MEM32(esi) = 0x82ACFC;
    PUSH32(esp, 0x00355775u); RECOMP_ABI_CALL(0x00035612u, sub_00035612); /* call 0x00035612 */

loc_00355775: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00355789; /* je: equal / zero */

loc_0035577D: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00355789u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00355786u); } /* indirect call */
    }

loc_00355789: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003557B0
 * Original: 0x003557B0 - 0x003558BE (270 bytes, 98 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003557B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003557B0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003557C3u); RECOMP_ABI_CALL(0x00016776u, sub_00016776); /* call 0x00016776 */

loc_003557C3: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003558B4; /* je: equal / zero */

loc_003557CE: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003558B4; /* je: equal / zero */

loc_003557D9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003557E6u); RECOMP_ABI_CALL(0x0055B7E6u, sub_0055B7E6); /* call 0x0055B7E6 */

loc_003557E6: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(eax + 4);
    ebp = MEM32(ecx + eax * 4 + 4);
    ecx = MEM32(esi + 0x3C);
    edi = esi + 0x48;
    PUSH32(esp, edi);
    ebx = esi + 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00355808u); RECOMP_ABI_CALL(0x0055B805u, sub_0055B805); /* call 0x0055B805 */

loc_00355808: ;
    eax = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00355816u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00355816: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0x00355830u); RECOMP_ABI_CALL(0x0055B890u, sub_0055B890); /* call 0x0055B890 */

loc_00355830: ;
    eax = MEM32(esi + 4);
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x20) = LO8(ebx);
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00355857u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00355855u); } /* indirect call */
    }

loc_00355857: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355891; /* je: equal / zero */

loc_0035585D: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x82C878);
    PUSH32(esp, eax);
    ecx = esp + 0x29;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00355876u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00355876: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x49;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0035588Cu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035588C: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00355893;

loc_00355891: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00355893: ;
    eax = esp + 0x10;
    MEM32(esi + 0x4C) = edi;
    MEM32(esp + 0x10) = 1;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003558AAu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003558AA: ;
    ecx = esi;
    PUSH32(esp, 0x003558B1u); RECOMP_ABI_CALL(0x0002C864u, sub_0002C864); /* call 0x0002C864 */

loc_003558B1: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003558B4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00355910
 * Original: 0x00355910 - 0x00355918 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355910(void)
{

loc_00355910: ;
    PUSH32(esp, 0x00355915u); RECOMP_ABI_CALL(0x0002C864u, sub_0002C864); /* call 0x0002C864 */

loc_00355915: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00355920
 * Original: 0x00355920 - 0x0035593E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355920: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00355928u); RECOMP_ABI_CALL(0x0003037Eu, sub_0003037E); /* call 0x0003037E */

loc_00355928: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00355938; /* je: equal / zero */

loc_0035592F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00355935u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00355935: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00355938: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00355950
 * Original: 0x00355950 - 0x00355B14 (452 bytes, 134 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355950: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x258);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00355AF1; /* jne: not equal / not zero */

loc_00355964: ;
    PUSH32(esp, 0x00355969u); RECOMP_ABI_CALL(0x0002A550u, sub_0002A550); /* call 0x0002A550 */

loc_00355969: ;
    ebx = eax;
    ecx = ebx;
    PUSH32(esp, 0x00355972u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00355972: ;
    eax = MEM32(eax + 0x18);
    ecx = ebx;
    MEM32(esi + 0x268) = eax;
    PUSH32(esp, 0x00355982u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00355982: ;
    SET_LO8(ecx, MEM8(esi + 0x271));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(eax + 0x1C);
    MEM32(esi + 0x26C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003559AC; /* je: equal / zero */

loc_00355995: ;
    ecx = MEM32(esi + 0x268);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = eax + eax;
    MEM32(esi + 0x268) = ecx;
    MEM32(esi + 0x26C) = edx;

loc_003559AC: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003559B8u); RECOMP_ABI_CALL(0x0001BDCAu, sub_0001BDCA); /* call 0x0001BDCA */

loc_003559B8: ;
    edi = esi + 0x24C;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003559CCu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_003559CC: ;
    ecx = eax;
    PUSH32(esp, 0x003559D3u); RECOMP_ABI_CALL(0x0055D9F6u, sub_0055D9F6); /* call 0x0055D9F6 */

loc_003559D3: ;
    xmm0 = XMM_MEM(0x8F9620); /* movaps */
    XMM_STORE(esi, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9630); /* movaps */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    XMM_STORE(esi + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9640); /* movaps */
    PUSH32(esp, ecx);
    eax = esp;
    XMM_STORE(esi + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(0x8F9650); /* movaps */
    PUSH32(esp, ecx);
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    MEM32(eax) = 0;
    ecx = esp;
    MEM32(eax) = 0;
    eax = MEM32(esi + 0x240);
    ebx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EE8);
    PUSH32(esp, 0x00355A2Au); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00355A2A: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00355A36u); RECOMP_ABI_CALL(0x000257B2u, sub_000257B2); /* call 0x000257B2 */

loc_00355A36: ;
    eax = MEM32(esi + 0x250);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0;
    MEM32(eax) = 0;
    ecx = MEM32(esi + 0x240);
    ebx = MEM32(ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82C888);
    PUSH32(esp, 0x00355A68u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00355A68: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00355A74u); RECOMP_ABI_CALL(0x00028D5Eu, sub_00028D5E); /* call 0x00028D5E */

loc_00355A74: ;
    edx = MEM32(edi);
    eax = MEM32(esi + 0x240);
    ebx = MEM32(eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x82ADF0);
    PUSH32(esp, 0x00355A91u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_00355A91: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x00355AA0u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00355AA0: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00355AACu); RECOMP_ABI_CALL(0x00023F34u, sub_00023F34); /* call 0x00023F34 */

loc_00355AAC: ;
    edx = MEM32(esi + 0x254);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = 0;
    ecx = esp;
    MEM32(eax) = 0;
    eax = MEM32(esi + 0x240);
    edi = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FC4E8);
    PUSH32(esp, 0x00355ADEu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00355ADE: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00355AEAu); RECOMP_ABI_CALL(0x0001806Cu, sub_0001806C); /* call 0x0001806C */

loc_00355AEA: ;
    MEM8(esi + 0x244) = 0;

loc_00355AF1: ;
    SET_LO8(eax, MEM8(esi + 0x244));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00355B0D; /* jne: not equal / not zero */

loc_00355AFB: ;
    ecx = MEM32(esi + 0x240);
    PUSH32(esp, 0x00355B06u); RECOMP_ABI_CALL(0x00573960u, sub_00573960); /* call 0x00573960 */

loc_00355B06: ;
    MEM8(esi + 0x244) = 1;

loc_00355B0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00355B90
 * Original: 0x00355B90 - 0x00355C2E (158 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355B90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x244));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00355BA9; /* je: equal / zero */

loc_00355BA1: ;
    _fa = (uint32_t)(MEM32(esi + 0x258)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x258), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00355BB5; /* jne: not equal / not zero */

loc_00355BA9: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00355BB5u); RECOMP_ABI_CALL(0x00012D10u, sub_00012D10); /* call 0x00012D10 */

loc_00355BB5: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00355BBFu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00355BBF: ;
    ecx = eax;
    PUSH32(esp, 0x00355BC6u); RECOMP_ABI_CALL(0x0055DB68u, sub_0055DB68); /* call 0x0055DB68 */

loc_00355BC6: ;
    edi = MEM32(esp + 0x10);
    MEM8(esp + 0x17) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(ebx);
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x14) = LO8(ebx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00355BEDu); RECOMP_ABI_CALL(0x00557F14u, sub_00557F14); /* call 0x00557F14 */

loc_00355BED: ;
    ecx = MEM32(esi + 0x250);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x254);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00355C04u); RECOMP_ABI_CALL(0x00557EBAu, sub_00557EBA); /* call 0x00557EBA */

loc_00355C04: ;
    eax = MEM32(esi + 0x248);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00355C17u); RECOMP_ABI_CALL(0x00557EA3u, sub_00557EA3); /* call 0x00557EA3 */

loc_00355C17: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00355C21u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00355C21: ;
    ecx = eax;
    PUSH32(esp, 0x00355C28u); RECOMP_ABI_CALL(0x0055DBF5u, sub_0055DBF5); /* call 0x0055DBF5 */

loc_00355C28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00355C60
 * Original: 0x00355C60 - 0x00355D01 (161 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00355C60: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x8C4679));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00355CFE; /* je: equal / zero */

loc_00355C71: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00355C79u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00355C79: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00355C83u); RECOMP_ABI_CALL(0x0055DC98u, sub_0055DC98); /* call 0x0055DC98 */

loc_00355C83: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebp + 4;
    ebx = 3;
    edi = edi;

loc_00355C90: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355CAC; /* je: equal / zero */

loc_00355C96: ;
    ecx = esi;
    PUSH32(esp, 0x00355C9Du); RECOMP_ABI_CALL(0x0003037Eu, sub_0003037E); /* call 0x0003037E */

loc_00355C9D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00355CA3u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00355CA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 0;

loc_00355CAC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00355C90; /* jne: not equal / not zero */

loc_00355CB2: ;
    edi = ebp + 0x24;
    ebx = 0xA;
    /* nop */

loc_00355CC0: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355CDC; /* je: equal / zero */

loc_00355CC6: ;
    ecx = esi;
    PUSH32(esp, 0x00355CCDu); RECOMP_ABI_CALL(0x0003037Eu, sub_0003037E); /* call 0x0003037E */

loc_00355CCD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00355CD3u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00355CD3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 0;

loc_00355CDC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00355CC0; /* jne: not equal / not zero */

loc_00355CE2: ;
    MEM8(0x8C4679) = 0;
    PUSH32(esp, 0x00355CEEu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00355CEE: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00355CF8u); RECOMP_ABI_CALL(0x0055DC98u, sub_0055DC98); /* call 0x0055DC98 */

loc_00355CF8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00355CFE: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355D30
 * Original: 0x00355D30 - 0x00355D8E (94 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355D30: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x8C4679));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00355D77; /* je: equal / zero */

loc_00355D3D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00355D44u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00355D44: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00355D4Eu); RECOMP_ABI_CALL(0x0055DC98u, sub_0055DC98); /* call 0x0055DC98 */

loc_00355D4E: ;
    ebx = MEM32(esp + 0x18);
    esi = MEM32(edi + ebx * 4 + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355D6D; /* je: equal / zero */

loc_00355D5D: ;
    ecx = esi;
    PUSH32(esp, 0x00355D64u); RECOMP_ABI_CALL(0x0003037Eu, sub_0003037E); /* call 0x0003037E */

loc_00355D64: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00355D6Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00355D6A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00355D6D: ;
    POP32(esp, esi);
    MEM32(edi + ebx * 4 + 4) = 0;
    POP32(esp, ebx);

loc_00355D77: ;
    PUSH32(esp, 0x00355D7Cu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00355D7C: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00355D86u); RECOMP_ABI_CALL(0x0055DC98u, sub_0055DC98); /* call 0x0055DC98 */

loc_00355D86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00355DB0
 * Original: 0x00355DB0 - 0x00356011 (609 bytes, 174 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00355DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355DB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x334) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x334;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8FC1D0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xE8);
    ebx = ecx;
    PUSH32(esp, 0x100);
    ecx = edi;
    MEM32(esp + 0x20) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355DDCu); RECOMP_ABI_CALL(0x0001C009u, sub_0001C009); /* call 0x0001C009 */

loc_00355DDC: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82C8AC);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355DF0u); RECOMP_ABI_CALL(0x0001EECBu, sub_0001EECB); /* call 0x0001EECB */

loc_00355DF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEM32(esp + 0x13C) = eax;
    MEM32(esp + 0x140) = eax;
    MEM32(ebx + 0x1C) = eax;
    MEM8(esp + 0x13) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355E11u); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_00355E11: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355E1Au); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_00355E1A: ;
    esi = SX16(LO16(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355E22u); RECOMP_ABI_CALL(0x0059E42Fu, sub_0059E42F); /* call 0x0059E42F */

loc_00355E22: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    MEM32(ebx + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355E33u); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_00355E33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355FF8; /* je: equal / zero */

loc_00355E3B: ;
    goto loc_00355E40;

    /* nop */

loc_00355E40: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355E49u); RECOMP_ABI_CALL(0x00024DD5u, sub_00024DD5); /* call 0x00024DD5 */

loc_00355E49: ;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355E54u); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_00355E54: ;
    PUSH32(esp, 0x82C89C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355E5Fu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00355E5F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00355EAC; /* jne: not equal / not zero */

loc_00355E66: ;
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x280);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355E75u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00355E75: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355E93; /* je: equal / zero */

loc_00355E7E: ;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355E89u); RECOMP_ABI_CALL(0x00024DD5u, sub_00024DD5); /* call 0x00024DD5 */

loc_00355E89: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355E91u); RECOMP_ABI_CALL(0x0001F5DDu, sub_0001F5DD); /* call 0x0001F5DD */

loc_00355E91: ;
    goto loc_00355E95;

loc_00355E93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00355E95: ;
    edx = MEM32(ebx + 0x1C);
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    MEM32(ebx + edx * 4 + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355EA7u); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_00355EA7: ;
    MEM8(esp + 0xF) = 1;

loc_00355EAC: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355EB5u); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_00355EB5: ;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355EC4u); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_00355EC4: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355ECDu); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_00355ECD: ;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355EDCu); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_00355EDC: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355EE5u); RECOMP_ABI_CALL(0x00024DD5u, sub_00024DD5); /* call 0x00024DD5 */

loc_00355EE5: ;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355EF4u); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_00355EF4: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355EFDu); RECOMP_ABI_CALL(0x0001D274u, sub_0001D274); /* call 0x0001D274 */

loc_00355EFD: ;
    eax = ZX8(LO8(eax));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00355FBD; /* jle: less or equal (signed <=) */

loc_00355F0E: ;
    eax = ebx + 0x24;
    MEM32(esp + 0x10) = eax;
    goto loc_00355F20;

    /* nop */
    edi = edi;

loc_00355F20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x80;
    edi = esp + 0x140;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x148;
    PUSH32(esp, 0x8237D4);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355F48u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00355F48: ;
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x280);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355F57u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00355F57: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355F91; /* je: equal / zero */

loc_00355F5E: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x24);
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    PUSH32(esp, 0);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = esp + 0x14C;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355F8Fu); RECOMP_ABI_CALL(0x0002A037u, sub_0002A037); /* call 0x0002A037 */

loc_00355F8F: ;
    goto loc_00355F93;

loc_00355F91: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00355F93: ;
    edi = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax;
    SET_LO8(edx, MEM8(ebx + 0x58));
    ecx = eax;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355FA6u); RECOMP_ABI_CALL(0x00012D10u, sub_00012D10); /* call 0x00012D10 */

loc_00355FA6: ;
    MEM32(ebx + 0x4C) = MEM32(ebx + 0x4C) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00355F20; /* jl: less (signed <) */

loc_00355FBD: ;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355FC8u); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_00355FC8: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355FD1u); RECOMP_ABI_CALL(0x00024DD5u, sub_00024DD5); /* call 0x00024DD5 */

loc_00355FD1: ;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355FDCu); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_00355FDC: ;
    SET_LO8(ecx, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00355FEC; /* je: equal / zero */

loc_00355FE4: ;
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0xF) = 0;

loc_00355FEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00355E40; /* jne: not equal / not zero */

loc_00355FF4: ;
    edi = MEM32(esp + 0x1C);

loc_00355FF8: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00355FFFu); RECOMP_ABI_CALL(0x0002578Fu, sub_0002578F); /* call 0x0002578F */

loc_00355FFF: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00356008u); RECOMP_ABI_CALL(0x000172A7u, sub_000172A7); /* call 0x000172A7 */

loc_00356008: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003560B0
 * Original: 0x003560B0 - 0x003560F4 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003560B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003560B0: ;
    PUSH32(esp, esi);
    esi = ecx;

loc_003560B3: ;
    PUSH32(esp, 0x003560B8u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_003560B8: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esi + 0x50);
    ecx = MEM32(esi + ecx * 4 + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003560CAu); RECOMP_ABI_CALL(0x0002A915u, sub_0002A915); /* call 0x0002A915 */

loc_003560CA: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003560DB; /* je: equal / zero */

loc_003560D1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x4C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x4C))); }
    MEM32(esi + 0x50) = edx;
    goto loc_003560B3;

loc_003560DB: ;
    PUSH32(esp, 0x003560E0u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_003560E0: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(esi + 0x50);
    ecx = MEM32(esi + eax * 4 + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003560F2u); RECOMP_ABI_CALL(0x0002A915u, sub_0002A915); /* call 0x0002A915 */

loc_003560F2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00356110
 * Original: 0x00356110 - 0x00356185 (117 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00356110: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xF);
    edi = ecx;
    MEM8(esp + 0x17) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(ebx);
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x14) = LO8(ebx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00356140u); RECOMP_ABI_CALL(0x00557F14u, sub_00557F14); /* call 0x00557F14 */

loc_00356140: ;
    ebp = MEM32(esp + 0x18);
    ecx = MEM32(edi + ebp * 4 + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035614Fu); RECOMP_ABI_CALL(0x0002A915u, sub_0002A915); /* call 0x0002A915 */

loc_0035614F: ;
    MEM8(esp + 0x1F) = LO8(ebx);
    MEM8(esp + 0x1E) = LO8(ebx);
    MEM8(esp + 0x1D) = LO8(ebx);
    MEM8(esp + 0x1C) = LO8(ebx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0xF);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00356172u); RECOMP_ABI_CALL(0x00557F14u, sub_00557F14); /* call 0x00557F14 */

loc_00356172: ;
    ecx = MEM32(edi + ebp * 4 + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035617Du); RECOMP_ABI_CALL(0x0002A915u, sub_0002A915); /* call 0x0002A915 */

loc_0035617D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003561B0
 * Original: 0x003561B0 - 0x003567CA (1562 bytes, 429 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003561B0(void)
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

loc_003561B0: ;
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x13C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003567BD; /* jne: not equal / not zero */

loc_003561C9: ;
    PUSH32(esp, 0x003561CEu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_003561CE: ;
    MEM32(esp + 0x18) = eax;
    edi = ebp + 0xC;
    eax = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003561E0u); RECOMP_ABI_CALL(0x0055A1EFu, sub_0055A1EF); /* call 0x0055A1EF */

loc_003561E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x003561F6u); RECOMP_ABI_CALL(0x0055D468u, sub_0055D468); /* call 0x0055D468 */

loc_003561F6: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    MEM32(eax) = ebx;
    ecx = MEM32(edi);
    PUSH32(esp, 0x82C8C0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00356211u); RECOMP_ABI_CALL(0x0055A5F2u, sub_0055A5F2); /* call 0x0055A5F2 */

loc_00356211: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x158);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00356225u); RECOMP_ABI_CALL(0x00559AD5u, sub_00559AD5); /* call 0x00559AD5 */

loc_00356225: ;
    ecx = MEM32(esi);
    edi = 1;
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00356239u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_00356239: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x00356248u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_00356248: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00356257u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_00356257: ;
    ecx = MEM32(esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0xF);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00356267u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_00356267: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x00356277u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_00356277: ;
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0x00356280u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_00356280: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x826D5C);
    PUSH32(esp, 0x00356292u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_00356292: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82A884);
    PUSH32(esp, 0x003562A0u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003562A0: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003562AAu); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_003562AA: ;
    ecx = eax;
    PUSH32(esp, 0x003562B1u); RECOMP_ABI_CALL(0x00028949u, sub_00028949); /* call 0x00028949 */

loc_003562B1: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0x003562C4u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_003562C4: ;
    ecx = eax;
    PUSH32(esp, 0x003562CBu); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_003562CB: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x003562D4u); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_003562D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003562E6; /* jge: greater or equal (signed >=) */

loc_003562E0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_003562E6: ;
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x003562F3u); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_003562F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00356305; /* jge: greater or equal (signed >=) */

loc_003562FF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00356305: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0xB0) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    ecx = esp + 0xD0;
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x98) = eax;
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = edi;
    MEM32(esp + 0x54) = 2;
    MEM32(esp + 0x58) = 3;
    MEM32(esp + 0x5C) = ebx;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x40) = 4;
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x30) = 5;
    PUSH32(esp, 0x00356415u); RECOMP_ABI_CALL(0x0056A600u, sub_0056A600); /* call 0x0056A600 */

loc_00356415: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0x82BD48);
    PUSH32(esp, 0x00356422u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_00356422: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0xD8;
    PUSH32(esp, 0x00356433u); RECOMP_ABI_CALL(0x0056798Eu, sub_0056798E); /* call 0x0056798E */

loc_00356433: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    PUSH32(esp, 0x829C64);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0xE4;
    PUSH32(esp, 0x00356454u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00356454: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82AE08);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0xE4;
    PUSH32(esp, 0x00356472u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00356472: ;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A09C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0xE4;
    PUSH32(esp, 0x00356491u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00356491: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0xD8;
    PUSH32(esp, 0x003564A7u); RECOMP_ABI_CALL(0x0056A770u, sub_0056A770); /* call 0x0056A770 */

loc_003564A7: ;
    PUSH32(esp, 0x10);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A168);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0xE0;
    PUSH32(esp, 0x003564C4u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_003564C4: ;
    PUSH32(esp, 0x10);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82ADFC);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0xE0;
    PUSH32(esp, 0x003564E1u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_003564E1: ;
    PUSH32(esp, 0x10);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82A158);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0xE0;
    PUSH32(esp, 0x003564FEu); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_003564FE: ;
    PUSH32(esp, 4);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82A150);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0xE0;
    PUSH32(esp, 0x0035651Bu); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_0035651B: ;
    PUSH32(esp, 4);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A144);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0xE0;
    PUSH32(esp, 0x00356538u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_00356538: ;
    PUSH32(esp, 4);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82AE0C);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0xE0;
    PUSH32(esp, 0x00356555u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_00356555: ;
    ecx = MEM32(esp + 0x158);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82ADE0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0xDC;
    PUSH32(esp, 0x00356573u); RECOMP_ABI_CALL(0x0056A352u, sub_0056A352); /* call 0x0056A352 */

loc_00356573: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xD4;
    PUSH32(esp, 0x00356584u); RECOMP_ABI_CALL(0x005679BBu, sub_005679BB); /* call 0x005679BB */

loc_00356584: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0xD8;
    PUSH32(esp, 0x00356596u); RECOMP_ABI_CALL(0x0056973Eu, sub_0056973E); /* call 0x0056973E */

loc_00356596: ;
    _fa = (uint32_t)(MEM8(0x8FE10C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x8FE10C), 1 (8-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_003565C0; /* jne: not equal / not zero */

loc_003565A3: ;
    eax = MEM32(0x8FE10C);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x10;
    esi = 0x8F9620;
    edi = 0x8FE0C0;
    MEM32(0x8FE10C) = eax;
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

loc_003565C0: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8FE0C0);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, ebx);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x829EE8);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x003565DFu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003565DF: ;
    esi = MEM32(esp + 0x160);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003565F2u); RECOMP_ABI_CALL(0x000257B2u, sub_000257B2); /* call 0x000257B2 */

loc_003565F2: ;
    edx = MEM32(ebp);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, ebx);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x82AE44);
    MEM32(eax) = ebx;
    PUSH32(esp, 0x00356610u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00356610: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0035661Cu); RECOMP_ABI_CALL(0x00028D5Eu, sub_00028D5E); /* call 0x00028D5E */

loc_0035661C: ;
    ecx = MEM32(ebp);
    PUSH32(esp, 0x00356624u); RECOMP_ABI_CALL(0x00576297u, sub_00576297); /* call 0x00576297 */

loc_00356624: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00356784; /* jbe: below or equal (unsigned <=) */

loc_00356632: ;
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035663Bu); RECOMP_ABI_CALL(0x0057629Bu, sub_0057629B); /* call 0x0057629B */

loc_0035663B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7FC4E8);
    ecx = esp + 0x3C;
    edi = eax;
    PUSH32(esp, 0x0035664Cu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0035664C: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    ecx = esp + 0x34;
    MEM8(esp + 0x17) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    PUSH32(esp, 0x0035665Fu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0035665F: ;
    _fa = (uint32_t)(MEM8(esp + 0x17)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x17), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356690; /* je: equal / zero */

loc_00356665: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0xC8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00356677u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00356677: ;
    ecx = eax;
    PUSH32(esp, 0x0035667Eu); RECOMP_ABI_CALL(0x0055D2C8u, sub_0055D2C8); /* call 0x0055D2C8 */

loc_0035667E: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    edx = esp + 0xCC;
    PUSH32(esp, edx);
    goto loc_00356767;

loc_00356690: ;
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00356699u); RECOMP_ABI_CALL(0x0057629Bu, sub_0057629B); /* call 0x0057629B */

loc_00356699: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x829EF8);
    ecx = esp + 0x44;
    edi = eax;
    PUSH32(esp, 0x003566AAu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003566AA: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    ecx = esp + 0x3C;
    MEM8(esp + 0x17) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    PUSH32(esp, 0x003566BDu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_003566BD: ;
    _fa = (uint32_t)(MEM8(esp + 0x17)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x17), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356728; /* je: equal / zero */

loc_003566C3: ;
    edx = MEM32(esp + 0x150);
    edi = MEM32(edx + 4);
    edx = MEM32(esp + 0x158);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003566E2u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_003566E2: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x829EF8);
    PUSH32(esp, 0x003566F0u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_003566F0: ;
    eax = esp + 0xC8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003566FFu); RECOMP_ABI_CALL(0x0057287Du, sub_0057287D); /* call 0x0057287D */

loc_003566FF: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    edx = esp + 0xD0;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x00356719u); RECOMP_ABI_CALL(0x0002E32Bu, sub_0002E32B); /* call 0x0002E32B */

loc_00356719: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    goto loc_00356767;

loc_00356728: ;
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00356731u); RECOMP_ABI_CALL(0x0057629Bu, sub_0057629B); /* call 0x0057629B */

loc_00356731: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x829EE8);
    ecx = esp + 0x34;
    edi = eax;
    PUSH32(esp, 0x00356742u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00356742: ;
    ecx = MEM32(eax);
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    ecx = esp + 0x2C;
    MEM8(esp + 0x17) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    PUSH32(esp, 0x00356757u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00356757: ;
    _fa = (uint32_t)(MEM8(esp + 0x17)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x17), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356777; /* je: equal / zero */

loc_0035675D: ;
    PUSH32(esp, 0x8FE0C0);
    eax = esp + 0x48;
    PUSH32(esp, eax);

loc_00356767: ;
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00356770u); RECOMP_ABI_CALL(0x0057629Bu, sub_0057629B); /* call 0x0057629B */

loc_00356770: ;
    ecx = eax;
    PUSH32(esp, 0x00356777u); RECOMP_ABI_CALL(0x00575FACu, sub_00575FAC); /* call 0x00575FAC */

loc_00356777: ;
    eax = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00356632; /* jb: below (unsigned <) */

loc_00356784: ;
    ecx = MEM32(ebp);
    esi = ebp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x15C);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035679Du); RECOMP_ABI_CALL(0x0055A6ACu, sub_0055A6AC); /* call 0x0055A6AC */

loc_0035679D: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x003567A4u); RECOMP_ABI_CALL(0x00013C4Cu, sub_00013C4C); /* call 0x00013C4C */

loc_003567A4: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = esp + 0xD0;
    MEMF(ebp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003567BDu); RECOMP_ABI_CALL(0x0056A677u, sub_0056A677); /* call 0x0056A677 */

loc_003567BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x13C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356950
 * Original: 0x00356950 - 0x00356A6B (283 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356950: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x5C));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x82BE04;
    if (CMP_EQ(_fa, _fb)) goto loc_00356998; /* je: equal / zero */

loc_00356965: ;
    eax = MEM32(esi + 0x6BC);
    ecx = esp + 0xC;
    MEM8(esi + 0x5C) = LO8(ebx);
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x588) = ebx;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x58C) = ebx;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x00356990u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00356990: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x00356998u); RECOMP_ABI_CALL(0x00016325u, sub_00016325); /* call 0x00016325 */

loc_00356998: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356A03; /* je: equal / zero */

loc_0035699D: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0x1E4);
    ecx = MEM32(esi + 0x6B4);
    eax = MEM32(eax + 0xB4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003569BDu); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_003569BD: ;
    ecx = eax + 0x50;
    PUSH32(esp, 0x003569C5u); RECOMP_ABI_CALL(0x0001A795u, sub_0001A795); /* call 0x0001A795 */

loc_003569C5: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x54) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003569E7; /* je: equal / zero */

loc_003569D2: ;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003569DDu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_003569DD: ;
    ecx = eax;
    PUSH32(esp, 0x003569E4u); RECOMP_ABI_CALL(0x0055D5A6u, sub_0055D5A6); /* call 0x0055D5A6 */

loc_003569E4: ;
    MEM32(esi + 0x48) = ebx;

loc_003569E7: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356A03; /* je: equal / zero */

loc_003569EE: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003569F9u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_003569F9: ;
    ecx = eax;
    PUSH32(esp, 0x00356A00u); RECOMP_ABI_CALL(0x0055D70Fu, sub_0055D70F); /* call 0x0055D70F */

loc_00356A00: ;
    MEM32(esi + 0x50) = ebx;

loc_00356A03: ;
    MEM32(0x8FCBE0) = ebx;
    edi = MEM32(esi + 0x6BC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356A30; /* je: equal / zero */

loc_00356A13: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00356A1Bu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00356A1B: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00356A2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00356A27u); } /* indirect call */
    }

loc_00356A2A: ;
    MEM32(esi + 0x6BC) = ebx;

loc_00356A30: ;
    edi = MEM32(esi + 0x6C0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356A57; /* je: equal / zero */

loc_00356A3A: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00356A42u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00356A42: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00356A51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00356A4Eu); } /* indirect call */
    }

loc_00356A51: ;
    MEM32(esi + 0x6C0) = ebx;

loc_00356A57: ;
    ecx = esi + 0x48;
    PUSH32(esp, 0x00356A5Fu); RECOMP_ABI_CALL(0x0002A1C2u, sub_0002A1C2); /* call 0x0002A1C2 */

loc_00356A5F: ;
    ecx = esi;
    PUSH32(esp, 0x00356A66u); RECOMP_ABI_CALL(0x00029EE3u, sub_00029EE3); /* call 0x00029EE3 */

loc_00356A66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00356AC0
 * Original: 0x00356AC0 - 0x00356B56 (150 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356AC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x5C));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356B01; /* je: equal / zero */

loc_00356ACE: ;
    ecx = MEM32(esi + 0x6BC);
    eax = esp + 8;
    MEM8(esi + 0x5C) = LO8(ebx);
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x588) = ebx;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x58C) = ebx;
    MEM32(esp + 8) = ebx;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00356AF9u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00356AF9: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x00356B01u); RECOMP_ABI_CALL(0x00016325u, sub_00016325); /* call 0x00016325 */

loc_00356B01: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356B3C; /* je: equal / zero */

loc_00356B06: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0x1E4);
    edx = MEM32(esi + 0x6B4);
    ecx = MEM32(eax + 0xB4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00356B24u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00356B24: ;
    ecx = eax + 0x50;
    PUSH32(esp, 0x00356B2Cu); RECOMP_ABI_CALL(0x0001A795u, sub_0001A795); /* call 0x0001A795 */

loc_00356B2C: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi + 0x48;
    PUSH32(esp, 0x00356B3Cu); RECOMP_ABI_CALL(0x00031E9Au, sub_00031E9A); /* call 0x00031E9A */

loc_00356B3C: ;
    edx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00356B4Au); RECOMP_ABI_CALL(0x0055A895u, sub_0055A895); /* call 0x0055A895 */

loc_00356B4A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x44) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00356B80
 * Original: 0x00356B80 - 0x0035761E (2718 bytes, 833 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00356B80: ;
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x60);
    _fb = (uint32_t)(MEM32(ecx + 0x588)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x588);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    if ((_fa == 0)) goto loc_00357615; /* je: equal / zero */

loc_00356B99: ;
    SET_LO8(eax, MEM8(ecx + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00357615; /* jne: not equal / not zero */

loc_00356BA4: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x1E4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0xB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x82CA68);
    ecx = esi;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x00356BCAu); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00356BCA: ;
    edi = eax;
    PUSH32(esp, 0x82CA44);
    ecx = esi;
    MEM32(esp + 0x30) = edi;
    PUSH32(esp, 0x00356BDCu); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00356BDC: ;
    ebx = eax;
    PUSH32(esp, 0x82CA30);
    ecx = esi;
    MEM32(esp + 0x2C) = ebx;
    PUSH32(esp, 0x00356BEEu); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00356BEE: ;
    ebp = eax;
    PUSH32(esp, 0x824B80);
    ecx = esi;
    MEM32(esp + 0x3C) = ebp;
    PUSH32(esp, 0x00356C00u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00356C00: ;
    ecx = MEM32(edi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00357611; /* je: equal / zero */

loc_00356C0F: ;
    ecx = MEM32(ebx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357611; /* je: equal / zero */

loc_00356C1A: ;
    ecx = MEM32(ebp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357611; /* je: equal / zero */

loc_00356C25: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357611; /* je: equal / zero */

loc_00356C30: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x34) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_003572BC; /* jle: less or equal (signed <=) */

loc_00356C47: ;
    goto loc_00356C50;

    /* nop */

loc_00356C50: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x14);
    ebx = MEM32(edx + ecx * 4 + 0x68);
    PUSH32(esp, ebx);
    eax = esp + 0x58;
    PUSH32(esp, 0x82CA20);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0x00356C76u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00356C76: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x00356C87u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00356C87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356CD7; /* je: equal / zero */

loc_00356C8B: ;
    eax = MEM32(eax + 0x4C);
    esi = MEM32(eax + 0x28);
    edx = MEM32(esp + 0x28);
    edi = MEM32(edx + 0x24);
    ecx = esi;
    PUSH32(esp, 0x00356C9Fu); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00356C9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00356CD7; /* jbe: below or equal (unsigned <=) */

loc_00356CA3: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00356CABu); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_00356CAB: ;
    ebx = eax;
    PUSH32(esp, 0x00356CB2u); RECOMP_ABI_CALL(0x0034B760u, sub_0034B760); /* call 0x0034B760 */

loc_00356CB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356CC7; /* je: equal / zero */

loc_00356CB6: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + edx * 4 + 0x88) = eax;
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00356CC7: ;
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00356CCFu); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00356CCF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00356CA3; /* jb: below (unsigned <) */

loc_00356CD3: ;
    ebx = MEM32(esp + 0x24);

loc_00356CD7: ;
    PUSH32(esp, ebx);
    eax = esp + 0x58;
    PUSH32(esp, 0x82CA08);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00356CE7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00356CE7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x00356CF8u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00356CF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356D46; /* je: equal / zero */

loc_00356CFC: ;
    eax = MEM32(eax + 0x4C);
    esi = MEM32(eax + 0x28);
    edx = MEM32(esp + 0x28);
    edi = MEM32(edx + 0x24);
    ecx = esi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00356D12u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00356D12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00356D46; /* jbe: below or equal (unsigned <=) */

loc_00356D16: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00356D1Eu); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_00356D1E: ;
    ebx = eax;
    PUSH32(esp, 0x00356D25u); RECOMP_ABI_CALL(0x0034B760u, sub_0034B760); /* call 0x0034B760 */

loc_00356D25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356D3A; /* je: equal / zero */

loc_00356D29: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + edx * 4 + 0x88) = eax;
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00356D3A: ;
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00356D42u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00356D42: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00356D16; /* jb: below (unsigned <) */

loc_00356D46: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0x82C9F0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00356D5Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00356D5A: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00356D6Bu); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00356D6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356DC0; /* je: equal / zero */

loc_00356D6F: ;
    edx = MEM32(eax + 0x4C);
    ecx = MEM32(esp + 0x28);
    esi = MEM32(edx + 0x28);
    edi = MEM32(ecx + 0x24);
    ecx = esi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00356D85u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00356D85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00356DC0; /* jbe: below or equal (unsigned <=) */

loc_00356D89: ;
    /* nop */

loc_00356D90: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00356D98u); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_00356D98: ;
    ebx = eax;
    PUSH32(esp, 0x00356D9Fu); RECOMP_ABI_CALL(0x0034B760u, sub_0034B760); /* call 0x0034B760 */

loc_00356D9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356DB4; /* je: equal / zero */

loc_00356DA3: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + edx * 4 + 0x88) = eax;
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00356DB4: ;
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00356DBCu); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00356DBC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00356D90; /* jb: below (unsigned <) */

loc_00356DC0: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0x82C9E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00356DD4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00356DD4: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00356DE5u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00356DE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356E3B; /* je: equal / zero */

loc_00356DE9: ;
    edx = MEM32(eax + 0x4C);
    ecx = MEM32(esp + 0x2C);
    esi = MEM32(edx + 0x28);
    edi = MEM32(ecx + 0x24);
    ecx = esi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00356DFFu); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00356DFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00356E33; /* jbe: below or equal (unsigned <=) */

loc_00356E03: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00356E0Bu); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_00356E0B: ;
    ebx = eax;
    PUSH32(esp, 0x00356E12u); RECOMP_ABI_CALL(0x0034B760u, sub_0034B760); /* call 0x0034B760 */

loc_00356E12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356E27; /* je: equal / zero */

loc_00356E16: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + edx * 4 + 0x88) = eax;
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00356E27: ;
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00356E2Fu); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00356E2F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00356E03; /* jb: below (unsigned <) */

loc_00356E33: ;
    MEM32(esp + 0x18) = 1;

loc_00356E3B: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0x82C9C4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00356E4Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00356E4F: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00356E60u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00356E60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356EF4; /* je: equal / zero */

loc_00356E68: ;
    edx = MEM32(eax + 0x4C);
    ecx = MEM32(esp + 0x2C);
    ebp = MEM32(edx + 0x28);
    edi = MEM32(ecx + 0x24);
    ecx = ebp;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00356E84u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00356E84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00356EF4; /* jbe: below or equal (unsigned <=) */

loc_00356E88: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00356E94u); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_00356E94: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x34)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x34), LO16(esi) (16-bit) */
    ebx = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00356EE0; /* jbe: below or equal (unsigned <=) */

loc_00356E9E: ;
    edi = edi;

loc_00356EA0: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = ZX16(LO16(esi));
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x00356EBDu); RECOMP_ABI_CALL(0x00558D3Cu, sub_00558D3C); /* call 0x00558D3C */

loc_00356EBD: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356ECF; /* je: equal / zero */

loc_00356EC6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + 0x34)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(edi + 0x34) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00356EA0; /* jb: below (unsigned <) */

loc_00356ECD: ;
    goto loc_00356EE0;

loc_00356ECF: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + edx * 4 + 0x88) = eax;
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00356EE0: ;
    esi = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x00356EF0u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00356EF0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00356E88; /* jb: below (unsigned <) */

loc_00356EF4: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0x82C9AC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00356F08u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00356F08: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00356F19u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00356F19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356FAB; /* je: equal / zero */

loc_00356F21: ;
    edx = MEM32(eax + 0x4C);
    ecx = MEM32(esp + 0x28);
    ebp = MEM32(edx + 0x28);
    edi = MEM32(ecx + 0x24);
    ecx = ebp;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00356F3Du); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00356F3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00356FAB; /* jbe: below or equal (unsigned <=) */

loc_00356F41: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00356F4Du); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_00356F4D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x34)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x34), LO16(esi) (16-bit) */
    ebx = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00356F97; /* jbe: below or equal (unsigned <=) */

loc_00356F57: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = ZX16(LO16(esi));
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x00356F74u); RECOMP_ABI_CALL(0x00558D3Cu, sub_00558D3C); /* call 0x00558D3C */

loc_00356F74: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00356F86; /* je: equal / zero */

loc_00356F7D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + 0x34)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(edi + 0x34) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00356F57; /* jb: below (unsigned <) */

loc_00356F84: ;
    goto loc_00356F97;

loc_00356F86: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + edx * 4 + 0x88) = eax;
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00356F97: ;
    esi = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x00356FA7u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00356FA7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00356F41; /* jb: below (unsigned <) */

loc_00356FAB: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0x82C994);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00356FBFu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00356FBF: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00356FD0u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00356FD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357064; /* je: equal / zero */

loc_00356FD8: ;
    edx = MEM32(eax + 0x4C);
    ecx = MEM32(esp + 0x28);
    ebp = MEM32(edx + 0x28);
    edi = MEM32(ecx + 0x24);
    ecx = ebp;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00356FF4u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00356FF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00357064; /* jbe: below or equal (unsigned <=) */

loc_00356FF8: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00357004u); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_00357004: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x34)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x34), LO16(esi) (16-bit) */
    ebx = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00357050; /* jbe: below or equal (unsigned <=) */

loc_0035700E: ;
    edi = edi;

loc_00357010: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = ZX16(LO16(esi));
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x0035702Du); RECOMP_ABI_CALL(0x00558D3Cu, sub_00558D3C); /* call 0x00558D3C */

loc_0035702D: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035703F; /* je: equal / zero */

loc_00357036: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + 0x34)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(edi + 0x34) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00357010; /* jb: below (unsigned <) */

loc_0035703D: ;
    goto loc_00357050;

loc_0035703F: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + edx * 4 + 0x88) = eax;
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00357050: ;
    esi = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x00357060u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00357060: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00356FF8; /* jb: below (unsigned <) */

loc_00357064: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0x82C978);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00357078u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00357078: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00357089u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00357089: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035711B; /* je: equal / zero */

loc_00357091: ;
    edx = MEM32(eax + 0x4C);
    ecx = MEM32(esp + 0x38);
    ebp = MEM32(edx + 0x28);
    edi = MEM32(ecx + 0x24);
    ecx = ebp;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x003570ADu); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_003570AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0035711B; /* jbe: below or equal (unsigned <=) */

loc_003570B1: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x003570BDu); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_003570BD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x34)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x34), LO16(esi) (16-bit) */
    ebx = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00357107; /* jbe: below or equal (unsigned <=) */

loc_003570C7: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = ZX16(LO16(esi));
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x003570E4u); RECOMP_ABI_CALL(0x00558D3Cu, sub_00558D3C); /* call 0x00558D3C */

loc_003570E4: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003570F6; /* je: equal / zero */

loc_003570ED: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + 0x34)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(edi + 0x34) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003570C7; /* jb: below (unsigned <) */

loc_003570F4: ;
    goto loc_00357107;

loc_003570F6: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + edx * 4 + 0x88) = eax;
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00357107: ;
    esi = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x00357117u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00357117: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003570B1; /* jb: below (unsigned <) */

loc_0035711B: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003572A4; /* jne: not equal / not zero */

loc_00357127: ;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    eax = esp + 0x58;
    PUSH32(esp, 0x82C960);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035713Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035713B: ;
    edi = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0035714Eu); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_0035714E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003571EF; /* je: equal / zero */

loc_00357156: ;
    eax = MEM32(eax + 0x4C);
    ebp = MEM32(eax + 0x28);
    edx = MEM32(esp + 0x28);
    edi = MEM32(edx + 0x24);
    ecx = ebp;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00357172u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00357172: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003572A4; /* jbe: below or equal (unsigned <=) */

loc_0035717A: ;
    /* nop */

loc_00357180: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0035718Cu); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_0035718C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x34)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x34), LO16(esi) (16-bit) */
    ebx = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003571D6; /* jbe: below or equal (unsigned <=) */

loc_00357196: ;
    edx = esp + 0x18;
    eax = ZX16(LO16(esi));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x003571B3u); RECOMP_ABI_CALL(0x00558D3Cu, sub_00558D3C); /* call 0x00558D3C */

loc_003571B3: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003571C5; /* je: equal / zero */

loc_003571BC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + 0x34)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(edi + 0x34) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00357196; /* jb: below (unsigned <) */

loc_003571C3: ;
    goto loc_003571D6;

loc_003571C5: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + edx * 4 + 0x88) = eax;
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003571D6: ;
    esi = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x003571E6u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_003571E6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00357180; /* jb: below (unsigned <) */

loc_003571EA: ;
    goto loc_003572A4;

loc_003571EF: ;
    PUSH32(esp, esi);
    eax = esp + 0x58;
    PUSH32(esp, 0x82C954);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003571FFu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003571FF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0035720Eu); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_0035720E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003572A4; /* je: equal / zero */

loc_00357216: ;
    eax = MEM32(eax + 0x4C);
    ebp = MEM32(eax + 0x28);
    edx = MEM32(esp + 0x28);
    edi = MEM32(edx + 0x24);
    ecx = ebp;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00357232u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00357232: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003572A4; /* jbe: below or equal (unsigned <=) */

loc_00357236: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00357242u); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_00357242: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x34)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x34), LO16(esi) (16-bit) */
    ebx = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00357290; /* jbe: below or equal (unsigned <=) */

loc_0035724C: ;
    /* nop */

loc_00357250: ;
    edx = esp + 0x18;
    eax = ZX16(LO16(esi));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x0035726Du); RECOMP_ABI_CALL(0x00558D3Cu, sub_00558D3C); /* call 0x00558D3C */

loc_0035726D: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035727F; /* je: equal / zero */

loc_00357276: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + 0x34)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(edi + 0x34) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00357250; /* jb: below (unsigned <) */

loc_0035727D: ;
    goto loc_00357290;

loc_0035727F: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + edx * 4 + 0x88) = eax;
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00357290: ;
    esi = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x003572A0u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_003572A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00357236; /* jb: below (unsigned <) */

loc_003572A4: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x60);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x34) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00356C50; /* jl: less (signed <) */

loc_003572BC: ;
    edx = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(edx + 0x5D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357323; /* je: equal / zero */

loc_003572C7: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x82C924);
    PUSH32(esp, 0x003572D5u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_003572D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357323; /* je: equal / zero */

loc_003572D9: ;
    edx = MEM32(eax + 0x4C);
    ecx = MEM32(esp + 0x2C);
    esi = MEM32(edx + 0x28);
    edi = MEM32(ecx + 0x24);
    ecx = esi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x003572EFu); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_003572EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00357323; /* jbe: below or equal (unsigned <=) */

loc_003572F3: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x003572FBu); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_003572FB: ;
    ebx = eax;
    PUSH32(esp, 0x00357302u); RECOMP_ABI_CALL(0x0034B760u, sub_0034B760); /* call 0x0034B760 */

loc_00357302: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357317; /* je: equal / zero */

loc_00357306: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + edx * 4 + 0x88) = eax;
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00357317: ;
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0035731Fu); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_0035731F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003572F3; /* jb: below (unsigned <) */

loc_00357323: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x588);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_003573F1; /* jle: less or equal (signed <=) */

loc_0035733D: ;
    ecx = eax;
    _fb = (uint32_t)(0x590) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x590;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = ecx;
    /* nop */

loc_00357350: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0x82C914);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00357366u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00357366: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00357377u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00357377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003573CB; /* je: equal / zero */

loc_0035737B: ;
    edx = MEM32(eax + 0x4C);
    ecx = MEM32(esp + 0x30);
    esi = MEM32(edx + 0x28);
    edi = MEM32(ecx + 0x24);
    ecx = esi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00357391u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_00357391: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003573CB; /* jbe: below or equal (unsigned <=) */

loc_00357395: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0035739Du); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_0035739D: ;
    ebx = eax;
    PUSH32(esp, 0x003573A4u); RECOMP_ABI_CALL(0x0034B760u, sub_0034B760); /* call 0x0034B760 */

loc_003573A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003573BF; /* je: equal / zero */

loc_003573A8: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x58C);
    MEM32(ecx + edx * 4 + 0x610) = eax;
    MEM32(ecx + 0x58C) = MEM32(ecx + 0x58C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x58C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003573BF: ;
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x003573C7u); RECOMP_ABI_CALL(0x0001AEE3u, sub_0001AEE3); /* call 0x0001AEE3 */

loc_003573C7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00357395; /* jb: below (unsigned <) */

loc_003573CB: ;
    eax = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x588);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x2C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00357350; /* jl: less (signed <) */

loc_003573F1: ;
    SET_LO8(eax, MEM8(esp + 0x1D8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(esp + 0x14);
    ebx = 1;
    MEM8(esi + 0x5C) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00357611; /* jne: not equal / not zero */

loc_0035740C: ;
    eax = MEM32(esi + 0x6C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00357456; /* jne: not equal / not zero */

loc_00357416: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00357427u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357425u); } /* indirect call */
    }

loc_00357427: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035744E; /* je: equal / zero */

loc_0035742D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82C8E0);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00357449u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00357449: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00357450;

loc_0035744E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00357450: ;
    MEM32(esi + 0x6C0) = edi;

loc_00357456: ;
    eax = MEM32(esi + 0x6BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00357506; /* jne: not equal / not zero */

loc_00357464: ;
    eax = MEM32(esi + 0x6B0);
    edx = esp + 0x154;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00357473: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + edx) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00357473; /* jne: not equal / not zero */

loc_0035747D: ;
    edi = esp + 0x154;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00357485: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00357485; /* jne: not equal / not zero */

loc_0035748D: ;
    SET_LO16(eax, MEM16(0x7FC4F0));
    MEM16(edi) = LO16(eax);
    edi = esp + 0x154;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_003574A0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003574A0; /* jne: not equal / not zero */

loc_003574A8: ;
    ecx = MEM32(0x82C544);
    SET_LO16(edx, MEM16(0x82C548));
    SET_LO8(eax, MEM8(0x82C54A));
    MEM32(edi) = ecx;
    ecx = MEM32(0x907BA4);
    MEM16(edi + 4) = LO16(edx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    MEM8(edi + 6) = LO8(eax);
    edx = MEM32(ecx);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003574D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003574D2u); } /* indirect call */
    }

loc_003574D4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003574FE; /* je: equal / zero */

loc_003574DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x16C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003574F9u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_003574F9: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00357500;

loc_003574FE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00357500: ;
    MEM32(esi + 0x6BC) = edi;

loc_00357506: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003575A7; /* jne: not equal / not zero */

loc_00357511: ;
    ecx = MEM32(esi + 0x6B4);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00357523u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00357523: ;
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x0035752Cu); RECOMP_ABI_CALL(0x00013A80u, sub_00013A80); /* call 0x00013A80 */

loc_0035752C: ;
    edx = MEM32(esi + 0x6B4);
    PUSH32(esp, edx);
    eax = esp + 0x158;
    PUSH32(esp, 0x82C8CC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00357545u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00357545: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x178;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, 0x4F4B106);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00357568u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00357568: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(esi + 0x6B8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00357583u); RECOMP_ABI_CALL(0x0002D6C9u, sub_0002D6C9); /* call 0x0002D6C9 */

loc_00357583: ;
    ecx = MEM32(edi + 0xE4);
    edx = MEM32(esi + 0x44);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi + 0x48;
    PUSH32(esp, 0x0035759Au); RECOMP_ABI_CALL(0x000125C2u, sub_000125C2); /* call 0x000125C2 */

loc_0035759A: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003575A4u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_003575A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003575A7: ;
    edx = MEM32(esi + 0x6C0);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003575E6; /* je: equal / zero */

loc_003575B7: ;
    eax = MEM32(esi + 0x6BC);
    edx = esp + 0x30;
    MEM32(esp + 0x30) = 0;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003575D1u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003575D1: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x003575D9u); RECOMP_ABI_CALL(0x00016325u, sub_00016325); /* call 0x00016325 */

loc_003575D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003575E6: ;
    edx = MEM32(esi + 0x6BC);
    ecx = esp + 0x30;
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x003575FCu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003575FC: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x00357604u); RECOMP_ABI_CALL(0x00013C4Cu, sub_00013C4C); /* call 0x00013C4C */

loc_00357604: ;
    PUSH32(esp, 0x3F800000);
    ecx = esi + 0x48;
    PUSH32(esp, 0x00357611u); RECOMP_ABI_CALL(0x000313B4u, sub_000313B4); /* call 0x000313B4 */

loc_00357611: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00357615: ;
    _fb = (uint32_t)(0x1C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003578D0
 * Original: 0x003578D0 - 0x003578DF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003578D0(void)
{

loc_003578D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003578DCu); RECOMP_ABI_CALL(0x000366D9u, sub_000366D9); /* call 0x000366D9 */

loc_003578DC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003578F0
 * Original: 0x003578F0 - 0x003578FF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003578F0(void)
{

loc_003578F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003578FCu); RECOMP_ABI_CALL(0x0001DA5Du, sub_0001DA5D); /* call 0x0001DA5D */

loc_003578FC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00357910
 * Original: 0x00357910 - 0x0035791F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357910(void)
{

loc_00357910: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035791Cu); RECOMP_ABI_CALL(0x00027A12u, sub_00027A12); /* call 0x00027A12 */

loc_0035791C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00357930
 * Original: 0x00357930 - 0x0035796F (63 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357930: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00357950; /* jl: less (signed <) */

loc_00357938: ;
    ecx = eax;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035796C; /* je: equal / zero */

loc_00357942: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035796C; /* jle: less or equal (signed <=) */

loc_00357946: ;
    eax = MEM32(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00357942; /* jne: not equal / not zero */

loc_0035794D: ;
    esp += 12; return; /* ret 8 */

loc_00357950: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = eax;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035796C; /* je: equal / zero */

loc_0035795C: ;
    /* nop */

loc_00357960: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035796C; /* jle: less or equal (signed <=) */

loc_00357964: ;
    eax = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00357960; /* jne: not equal / not zero */

loc_0035796C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00357980
 * Original: 0x00357980 - 0x003579AD (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357980: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00357997u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00357997: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003579A9u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003579A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003579C0
 * Original: 0x003579C0 - 0x003579ED (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003579C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003579C0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003579D7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003579D7: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003579E9u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003579E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00357A00
 * Original: 0x00357A00 - 0x00357A55 (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357A00: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00357A17u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00357A17: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x8F4B794);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00357A37u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00357A37: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00357A48u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00357A48: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00357A51u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00357A51: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00357A70
 * Original: 0x00357A70 - 0x00357AC5 (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357A70: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00357A87u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00357A87: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x8F4B794);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00357AA7u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00357AA7: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00357AB8u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00357AB8: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00357AC1u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00357AC1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00357AE0
 * Original: 0x00357AE0 - 0x00357B01 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357AE0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00357AFDu); RECOMP_ABI_CALL(0x0002C175u, sub_0002C175); /* call 0x0002C175 */

loc_00357AFD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00357B10
 * Original: 0x00357B10 - 0x00357B4F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357B10: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x10F4A963);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00357B31u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00357B31: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00357B42u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00357B42: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00357B4Bu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00357B4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00357B60
 * Original: 0x00357B60 - 0x00357BAF (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357B60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x82CA80;
    edi = esi + 0x10;
    ebx = 7;

loc_00357B73: ;
    ecx = edi;
    PUSH32(esp, 0x00357B7Au); RECOMP_ABI_CALL(0x0003129Cu, sub_0003129C); /* call 0x0003129C */

loc_00357B7A: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00357B73; /* jne: not equal / not zero */

loc_00357B83: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x470) = eax;
    MEM32(esi + 0x474) = eax;
    MEM32(esi + 0x478) = eax;
    MEM32(esi + 0x47C) = eax;
    MEM32(esi + 0x480) = eax;
    POP32(esp, edi);
    MEM32(0x8FCAA0) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357BD0
 * Original: 0x00357BD0 - 0x00357D84 (436 bytes, 145 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00357BD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x82CA80;
    edi = esi + 0x10;
    ebx = 7;

loc_00357BE4: ;
    ecx = edi;
    PUSH32(esp, 0x00357BEBu); RECOMP_ABI_CALL(0x0003556Du, sub_0003556D); /* call 0x0003556D */

loc_00357BEB: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00357BE4; /* jne: not equal / not zero */

loc_00357BF4: ;
    edi = MEM32(esi + 0x474);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357C2D; /* je: equal / zero */

loc_00357C00: ;
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357C1E; /* je: equal / zero */

loc_00357C07: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00357C0Fu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00357C0F: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00357C1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357C1Bu); } /* indirect call */
    }

loc_00357C1E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00357C24u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00357C24: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x474) = ebp;

loc_00357C2D: ;
    edi = MEM32(esi + 0x478);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357C64; /* je: equal / zero */

loc_00357C37: ;
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357C55; /* je: equal / zero */

loc_00357C3E: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00357C46u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00357C46: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00357C55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357C52u); } /* indirect call */
    }

loc_00357C55: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00357C5Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00357C5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x478) = ebp;

loc_00357C64: ;
    edi = MEM32(esi + 0x47C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357C9B; /* je: equal / zero */

loc_00357C6E: ;
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357C8C; /* je: equal / zero */

loc_00357C75: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00357C7Du); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00357C7D: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00357C8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357C89u); } /* indirect call */
    }

loc_00357C8C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00357C92u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00357C92: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x47C) = ebp;

loc_00357C9B: ;
    edi = MEM32(esi + 0x480);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357CD2; /* je: equal / zero */

loc_00357CA5: ;
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357CC3; /* je: equal / zero */

loc_00357CAC: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00357CB4u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00357CB4: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00357CC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357CC0u); } /* indirect call */
    }

loc_00357CC3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00357CC9u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00357CC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x480) = ebp;

loc_00357CD2: ;
    edi = MEM32(esi + 0x470);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357D09; /* je: equal / zero */

loc_00357CDC: ;
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357CFA; /* je: equal / zero */

loc_00357CE3: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00357CEBu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00357CEB: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00357CFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357CF7u); } /* indirect call */
    }

loc_00357CFA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00357D00u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00357D00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x470) = ebp;

loc_00357D09: ;
    MEM32(0x8FCAA0) = ebp;
    _fb = (uint32_t)(0x470) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x470;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 7;
    /* nop */

loc_00357D20: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    MEM32(esi) = 0x82AEE4;
    PUSH32(esp, 0x00357D33u); RECOMP_ABI_CALL(0x0003556Du, sub_0003556D); /* call 0x0003556D */

loc_00357D33: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357D40; /* je: equal / zero */

loc_00357D3A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00357D40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357D3Eu); } /* indirect call */
    }

loc_00357D40: ;
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357D57; /* je: equal / zero */

loc_00357D47: ;
    ecx = edi;
    PUSH32(esp, 0x00357D4Eu); RECOMP_ABI_CALL(0x000329C1u, sub_000329C1); /* call 0x000329C1 */

loc_00357D4E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00357D54u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00357D54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00357D57: ;
    edi = MEM32(esi + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357D75; /* je: equal / zero */

loc_00357D5E: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00357D66u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00357D66: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00357D75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357D72u); } /* indirect call */
    }

loc_00357D75: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x34) = 0x829E54;
    if ((_fa != 0)) goto loc_00357D20; /* jne: not equal / not zero */

loc_00357D7F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357C46
 * Original: 0x00357C46 - 0x00357D84 (318 bytes, 104 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357C46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00357C46: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00357C55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357C52u); } /* indirect call */
    }

loc_00357C55: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00357C5Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00357C5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x478) = ebp;
    edi = MEM32(esi + 0x47C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357C9B; /* je: equal / zero */

loc_00357C6E: ;
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357C8C; /* je: equal / zero */

loc_00357C75: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00357C7Du); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00357C7D: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00357C8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357C89u); } /* indirect call */
    }

loc_00357C8C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00357C92u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00357C92: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x47C) = ebp;

loc_00357C9B: ;
    edi = MEM32(esi + 0x480);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357CD2; /* je: equal / zero */

loc_00357CA5: ;
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357CC3; /* je: equal / zero */

loc_00357CAC: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00357CB4u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00357CB4: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00357CC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357CC0u); } /* indirect call */
    }

loc_00357CC3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00357CC9u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00357CC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x480) = ebp;

loc_00357CD2: ;
    edi = MEM32(esi + 0x470);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357D09; /* je: equal / zero */

loc_00357CDC: ;
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357CFA; /* je: equal / zero */

loc_00357CE3: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00357CEBu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00357CEB: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00357CFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357CF7u); } /* indirect call */
    }

loc_00357CFA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00357D00u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00357D00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x470) = ebp;

loc_00357D09: ;
    MEM32(0x8FCAA0) = ebp;
    _fb = (uint32_t)(0x470) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x470;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 7;
    /* nop */

loc_00357D20: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    MEM32(esi) = 0x82AEE4;
    PUSH32(esp, 0x00357D33u); RECOMP_ABI_CALL(0x0003556Du, sub_0003556D); /* call 0x0003556D */

loc_00357D33: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357D40; /* je: equal / zero */

loc_00357D3A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00357D40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357D3Eu); } /* indirect call */
    }

loc_00357D40: ;
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357D57; /* je: equal / zero */

loc_00357D47: ;
    ecx = edi;
    PUSH32(esp, 0x00357D4Eu); RECOMP_ABI_CALL(0x000329C1u, sub_000329C1); /* call 0x000329C1 */

loc_00357D4E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00357D54u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00357D54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00357D57: ;
    edi = MEM32(esi + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357D75; /* je: equal / zero */

loc_00357D5E: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00357D66u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00357D66: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00357D75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357D72u); } /* indirect call */
    }

loc_00357D75: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x34) = 0x829E54;
    if ((_fa != 0)) goto loc_00357D20; /* jne: not equal / not zero */

loc_00357D7F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357E00
 * Original: 0x00357E00 - 0x003581EF (1007 bytes, 267 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00357E00: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00357E11u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00357E11: ;
    ecx = MEM32(0x909334);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x1C);
    ebp = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00357E2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357E27u); } /* indirect call */
    }

loc_00357E2A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357E3B; /* je: equal / zero */

loc_00357E30: ;
    ecx = eax;
    PUSH32(esp, 0x00357E37u); RECOMP_ABI_CALL(0x000213D3u, sub_000213D3); /* call 0x000213D3 */

loc_00357E37: ;
    edi = eax;
    goto loc_00357E3D;

loc_00357E3B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00357E3D: ;
    eax = MEM32(0x909394);
    ecx = MEM32(eax + 8);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x82CC04);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00357E5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00357E58u); } /* indirect call */
    }

loc_00357E5B: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00357E63u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_00357E63: ;
    edx = MEM32(0x82CBF4);
    eax = MEM32(0x82CBF8);
    SET_LO16(ecx, MEM16(0x82CBFC));
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x3C) = edx;
    SET_LO8(edx, MEM8(0x82CBFE));
    MEM16(esp + 0x44) = LO16(ecx);
    eax = esp + 0x48;
    ecx = esp + 0x3C;
    MEM32(esp + 0x18) = eax;
    MEM8(esp + 0x46) = LO8(edx);
    edx = ecx;
    eax = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    MEM32(esp + 0x50) = ebx;
    MEM8(esp + 0x54) = LO8(ebx);
    MEM32(esp + 0x4C) = 0x82B2D4;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x24) = 0x82CBE0;
    PUSH32(esp, 0x00357ECBu); RECOMP_ABI_CALL(0x0002B937u, sub_0002B937); /* call 0x0002B937 */

loc_00357ECB: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357F89; /* je: equal / zero */

loc_00357ED8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357F89; /* je: equal / zero */

loc_00357EE0: ;
    ecx = MEM32(0x82CBD4);
    edx = MEM32(0x82CBD8);
    SET_LO16(eax, MEM16(0x82CBDC));
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x48;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x28) = edx;
    edx = esp + 0x24;
    ecx = esp + 0x10;
    MEM16(esp + 0x2C) = LO16(eax);
    eax = edx;
    PUSH32(esp, ecx);
    ecx = esi + 0x150;
    MEM32(esp + 0x4C) = 0x82CBA8;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x24) = 0x82CB94;
    PUSH32(esp, 0x00357F39u); RECOMP_ABI_CALL(0x0002B937u, sub_0002B937); /* call 0x0002B937 */

loc_00357F39: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00357F41u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00357F41: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00357F75; /* je: equal / zero */

loc_00357F48: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    PUSH32(esp, 2);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x10) = 1;
    MEM32(esi + 0x474) = eax;
    PUSH32(esp, 0x82CBD4);
    goto loc_00358129;

loc_00357F75: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 2);
    MEM32(esi + 0x474) = eax;
    PUSH32(esp, 0x82CBD4);
    goto loc_00358129;

loc_00357F89: ;
    edx = MEM32(0x82CB88);
    eax = MEM32(0x82CB8C);
    SET_LO8(ecx, MEM8(0x82CB90));
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x24;
    MEM8(esp + 0x2C) = LO8(ecx);
    edx = esp + 0x48;
    ecx = eax;
    MEM32(esp + 0x18) = edx;
    edx = esp + 0x10;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, edx);
    ecx = esi + 0x150;
    MEM32(esp + 0x4C) = 0x82CB60;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x24) = 0x82CB50;
    PUSH32(esp, 0x00357FE0u); RECOMP_ABI_CALL(0x0002B937u, sub_0002B937); /* call 0x0002B937 */

loc_00357FE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00357FE8u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00357FE8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035800C; /* je: equal / zero */

loc_00357FEF: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x10) = 1;
    goto loc_0035800E;

loc_0035800C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035800E: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x82CB88);
    ecx = eax;
    MEM32(esi + 0x474) = eax;
    PUSH32(esp, 0x00358022u); RECOMP_ABI_CALL(0x00027F3Au, sub_00027F3A); /* call 0x00027F3A */

loc_00358022: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi + 0x1F0;
    MEM32(esp + 0x4C) = 0x82CB28;
    PUSH32(esp, 0x0035803Au); RECOMP_ABI_CALL(0x0002B937u, sub_0002B937); /* call 0x0002B937 */

loc_0035803A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x00358042u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00358042: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358066; /* je: equal / zero */

loc_00358049: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x10) = 1;
    goto loc_00358068;

loc_00358066: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00358068: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x82CB88);
    ecx = eax;
    MEM32(esi + 0x478) = eax;
    PUSH32(esp, 0x0035807Cu); RECOMP_ABI_CALL(0x00027F3Au, sub_00027F3A); /* call 0x00027F3A */

loc_0035807C: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi + 0x290;
    MEM32(esp + 0x4C) = 0x82CB00;
    PUSH32(esp, 0x00358094u); RECOMP_ABI_CALL(0x0002B937u, sub_0002B937); /* call 0x0002B937 */

loc_00358094: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0035809Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035809C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003580C0; /* je: equal / zero */

loc_003580A3: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x10) = 1;
    goto loc_003580C2;

loc_003580C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003580C2: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x82CB88);
    ecx = eax;
    MEM32(esi + 0x47C) = eax;
    PUSH32(esp, 0x003580D6u); RECOMP_ABI_CALL(0x00027F3Au, sub_00027F3A); /* call 0x00027F3A */

loc_003580D6: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi + 0x330;
    MEM32(esp + 0x4C) = 0x82CAD8;
    PUSH32(esp, 0x003580EEu); RECOMP_ABI_CALL(0x0002B937u, sub_0002B937); /* call 0x0002B937 */

loc_003580EE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x003580F6u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003580F6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035811A; /* je: equal / zero */

loc_003580FD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x10) = 1;
    goto loc_0035811C;

loc_0035811A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035811C: ;
    PUSH32(esp, 5);
    MEM32(esi + 0x480) = eax;
    PUSH32(esp, 0x82CB88);

loc_00358129: ;
    ecx = eax;
    PUSH32(esp, 0x00358130u); RECOMP_ABI_CALL(0x00027F3Au, sub_00027F3A); /* call 0x00027F3A */

loc_00358130: ;
    ecx = MEM32(0x82CACC);
    eax = MEM32(0x82CAC8);
    SET_LO16(edx, MEM16(0x82CAD0));
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x30) = eax;
    SET_LO8(eax, MEM8(0x82CAD2));
    ecx = esp + 0x48;
    MEM32(esp + 0x18) = ecx;
    MEM16(esp + 0x38) = LO16(edx);
    edx = esp + 0x30;
    ecx = esp + 0x10;
    MEM8(esp + 0x3A) = LO8(eax);
    eax = edx;
    PUSH32(esp, ecx);
    ecx = esi + 0x3D0;
    MEM32(esp + 0x4C) = 0x82CA98;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x24) = 0x82CA84;
    PUSH32(esp, 0x00358192u); RECOMP_ABI_CALL(0x0002B937u, sub_0002B937); /* call 0x0002B937 */

loc_00358192: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0035819Au); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035819A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003581BE; /* je: equal / zero */

loc_003581A1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x10) = 1;
    goto loc_003581C0;

loc_003581BE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003581C0: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x82CAC8);
    ecx = eax;
    MEM32(esi + 0x470) = eax;
    PUSH32(esp, 0x003581D4u); RECOMP_ABI_CALL(0x00027F3Au, sub_00027F3A); /* call 0x00027F3A */

loc_003581D4: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x003581DCu); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_003581DC: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003581E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003581E2u); } /* indirect call */
    }

loc_003581E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003582F0
 * Original: 0x003582F0 - 0x0035830E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003582F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003582F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003582F8u); RECOMP_ABI_CALL(0x00027706u, sub_00027706); /* call 0x00027706 */

loc_003582F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00358308; /* je: equal / zero */

loc_003582FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00358305u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00358305: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00358308: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00358320
 * Original: 0x00358320 - 0x003583DE (190 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358320: ;
    eax = MEM32(0x8FCAA4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00358346; /* je: equal / zero */

loc_0035832F: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358337u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00358337: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00358346u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358343u); } /* indirect call */
    }

loc_00358346: ;
    eax = MEM32(0x8FCAAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x8FCAA4) = edi;
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0035836E; /* je: equal / zero */

loc_00358357: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035835Fu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0035835F: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0035836Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035836Bu); } /* indirect call */
    }

loc_0035836E: ;
    eax = MEM32(0x8FCAB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x8FCAAC) = edi;
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00358396; /* je: equal / zero */

loc_0035837F: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358387u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00358387: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00358396u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358393u); } /* indirect call */
    }

loc_00358396: ;
    eax = MEM32(0x8FCAB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x8FCAB0) = edi;
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003583BE; /* je: equal / zero */

loc_003583A7: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003583AFu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_003583AF: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003583BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003583BBu); } /* indirect call */
    }

loc_003583BE: ;
    ecx = MEM32(0x8FCAB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(0x8FCAB4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003583DB; /* je: equal / zero */

loc_003583CE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003583D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003583D2u); } /* indirect call */
    }

loc_003583D5: ;
    MEM32(0x8FCAB8) = edi;

loc_003583DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00358410
 * Original: 0x00358410 - 0x00358426 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358410(void)
{

loc_00358410: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829F6C;
    PUSH32(esp, 0x0035841Eu); RECOMP_ABI_CALL(0x0002460Fu, sub_0002460F); /* call 0x0002460F */

loc_0035841E: ;
    MEM32(esi) = 0x829F54;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00358430
 * Original: 0x00358430 - 0x00358884 (1108 bytes, 389 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358430: ;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035844Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035844Au); } /* indirect call */
    }

loc_0035844C: ;
    ebx = MEM32(esp + 0xB8);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358486; /* je: equal / zero */

loc_00358459: ;
    PUSH32(esp, 0x82BBD0);
    ecx = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00358469u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_00358469: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x20F4A9A1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00358481u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00358481: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00358488;

loc_00358486: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00358488: ;
    MEM32(esi + 4) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035849Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035849Au); } /* indirect call */
    }

loc_0035849C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003584CF; /* je: equal / zero */

loc_003584A2: ;
    PUSH32(esp, 0x82CC74);
    eax = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003584B2u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_003584B2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F4B794);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003584CAu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_003584CA: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003584D1;

loc_003584CF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003584D1: ;
    MEM32(esi + 8) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003584E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003584E3u); } /* indirect call */
    }

loc_003584E5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358518; /* je: equal / zero */

loc_003584EB: ;
    PUSH32(esp, 0x82CC64);
    eax = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003584FBu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_003584FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F4B794);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00358513u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00358513: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035851A;

loc_00358518: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035851A: ;
    MEM32(esi + 0xC) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035852Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035852Cu); } /* indirect call */
    }

loc_0035852E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358561; /* je: equal / zero */

loc_00358534: ;
    PUSH32(esp, 0x82CC54);
    eax = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358544u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_00358544: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F4B794);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0035855Cu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035855C: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00358563;

loc_00358561: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00358563: ;
    MEM32(esi + 0x10) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00358577u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358575u); } /* indirect call */
    }

loc_00358577: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003585AA; /* je: equal / zero */

loc_0035857D: ;
    PUSH32(esp, 0x82CC44);
    eax = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035858Du); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0035858D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F4B794);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003585A5u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_003585A5: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003585AC;

loc_003585AA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003585AC: ;
    MEM32(esi + 0x14) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003585C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003585BEu); } /* indirect call */
    }

loc_003585C0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003585F3; /* je: equal / zero */

loc_003585C6: ;
    PUSH32(esp, 0x7E05CC);
    eax = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003585D6u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_003585D6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003585EEu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_003585EE: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003585F5;

loc_003585F3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003585F5: ;
    MEM32(esi + 0x1C) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00358609u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358607u); } /* indirect call */
    }

loc_00358609: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035863C; /* je: equal / zero */

loc_0035860F: ;
    PUSH32(esp, 0x82A638);
    eax = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035861Fu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0035861F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00358637u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00358637: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035863E;

loc_0035863C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035863E: ;
    MEM32(esi + 0x20) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00358652u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358650u); } /* indirect call */
    }

loc_00358652: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358685; /* je: equal / zero */

loc_00358658: ;
    PUSH32(esp, 0x7E6E50);
    eax = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358668u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_00358668: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F4B794);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00358680u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00358680: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00358687;

loc_00358685: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00358687: ;
    MEM32(esi + 0x24) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035869Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358699u); } /* indirect call */
    }

loc_0035869B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003586CE; /* je: equal / zero */

loc_003586A1: ;
    PUSH32(esp, 0x7E6444);
    eax = esp + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003586B1u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_003586B1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F4B794);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003586C9u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_003586C9: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003586D0;

loc_003586CE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003586D0: ;
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x98;
    PUSH32(esp, 0x7E1290);
    MEM32(esi + 0x18) = edi;
    edi = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003586ECu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003586EC: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x94;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003586FEu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003586FE: ;
    ecx = MEM32(esi + 0x48);
    edi = MEM32(esi + 8);
    ecx = ecx & 0x7F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82CC38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00358721u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00358721: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358730u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358730: ;
    eax = MEM32(esi + 0x48);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edi = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82CC38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00358752u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00358752: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358761u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358761: ;
    ecx = MEM32(esi + 0x48);
    edi = MEM32(esi + 0x10);
    ecx = ecx & 0x7F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82CC2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00358784u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00358784: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358793u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358793: ;
    eax = MEM32(esi + 0x48);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edi = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82CC2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003587B5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003587B5: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003587C4u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003587C4: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(esi + 0x1C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x14);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003587EB; /* je: equal / zero */

loc_003587DB: ;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003587EBu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003587EB: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(esi + 0x48);
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x14);
    edi = MEM32(edx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x16) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358812; /* je: equal / zero */

loc_00358802: ;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358812u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358812: ;
    ecx = MEM32(esi + 0x48);
    edi = MEM32(esi + 0x24);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82CC20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035882Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035882E: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035883Du); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035883D: ;
    eax = MEM32(esi + 0x48);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 3;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edi = MEM32(esi + 0x18);
    eax = esp + 0xC;
    edx = MEM32(edx * 4 + 0x8C458C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358869u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00358869: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, 0x00358878u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358878: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003589A0
 * Original: 0x003589A0 - 0x00358C27 (647 bytes, 223 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003589A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003589A0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00358A0E; /* je: equal / zero */

loc_003589B3: ;
    PUSH32(esp, ebp);
    ebp = edi + 0x28;
    eax = esi;
    /* nop */

loc_003589C0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebp) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003589E5; /* jne: not equal / not zero */

loc_003589C9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003589E1; /* je: equal / zero */

loc_003589CD: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebp + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003589E5; /* jne: not equal / not zero */

loc_003589D7: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(2)) >> 32) & 1);
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003589C0; /* jne: not equal / not zero */

loc_003589E1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003589EA;

loc_003589E5: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_003589EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00358A0E; /* je: equal / zero */

loc_003589EF: ;
    PUSH32(esp, esi);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003589FFu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003589FF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, 0x00358A0Eu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358A0E: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00358B2D; /* je: equal / zero */

loc_00358A19: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(edi + 0x48);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00358B2D; /* je: equal / zero */

loc_00358A2D: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = MEM32(edi + 0xC);
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82CC38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00358A49u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00358A49: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358A58u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358A58: ;
    eax = MEM32(esi + 0x20);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = MEM32(edi + 0x14);
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82CC2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00358A7Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00358A7A: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358A89u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358A89: ;
    ecx = MEM32(esi + 0x20);
    ebx = MEM32(edi + 8);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00358AD2; /* jae: above or equal (unsigned >=) */

loc_00358A97: ;
    eax = ecx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82CC38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00358AB2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00358AB2: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358AC1u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358AC1: ;
    eax = MEM32(esi + 0x20);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    goto loc_00358B0B;

loc_00358AD2: ;
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x82CC38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00358AECu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00358AEC: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00358AFBu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358AFB: ;
    ecx = MEM32(esi + 0x20);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }

loc_00358B0B: ;
    ebx = MEM32(edi + 0x10);
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82CC2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00358B1Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00358B1E: ;
    ecx = MEM32(ebx);
    eax = esp + 0x18;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358B2Du); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358B2D: ;
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00358B5F; /* je: equal / zero */

loc_00358B34: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(edi + 0x48);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00358B5F; /* je: equal / zero */

loc_00358B4F: ;
    MEM32(esp + 0x38) = eax;
    ecx = MEM32(ecx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358B5Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358B5F: ;
    ecx = MEM32(edi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00358B8C; /* je: equal / zero */

loc_00358B66: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(edi + 0x48);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x16) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x16) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00358B8C; /* je: equal / zero */

loc_00358B7C: ;
    MEM32(esp + 0x38) = eax;
    ecx = MEM32(ecx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358B8Cu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358B8C: ;
    ebx = MEM32(edi + 0x24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00358BC8; /* je: equal / zero */

loc_00358B93: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(edi + 0x48);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00358BC8; /* je: equal / zero */

loc_00358BA9: ;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, 0x82CC20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00358BB9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00358BB9: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358BC8u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358BC8: ;
    ebx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00358C14; /* je: equal / zero */

loc_00358BCF: ;
    eax = MEM32(edi + 0x48);
    ecx = MEM32(esi + 0x20);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00358C14; /* je: equal / zero */

loc_00358BE5: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 3;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = esp + 0xC;
    edx = MEM32(edx * 4 + 0x8C458C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00358C05u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00358C05: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, 0x00358C14u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00358C14: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x28)) >> 32) & 1);
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xC;
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
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00358CD0
 * Original: 0x00358CD0 - 0x00358CFA (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358CD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829F84;
    PUSH32(esp, 0x00358CDEu); RECOMP_ABI_CALL(0x0001EB3Du, sub_0001EB3D); /* call 0x0001EB3D */

loc_00358CDE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x829F54;
    if (TEST_Z(_fa, _fb)) goto loc_00358CF4; /* je: equal / zero */

loc_00358CEB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00358CF1u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00358CF1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00358CF4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00358D10
 * Original: 0x00358D10 - 0x00359220 (1296 bytes, 442 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00358D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358D10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00358D32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358D30u); } /* indirect call */
    }

loc_00358D32: ;
    edi = MEM32(ebp + 8);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358D68; /* je: equal / zero */

loc_00358D3B: ;
    PUSH32(esp, 0x82CE08);
    ecx = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358D4Bu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_00358D4B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F4B794);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358D63u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00358D63: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00358D6A;

loc_00358D68: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00358D6A: ;
    MEM32(esi + 4) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00358D7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358D7Cu); } /* indirect call */
    }

loc_00358D7E: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358DB1; /* je: equal / zero */

loc_00358D84: ;
    PUSH32(esp, 0x82CDF0);
    eax = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358D94u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_00358D94: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358DACu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00358DAC: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00358DB3;

loc_00358DB1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00358DB3: ;
    MEM32(esi + 8) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00358DC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358DC5u); } /* indirect call */
    }

loc_00358DC7: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358DFA; /* je: equal / zero */

loc_00358DCD: ;
    PUSH32(esp, 0x82CDC8);
    eax = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358DDDu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_00358DDD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358DF5u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00358DF5: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00358DFC;

loc_00358DFA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00358DFC: ;
    MEM32(esi + 0xC) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00358E10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358E0Eu); } /* indirect call */
    }

loc_00358E10: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358E43; /* je: equal / zero */

loc_00358E16: ;
    PUSH32(esp, 0x82CDA4);
    eax = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358E26u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_00358E26: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358E3Eu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00358E3E: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00358E45;

loc_00358E43: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00358E45: ;
    MEM32(esi + 0x10) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00358E59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358E57u); } /* indirect call */
    }

loc_00358E59: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358E8C; /* je: equal / zero */

loc_00358E5F: ;
    PUSH32(esp, 0x82CD7C);
    eax = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358E6Fu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_00358E6F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358E87u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00358E87: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00358E8E;

loc_00358E8C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00358E8E: ;
    MEM32(esi + 0x14) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00358EA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358EA0u); } /* indirect call */
    }

loc_00358EA2: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358ED5; /* je: equal / zero */

loc_00358EA8: ;
    PUSH32(esp, 0x82CD54);
    eax = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358EB8u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_00358EB8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358ED0u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00358ED0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00358ED7;

loc_00358ED5: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00358ED7: ;
    MEM32(esi + 0x18) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00358EEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358EE9u); } /* indirect call */
    }

loc_00358EEB: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358F1E; /* je: equal / zero */

loc_00358EF1: ;
    PUSH32(esp, 0x82CD30);
    eax = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358F01u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_00358F01: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10F4A161);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358F19u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00358F19: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00358F20;

loc_00358F1E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00358F20: ;
    MEM32(esi + 0x1C) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00358F34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358F32u); } /* indirect call */
    }

loc_00358F34: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358F67; /* je: equal / zero */

loc_00358F3A: ;
    PUSH32(esp, 0x82CD20);
    eax = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358F4Au); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_00358F4A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F4B794);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358F62u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00358F62: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00358F69;

loc_00358F67: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00358F69: ;
    PUSH32(esp, 0x82CCF8);
    ecx = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(esi + 0x20) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358F7Cu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_00358F7C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358F84u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_00358F84: ;
    edx = MEM32(eax);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00358F90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358F8Du); } /* indirect call */
    }

loc_00358F90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358F9A; /* je: equal / zero */

loc_00358F94: ;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x2C) = edx;

loc_00358F9A: ;
    PUSH32(esp, 0x82CCD4);
    eax = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358FAAu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_00358FAA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358FB2u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_00358FB2: ;
    edx = MEM32(eax);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00358FBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358FBBu); } /* indirect call */
    }

loc_00358FBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358FC8; /* je: equal / zero */

loc_00358FC2: ;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x24) = edx;

loc_00358FC8: ;
    PUSH32(esp, 0x82CCB0);
    eax = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358FD8u); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_00358FD8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00358FE0u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_00358FE0: ;
    edx = MEM32(eax);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00358FECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00358FE9u); } /* indirect call */
    }

loc_00358FEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00358FF6; /* je: equal / zero */

loc_00358FF0: ;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x28) = edx;

loc_00358FF6: ;
    eax = MEM32(esi + 0x58);
    ebx = MEM32(esi + 4);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x82CCA4);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035900Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035900F: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035901Eu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035901E: ;
    eax = MEM32(esi + 0x5C);
    edx = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035903Au); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035903A: ;
    eax = MEM32(esi + 0x5C);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0xC);
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035905Du); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035905D: ;
    ecx = MEM32(esi + 0x5C);
    eax = MEM32(esi + 0x10);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00359079u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00359079: ;
    ecx = MEM32(esi + 0x5C);
    eax = MEM32(esi + 0x14);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00359095u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00359095: ;
    eax = MEM32(esi + 0x5C);
    edx = MEM32(esi + 0x54);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esi + 0x18);
    ecx = MEM32(ecx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003590C0u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003590C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi + 0x60);
    edx = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003590F1u); RECOMP_ABI_CALL(0x00034947u, sub_00034947); /* call 0x00034947 */

loc_003590F1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x10) = ecx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0x1C);
    edx = esp + 0x10;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00359153u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00359153: ;
    ecx = MEM32(esi + 0x54);
    ebx = MEM32(esi + 0x20);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1B) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x82CC98);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035916Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035916F: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035917Eu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035917E: ;
    PUSH32(esp, 0x82CC80);
    ecx = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035918Eu); RECOMP_ABI_CALL(0x00033A88u, sub_00033A88); /* call 0x00033A88 */

loc_0035918E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0x30;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035919Cu); RECOMP_ABI_CALL(0x00019EADu, sub_00019EAD); /* call 0x00019EAD */

loc_0035919C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x829CF8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003591A7u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_003591A7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x829CEC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003591B2u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_003591B2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x829CE0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003591BDu); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_003591BD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x829CD4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003591C8u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_003591C8: ;
    edx = MEM32(esi + 0x54);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_003591DE; /* jae: above or equal (unsigned >=) */

loc_003591D7: ;
    PUSH32(esp, 0x829CC4);
    goto loc_003591E3;

loc_003591DE: ;
    PUSH32(esp, 0x829CCC);

loc_003591E3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003591E8u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_003591E8: ;
    eax = MEM32(esi + 0x54);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0035920A; /* je: equal / zero */

loc_003591F4: ;
    PUSH32(esp, 0x829CBC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003591FEu); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_003591FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0035920A: ;
    PUSH32(esp, 0x829CB4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00359214u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_00359214: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00359370
 * Original: 0x00359370 - 0x003595E5 (629 bytes, 204 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00359370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359370: ;
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
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003593B7; /* je: equal / zero */

loc_00359388: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(edi + 0x58);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003593B7; /* je: equal / zero */

loc_00359398: ;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, 0x82CCA4);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003593A8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003593A8: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003593B7u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003593B7: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035941C; /* je: equal / zero */

loc_003593BE: ;
    eax = MEM32(esi + 0x28);
    edx = MEM32(edi + 0x5C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035941C; /* je: equal / zero */

loc_003593D4: ;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(ecx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003593E4u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003593E4: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(edi + 0x10);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00359400u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00359400: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(edi + 0x14);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035941Cu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035941C: ;
    edx = MEM32(edi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035945B; /* je: equal / zero */

loc_00359423: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(edi + 0x5C);
    ebx = eax;
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0035943B; /* jne: not equal / not zero */

loc_00359432: ;
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0035945B; /* je: equal / zero */

loc_0035943B: ;
    eax = MEM32(esi + 0x28);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035945Bu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035945B: ;
    edx = MEM32(edi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003594B0; /* je: equal / zero */

loc_00359462: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(edi + 0x5C);
    ebx = eax;
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00359488; /* jne: not equal / not zero */

loc_00359471: ;
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00359488; /* jne: not equal / not zero */

loc_0035947A: ;
    ecx = MEM32(edi + 0x54);
    ecx = ecx ^ MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003594B0; /* je: equal / zero */

loc_00359488: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    ebx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esp + 0x10;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003594B0u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003594B0: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(MEM32(edi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x60), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035954C; /* je: equal / zero */

loc_003594BC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003594EAu); RECOMP_ABI_CALL(0x00034947u, sub_00034947); /* call 0x00034947 */

loc_003594EA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    eax = MEM32(esp + 0x2C);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(edi + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035954Cu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035954C: ;
    ebx = MEM32(edi + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359588; /* je: equal / zero */

loc_00359553: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(edi + 0x54);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1B) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1B) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359588; /* je: equal / zero */

loc_00359569: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, 0x82CC98);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00359579u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00359579: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00359588u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00359588: ;
    eax = MEM32(edi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = edi + 0x30;
    if (CMP_EQ(_fa, _fb)) goto loc_003595D2; /* je: equal / zero */

loc_00359592: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(edi + 0x54);
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003595D2; /* je: equal / zero */

loc_003595A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_AE(_fa, _fb)) goto loc_003595BA; /* jae: above or equal (unsigned >=) */

loc_003595A8: ;
    PUSH32(esp, 0x829CC4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003595B2u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_003595B2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82CE30);
    goto loc_003595CA;

loc_003595BA: ;
    PUSH32(esp, 0x829CCC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003595C4u); RECOMP_ABI_CALL(0x00038236u, sub_00038236); /* call 0x00038236 */

loc_003595C4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82CE18);

loc_003595CA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003595CFu); RECOMP_ABI_CALL(0x0001E877u, sub_0001E877); /* call 0x0001E877 */

loc_003595CF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003595D2: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xC;
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
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00359690
 * Original: 0x00359690 - 0x003596BA (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359690: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829F9C;
    PUSH32(esp, 0x0035969Eu); RECOMP_ABI_CALL(0x0002CC2Eu, sub_0002CC2E); /* call 0x0002CC2E */

loc_0035969E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x829F54;
    if (TEST_Z(_fa, _fb)) goto loc_003596B4; /* je: equal / zero */

loc_003596AB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003596B1u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003596B1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003596B4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003596D0
 * Original: 0x003596D0 - 0x00359735 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003596D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003596D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    MEM32(esi) = 0;
    PUSH32(esp, 0x003596E1u); RECOMP_ABI_CALL(0x000235F7u, sub_000235F7); /* call 0x000235F7 */

loc_003596E1: ;
    ecx = esi + 0x5C;
    PUSH32(esp, 0x003596E9u); RECOMP_ABI_CALL(0x0001BF8Cu, sub_0001BF8C); /* call 0x0001BF8C */

loc_003596E9: ;
    ecx = esi + 0xC0;
    PUSH32(esp, 0x003596F4u); RECOMP_ABI_CALL(0x0001AAA1u, sub_0001AAA1); /* call 0x0001AAA1 */

loc_003596F4: ;
    MEM8(esi + 0x308) = 0;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x254;
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
    MEM32(eax) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00359750
 * Original: 0x00359750 - 0x003597C4 (116 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359750: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0035975Au); RECOMP_ABI_CALL(0x0001D242u, sub_0001D242); /* call 0x0001D242 */

loc_0035975A: ;
    eax = MEM32(esi + 4);
    edi = esi + 4;
    ecx = edi;
    MEM32(esi) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0035976Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359768u); } /* indirect call */
    }

loc_0035976B: ;
    edx = MEM32(esi + 0x5C);
    ebx = esi + 0x5C;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00359776u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359773u); } /* indirect call */
    }

loc_00359776: ;
    eax = MEM32(esi + 0xC0);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00359787u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359784u); } /* indirect call */
    }

loc_00359787: ;
    ecx = esi;
    MEM32(esi) = 0x829F9C;
    PUSH32(esp, 0x00359794u); RECOMP_ABI_CALL(0x0002CC2Eu, sub_0002CC2E); /* call 0x0002CC2E */

loc_00359794: ;
    MEM32(esi) = 0x829F54;
    ecx = ebx;
    MEM32(ebx) = 0x829F84;
    PUSH32(esp, 0x003597A7u); RECOMP_ABI_CALL(0x0001EB3Du, sub_0001EB3D); /* call 0x0001EB3D */

loc_003597A7: ;
    MEM32(ebx) = 0x829F54;
    ecx = edi;
    MEM32(edi) = 0x829F6C;
    PUSH32(esp, 0x003597BAu); RECOMP_ABI_CALL(0x0002460Fu, sub_0002460F); /* call 0x0002460F */

loc_003597BA: ;
    MEM32(edi) = 0x829F54;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003597F0
 * Original: 0x003597F0 - 0x00359830 (64 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003597F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003597F0: ;
    eax = MEM32(0x8FCAE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00359829; /* jne: not equal / not zero */

loc_003597F9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF8);
    PUSH32(esp, 0x00359805u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00359805: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035981F; /* je: equal / zero */

loc_0035980C: ;
    ecx = eax;
    PUSH32(esp, 0x00359813u); RECOMP_ABI_CALL(0x00034343u, sub_00034343); /* call 0x00034343 */

loc_00359813: ;
    MEM32(0x8FCAE0) = eax;
    MEM32(0x8FCAE4) = MEM32(0x8FCAE4) + 1;
    _fa = (uint32_t)(MEM32(0x8FCAE4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_0035981F: ;
    MEM32(0x8FCAE0) = 0;

loc_00359829: ;
    MEM32(0x8FCAE4) = MEM32(0x8FCAE4) + 1;
    _fa = (uint32_t)(MEM32(0x8FCAE4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00359840
 * Original: 0x00359840 - 0x0035985E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359840: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00359848u); RECOMP_ABI_CALL(0x0001C978u, sub_0001C978); /* call 0x0001C978 */

loc_00359848: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00359858; /* je: equal / zero */

loc_0035984F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00359855u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00359855: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00359858: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00359870
 * Original: 0x00359870 - 0x00359911 (161 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359870: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8FCAE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003598A0; /* jne: not equal / not zero */

loc_0035987E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF8);
    PUSH32(esp, 0x00359889u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00359889: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359899; /* je: equal / zero */

loc_00359890: ;
    ecx = eax;
    PUSH32(esp, 0x00359897u); RECOMP_ABI_CALL(0x00034343u, sub_00034343); /* call 0x00034343 */

loc_00359897: ;
    goto loc_0035989B;

loc_00359899: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035989B: ;
    MEM32(0x8FCAE0) = eax;

loc_003598A0: ;
    edx = MEM32(0x8FCAE4);
    ecx = MEM32(0x8C45A4);
    PUSH32(esp, 3);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(0x8FCAE4) = edx;
    edi = eax;
    PUSH32(esp, 0x003598BFu); RECOMP_ABI_CALL(0x0002DF20u, sub_0002DF20); /* call 0x0002DF20 */

loc_003598BF: ;
    eax = MEM32(edi + 0x80);
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x003598D3u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_003598D3: ;
    ecx = eax;
    PUSH32(esp, 0x003598DAu); RECOMP_ABI_CALL(0x00574BAAu, sub_00574BAA); /* call 0x00574BAA */

loc_003598DA: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x82CE48);
    PUSH32(esp, 0x003598E7u); RECOMP_ABI_CALL(0x00576A02u, sub_00576A02); /* call 0x00576A02 */

loc_003598E7: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x82B210);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x003598F7u); RECOMP_ABI_CALL(0x00576A02u, sub_00576A02); /* call 0x00576A02 */

loc_003598F7: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(0x8C45A0);
    ecx = MEM32(0x8FCAE0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035990Du); RECOMP_ABI_CALL(0x0002DF20u, sub_0002DF20); /* call 0x0002DF20 */

loc_0035990D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359940
 * Original: 0x00359940 - 0x0035999D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359940: ;
    eax = MEM32(0x8FCAE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035996B; /* jne: not equal / not zero */

loc_00359949: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF8);
    PUSH32(esp, 0x00359954u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00359954: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359964; /* je: equal / zero */

loc_0035995B: ;
    ecx = eax;
    PUSH32(esp, 0x00359962u); RECOMP_ABI_CALL(0x00034343u, sub_00034343); /* call 0x00034343 */

loc_00359962: ;
    goto loc_00359966;

loc_00359964: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00359966: ;
    MEM32(0x8FCAE0) = eax;

loc_0035996B: ;
    edx = MEM32(0x8FCAE4);
    ecx = MEM32(0x8C45A8);
    PUSH32(esp, 2);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(0x8FCAE4) = edx;
    PUSH32(esp, 0x00359988u); RECOMP_ABI_CALL(0x0002DF20u, sub_0002DF20); /* call 0x0002DF20 */

loc_00359988: ;
    edx = MEM32(0x8C45AC);
    ecx = MEM32(0x8FCAE0);
    PUSH32(esp, 5);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035999Cu); RECOMP_ABI_CALL(0x0002DF20u, sub_0002DF20); /* call 0x0002DF20 */

loc_0035999C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003599C0
 * Original: 0x003599C0 - 0x00359AFB (315 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003599C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003599C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi;
    ebx = 2;
    /* nop */

loc_003599D0: ;
    ecx = edi;
    PUSH32(esp, 0x003599D7u); RECOMP_ABI_CALL(0x000330ECu, sub_000330EC); /* call 0x000330EC */

loc_003599D7: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x90;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003599D0; /* jne: not equal / not zero */

loc_003599E0: ;
    ecx = esi + 0x120;
    PUSH32(esp, 0x003599EBu); RECOMP_ABI_CALL(0x0001D3B4u, sub_0001D3B4); /* call 0x0001D3B4 */

loc_003599EB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x214) = eax;
    MEM32(esi + 0x21C) = eax;
    MEMF(esi + 0x22C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x230) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x234) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x238) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x23C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x240) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x244) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x248) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x250) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x254) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x258) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x224) = eax;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x228) = ecx;
    MEM32(esi + 0x25C) = eax;
    MEM32(esi + 0x260) = eax;
    MEM32(esi + 0x28C) = ecx;
    MEMF(esi + 0x2A4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2A8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2AC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2B0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2B4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2B8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2BC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C4) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x294) = eax;
    MEM32(esi + 0x298) = eax;
    MEM32(esi + 0x2C8) = eax;
    MEM32(esi + 0x2CC) = eax;
    MEM32(esi + 0x2D0) = eax;
    MEM32(esi + 0x2D4) = eax;
    MEM32(esi + 0x2D8) = eax;
    MEM32(esi + 0x2DC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359B50
 * Original: 0x00359B50 - 0x00359CE3 (403 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359B50: ;
    eax = MEM32(0x8FCB00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00359B76; /* je: equal / zero */

loc_00359B5D: ;
    edi = eax;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00359B67u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00359B67: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00359B76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359B73u); } /* indirect call */
    }

loc_00359B76: ;
    eax = MEM32(0x8FCB04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359B98; /* je: equal / zero */

loc_00359B7F: ;
    edi = eax;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00359B89u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00359B89: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00359B98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359B95u); } /* indirect call */
    }

loc_00359B98: ;
    eax = MEM32(0x8FCB08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359BBA; /* je: equal / zero */

loc_00359BA1: ;
    edi = eax;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00359BABu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00359BAB: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00359BBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359BB7u); } /* indirect call */
    }

loc_00359BBA: ;
    edi = MEM32(esi + 0x2C8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359BDB; /* je: equal / zero */

loc_00359BC4: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00359BCCu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00359BCC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00359BDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359BD8u); } /* indirect call */
    }

loc_00359BDB: ;
    edi = MEM32(esi + 0x2D0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359BFC; /* je: equal / zero */

loc_00359BE5: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00359BEDu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00359BED: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00359BFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359BF9u); } /* indirect call */
    }

loc_00359BFC: ;
    edi = MEM32(esi + 0x2CC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359C1D; /* je: equal / zero */

loc_00359C06: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00359C0Eu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00359C0E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00359C1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359C1Au); } /* indirect call */
    }

loc_00359C1D: ;
    edi = MEM32(esi + 0x2D4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359C3E; /* je: equal / zero */

loc_00359C27: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00359C2Fu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00359C2F: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00359C3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359C3Bu); } /* indirect call */
    }

loc_00359C3E: ;
    edi = MEM32(esi + 0x2D8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359C5F; /* je: equal / zero */

loc_00359C48: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00359C50u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00359C50: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00359C5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359C5Cu); } /* indirect call */
    }

loc_00359C5F: ;
    edi = MEM32(esi + 0x2DC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359C80; /* je: equal / zero */

loc_00359C69: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00359C71u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00359C71: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00359C80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359C7Du); } /* indirect call */
    }

loc_00359C80: ;
    edi = MEM32(esi + 0x298);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359C9C; /* je: equal / zero */

loc_00359C8A: ;
    ecx = edi;
    PUSH32(esp, 0x00359C91u); RECOMP_ABI_CALL(0x005582DAu, sub_005582DA); /* call 0x005582DA */

loc_00359C91: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00359C99u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00359C99: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00359C9C: ;
    edi = MEM32(esi + 0x260);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359CBD; /* je: equal / zero */

loc_00359CA6: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00359CAEu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00359CAE: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00359CBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359CBAu); } /* indirect call */
    }

loc_00359CBD: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x120;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00359CCAu); RECOMP_ABI_CALL(0x000215AEu, sub_000215AE); /* call 0x000215AE */

loc_00359CCA: ;
    edi = 2;
    /* nop */

loc_00359CD0: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x00359CDDu); RECOMP_ABI_CALL(0x00027DEBu, sub_00027DEB); /* call 0x00027DEB */

loc_00359CDD: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00359CD0; /* jne: not equal / not zero */

loc_00359CE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00359D50
 * Original: 0x00359D50 - 0x0035A06D (797 bytes, 274 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359D50: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(0x907BA4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x7BB384);
    MEM32(esp + 0x20) = ebx;
    MEM8(esp + 0x24) = LO8(ebx);
    MEM32(esp + 0x1C) = 0x82B2D4;
    eax = MEM32(ecx);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00359D7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359D7Du); } /* indirect call */
    }

loc_00359D7F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359DA6; /* je: equal / zero */

loc_00359D85: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82CEF8);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00359D9Bu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00359D9B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FCB00) = edi;
    goto loc_00359DAC;

loc_00359DA6: ;
    MEM32(0x8FCB00) = ebx;

loc_00359DAC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00359DBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359DBBu); } /* indirect call */
    }

loc_00359DBD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359DFD; /* je: equal / zero */

loc_00359DC3: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x82CEE0);
    PUSH32(esp, eax);
    ecx = esp + 0x29;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00359DDCu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00359DDC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x49;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00359DF2u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00359DF2: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FCB04) = edi;
    goto loc_00359E03;

loc_00359DFD: ;
    MEM32(0x8FCB04) = ebx;

loc_00359E03: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00359E14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359E12u); } /* indirect call */
    }

loc_00359E14: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359E54; /* je: equal / zero */

loc_00359E1A: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x82CEC4);
    PUSH32(esp, ecx);
    edx = esp + 0x29;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00359E33u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00359E33: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esp + 0x49;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00359E49u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00359E49: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FCB08) = edi;
    goto loc_00359E5A;

loc_00359E54: ;
    MEM32(0x8FCB08) = ebx;

loc_00359E5A: ;
    edx = MEM32(0x8FCB00);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x00359E70u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00359E70: ;
    ecx = MEM32(0x8FCB04);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = ebx;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00359E86u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00359E86: ;
    eax = MEM32(0x8FCB08);
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ebx;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00359E9Bu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00359E9B: ;
    ecx = esi;
    PUSH32(esp, 0x00359EA2u); RECOMP_ABI_CALL(0x00032C37u, sub_00032C37); /* call 0x00032C37 */

loc_00359EA2: ;
    PUSH32(esp, esi);
    ecx = esi + 0x120;
    PUSH32(esp, 0x00359EAEu); RECOMP_ABI_CALL(0x0001F97Fu, sub_0001F97F); /* call 0x0001F97F */

loc_00359EAE: ;
    PUSH32(esp, esi);
    ecx = esi + 0x214;
    PUSH32(esp, 0x00359EBAu); RECOMP_ABI_CALL(0x00036A08u, sub_00036A08); /* call 0x00036A08 */

loc_00359EBA: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00359ECBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359EC9u); } /* indirect call */
    }

loc_00359ECB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359F05; /* je: equal / zero */

loc_00359ED1: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x82CEAC);
    PUSH32(esp, eax);
    ecx = esp + 0x29;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00359EEAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00359EEA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x49;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00359F00u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00359F00: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00359F07;

loc_00359F05: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00359F07: ;
    eax = esp + 0x10;
    MEM32(esi + 0x2C8) = edi;
    MEM32(esp + 0x10) = ebx;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00359F1Du); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00359F1D: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00359F2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359F2Cu); } /* indirect call */
    }

loc_00359F2E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359F68; /* je: equal / zero */

loc_00359F34: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x82CE8C);
    PUSH32(esp, eax);
    ecx = esp + 0x29;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00359F4Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00359F4D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x49;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00359F63u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00359F63: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00359F6A;

loc_00359F68: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00359F6A: ;
    eax = esp + 0x10;
    MEM32(esi + 0x2D0) = edi;
    MEM32(esp + 0x10) = ebx;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00359F80u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00359F80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00359F91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359F8Fu); } /* indirect call */
    }

loc_00359F91: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00359FCB; /* je: equal / zero */

loc_00359F97: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x82CE6C);
    PUSH32(esp, eax);
    ecx = esp + 0x29;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00359FB0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00359FB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x49;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00359FC6u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00359FC6: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00359FCD;

loc_00359FCB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00359FCD: ;
    eax = esp + 0x10;
    MEM32(esi + 0x2CC) = edi;
    MEM32(esp + 0x10) = ebx;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00359FE3u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00359FE3: ;
    ecx = MEM32(0x907BA4);
    edi = MEM32(esi + 0x7C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00359FF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00359FF6u); } /* indirect call */
    }

loc_00359FF8: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035A045; /* je: equal / zero */

loc_00359FFE: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x82CE50);
    PUSH32(esp, eax);
    ecx = esp + 0x29;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035A017u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035A017: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edx = edi + -1;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, ebx);
    edx = esp + 0x49;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, ebp);
    MEM32(esp + 0x48) = ebx;
    PUSH32(esp, 0x0035A040u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035A040: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebp;

loc_0035A045: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;
    MEM32(esi + 0x2D4) = ebx;
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035A062u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035A062: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035A140
 * Original: 0x0035A140 - 0x0035A1D7 (151 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A140: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x260);
    eax = MEM32(eax);
    ecx = ZX8(MEM8(eax + 0x13));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    edi = esp + 0xC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = 1;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0035A1CE; /* jne: not equal / not zero */

loc_0035A167: ;
    _fa = (uint32_t)(MEM32(ebp + 0x228)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x228), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035A1CE; /* jne: not equal / not zero */

loc_0035A170: ;
    PUSH32(esp, ebx);
    ebx = ebp + 0x120;
    ecx = ebx;
    PUSH32(esp, 0x0035A17Eu); RECOMP_ABI_CALL(0x00022599u, sub_00022599); /* call 0x00022599 */

loc_0035A17E: ;
    edx = MEM32(ebx + 0xF0);
    eax = MEM32(edx);
    ecx = ZX8(MEM8(eax + 0x13));
    esi = MEM32(eax + 0x14);
    edi = esp + 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = 1;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0035A1B6; /* jne: not equal / not zero */

loc_0035A19F: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x0035A1AFu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035A1AF: ;
    ecx = ebx;
    PUSH32(esp, 0x0035A1B6u); RECOMP_ABI_CALL(0x00022599u, sub_00022599); /* call 0x00022599 */

loc_0035A1B6: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = ebp + 0x214;
    PUSH32(esp, 0x0035A1C6u); RECOMP_ABI_CALL(0x0002EE02u, sub_0002EE02); /* call 0x0002EE02 */

loc_0035A1C6: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0035A1CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035A200
 * Original: 0x0035A200 - 0x0035A26C (108 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035A200: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x260);
    eax = MEM32(eax);
    ecx = ZX8(MEM8(eax + 0x13));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    edi = esp + 0xC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = 1;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0035A267; /* jne: not equal / not zero */

loc_0035A227: ;
    ecx = ebx + 0x214;
    PUSH32(esp, 0x0035A232u); RECOMP_ABI_CALL(0x0002BFE0u, sub_0002BFE0); /* call 0x0002BFE0 */

loc_0035A232: ;
    ebx = MEM32(ebx + 0x210);
    eax = MEM32(ebx);
    ecx = ZX8(MEM8(eax + 0x13));
    esi = MEM32(eax + 0x14);
    edi = esp + 0xC;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = 1;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0035A267; /* je: equal / zero */

loc_0035A253: ;
    eax = esp + 0xC;
    MEM32(esp + 0xC) = 1;
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035A267u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035A267: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035A290
 * Original: 0x0035A290 - 0x0035A2DB (75 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A290: ;
    _fa = (uint32_t)(MEM8(0x8FCA90)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x8FCA90), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0035A2BE; /* je: equal / zero */

loc_0035A299: ;
    eax = MEM32(ecx + 0x28C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    MEM32(ecx + 0x28C) = eax;
    eax = MEM32(ecx + 0x25C);
    eax = MEM32(eax + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035A2BE; /* jle: less or equal (signed <=) */

loc_0035A2B8: ;
    MEM32(ecx + 0x28C) = eax;

loc_0035A2BE: ;
    edx = MEM32(ecx + 0x210);
    eax = MEM32(edx);
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x120;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035A2DA; /* je: equal / zero */

loc_0035A2D5: ;
    g_seh_ebp = ebp; sub_0001A709(); return; /* tail jmp 0x0001A709 */

loc_0035A2DA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A2F0
 * Original: 0x0035A2F0 - 0x0035A59B (683 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A2F0(void)
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

loc_0035A2F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C8);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0035A41D; /* je: equal / zero */

loc_0035A30B: ;
    _fa = (uint32_t)(MEM8(0x8FE130)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x8FE130), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0035A331; /* jne: not equal / not zero */

loc_0035A314: ;
    eax = MEM32(0x8FE130);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8FE130) = eax;
    MEMF(0x8FE12C) = xmm0.f[0]; /* movss */

loc_0035A331: ;
    ecx = MEM32(0x8FCB94);
    eax = MEM32(ecx);
    edi = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0035A33Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035A33Cu); } /* indirect call */
    }

loc_0035A33F: ;
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x8FE128); /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x8FE12C); /* comiss */
    MEMF(0x8FE124) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0035A595; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x8FE12C)) */

loc_0035A36B: ;
    PUSH32(esp, ebp);
    ecx = esi;
    MEMF(0x8FE128) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0035A37Bu); RECOMP_ABI_CALL(0x0002C850u, sub_0002C850); /* call 0x0002C850 */

loc_0035A37B: ;
    PUSH32(esp, 0x0035A380u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0035A380: ;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebp = MEM32(ecx + esi + 0x7C);
    edi = ecx + esi;
    PUSH32(esp, 0x0035A395u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0035A395: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0035A3BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035A3BCu); } /* indirect call */
    }

loc_0035A3BF: ;
    SET_LO8(eax, MEM8(0x8FE120));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebp);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0035A3DF; /* je: equal / zero */

loc_0035A3CB: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035A3D5u); RECOMP_ABI_CALL(0x0001D1CFu, sub_0001D1CF); /* call 0x0001D1CF */

loc_0035A3D5: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD448)); /* movss */
    goto loc_0035A3FF;

loc_0035A3DF: ;
    PUSH32(esp, 0x44960000);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035A3EEu); RECOMP_ABI_CALL(0x000360B7u, sub_000360B7); /* call 0x000360B7 */

loc_0035A3EE: ;
    PUSH32(esp, 0x0035A3F3u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0035A3F3: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x82CF1C); /* mulss */

loc_0035A3FF: ;
    SET_LO8(eax, MEM8(0x8FE120));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    MEMF(0x8FE12C) = xmm0.f[0]; /* movss */
    MEM8(0x8FE120) = LO8(ecx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035A41D: ;
    eax = MEM32(esi + 0x2D0);
    edx = MEM32(eax);
    ecx = MEM32(edx + 0x14);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035A4D9; /* je: equal / zero */

loc_0035A431: ;
    eax = MEM32(esi + 0x2CC);
    edx = esp + 8;
    MEM32(esp + 8) = 0;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035A44Bu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035A44B: ;
    ecx = MEM32(0x8FCB94);
    edx = MEM32(ecx);
    edi = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0035A459u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035A456u); } /* indirect call */
    }

loc_0035A459: ;
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x8FE11C); /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x8C4D74); /* comiss */
    MEMF(0x8FE118) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0035A595; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x8C4D74)) */

loc_0035A485: ;
    ecx = esi;
    MEMF(0x8FE11C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0035A494u); RECOMP_ABI_CALL(0x0002C850u, sub_0002C850); /* call 0x0002C850 */

loc_0035A494: ;
    eax = MEM32(esi + 0x2D4);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0035A4C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035A4C4u); } /* indirect call */
    }

loc_0035A4C7: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0035A4D3u); RECOMP_ABI_CALL(0x0001D1CFu, sub_0001D1CF); /* call 0x0001D1CF */

loc_0035A4D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035A4D9: ;
    ecx = MEM32(esi + 0x2CC);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 0x14);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035A595; /* je: equal / zero */

loc_0035A4ED: ;
    edx = esp + 8;
    MEM32(esp + 8) = 0;
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035A501u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035A501: ;
    ecx = MEM32(0x8FCB94);
    eax = MEM32(ecx);
    edi = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0035A50Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035A50Cu); } /* indirect call */
    }

loc_0035A50F: ;
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x8FE114); /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x8C4D70); /* comiss */
    MEMF(0x8FE110) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0035A595; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x8C4D70)) */

loc_0035A537: ;
    ecx = esi;
    MEMF(0x8FE114) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0035A546u); RECOMP_ABI_CALL(0x0002C850u, sub_0002C850); /* call 0x0002C850 */

loc_0035A546: ;
    ecx = esi + 0x120;
    PUSH32(esp, 0x0035A551u); RECOMP_ABI_CALL(0x00022599u, sub_00022599); /* call 0x00022599 */

loc_0035A551: ;
    ecx = MEM32(esi + 0x2D4);
    edx = MEM32(ecx);
    eax = MEM32(edx + 0x14);
    eax = MEM32(eax);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0035A584u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035A581u); } /* indirect call */
    }

loc_0035A584: ;
    PUSH32(esp, 0x44960000);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0035A595u); RECOMP_ABI_CALL(0x000360B7u, sub_000360B7); /* call 0x000360B7 */

loc_0035A595: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035A650
 * Original: 0x0035A650 - 0x0035A684 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035A650: ;
    eax = MEM32(0x8FCB68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035A683; /* jne: not equal / not zero */

loc_0035A659: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE0);
    PUSH32(esp, 0x0035A665u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035A665: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035A679; /* je: equal / zero */

loc_0035A66C: ;
    ecx = eax;
    PUSH32(esp, 0x0035A673u); RECOMP_ABI_CALL(0x0002F249u, sub_0002F249); /* call 0x0002F249 */

loc_0035A673: ;
    MEM32(0x8FCB68) = eax;
    esp += 4; return; /* ret */

loc_0035A679: ;
    MEM32(0x8FCB68) = 0;

loc_0035A683: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A6A0
 * Original: 0x0035A6A0 - 0x0035A8C3 (547 bytes, 208 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A6A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x0035A6B9u); RECOMP_ABI_CALL(0x0002A45Bu, sub_0002A45B); /* call 0x0002A45B */

loc_0035A6B9: ;
    MEM32(esi + 0x58) = eax;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035A6CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035A6CBu); } /* indirect call */
    }

loc_0035A6CD: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035A6FD; /* je: equal / zero */

loc_0035A6D3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x82B434);
    ecx = ebp;
    PUSH32(esp, 0x0035A6E0u); RECOMP_ABI_CALL(0x0002C4FEu, sub_0002C4FE); /* call 0x0002C4FE */

loc_0035A6E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10F4A161);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0035A6F8u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035A6F8: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035A6FF;

loc_0035A6FD: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035A6FF: ;
    MEM32(esi + 0x5C) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035A713u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035A711u); } /* indirect call */
    }

loc_0035A713: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035A743; /* je: equal / zero */

loc_0035A719: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x82CFA0);
    ecx = ebp;
    PUSH32(esp, 0x0035A726u); RECOMP_ABI_CALL(0x0002C4FEu, sub_0002C4FE); /* call 0x0002C4FE */

loc_0035A726: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x20F4A9A1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0035A73Eu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035A73E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035A745;

loc_0035A743: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035A745: ;
    MEM32(esi + 0x50) = ebx;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035A759u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035A757u); } /* indirect call */
    }

loc_0035A759: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035A789; /* je: equal / zero */

loc_0035A75F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x82CF84);
    ecx = ebp;
    PUSH32(esp, 0x0035A76Cu); RECOMP_ABI_CALL(0x0002C4FEu, sub_0002C4FE); /* call 0x0002C4FE */

loc_0035A76C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0035A784u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035A784: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035A78B;

loc_0035A789: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035A78B: ;
    MEM32(esi + 0x54) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035A79Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035A79Du); } /* indirect call */
    }

loc_0035A79F: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035A7CF; /* je: equal / zero */

loc_0035A7A5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x82CF6C);
    ecx = ebp;
    PUSH32(esp, 0x0035A7B2u); RECOMP_ABI_CALL(0x0002C4FEu, sub_0002C4FE); /* call 0x0002C4FE */

loc_0035A7B2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0035A7CAu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035A7CA: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035A7D1;

loc_0035A7CF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035A7D1: ;
    MEM32(esi + 0x60) = ebx;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035A7E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035A7E3u); } /* indirect call */
    }

loc_0035A7E5: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035A815; /* je: equal / zero */

loc_0035A7EB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x82CF54);
    ecx = ebp;
    PUSH32(esp, 0x0035A7F8u); RECOMP_ABI_CALL(0x0002C4FEu, sub_0002C4FE); /* call 0x0002C4FE */

loc_0035A7F8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0035A810u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035A810: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035A817;

loc_0035A815: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035A817: ;
    MEM32(esi + 0x64) = ebx;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035A82Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035A829u); } /* indirect call */
    }

loc_0035A82B: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035A85B; /* je: equal / zero */

loc_0035A831: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x82CF3C);
    ecx = ebp;
    PUSH32(esp, 0x0035A83Eu); RECOMP_ABI_CALL(0x0002C4FEu, sub_0002C4FE); /* call 0x0002C4FE */

loc_0035A83E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10F4A161);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0035A856u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035A856: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035A85D;

loc_0035A85B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035A85D: ;
    MEM32(esi + 0x70) = ebx;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035A871u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035A86Fu); } /* indirect call */
    }

loc_0035A871: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035A8B0; /* je: equal / zero */

loc_0035A877: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x82CF20);
    ecx = ebp;
    PUSH32(esp, 0x0035A884u); RECOMP_ABI_CALL(0x0002C4FEu, sub_0002C4FE); /* call 0x0002C4FE */

loc_0035A884: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0035A89Cu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035A89C: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x68) = ebx;
    PUSH32(esp, 0x0035A8A9u); RECOMP_ABI_CALL(0x000168EDu, sub_000168ED); /* call 0x000168ED */

loc_0035A8A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0035A8B0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi + 0x68) = ebx;
    PUSH32(esp, 0x0035A8BCu); RECOMP_ABI_CALL(0x000168EDu, sub_000168ED); /* call 0x000168ED */

loc_0035A8BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035A950
 * Original: 0x0035A950 - 0x0035A9A4 (84 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035A950: ;
    eax = MEM32(0x8FCB78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035A9A3; /* jne: not equal / not zero */

loc_0035A959: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x360);
    PUSH32(esp, 0x0035A965u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035A965: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035A975; /* je: equal / zero */

loc_0035A96C: ;
    ecx = eax;
    PUSH32(esp, 0x0035A973u); RECOMP_ABI_CALL(0x0001CC39u, sub_0001CC39); /* call 0x0001CC39 */

loc_0035A973: ;
    goto loc_0035A977;

loc_0035A975: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035A977: ;
    ecx = MEM32(esp + 4);
    MEM32(0x8FCB78) = eax;
    MEM32(eax + 0x270) = ecx;
    eax = MEM32(esp + 8);
    edx = MEM32(0x8FCB78);
    PUSH32(esp, eax);
    MEM32(edx + 0x274) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FCB78);
    PUSH32(esp, 0x0035A9A3u); RECOMP_ABI_CALL(0x00012CD9u, sub_00012CD9); /* call 0x00012CD9 */

loc_0035A9A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A9C0
 * Original: 0x0035A9C0 - 0x0035A9EC (44 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035A9C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0035A9CDu); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_0035A9CD: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035A9E8; /* jne: not equal / not zero */

loc_0035A9D4: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(esi + 0x48) = 1;
    PUSH32(esp, 0x0035A9E5u); RECOMP_ABI_CALL(0x0001A75Eu, sub_0001A75E); /* call 0x0001A75E */

loc_0035A9E5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035A9E8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035AA00
 * Original: 0x0035AA00 - 0x0035AA1E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035AA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035AA00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0035AA08u); RECOMP_ABI_CALL(0x00025D93u, sub_00025D93); /* call 0x00025D93 */

loc_0035AA08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0035AA18; /* je: equal / zero */

loc_0035AA0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035AA15u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0035AA15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035AA18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035AA30
 * Original: 0x0035AA30 - 0x0035B5FE (3022 bytes, 890 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035AA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035AA30: ;
    _fb = (uint32_t)(0x248) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x248;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7AD448)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7B1DEC)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x34);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0xA4) = 0x82D360;
    MEM32(esp + 0xA8) = 0x82D350;
    MEM32(esp + 0xAC) = 0x82D34C;
    MEM32(esp + 0xB0) = 0x82D348;
    MEM32(esp + 0xB4) = 0x82D344;
    MEM32(esp + 0xB8) = 0x82D340;
    MEM32(esp + 0xBC) = 0x7E7254;
    MEM32(esp + 0xC0) = 0x7E7250;
    MEM32(esp + 0xC4) = 0x82D33C;
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    edi = 1;
    ebp = ecx + 0x50;
    MEM32(esp + 0x10) = 5;
    edi = edi;

loc_0035AB50: ;
    PUSH32(esp, edi);
    eax = esp + 0xF0;
    PUSH32(esp, 0x82D304);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035AB63u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035AB63: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035AB77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035AB75u); } /* indirect call */
    }

loc_0035AB77: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035ABD3; /* je: equal / zero */

loc_0035AB7D: ;
    eax = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x34) = edx;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0);
    ecx = esp + 0x104;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xCF4BB78);
    PUSH32(esp, esi);
    MEM32(esp + 0x40) = ebx;
    PUSH32(esp, 0x0035ABCEu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035ABCE: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035ABD5;

loc_0035ABD3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035ABD5: ;
    PUSH32(esp, edi);
    edx = esp + 0xF0;
    PUSH32(esp, 0x82D2D0);
    PUSH32(esp, edx);
    MEM32(ebp + -20) = esi;
    PUSH32(esp, 0x0035ABEBu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035ABEB: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035ABFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035ABFDu); } /* indirect call */
    }

loc_0035ABFF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035AC94; /* je: equal / zero */

loc_0035AC09: ;
    ecx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, 0);
    MEM32(esp + 0x98) = ecx;
    ecx = MEM32(esp + 0x64);
    MEM32(esp + 0xA0) = eax;
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, 0);
    MEM32(esp + 0xA8) = ecx;
    ecx = MEM32(esp + 0x74);
    MEM32(esp + 0xA0) = edx;
    edx = MEM32(esp + 0x6C);
    MEM32(esp + 0x90) = eax;
    eax = esp + 0x9C;
    PUSH32(esp, eax);
    MEM32(esp + 0x98) = ecx;
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    MEM32(esp + 0x94) = edx;
    edx = MEM32(esp + 0x80);
    PUSH32(esp, 0);
    MEM32(esp + 0xA4) = edx;
    PUSH32(esp, 0);
    edx = esp + 0x104;
    PUSH32(esp, edx);
    PUSH32(esp, 0x10F4A161);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035AC8Fu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035AC8F: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035AC96;

loc_0035AC94: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035AC96: ;
    eax = esp + 0x74;
    MEM32(ebp) = esi;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035ACA5u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035ACA5: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0035AB50; /* jne: not equal / not zero */

loc_0035ACB8: ;
    ebp = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xF4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035ACD0;

loc_0035ACC6: ;
    ebx = MEM32(esp + 0x34);
    /* nop */

loc_0035ACD0: ;
    ecx = MEM32(esp + edi * 4 + 0xA4);
    PUSH32(esp, ecx);
    edx = esp + 0xF0;
    PUSH32(esp, 0x82D298);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035ACEAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035ACEA: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035ACFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035ACFCu); } /* indirect call */
    }

loc_0035ACFE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035AD5A; /* je: equal / zero */

loc_0035AD04: ;
    ecx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x48);
    PUSH32(esp, 0);
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, 0);
    edx = esp + 0x104;
    PUSH32(esp, edx);
    PUSH32(esp, 0xCF4BB78);
    PUSH32(esp, esi);
    MEM32(esp + 0x4C) = ebx;
    PUSH32(esp, 0x0035AD55u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035AD55: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035AD5C;

loc_0035AD5A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035AD5C: ;
    eax = esp + 0x48;
    MEM32(ebp) = esi;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035AD6Bu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035AD6B: ;
    ebx = MEM32(ebp);
    ecx = MEM32(ebx);
    PUSH32(esp, 0x0035AD75u); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_0035AD75: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035ADAB; /* jne: not equal / not zero */

loc_0035AD7B: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x829E44);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035AD8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035AD8Au); } /* indirect call */
    }

loc_0035AD8C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035ADA1; /* je: equal / zero */

loc_0035AD92: ;
    ecx = esi;
    PUSH32(esp, 0x0035AD99u); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_0035AD99: ;
    MEM32(esi) = 0x82AEC4;
    goto loc_0035ADA3;

loc_0035ADA1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035ADA3: ;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035ADABu); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_0035ADAB: ;
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0035ADB9u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_0035ADB9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 9 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035ACC6; /* jl: less (signed <) */

loc_0035ADC6: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035ADD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035ADD5u); } /* indirect call */
    }

loc_0035ADD7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035AE00; /* je: equal / zero */

loc_0035ADDD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82D264);
    PUSH32(esp, 0x6CF4AF5A);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035ADF9u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035ADF9: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    goto loc_0035AE02;

loc_0035AE00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035AE02: ;
    MEM32(ebx + 0x80) = eax;
    ecx = MEM32(eax);
    esi = MEM32(ecx + 0x14);
    edi = ebx + 0x84;
    ecx = 0x1B;
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
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035AE2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035AE29u); } /* indirect call */
    }

loc_0035AE2B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035AE88; /* je: equal / zero */

loc_0035AE31: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ecx;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82D234);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x54);
    PUSH32(esp, 0xCF4BB78);
    PUSH32(esp, esi);
    MEM32(esp + 0x50) = edx;
    PUSH32(esp, 0x0035AE83u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035AE83: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035AE8A;

loc_0035AE88: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035AE8A: ;
    edx = esp + 0x48;
    MEM32(ebx + 0xF0) = esi;
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035AE9Cu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035AE9C: ;
    edi = MEM32(ebx + 0xF0);
    ecx = MEM32(edi);
    PUSH32(esp, 0x0035AEA9u); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_0035AEA9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035AEDF; /* jne: not equal / not zero */

loc_0035AEAF: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x829E44);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035AEC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035AEBEu); } /* indirect call */
    }

loc_0035AEC0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035AED5; /* je: equal / zero */

loc_0035AEC6: ;
    ecx = esi;
    PUSH32(esp, 0x0035AECDu); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_0035AECD: ;
    MEM32(esi) = 0x82AEC4;
    goto loc_0035AED7;

loc_0035AED5: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035AED7: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035AEDFu); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_0035AEDF: ;
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0035AEEDu); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_0035AEED: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C40B8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    ecx = esp + 0xC8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xD4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xE8) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x10) = ecx;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x64;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_0035AF70: ;
    edi = eax + 1;
    PUSH32(esp, edi);
    edx = esp + 0xF0;
    PUSH32(esp, 0x82D200);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035AF86u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035AF86: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035AF9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035AF98u); } /* indirect call */
    }

loc_0035AF9A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035AFFA; /* je: equal / zero */

loc_0035AFA0: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = edx;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, 0);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0);
    eax = esp + 0x104;
    PUSH32(esp, eax);
    PUSH32(esp, 0xCF4BB78);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035AFF5u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035AFF5: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035AFFC;

loc_0035AFFA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035AFFC: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx) = esi;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x0035B00Au); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035B00A: ;
    ebp = MEM32(ebx);
    ecx = MEM32(ebp);
    PUSH32(esp, 0x0035B014u); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_0035B014: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035B04B; /* jne: not equal / not zero */

loc_0035B01A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x829E44);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035B02Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B029u); } /* indirect call */
    }

loc_0035B02B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B040; /* je: equal / zero */

loc_0035B031: ;
    ecx = esi;
    PUSH32(esp, 0x0035B038u); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_0035B038: ;
    MEM32(esi) = 0x82AEC4;
    goto loc_0035B042;

loc_0035B040: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B042: ;
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B04Bu); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_0035B04B: ;
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0035B059u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_0035B059: ;
    edx = MEM32(esp + 0x10);
    eax = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0035AF70; /* jl: less (signed <) */

loc_0035B072: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035B083u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B081u); } /* indirect call */
    }

loc_0035B083: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B0AC; /* je: equal / zero */

loc_0035B089: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82D1C8);
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B0A5u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035B0A5: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    goto loc_0035B0AE;

loc_0035B0AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B0AE: ;
    xmm0 = XMM_SCALAR(MEMF(0x829A30)); /* movss */
    ecx = esp + 0x10;
    MEM32(ebp + 0x7C) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0035B0CBu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035B0CB: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035B0DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B0DAu); } /* indirect call */
    }

loc_0035B0DC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B103; /* je: equal / zero */

loc_0035B0E2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82D194);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B0FEu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035B0FE: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035B105;

loc_0035B103: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B105: ;
    ebx = 1;
    eax = esp + 0x10;
    MEM32(ebp + 0x78) = esi;
    MEM32(esp + 0x10) = ebx;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035B11Du); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035B11D: ;
    edi = MEM32(ebp + 0x78);
    ecx = MEM32(edi);
    PUSH32(esp, 0x0035B127u); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_0035B127: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035B15D; /* jne: not equal / not zero */

loc_0035B12D: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x829E44);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035B13Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B13Cu); } /* indirect call */
    }

loc_0035B13E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B153; /* je: equal / zero */

loc_0035B144: ;
    ecx = esi;
    PUSH32(esp, 0x0035B14Bu); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_0035B14B: ;
    MEM32(esi) = 0x82AEB4;
    goto loc_0035B155;

loc_0035B153: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B155: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B15Du); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_0035B15D: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0035B167u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_0035B167: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1B;
    edi = esp + 0x1EC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035B188u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B186u); } /* indirect call */
    }

loc_0035B188: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B1AF; /* je: equal / zero */

loc_0035B18E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82D15C);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B1AAu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035B1AA: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035B1B1;

loc_0035B1AF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B1B1: ;
    ecx = esp + 0x10;
    MEM32(ebp + 0x130) = esi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x0035B1CBu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035B1CB: ;
    edi = MEM32(ebp + 0x130);
    ecx = MEM32(edi);
    PUSH32(esp, 0x0035B1D8u); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_0035B1D8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035B20E; /* jne: not equal / not zero */

loc_0035B1DE: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x829E44);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035B1EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B1EDu); } /* indirect call */
    }

loc_0035B1EF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B204; /* je: equal / zero */

loc_0035B1F5: ;
    ecx = esi;
    PUSH32(esp, 0x0035B1FCu); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_0035B1FC: ;
    MEM32(esi) = 0x82AEB4;
    goto loc_0035B206;

loc_0035B204: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B206: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B20Eu); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_0035B20E: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0035B218u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_0035B218: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x14) = ebx;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    ebx = ebp + 0x124;
    MEM32(esp + 0x10) = 3;
    /* nop */

loc_0035B240: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0xF0;
    PUSH32(esp, 0x82D11C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035B257u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035B257: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035B26Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B269u); } /* indirect call */
    }

loc_0035B26B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B295; /* je: equal / zero */

loc_0035B271: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x104;
    PUSH32(esp, eax);
    PUSH32(esp, 0x6CF4AF5A);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B290u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035B290: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035B297;

loc_0035B295: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B297: ;
    ecx = esp + 0x1EC;
    MEM32(ebx + -12) = esi;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x0035B2A9u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035B2A9: ;
    edi = MEM32(ebx + -12);
    ecx = MEM32(edi);
    PUSH32(esp, 0x0035B2B3u); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_0035B2B3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035B2E9; /* jne: not equal / not zero */

loc_0035B2B9: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x829E44);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035B2CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B2C8u); } /* indirect call */
    }

loc_0035B2CA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B2DF; /* je: equal / zero */

loc_0035B2D0: ;
    ecx = esi;
    PUSH32(esp, 0x0035B2D7u); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_0035B2D7: ;
    MEM32(esi) = 0x82AED4;
    goto loc_0035B2E1;

loc_0035B2DF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B2E1: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B2E9u); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_0035B2E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0035B2F3u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_0035B2F3: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0xF0;
    PUSH32(esp, 0x82D0E4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035B30Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035B30A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035B31Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B31Cu); } /* indirect call */
    }

loc_0035B31E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B37E; /* je: equal / zero */

loc_0035B324: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = ecx;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x48);
    PUSH32(esp, 0);
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, 0);
    edx = esp + 0x104;
    PUSH32(esp, edx);
    PUSH32(esp, 0xCF4BB78);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B379u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035B379: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035B380;

loc_0035B37E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B380: ;
    eax = esp + 0x48;
    MEM32(ebx) = esi;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035B38Eu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035B38E: ;
    edi = MEM32(ebx);
    ecx = MEM32(edi);
    PUSH32(esp, 0x0035B397u); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_0035B397: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035B3CD; /* jne: not equal / not zero */

loc_0035B39D: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x829E44);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035B3AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B3ACu); } /* indirect call */
    }

loc_0035B3AE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B3C3; /* je: equal / zero */

loc_0035B3B4: ;
    ecx = esi;
    PUSH32(esp, 0x0035B3BBu); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_0035B3BB: ;
    MEM32(esi) = 0x82AEC4;
    goto loc_0035B3C5;

loc_0035B3C3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B3C5: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B3CDu); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_0035B3CD: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0035B3D7u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_0035B3D7: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0035B240; /* jne: not equal / not zero */

loc_0035B3F2: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035B403u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B401u); } /* indirect call */
    }

loc_0035B403: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B42C; /* je: equal / zero */

loc_0035B409: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82D0AC);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B425u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035B425: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    goto loc_0035B42E;

loc_0035B42C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B42E: ;
    MEM32(ebp + 0x2C) = edi;
    ecx = MEM32(edi);
    PUSH32(esp, 0x0035B438u); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_0035B438: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035B46E; /* jne: not equal / not zero */

loc_0035B43E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x829E44);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035B44Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B44Du); } /* indirect call */
    }

loc_0035B44F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B464; /* je: equal / zero */

loc_0035B455: ;
    ecx = esi;
    PUSH32(esp, 0x0035B45Cu); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_0035B45C: ;
    MEM32(esi) = 0x82AEB4;
    goto loc_0035B466;

loc_0035B464: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B466: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B46Eu); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_0035B46E: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0035B478u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_0035B478: ;
    ecx = MEM32(ebp + 0x2C);
    eax = esp + 0x10;
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035B48Fu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035B48F: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035B4A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B49Eu); } /* indirect call */
    }

loc_0035B4A0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B4C7; /* je: equal / zero */

loc_0035B4A6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82D068);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B4C2u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035B4C2: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035B4C9;

loc_0035B4C7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B4C9: ;
    eax = esp + 0x10;
    MEM32(ebp + 0x30) = esi;
    MEM32(esp + 0x10) = 6;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035B4E0u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035B4E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035B4F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B4EFu); } /* indirect call */
    }

loc_0035B4F1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B518; /* je: equal / zero */

loc_0035B4F7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82D024);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B513u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035B513: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035B51A;

loc_0035B518: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B51A: ;
    eax = esp + 0x10;
    MEM32(ebp + 0x34) = esi;
    MEM32(esp + 0x10) = 0xA;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035B531u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035B531: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035B542u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B540u); } /* indirect call */
    }

loc_0035B542: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B56B; /* je: equal / zero */

loc_0035B548: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82CFE0);
    PUSH32(esp, 0x4F4B17B);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B564u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035B564: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    goto loc_0035B56D;

loc_0035B56B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B56D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD370)); /* movss */
    ecx = esp + 0x10;
    MEM32(ebp + 0x38) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0035B58Au); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035B58A: ;
    MEM8(ebp + 0x148) = 1;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035B5A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035B5A0u); } /* indirect call */
    }

loc_0035B5A2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B5C9; /* je: equal / zero */

loc_0035B5A8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82CFB4);
    PUSH32(esp, 0x10F4A161);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035B5C4u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035B5C4: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035B5CB;

loc_0035B5C9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035B5CB: ;
    MEM32(ebp + 0x134) = esi;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x138;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = edx;
    eax = MEM32(ecx + 4);
    MEM32(ebp + 4) = eax;
    edx = MEM32(ecx + 8);
    MEM32(ebp + 8) = edx;
    eax = MEM32(ecx + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0xC) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x248) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x248;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035B900
 * Original: 0x0035B900 - 0x0035BAFB (507 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035B900(void)
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

loc_0035B900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 0x148));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0035B927; /* je: equal / zero */

loc_0035B91B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035B920u); RECOMP_ABI_CALL(0x0002BECDu, sub_0002BECD); /* call 0x0002BECD */

loc_0035B920: ;
    MEM8(ebx + 0x148) = 0;

loc_0035B927: ;
    eax = MEM32(ebx + 0x2C);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035B93D; /* je: equal / zero */

loc_0035B934: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035B93Bu); RECOMP_ABI_CALL(0x00016E24u, sub_00016E24); /* call 0x00016E24 */

loc_0035B93B: ;
    goto loc_0035B951;

loc_0035B93D: ;
    ecx = MEM32(ebx + 0x134);
    ecx = MEM32(ecx);
    eax = ebx + 0x138;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035B951u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035B951: ;
    edx = MEM32(ebx + 0x78);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035BAF4; /* je: equal / zero */

loc_0035B962: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035B967u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_0035B967: ;
    eax = MEM32(eax + 0xC);
    esi = eax + 0x50;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x74;
    ecx = 0x10;
    edi = esp + 0x74;
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x0035B987u); RECOMP_ABI_CALL(0x0059FF05u, sub_0059FF05); /* call 0x0059FF05 */

loc_0035B987: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(ebx + 0x7C);
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x90); /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    eax = MEM32(edx + 0x14);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    esi = ebx + 0x3C;
    edi = 3;

loc_0035B9D6: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    eax = MEM32(edx + 0x14);
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ecx;
    edx = MEM32(eax + 4);
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(esp + 0x10) = edx;
    eax = MEM32(eax + 8);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    MEM32(esp + 0x14) = eax;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x48); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm4; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 0x28); /* divss */
    edx = MEM32(esi);
    ecx = esp + 0xC;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035BACBu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035BACB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0035B9D6; /* jne: not equal / not zero */

loc_0035BAD5: ;
    esi = ebx + 0x50;
    edi = 3;
    /* nop */

loc_0035BAE0: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035BAEEu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035BAEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0035BAE0; /* jne: not equal / not zero */

loc_0035BAF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0035BB80
 * Original: 0x0035BB80 - 0x0035BC6A (234 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035BB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035BB80: ;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x0035BB91u); RECOMP_ABI_CALL(0x00017360u, sub_00017360); /* call 0x00017360 */

loc_0035BB91: ;
    ecx = ebp;
    PUSH32(esp, 0x0035BB98u); RECOMP_ABI_CALL(0x00024295u, sub_00024295); /* call 0x00024295 */

loc_0035BB98: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0035BBA2u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035BBA2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035BBBC; /* je: equal / zero */

loc_0035BBA9: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM8(eax + 0xC) = LO8(ebx);
    MEM32(eax) = 0x829F40;
    edi = eax;
    goto loc_0035BBBE;

loc_0035BBBC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035BBBE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = esp + 0x14;
    MEM8(esp + 0x1C) = LO8(ebx);
    MEM32(esp + 0x14) = 0x82D3AC;
    MEM32(esp + 0x18) = 0x82D3A0;
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0035BBE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035BBDDu); } /* indirect call */
    }

loc_0035BBE0: ;
    esi = MEM32(esp + 0x12C);
    edx = MEM32(esi);
    MEM32(esi + edx * 4 + 4) = edi;
    ecx = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    MEM32(esi) = ecx;
    PUSH32(esp, 0x1C);
    MEM32(ebp + 0x14C) = edi;
    PUSH32(esp, 0x0035BC00u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035BC00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035BC23; /* je: equal / zero */

loc_0035BC07: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM8(eax + 0xC) = LO8(ebx);
    MEM32(eax) = 0x829F2C;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    edi = eax;
    goto loc_0035BC25;

loc_0035BC23: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035BC25: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0xA0;
    MEM32(esp + 0xA4) = ebx;
    MEM8(esp + 0xA8) = 1;
    MEM32(esp + 0xA0) = 0x82D36C;
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0035BC4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035BC4Cu); } /* indirect call */
    }

loc_0035BC4F: ;
    edx = MEM32(esi);
    MEM32(esi + edx * 4 + 4) = edi;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x150) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035BCB0
 * Original: 0x0035BCB0 - 0x0035BD65 (181 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035BCB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035BCB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8FC604);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0035BCD3; /* je: equal / zero */

loc_0035BCC6: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035BCD3; /* je: equal / zero */

loc_0035BCCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035BD17; /* jne: not equal / not zero */

loc_0035BCD3: ;
    edi = MEM32(ebp + 0x150);
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035BD58; /* jle: less or equal (signed <=) */

loc_0035BCE2: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax);
    MEM32(esp + 0x10) = ebx;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035BD02; /* je: equal / zero */

loc_0035BCF8: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035BD02u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035BD02: ;
    eax = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035BCE2; /* jl: less (signed <) */

loc_0035BD0A: ;
    ecx = ebp;
    PUSH32(esp, 0x0035BD11u); RECOMP_ABI_CALL(0x00016E6Au, sub_00016E6A); /* call 0x00016E6A */

loc_0035BD11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0035BD17: ;
    edi = MEM32(ebp + 0x150);
    eax = MEM32(edi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035BD58; /* jle: less or equal (signed <=) */

loc_0035BD28: ;
    goto loc_0035BD30;

    /* nop */

loc_0035BD30: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + esi * 4);
    eax = MEM32(edx + 0x18);
    ecx = MEM32(eax);
    MEM32(esp + 0x10) = ebx;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035BD50; /* je: equal / zero */

loc_0035BD46: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035BD50u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035BD50: ;
    eax = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035BD30; /* jl: less (signed <) */

loc_0035BD58: ;
    ecx = ebp;
    PUSH32(esp, 0x0035BD5Fu); RECOMP_ABI_CALL(0x00016E6Au, sub_00016E6A); /* call 0x00016E6A */

loc_0035BD5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035BDA0
 * Original: 0x0035BDA0 - 0x0035C09D (765 bytes, 252 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035BDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035BDA0: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x94);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0035BDB9u); RECOMP_ABI_CALL(0x00020FCDu, sub_00020FCD); /* call 0x00020FCD */

loc_0035BDB9: ;
    PUSH32(esp, 0x82D614);
    ecx = esp + 0x18;
    MEM32(edi + 0xB0) = eax;
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(edi + 0xAC) = eax;
    PUSH32(esp, 0x0035BDDCu); RECOMP_ABI_CALL(0x00016320u, sub_00016320); /* call 0x00016320 */

loc_0035BDDC: ;
    ebx = edi + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82D5FC);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(edi + 0x54) = eax;
    PUSH32(esp, 0x0035BDF3u); RECOMP_ABI_CALL(0x0001482Cu, sub_0001482C); /* call 0x0001482C */

loc_0035BDF3: ;
    PUSH32(esp, 0x82D5D8);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035BE03u); RECOMP_ABI_CALL(0x00016320u, sub_00016320); /* call 0x00016320 */

loc_0035BE03: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82D5B4);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(edi + 0x5C) = eax;
    PUSH32(esp, 0x0035BE17u); RECOMP_ABI_CALL(0x0001482Cu, sub_0001482C); /* call 0x0001482C */

loc_0035BE17: ;
    PUSH32(esp, 0x82D59C);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035BE27u); RECOMP_ABI_CALL(0x00016320u, sub_00016320); /* call 0x00016320 */

loc_0035BE27: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    MEM32(edi + 0x64) = eax;
    PUSH32(esp, 0x82D588);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035BE3Eu); RECOMP_ABI_CALL(0x0001482Cu, sub_0001482C); /* call 0x0001482C */

loc_0035BE3E: ;
    PUSH32(esp, 0x82D56C);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035BE4Eu); RECOMP_ABI_CALL(0x00016320u, sub_00016320); /* call 0x00016320 */

loc_0035BE4E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82D550);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(edi + 0x74) = eax;
    PUSH32(esp, 0x0035BE62u); RECOMP_ABI_CALL(0x0001482Cu, sub_0001482C); /* call 0x0001482C */

loc_0035BE62: ;
    PUSH32(esp, 0x82D530);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035BE72u); RECOMP_ABI_CALL(0x00016320u, sub_00016320); /* call 0x00016320 */

loc_0035BE72: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82D514);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(edi + 0x78) = eax;
    PUSH32(esp, 0x0035BE86u); RECOMP_ABI_CALL(0x0001482Cu, sub_0001482C); /* call 0x0001482C */

loc_0035BE86: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x82D4F8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035BE99u); RECOMP_ABI_CALL(0x00016320u, sub_00016320); /* call 0x00016320 */

loc_0035BE99: ;
    MEM32(edi + 0x7C) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82D4DC);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035BEADu); RECOMP_ABI_CALL(0x0001482Cu, sub_0001482C); /* call 0x0001482C */

loc_0035BEAD: ;
    PUSH32(esp, 0x82D4C0);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035BEBDu); RECOMP_ABI_CALL(0x00016320u, sub_00016320); /* call 0x00016320 */

loc_0035BEBD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82D4A4);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(edi + 0x80) = eax;
    PUSH32(esp, 0x0035BED4u); RECOMP_ABI_CALL(0x0001482Cu, sub_0001482C); /* call 0x0001482C */

loc_0035BED4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82D488);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035BEE5u); RECOMP_ABI_CALL(0x0001482Cu, sub_0001482C); /* call 0x0001482C */

loc_0035BEE5: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x82D468);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035BEF8u); RECOMP_ABI_CALL(0x00016320u, sub_00016320); /* call 0x00016320 */

loc_0035BEF8: ;
    PUSH32(esp, 0x82D448);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(edi + 0x6C) = eax;
    PUSH32(esp, 0x0035BF0Bu); RECOMP_ABI_CALL(0x00016320u, sub_00016320); /* call 0x00016320 */

loc_0035BF0B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x68) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0035BF56; /* je: equal / zero */

loc_0035BF15: ;
    PUSH32(esp, 0x82D42C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035BF25u); RECOMP_ABI_CALL(0x00036832u, sub_00036832); /* call 0x00036832 */

loc_0035BF25: ;
    ecx = MEM32(edi + 0x68);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edi + 0x70) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0035BF56; /* je: equal / zero */

loc_0035BF32: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035BF3F; /* je: equal / zero */

loc_0035BF38: ;
    edx = MEM32(eax);
    eax = MEM32(edx + 0x14);
    edx = MEM32(eax);

loc_0035BF3F: ;
    ecx = MEM32(ecx);
    MEM32(esp + 0x10) = edx;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035BF56; /* je: equal / zero */

loc_0035BF4C: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035BF56u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035BF56: ;
    PUSH32(esp, 0x82D410);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035BF66u); RECOMP_ABI_CALL(0x00016320u, sub_00016320); /* call 0x00016320 */

loc_0035BF66: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82D3F8);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(edi + 0x58) = eax;
    PUSH32(esp, 0x0035BF7Au); RECOMP_ABI_CALL(0x0001482Cu, sub_0001482C); /* call 0x0001482C */

loc_0035BF7A: ;
    PUSH32(esp, 0x82D3EC);
    PUSH32(esp, esi);
    edx = esp + 0x38;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035BF8Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035BF8F: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0035BF97u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_0035BF97: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0035BFA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035BFA0u); } /* indirect call */
    }

loc_0035BFA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035BFF8; /* je: equal / zero */

loc_0035BFA7: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035BFB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035BFB6u); } /* indirect call */
    }

loc_0035BFB8: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035BFDF; /* je: equal / zero */

loc_0035BFBE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4F4B810);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0035BFDAu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035BFDA: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035BFE1;

loc_0035BFDF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035BFE1: ;
    ecx = esp + 0x10;
    MEM32(edi + 0x50) = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, 0x0035BFF8u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035BFF8: ;
    PUSH32(esp, 0x82D3D8);
    PUSH32(esp, esi);
    edx = esp + 0x1C;
    PUSH32(esp, 0x7E0928);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035C00Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035C00D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0035C015u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_0035C015: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0035C023u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035C020u); } /* indirect call */
    }

loc_0035C023: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C043; /* je: equal / zero */

loc_0035C027: ;
    edx = MEM32(0x8FCB8C);
    ecx = MEM32(edx + 0xB4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035C03Du); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_0035C03D: ;
    MEM32(eax + 0xE0) = edi;

loc_0035C043: ;
    ebp = edi + 0x90;
    ebx = edi + 0x84;
    MEM32(esp + 0x10) = 3;

loc_0035C057: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C07F; /* je: equal / zero */

loc_0035C05C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C07F; /* je: equal / zero */

loc_0035C060: ;
    edi = ebp;
    esi = 0x8C4654;

loc_0035C067: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0035C071u); RECOMP_ABI_CALL(0x0002C98Bu, sub_0002C98B); /* call 0x0002C98B */

loc_0035C071: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C465C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C465C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035C067; /* jl: less (signed <) */

loc_0035C07F: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0035C057; /* jne: not equal / not zero */

loc_0035C090: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035C160
 * Original: 0x0035C160 - 0x0035C198 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035C160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035C160: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x11C);
    PUSH32(esp, eax);
    ebx = edi + 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0035C175u); RECOMP_ABI_CALL(0x000187CEu, sub_000187CE); /* call 0x000187CE */

loc_0035C175: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi + 0x70;
    PUSH32(esp, 0x0035C181u); RECOMP_ABI_CALL(0x00019A20u, sub_00019A20); /* call 0x00019A20 */

loc_0035C181: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x150);
    eax = MEM32(0x8FCAD8);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x140) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035C1B0
 * Original: 0x0035C1B0 - 0x0035C285 (213 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035C1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035C1B0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C255; /* je: equal / zero */

loc_0035C1C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C255; /* je: equal / zero */

loc_0035C1CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C255; /* je: equal / zero */

loc_0035C1D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C255; /* je: equal / zero */

loc_0035C1DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035C22A; /* jne: not equal / not zero */

loc_0035C1DF: ;
    eax = esp;
    PUSH32(esp, 0x82D67C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035C1EDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035C1ED: ;
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035C1FFu); RECOMP_ABI_CALL(0x0001F155u, sub_0001F155); /* call 0x0001F155 */

loc_0035C1FF: ;
    eax = esp + 0x10;
    PUSH32(esp, 0x82D63C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035C20Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035C20E: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035C220u); RECOMP_ABI_CALL(0x0001F155u, sub_0001F155); /* call 0x0001F155 */

loc_0035C220: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035C22A: ;
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x80);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035C242u); RECOMP_ABI_CALL(0x00025B8Bu, sub_00025B8B); /* call 0x00025B8B */

loc_0035C242: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035C24Bu); RECOMP_ABI_CALL(0x0002B0E5u, sub_0002B0E5); /* call 0x0002B0E5 */

loc_0035C24B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035C255: ;
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82D630);
    PUSH32(esp, 0x80);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035C272u); RECOMP_ABI_CALL(0x00025B8Bu, sub_00025B8B); /* call 0x00025B8B */

loc_0035C272: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035C27Bu); RECOMP_ABI_CALL(0x00026B85u, sub_00026B85); /* call 0x00026B85 */

loc_0035C27B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035C2C0
 * Original: 0x0035C2C0 - 0x0035C34A (138 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035C2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035C2C0: ;
    _fa = (uint32_t)(MEM8(0x8FE144)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x8FE144), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0035C2F1; /* jne: not equal / not zero */

loc_0035C2C9: ;
    eax = MEM32(0x8FE144);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8FE144) = eax;
    MEMF(0x8FE134) = xmm0.f[0]; /* movss */
    MEMF(0x8FE138) = xmm0.f[0]; /* movss */
    MEMF(0x8FE13C) = xmm0.f[0]; /* movss */

loc_0035C2F1: ;
    ecx = MEM32(0x8FCBB0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(0xA74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C33E; /* je: equal / zero */

loc_0035C306: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035C30Cu); RECOMP_ABI_CALL(0x0001D1CFu, sub_0001D1CF); /* call 0x0001D1CF */

loc_0035C30C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C33A; /* je: equal / zero */

loc_0035C310: ;
    eax = MEM32(esi);
    MEM32(0x8FE134) = eax;
    ecx = MEM32(esi + 4);
    eax = MEM32(0x8FCA90);
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8FE138) = ecx;
    edx = MEM32(esi + 8);
    MEM32(0x8FCA90) = eax;
    MEM32(0x8FE13C) = edx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0035C33A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0035C33E: ;
    PUSH32(esp, 0x8FE134);
    PUSH32(esp, 0x0035C348u); RECOMP_ABI_CALL(0x0001D1CFu, sub_0001D1CF); /* call 0x0001D1CF */

loc_0035C348: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0035C370
 * Original: 0x0035C370 - 0x0035C390 (32 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035C370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035C370: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035C37F; /* jne: not equal / not zero */

loc_0035C378: ;
    MEM32(0x8FCA90) = MEM32(0x8FCA90) & 0xFFFFFFBFu;
    _fa = (uint32_t)(MEM32(0x8FCA90)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0035C37F: ;
    ecx = MEM32(0x8FCBB0);
    _fb = (uint32_t)(0xA74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002C850(); return; /* tail jmp 0x0002C850 */

}

/**
 * sub_0035C3A0
 * Original: 0x0035C3A0 - 0x0035C622 (642 bytes, 187 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035C3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035C3A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = ebp;
    PUSH32(esp, edi);
    edi = esi + 0x2C;
    ecx = esi + 0x44;
    MEM32(edi) = ebp;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 0xC) = ebp;
    MEM32(edi + 0x10) = ebp;
    MEM32(edi + 0x14) = ebp;
    PUSH32(esp, 0x0035C3C9u); RECOMP_ABI_CALL(0x0002F44Cu, sub_0002F44C); /* call 0x0002F44C */

loc_0035C3C9: ;
    ebx = esi + 0x91C;
    ecx = ebx;
    PUSH32(esp, 0x0035C3D6u); RECOMP_ABI_CALL(0x0001FFCEu, sub_0001FFCE); /* call 0x0001FFCE */

loc_0035C3D6: ;
    ecx = esi + 0xA74;
    MEM32(ebx + 0x14C) = ebp;
    MEM32(ebx + 0x150) = ebp;
    MEM32(ebx + 0x154) = ebp;
    PUSH32(esp, 0x0035C3F3u); RECOMP_ABI_CALL(0x0001D350u, sub_0001D350); /* call 0x0001D350 */

loc_0035C3F3: ;
    ecx = esi + 0xD60;
    PUSH32(esp, 0x0035C3FEu); RECOMP_ABI_CALL(0x000301E4u, sub_000301E4); /* call 0x000301E4 */

loc_0035C3FE: ;
    ebx = esi + 0x11F0;
    eax = esi + 0x1210;
    MEM32(ebx) = ebp;
    MEM32(ebx + 4) = ebp;
    MEM32(ebx + 8) = ebp;
    MEM32(ebx + 0xC) = ebp;
    MEM32(ebx + 0x10) = ebp;
    MEM32(ebx + 0x14) = ebp;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = 2;
    goto loc_0035C430;

    /* nop */

loc_0035C430: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x161FE);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035C449u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_0035C449: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = ebp;
    _fb = (uint32_t)(0xC54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0035C430; /* jne: not equal / not zero */

loc_0035C45E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x1C);
    MEM32(esi + 0x2AB0) = ebp;
    MEM32(esi + 0x2AB4) = ebp;
    MEM32(esi + 0x2AB8) = ebp;
    PUSH32(esp, 0x0035C478u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035C478: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0035C4A3; /* je: equal / zero */

loc_0035C483: ;
    edx = MEM32(0x8FCB8C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x82A0E4);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0035C497u); RECOMP_ABI_CALL(0x00018E81u, sub_00018E81); /* call 0x00018E81 */

loc_0035C497: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = 0x82A0D4;
    goto loc_0035C4A5;

loc_0035C4A3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035C4A5: ;
    ecx = esi + 0xD60;
    MEM32(esi + 0x2AB4) = eax;
    PUSH32(esp, 0x0035C4B6u); RECOMP_ABI_CALL(0x0002DA84u, sub_0002DA84); /* call 0x0002DA84 */

loc_0035C4B6: ;
    ecx = edi;
    PUSH32(esp, 0x0035C4BDu); RECOMP_ABI_CALL(0x0002136Fu, sub_0002136F); /* call 0x0002136F */

loc_0035C4BD: ;
    ecx = esi + 0x44;
    PUSH32(esp, 0x0035C4C5u); RECOMP_ABI_CALL(0x0002861Au, sub_0002861A); /* call 0x0002861A */

loc_0035C4C5: ;
    PUSH32(esp, esi);
    ecx = esi + 0x91C;
    PUSH32(esp, 0x0035C4D1u); RECOMP_ABI_CALL(0x0001639Du, sub_0001639D); /* call 0x0001639D */

loc_0035C4D1: ;
    ecx = esi + 0xA74;
    PUSH32(esp, 0x0035C4DCu); RECOMP_ABI_CALL(0x0002D6ABu, sub_0002D6AB); /* call 0x0002D6AB */

loc_0035C4DC: ;
    ecx = ebx;
    PUSH32(esp, 0x0035C4E3u); RECOMP_ABI_CALL(0x00027E86u, sub_00027E86); /* call 0x00027E86 */

loc_0035C4E3: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035C4F2u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0035C4F2: ;
    ecx = eax;
    PUSH32(esp, 0x0035C4F9u); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_0035C4F9: ;
    edx = MEM32(esp + 0x14);
    edi = esi + 0x2AB8;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035C510u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0035C510: ;
    ecx = eax;
    PUSH32(esp, 0x0035C517u); RECOMP_ABI_CALL(0x0055D26Du, sub_0055D26D); /* call 0x0055D26D */

loc_0035C517: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0035C526u); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_0035C526: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035C530u); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_0035C530: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, 0x0035C53Fu); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_0035C53F: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035C555u); RECOMP_ABI_CALL(0x00557D90u, sub_00557D90); /* call 0x00557D90 */

loc_0035C555: ;
    eax = MEM32(edi);
    ecx = MEM32(0x8FCB8C);
    ecx = MEM32(ecx + 0xB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82D778);
    PUSH32(esp, 0x0035C56Eu); RECOMP_ABI_CALL(0x0002D6C9u, sub_0002D6C9); /* call 0x0002D6C9 */

loc_0035C56E: ;
    PUSH32(esp, 0x0035C573u); RECOMP_ABI_CALL(0x0002E40Cu, sub_0002E40C); /* call 0x0002E40C */

loc_0035C573: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82D740);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0035C57Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035C57Cu); } /* indirect call */
    }

loc_0035C57F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C5BD; /* je: equal / zero */

loc_0035C583: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035C594u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035C592u); } /* indirect call */
    }

loc_0035C594: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C5B5; /* je: equal / zero */

loc_0035C59A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x82D740);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0035C5B0u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035C5B0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035C5B7;

loc_0035C5B5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035C5B7: ;
    MEM32(esi + 0x2AB0) = edi;

loc_0035C5BD: ;
    ecx = MEM32(0x8FCB8C);
    ecx = MEM32(ecx + 0xB4);
    PUSH32(esp, 0x82D6FC);
    PUSH32(esp, 0x0035C5D3u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_0035C5D3: ;
    edx = MEM32(eax + 0x38);
    ecx = MEM32(edx + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0035C5DFu); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_0035C5DF: ;
    PUSH32(esp, eax);
    ecx = esi + 0x1208;
    PUSH32(esp, 0x0035C5EBu); RECOMP_ABI_CALL(0x000372C3u, sub_000372C3); /* call 0x000372C3 */

loc_0035C5EB: ;
    eax = MEM32(0x8FCB8C);
    ecx = MEM32(eax + 0xB4);
    PUSH32(esp, 0x82D6B8);
    PUSH32(esp, 0x0035C600u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_0035C600: ;
    ecx = MEM32(eax + 0x38);
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0035C60Cu); RECOMP_ABI_CALL(0x000303CEu, sub_000303CE); /* call 0x000303CE */

loc_0035C60C: ;
    PUSH32(esp, eax);
    ecx = esi + 0x1E5C;
    PUSH32(esp, 0x0035C618u); RECOMP_ABI_CALL(0x000372C3u, sub_000372C3); /* call 0x000372C3 */

loc_0035C618: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035C6D0
 * Original: 0x0035C6D0 - 0x0035C78F (191 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035C6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035C6D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x2AB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0035C6F1; /* je: equal / zero */

loc_0035C6E1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0035C6E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035C6E5u); } /* indirect call */
    }

loc_0035C6E7: ;
    MEM32(esi + 0x2AB4) = 0;

loc_0035C6F1: ;
    edi = MEM32(esi + 0x2AB0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C712; /* je: equal / zero */

loc_0035C6FB: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035C703u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0035C703: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0035C712u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035C70Fu); } /* indirect call */
    }

loc_0035C712: ;
    eax = MEM32(esi + 0x2AB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C72E; /* je: equal / zero */

loc_0035C71C: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035C727u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0035C727: ;
    ecx = eax;
    PUSH32(esp, 0x0035C72Eu); RECOMP_ABI_CALL(0x0055D588u, sub_0055D588); /* call 0x0055D588 */

loc_0035C72E: ;
    ecx = esi + 0x11F0;
    PUSH32(esp, 0x0035C739u); RECOMP_ABI_CALL(0x0001C040u, sub_0001C040); /* call 0x0001C040 */

loc_0035C739: ;
    ecx = esi + 0xD60;
    PUSH32(esp, 0x0035C744u); RECOMP_ABI_CALL(0x00015713u, sub_00015713); /* call 0x00015713 */

loc_0035C744: ;
    ecx = esi + 0xA74;
    PUSH32(esp, 0x0035C74Fu); RECOMP_ABI_CALL(0x00034D57u, sub_00034D57); /* call 0x00034D57 */

loc_0035C74F: ;
    ebp = esi + 0x91C;
    edi = ebp + 0x14C;
    ebx = 3;

loc_0035C760: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C76C; /* je: equal / zero */

loc_0035C766: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035C76Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035C76Au); } /* indirect call */
    }

loc_0035C76C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0035C760; /* jne: not equal / not zero */

loc_0035C772: ;
    ecx = ebp;
    PUSH32(esp, 0x0035C779u); RECOMP_ABI_CALL(0x00025D93u, sub_00025D93); /* call 0x00025D93 */

loc_0035C779: ;
    ecx = esi + 0x44;
    PUSH32(esp, 0x0035C781u); RECOMP_ABI_CALL(0x0001905Cu, sub_0001905C); /* call 0x0001905C */

loc_0035C781: ;
    ecx = esi + 0x2C;
    PUSH32(esp, 0x0035C789u); RECOMP_ABI_CALL(0x00029D76u, sub_00029D76); /* call 0x00029D76 */

loc_0035C789: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035C7C0
 * Original: 0x0035C7C0 - 0x0035C80B (75 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035C7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035C7C0: ;
    _fa = (uint32_t)(MEM8(0x8FCA90)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x8FCA90), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0035C7EE; /* je: equal / zero */

loc_0035C7C9: ;
    eax = MEM32(ecx + 0xD00);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    MEM32(ecx + 0xD00) = eax;
    eax = MEM32(ecx + 0xCD0);
    eax = MEM32(eax + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035C7EE; /* jle: less or equal (signed <=) */

loc_0035C7E8: ;
    MEM32(ecx + 0xD00) = eax;

loc_0035C7EE: ;
    edx = MEM32(ecx + 0xC84);
    eax = MEM32(edx);
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    _fb = (uint32_t)(0xB94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C80A; /* je: equal / zero */

loc_0035C805: ;
    g_seh_ebp = ebp; sub_0001A709(); return; /* tail jmp 0x0001A709 */

loc_0035C80A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035C820
 * Original: 0x0035C820 - 0x0035C84D (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035C820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035C820: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82BC74;
    PUSH32(esp, 0x0035C82Eu); RECOMP_ABI_CALL(0x0001E561u, sub_0001E561); /* call 0x0001E561 */

loc_0035C82E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x829E64;
    if (TEST_Z(_fa, _fb)) goto loc_0035C847; /* je: equal / zero */

loc_0035C83B: ;
    ecx = MEM32(0x909334);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0035C847u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035C844u); } /* indirect call */
    }

loc_0035C847: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035C860
 * Original: 0x0035C860 - 0x0035C9A0 (320 bytes, 82 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035C860(void)
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

loc_0035C860: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x8FCA98);
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 1;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((_fa == 0)) goto loc_0035C8B3; /* je: equal / zero */

loc_0035C887: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0035C89C; /* jge: greater or equal (signed >=) */

loc_0035C896: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0035C89C: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7C3A80)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0035C8B3; /* jbe: below or equal (unsigned <=) */

loc_0035C8AE: ;
    MEMF(esp) = xmm2.f[0]; /* movss */

loc_0035C8B3: ;
    ecx = MEM32(0x8FCA94);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0035C91F; /* je: equal / zero */

loc_0035C8BE: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0035C8D3; /* jge: greater or equal (signed >=) */

loc_0035C8CD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0035C8D3: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = xmm2; /* movaps */
    fp_push(MEMF(0x7C3A80)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0035C8F0; /* ja: above (unsigned >) */

loc_0035C8EA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_0035C8F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035C91A; /* je: equal / zero */

loc_0035C8F4: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    goto loc_0035C91F;

loc_0035C91A: ;
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_0035C91F: ;
    eax = MEM32(0x8FCBB0);
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    PUSH32(esp, esi);
    esi = eax + 0xC88;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0035C980; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0035C935: ;
    _fa = (uint32_t)(MEM8(0x8FE144)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x8FE144), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0035C95B; /* jne: not equal / not zero */

loc_0035C93D: ;
    MEM32(0x8FE144) = MEM32(0x8FE144) | edx;
    _fa = (uint32_t)(MEM32(0x8FE144)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(0x8FE134) = xmm2.f[0]; /* movss */
    MEMF(0x8FE138) = xmm2.f[0]; /* movss */
    MEMF(0x8FE13C) = xmm2.f[0]; /* movss */

loc_0035C95B: ;
    PUSH32(esp, 0x8FE134);
    ecx = eax + 0xA74;
    PUSH32(esp, 0x0035C96Bu); RECOMP_ABI_CALL(0x0001D1CFu, sub_0001D1CF); /* call 0x0001D1CF */

loc_0035C96B: ;
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0035C979u); RECOMP_ABI_CALL(0x0002E245u, sub_0002E245); /* call 0x0002E245 */

loc_0035C979: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0035C980: ;
    ecx = eax + 0xA74;
    PUSH32(esp, 0x0035C98Bu); RECOMP_ABI_CALL(0x0002C850u, sub_0002C850); /* call 0x0002C850 */

loc_0035C98B: ;
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0035C999u); RECOMP_ABI_CALL(0x0002E245u, sub_0002E245); /* call 0x0002E245 */

loc_0035C999: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0035C9F0
 * Original: 0x0035C9F0 - 0x0035CA2C (60 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035C9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035C9F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xE4;
    MEM32(esi) = 0x82C514;
    PUSH32(esp, 0x0035CA04u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0035CA04: ;
    ecx = esi + 0x50;
    PUSH32(esp, 0x0035CA0Cu); RECOMP_ABI_CALL(0x0001A795u, sub_0001A795); /* call 0x0001A795 */

loc_0035CA0C: ;
    ecx = esi;
    PUSH32(esp, 0x0035CA13u); RECOMP_ABI_CALL(0x00029EE3u, sub_00029EE3); /* call 0x00029EE3 */

loc_0035CA13: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0035CA26; /* je: equal / zero */

loc_0035CA1A: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0035CA26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035CA23u); } /* indirect call */
    }

loc_0035CA26: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035CA40
 * Original: 0x0035CA40 - 0x0035CB2E (238 bytes, 107 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035CA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035CA40: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFFEu)) >> 32) & 1);
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0035CA92; /* ja: above (unsigned >) */

loc_0035CA4E: ;
    edx = ZX8(MEM8(edx + 0x35CAC0));
    { uint32_t _jt = MEM32(edx * 4 + 0x35CAA0); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0035CA5Cu) goto loc_0035CA5C;
    if (_jt == 0x0035CA65u) goto loc_0035CA65;
    if (_jt == 0x0035CA6Eu) goto loc_0035CA6E;
    if (_jt == 0x0035CA77u) goto loc_0035CA77;
    if (_jt == 0x0035CA80u) goto loc_0035CA80;
    if (_jt == 0x0035CA89u) goto loc_0035CA89;
    if (_jt == 0x0035CA92u) goto loc_0035CA92;
    if (_jt == 0x0035CA9Bu) goto loc_0035CA9B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0035CA5C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001249B(); return; /* tail jmp 0x0001249B */

loc_0035CA65: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000205E1(); return; /* tail jmp 0x000205E1 */

loc_0035CA6E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001A844(); return; /* tail jmp 0x0001A844 */

loc_0035CA77: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000344B0(); return; /* tail jmp 0x000344B0 */

loc_0035CA80: ;
    MEM32(esp + 4) = eax;

loc_0035CA84: ;
    g_seh_ebp = ebp; sub_0001A91B(); return; /* tail jmp 0x0001A91B */

loc_0035CA89: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00022C79(); return; /* tail jmp 0x00022C79 */

loc_0035CA92: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00016294(); return; /* tail jmp 0x00016294 */

loc_0035CA9B: ;
    esp += 8; return; /* ret 4 */

    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x35CA9200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edi)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(edi) = MEM32(edi) + eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(ebx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(7) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(7)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(-859044345)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(-859044345) = MEM32(-859044345) + eax;
    _fa = (uint32_t)(MEM32(-859044345)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0035CB0Du); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_0035CB0D: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x24);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82D78C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035CB27u); RECOMP_ABI_CALL(0x0002C175u, sub_0002C175); /* call 0x0002C175 */

loc_0035CB27: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035CB00
 * Original: 0x0035CB00 - 0x0035CB2E (46 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035CB00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035CB00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0035CB0Du); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_0035CB0D: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x24);
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82D78C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035CB27u); RECOMP_ABI_CALL(0x0002C175u, sub_0002C175); /* call 0x0002C175 */

loc_0035CB27: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035CB40
 * Original: 0x0035CB40 - 0x0035CB97 (87 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035CB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035CB40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0035CB8A; /* ja: above (unsigned >) */

loc_0035CB52: ;
    eax = ZX8(MEM8(eax + 0x35CBAC));
    { uint32_t _jt = MEM32(eax * 4 + 0x35CB98); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0035CB60u) goto loc_0035CB60;
    if (_jt == 0x0035CB75u) goto loc_0035CB75;
    if (_jt == 0x0035CB7Du) goto loc_0035CB7D;
    if (_jt == 0x0035CB8Au) goto loc_0035CB8A;
    if (_jt == 0x0035CB92u) goto loc_0035CB92;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0035CB60: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0035CB68u); RECOMP_ABI_CALL(0x000340D2u, sub_000340D2); /* call 0x000340D2 */

loc_0035CB68: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0035CB70u); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_0035CB70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0035CB75: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0035CB7Du); RECOMP_ABI_CALL(0x00021171u, sub_00021171); /* call 0x00021171 */

loc_0035CB7D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0035CB85u); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_0035CB85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0035CB8A: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0035CB92u); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_0035CB92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035CBE0
 * Original: 0x0035CBE0 - 0x0035CC52 (114 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035CBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035CBE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0035CBEEu); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_0035CBEE: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035CC4D; /* jne: not equal / not zero */

loc_0035CBF5: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035CC4D; /* jne: not equal / not zero */

loc_0035CBFC: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035CC4D; /* jne: not equal / not zero */

loc_0035CC03: ;
    MEM8(esi + 0x4C) = 1;
    eax = MEM32(0x8FCB68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035CC32; /* jne: not equal / not zero */

loc_0035CC10: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xE0);
    PUSH32(esp, 0x0035CC1Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035CC1B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035CC2B; /* je: equal / zero */

loc_0035CC22: ;
    ecx = eax;
    PUSH32(esp, 0x0035CC29u); RECOMP_ABI_CALL(0x0002F249u, sub_0002F249); /* call 0x0002F249 */

loc_0035CC29: ;
    goto loc_0035CC2D;

loc_0035CC2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035CC2D: ;
    MEM32(0x8FCB68) = eax;

loc_0035CC32: ;
    MEM32(esi + 0x48) = eax;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035CC41u); RECOMP_ABI_CALL(0x0002FBF4u, sub_0002FBF4); /* call 0x0002FBF4 */

loc_0035CC41: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x0035CC4Du); RECOMP_ABI_CALL(0x0002B261u, sub_0002B261); /* call 0x0002B261 */

loc_0035CC4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035CC70
 * Original: 0x0035CC70 - 0x0035CCC7 (87 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035CC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035CC70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0035CCBA; /* ja: above (unsigned >) */

loc_0035CC82: ;
    eax = ZX8(MEM8(eax + 0x35CCDC));
    { uint32_t _jt = MEM32(eax * 4 + 0x35CCC8); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0035CC90u) goto loc_0035CC90;
    if (_jt == 0x0035CCA5u) goto loc_0035CCA5;
    if (_jt == 0x0035CCADu) goto loc_0035CCAD;
    if (_jt == 0x0035CCBAu) goto loc_0035CCBA;
    if (_jt == 0x0035CCC2u) goto loc_0035CCC2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0035CC90: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0035CC98u); RECOMP_ABI_CALL(0x00026AF4u, sub_00026AF4); /* call 0x00026AF4 */

loc_0035CC98: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0035CCA0u); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_0035CCA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0035CCA5: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0035CCADu); RECOMP_ABI_CALL(0x00021171u, sub_00021171); /* call 0x00021171 */

loc_0035CCAD: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0035CCB5u); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_0035CCB5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0035CCBA: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0035CCC2u); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_0035CCC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035CD10
 * Original: 0x0035CD10 - 0x0035CD95 (133 bytes, 47 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035CD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035CD10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x280);
    PUSH32(esp, 0x0035CD21u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035CD21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035CD3A; /* je: equal / zero */

loc_0035CD28: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82D7A8);
    ecx = eax;
    PUSH32(esp, 0x0035CD36u); RECOMP_ABI_CALL(0x0001F5DDu, sub_0001F5DD); /* call 0x0001F5DD */

loc_0035CD36: ;
    esi = eax;
    goto loc_0035CD3C;

loc_0035CD3A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035CD3C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0035CD42u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_0035CD42: ;
    edi = MEM32(eax + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0035CD4Fu); RECOMP_ABI_CALL(0x0002A915u, sub_0002A915); /* call 0x0002A915 */

loc_0035CD4F: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0035CD59u); RECOMP_ABI_CALL(0x0002A915u, sub_0002A915); /* call 0x0002A915 */

loc_0035CD59: ;
    PUSH32(esp, 0x0035CD5Eu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0035CD5E: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035CD68u); RECOMP_ABI_CALL(0x0055DC98u, sub_0055DC98); /* call 0x0055DC98 */

loc_0035CD68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0035CD80; /* je: equal / zero */

loc_0035CD70: ;
    ecx = esi;
    PUSH32(esp, 0x0035CD77u); RECOMP_ABI_CALL(0x0003037Eu, sub_0003037E); /* call 0x0003037E */

loc_0035CD77: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035CD7Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0035CD7D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035CD80: ;
    PUSH32(esp, 0x0035CD85u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0035CD85: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035CD8Fu); RECOMP_ABI_CALL(0x0055DC98u, sub_0055DC98); /* call 0x0055DC98 */

loc_0035CD8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035CDC0
 * Original: 0x0035CDC0 - 0x0035CDC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035CDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035CDC0: ;
    g_seh_ebp = ebp; sub_00027413(); return; /* tail jmp 0x00027413 */

}

/**
 * sub_0035CDD0
 * Original: 0x0035CDD0 - 0x0035CE77 (167 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035CDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035CDD0: ;
    SET_LO8(eax, MEM8(0x8C4679));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0035CE75; /* je: equal / zero */

loc_0035CDE0: ;
    eax = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0035CDEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035CDEAu); } /* indirect call */
    }

loc_0035CDED: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0035CE2A; /* ja: above (unsigned >) */

loc_0035CDF9: ;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0x18) = ecx;
    ecx = MEM32(esi + 0x1C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035CE2A; /* jge: greater or equal (signed >=) */

loc_0035CE07: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0035CE10u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_0035CE10: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0035CE1Fu); RECOMP_ABI_CALL(0x0002E33Au, sub_0002E33A); /* call 0x0002E33A */

loc_0035CE1F: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0035CE2Au); RECOMP_ABI_CALL(0x000346B8u, sub_000346B8); /* call 0x000346B8 */

loc_0035CE2A: ;
    edx = MEM32(esi + 0x50);
    eax = MEM32(esi + edx * 4 + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035CE75; /* je: equal / zero */

loc_0035CE35: ;
    eax = MEM32(0x8BFE70);
    PUSH32(esp, edi);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0035CE43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035CE40u); } /* indirect call */
    }

loc_0035CE43: ;
    ecx = MEM32(esi + 0x54);
    edi = eax;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0035CE74; /* jbe: below or equal (unsigned <=) */

loc_0035CE4F: ;
    PUSH32(esp, 0x0035CE54u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_0035CE54: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(esi + 0x50);
    ecx = MEM32(esi + eax * 4 + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035CE66u); RECOMP_ABI_CALL(0x0002A915u, sub_0002A915); /* call 0x0002A915 */

loc_0035CE66: ;
    eax = MEM32(esi + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x4C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x4C))); }
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x50) = edx;

loc_0035CE74: ;
    POP32(esp, edi);

loc_0035CE75: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0035CEA0
 * Original: 0x0035CEA0 - 0x0035CEE7 (71 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035CEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035CEA0: ;
    SET_LO8(eax, MEM8(0x8C4679));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0035CEE5; /* je: equal / zero */

loc_0035CEAC: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0x18) = ecx;
    ecx = MEM32(esi + 0x1C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035CEE5; /* jge: greater or equal (signed >=) */

loc_0035CEC2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0035CECBu); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_0035CECB: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0035CEDAu); RECOMP_ABI_CALL(0x0002E33Au, sub_0002E33A); /* call 0x0002E33A */

loc_0035CEDA: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0035CEE5u); RECOMP_ABI_CALL(0x000346B8u, sub_000346B8); /* call 0x000346B8 */

loc_0035CEE5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0035CF00
 * Original: 0x0035CF00 - 0x0035CF0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035CF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035CF00: ;
    ecx = MEM32(0x8FCBD8);
    g_seh_ebp = ebp; sub_00027247(); return; /* tail jmp 0x00027247 */

}

/**
 * sub_0035CF10
 * Original: 0x0035CF10 - 0x0035CF35 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035CF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035CF10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0035CF18u); RECOMP_ABI_CALL(0x00030D38u, sub_00030D38); /* call 0x00030D38 */

loc_0035CF18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0035CF2F; /* je: equal / zero */

loc_0035CF1F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035CF2F; /* je: equal / zero */

loc_0035CF23: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0035CF2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035CF2Cu); } /* indirect call */
    }

loc_0035CF2F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035CF40
 * Original: 0x0035CF40 - 0x0035D10E (462 bytes, 150 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035CF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035CF40: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0035CF55; /* je: equal / zero */

loc_0035CF4F: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035CF61; /* jne: not equal / not zero */

loc_0035CF55: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035CF69; /* je: equal / zero */

loc_0035CF5B: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035CF69; /* je: equal / zero */

loc_0035CF61: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035CFAE; /* jne: not equal / not zero */

loc_0035CF69: ;
    SET_LO8(eax, MEM8(esi + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D0F0; /* je: equal / zero */

loc_0035CF74: ;
    ecx = MEM32(esi + 0x6BC);
    eax = esp + 0x20;
    MEM8(esi + 0x5C) = 0;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x588) = edi;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x58C) = edi;
    MEM32(esp + 0x20) = edi;
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035CFA0u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035CFA0: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x0035CFA8u); RECOMP_ABI_CALL(0x00016325u, sub_00016325); /* call 0x00016325 */

loc_0035CFA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

loc_0035CFAE: ;
    SET_LO8(eax, MEM8(esi + 0x5C));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x28) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0035D043; /* je: equal / zero */

loc_0035CFC0: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D103; /* jne: not equal / not zero */

loc_0035CFCB: ;
    edx = MEM32(esi + 0x588);
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D103; /* jne: not equal / not zero */

loc_0035CFDB: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x5D)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x5D) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D101; /* jne: not equal / not zero */

loc_0035CFE8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035D00F; /* jle: less or equal (signed <=) */

loc_0035CFEE: ;
    ecx = esi + 0x68;

loc_0035CFF1: ;
    edi = MEM32(esp + 0x14);
    edi = MEM32(edi + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D009; /* jne: not equal / not zero */

loc_0035CFFC: ;
    edi = MEM32(esi + 0x60);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035CFF1; /* jl: less (signed <) */

loc_0035D007: ;
    goto loc_0035D00F;

loc_0035D009: ;
    SET_LO8(ebx, 1);
    MEM8(esp + 0x28) = LO8(ebx);

loc_0035D00F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035D039; /* jle: less or equal (signed <=) */

loc_0035D015: ;
    edx = MEM32(esp + 0x1C);
    ecx = esi + 0x590;
    /* nop */

loc_0035D020: ;
    edi = MEM32(edx + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D0F6; /* jne: not equal / not zero */

loc_0035D02B: ;
    edi = MEM32(esi + 0x588);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035D020; /* jl: less (signed <) */

loc_0035D039: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D0EF; /* je: equal / zero */

loc_0035D041: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035D043: ;
    SET_LO8(eax, MEM8(esi + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D082; /* je: equal / zero */

loc_0035D04A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM8(esi + 0x5C) = 0;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x588) = edi;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x58C) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0035D082; /* jne: not equal / not zero */

loc_0035D064: ;
    edx = MEM32(esi + 0x6BC);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    PUSH32(esp, 0x0035D07Au); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035D07A: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x0035D082u); RECOMP_ABI_CALL(0x00016325u, sub_00016325); /* call 0x00016325 */

loc_0035D082: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    ecx = MEM32(esp + 0x20);
    MEM8(esi + 0x5D) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    MEM32(esi + 0x60) = ebp;
    MEM32(esi + 0x588) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0035D0B3; /* jle: less or equal (signed <=) */

loc_0035D09C: ;
    edx = MEM32(esp + 0x14);
    ecx = esi + 0x68;

loc_0035D0A3: ;
    ebx = MEM32(edx + eax * 4);
    MEM32(ecx) = ebx;
    ebx = MEM32(esi + 0x60);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035D0A3; /* jl: less (signed <) */

loc_0035D0B3: ;
    ecx = MEM32(esi + 0x588);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035D0E3; /* jle: less or equal (signed <=) */

loc_0035D0BF: ;
    edx = MEM32(esp + 0x1C);
    ecx = esi + 0x590;
    /* nop */

loc_0035D0D0: ;
    edi = MEM32(edx + eax * 4);
    MEM32(ecx) = edi;
    edi = MEM32(esi + 0x588);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035D0D0; /* jl: less (signed <) */

loc_0035D0E3: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0035D0EFu); RECOMP_ABI_CALL(0x0002CC1Fu, sub_0002CC1F); /* call 0x0002CC1F */

loc_0035D0EF: ;
    POP32(esp, ebx);

loc_0035D0F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

loc_0035D0F6: ;
    SET_LO8(ebx, 1);
    MEM8(esp + 0x28) = LO8(ebx);
    goto loc_0035D041;

loc_0035D101: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035D103: ;
    SET_LO8(ebx, 1);
    MEM8(esp + 0x28) = LO8(ebx);
    goto loc_0035D043;

}

/**
 * sub_0035D190
 * Original: 0x0035D190 - 0x0035D25A (202 bytes, 95 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035D190: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    MEM32(esp + 0xC) = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0035D20A; /* jl: less (signed <) */

loc_0035D1A6: ;
    eax = ebx + ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_0035D1CD; /* js: sign (negative) */

loc_0035D1B6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D21B; /* je: equal / zero */

loc_0035D1BA: ;
    /* nop */

loc_0035D1C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035D1DF; /* jle: less or equal (signed <=) */

loc_0035D1C4: ;
    esi = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D1C0; /* jne: not equal / not zero */

loc_0035D1CB: ;
    goto loc_0035D1DF;

loc_0035D1CD: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D21B; /* je: equal / zero */

loc_0035D1D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035D1DF; /* jle: less or equal (signed <=) */

loc_0035D1D7: ;
    esi = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D1D3; /* jne: not equal / not zero */

loc_0035D1DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D21B; /* je: equal / zero */

loc_0035D1E3: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x0035D1F0u); RECOMP_ABI_CALL(0x0001EE12u, sub_0001EE12); /* call 0x0001EE12 */

loc_0035D1F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0035D249; /* je: equal / zero */

loc_0035D1FA: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0035D201; /* jge: greater or equal (signed >=) */

loc_0035D1FC: ;
    ebp = edi + 1;
    goto loc_0035D204;

loc_0035D201: ;
    ebx = edi + -1;

loc_0035D204: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    ecx = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0035D1A6; /* jle: less or equal (signed <=) */

loc_0035D20A: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ecx) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0035D21B: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    MEM8(edx) = 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035D23A; /* jge: greater or equal (signed >=) */

loc_0035D22B: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0035D23A: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0035D249: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM8(eax) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035D290
 * Original: 0x0035D290 - 0x0035D2E5 (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035D290: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035D2A7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035D2A7: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x10F4A963);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035D2C7u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_0035D2C7: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035D2D8u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035D2D8: ;
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D2E1u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_0035D2E1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035D300
 * Original: 0x0035D300 - 0x0035D31E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035D300: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0035D308u); RECOMP_ABI_CALL(0x00015713u, sub_00015713); /* call 0x00015713 */

loc_0035D308: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0035D318; /* je: equal / zero */

loc_0035D30F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035D315u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0035D315: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035D318: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035D330
 * Original: 0x0035D330 - 0x0035D35A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035D330: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x829F6C;
    PUSH32(esp, 0x0035D33Eu); RECOMP_ABI_CALL(0x0002460Fu, sub_0002460F); /* call 0x0002460F */

loc_0035D33E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x829F54;
    if (TEST_Z(_fa, _fb)) goto loc_0035D354; /* je: equal / zero */

loc_0035D34B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035D351u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0035D351: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035D354: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035D370
 * Original: 0x0035D370 - 0x0035D39E (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035D370: ;
    eax = MEM32(0x8FC604);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0035D392; /* je: equal / zero */

loc_0035D37D: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D392; /* je: equal / zero */

loc_0035D386: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D392; /* je: equal / zero */

loc_0035D38B: ;
    ecx = esi;
    PUSH32(esp, 0x0035D392u); RECOMP_ABI_CALL(0x000117C6u, sub_000117C6); /* call 0x000117C6 */

loc_0035D392: ;
    ecx = esi + 0x120;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0003241C(); return; /* tail jmp 0x0003241C */

}

/**
 * sub_0035D3B0
 * Original: 0x0035D3B0 - 0x0035D843 (1171 bytes, 350 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035D3B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFDu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0035D3E0; /* ja: above (unsigned >) */

loc_0035D3BE: ;
    edx = ZX8(MEM8(edx + 0x35D3FC));
    { uint32_t _jt = MEM32(edx * 4 + 0x35D3EC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0035D3CCu) goto loc_0035D3CC;
    if (_jt == 0x0035D3D5u) goto loc_0035D3D5;
    if (_jt == 0x0035D3E0u) goto loc_0035D3E0;
    if (_jt == 0x0035D3E9u) goto loc_0035D3E9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0035D3CC: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001868E(); return; /* tail jmp 0x0001868E */

loc_0035D3D5: ;
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_00021171(); return; /* tail jmp 0x00021171 */

loc_0035D3E0: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00016294(); return; /* tail jmp 0x00016294 */

loc_0035D3E9: ;
    esp += 8; return; /* ret 4 */

    { uint32_t _sv=(uint32_t)(MEM32(0x35D3D500)), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        MEM32(0x35D3D500) = _sv << _sc;
        _fa = (uint32_t)(MEM32(0x35D3D500)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + HI8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(MEM32(0x3030000)), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        MEM32(0x3030000) = _sv << _sc;
        _fa = (uint32_t)(MEM32(0x3030000)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D5AC; /* jne: not equal / not zero */

loc_0035D433: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x124);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x120);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x120);
    PUSH32(esp, 0x80);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0035D45Eu); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D45E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D464u); RECOMP_ABI_CALL(0x0002C427u, sub_0002C427); /* call 0x0002C427 */

loc_0035D464: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D47A; /* je: equal / zero */

loc_0035D46B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035D476; /* jge: greater or equal (signed >=) */

loc_0035D470: ;
    MEM8(eax + 0xA) = 0;
    goto loc_0035D47A;

loc_0035D476: ;
    MEM8(eax + 9) = 0;

loc_0035D47A: ;
    PUSH32(esp, 0x80);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0035D48Du); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D48D: ;
    eax = MEM32(esp + 0x140);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0035D4A9; /* jge: greater or equal (signed >=) */

loc_0035D49F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB);
    MEM32(esp + 0x120) = eax;

loc_0035D4A9: ;
    PUSH32(esp, 0x82D848);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D4C0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035D4C0: ;
    ecx = MEM32(esp + 0x12C);
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0xA0;
    PUSH32(esp, 0x82D840);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035D4EBu); RECOMP_ABI_CALL(0x00026B85u, sub_00026B85); /* call 0x00026B85 */

loc_0035D4EB: ;
    PUSH32(esp, 0x82D828);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035D502u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035D502: ;
    eax = MEM32(esp + 0x144);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edx);
    edx = esp + 0xB8;
    PUSH32(esp, 0x82D840);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035D524u); RECOMP_ABI_CALL(0x00026B85u, sub_00026B85); /* call 0x00026B85 */

loc_0035D524: ;
    PUSH32(esp, 0x82D80C);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035D53Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035D53B: ;
    ecx = MEM32(esp + 0x15C);
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
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
    PUSH32(esp, eax);
    ecx = esp + 0xD0;
    PUSH32(esp, 0x82D804);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035D566u); RECOMP_ABI_CALL(0x00026B85u, sub_00026B85); /* call 0x00026B85 */

loc_0035D566: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x82D7E8);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D580u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035D580: ;
    eax = MEM32(esp + 0x12C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edx);
    edx = esp + 0xA0;
    PUSH32(esp, 0x82D804);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035D5A2u); RECOMP_ABI_CALL(0x00026B85u, sub_00026B85); /* call 0x00026B85 */

loc_0035D5A2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035D5AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D5DE; /* jne: not equal / not zero */

loc_0035D5B0: ;
    eax = MEM32(esp + 0x120);
    edx = MEM32(esp + 0x118);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x118);
    PUSH32(esp, 0x82D7DC);
    PUSH32(esp, 0x80);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    goto loc_0035D7E6;

loc_0035D5DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D611; /* jne: not equal / not zero */

loc_0035D5E3: ;
    ecx = MEM32(esp + 0x120);
    eax = MEM32(esp + 0x118);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, 0x82D7D0);
    PUSH32(esp, 0x80);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    goto loc_0035D7E6;

loc_0035D611: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D644; /* jne: not equal / not zero */

loc_0035D616: ;
    edx = MEM32(esp + 0x120);
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x118);
    PUSH32(esp, 0x82D7C8);
    PUSH32(esp, 0x80);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    goto loc_0035D7E6;

loc_0035D644: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D695; /* jne: not equal / not zero */

loc_0035D649: ;
    eax = esp;
    PUSH32(esp, 0x82D7B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D657u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035D657: ;
    eax = MEM32(esp + 0x120);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x11C);
    PUSH32(esp, 0x80);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0035D682u); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D682: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D68Bu); RECOMP_ABI_CALL(0x0001F786u, sub_0001F786); /* call 0x0001F786 */

loc_0035D68B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035D695: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D6F5; /* jne: not equal / not zero */

loc_0035D69A: ;
    edx = MEM32(esp + 0x120);
    ecx = MEM32(esp + 0x118);
    MEM32(esp) = 0x829E24;
    MEM32(esp + 4) = 0x829E2C;
    MEM32(esp + 8) = 0x829E34;
    eax = MEM32(esp + edx * 4);
    edx = MEM32(esp + 0x114);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, 0x80);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0035D6E2u); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D6E2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D6EBu); RECOMP_ABI_CALL(0x000345DCu, sub_000345DC); /* call 0x000345DC */

loc_0035D6EB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035D6F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D736; /* jne: not equal / not zero */

loc_0035D6FA: ;
    eax = MEM32(esp + 0x120);
    edx = MEM32(esp + 0x118);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x118);
    PUSH32(esp, 0x80);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0035D723u); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D723: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D72Cu); RECOMP_ABI_CALL(0x0002B879u, sub_0002B879); /* call 0x0002B879 */

loc_0035D72C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035D736: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D777; /* jne: not equal / not zero */

loc_0035D73B: ;
    ecx = MEM32(esp + 0x120);
    eax = MEM32(esp + 0x118);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, 0x80);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0035D764u); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D764: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D76Du); RECOMP_ABI_CALL(0x0001155Au, sub_0001155A); /* call 0x0001155A */

loc_0035D76D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035D777: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D7B8; /* jne: not equal / not zero */

loc_0035D77C: ;
    edx = MEM32(esp + 0x120);
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x118);
    PUSH32(esp, 0x80);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x0035D7A5u); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D7A5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D7AEu); RECOMP_ABI_CALL(0x00025550u, sub_00025550); /* call 0x00025550 */

loc_0035D7AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035D7B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D7FE; /* jne: not equal / not zero */

loc_0035D7BD: ;
    eax = MEM32(esp + 0x120);
    edx = MEM32(esp + 0x118);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x118);
    PUSH32(esp, 0x82D630);
    PUSH32(esp, 0x80);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);

loc_0035D7E6: ;
    PUSH32(esp, 0x0035D7EBu); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D7EB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D7F4u); RECOMP_ABI_CALL(0x00026B85u, sub_00026B85); /* call 0x00026B85 */

loc_0035D7F4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035D7FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D83C; /* je: equal / zero */

loc_0035D803: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D83C; /* je: equal / zero */

loc_0035D808: ;
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x11C);
    PUSH32(esp, 0x80);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x120);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D830u); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D830: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D839u); RECOMP_ABI_CALL(0x0002B0E5u, sub_0002B0E5); /* call 0x0002B0E5 */

loc_0035D839: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035D83C: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035D420
 * Original: 0x0035D420 - 0x0035D843 (1059 bytes, 302 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035D420: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D5AC; /* jne: not equal / not zero */

loc_0035D433: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x124);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x120);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x120);
    PUSH32(esp, 0x80);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0035D45Eu); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D45E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D464u); RECOMP_ABI_CALL(0x0002C427u, sub_0002C427); /* call 0x0002C427 */

loc_0035D464: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D47A; /* je: equal / zero */

loc_0035D46B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035D476; /* jge: greater or equal (signed >=) */

loc_0035D470: ;
    MEM8(eax + 0xA) = 0;
    goto loc_0035D47A;

loc_0035D476: ;
    MEM8(eax + 9) = 0;

loc_0035D47A: ;
    PUSH32(esp, 0x80);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0035D48Du); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D48D: ;
    eax = MEM32(esp + 0x140);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_0035D4A9; /* jge: greater or equal (signed >=) */

loc_0035D49F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB);
    MEM32(esp + 0x120) = eax;

loc_0035D4A9: ;
    PUSH32(esp, 0x82D848);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D4C0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035D4C0: ;
    ecx = MEM32(esp + 0x12C);
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0xA0;
    PUSH32(esp, 0x82D840);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035D4EBu); RECOMP_ABI_CALL(0x00026B85u, sub_00026B85); /* call 0x00026B85 */

loc_0035D4EB: ;
    PUSH32(esp, 0x82D828);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035D502u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035D502: ;
    eax = MEM32(esp + 0x144);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edx);
    edx = esp + 0xB8;
    PUSH32(esp, 0x82D840);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035D524u); RECOMP_ABI_CALL(0x00026B85u, sub_00026B85); /* call 0x00026B85 */

loc_0035D524: ;
    PUSH32(esp, 0x82D80C);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035D53Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035D53B: ;
    ecx = MEM32(esp + 0x15C);
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
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
    PUSH32(esp, eax);
    ecx = esp + 0xD0;
    PUSH32(esp, 0x82D804);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035D566u); RECOMP_ABI_CALL(0x00026B85u, sub_00026B85); /* call 0x00026B85 */

loc_0035D566: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x82D7E8);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D580u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035D580: ;
    eax = MEM32(esp + 0x12C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edx);
    edx = esp + 0xA0;
    PUSH32(esp, 0x82D804);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035D5A2u); RECOMP_ABI_CALL(0x00026B85u, sub_00026B85); /* call 0x00026B85 */

loc_0035D5A2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035D5AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D5DE; /* jne: not equal / not zero */

loc_0035D5B0: ;
    eax = MEM32(esp + 0x120);
    edx = MEM32(esp + 0x118);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x118);
    PUSH32(esp, 0x82D7DC);
    PUSH32(esp, 0x80);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    goto loc_0035D7E6;

loc_0035D5DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D611; /* jne: not equal / not zero */

loc_0035D5E3: ;
    ecx = MEM32(esp + 0x120);
    eax = MEM32(esp + 0x118);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, 0x82D7D0);
    PUSH32(esp, 0x80);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    goto loc_0035D7E6;

loc_0035D611: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D644; /* jne: not equal / not zero */

loc_0035D616: ;
    edx = MEM32(esp + 0x120);
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x118);
    PUSH32(esp, 0x82D7C8);
    PUSH32(esp, 0x80);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    goto loc_0035D7E6;

loc_0035D644: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D695; /* jne: not equal / not zero */

loc_0035D649: ;
    eax = esp;
    PUSH32(esp, 0x82D7B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D657u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035D657: ;
    eax = MEM32(esp + 0x120);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x11C);
    PUSH32(esp, 0x80);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0035D682u); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D682: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D68Bu); RECOMP_ABI_CALL(0x0001F786u, sub_0001F786); /* call 0x0001F786 */

loc_0035D68B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035D695: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D6F5; /* jne: not equal / not zero */

loc_0035D69A: ;
    edx = MEM32(esp + 0x120);
    ecx = MEM32(esp + 0x118);
    MEM32(esp) = 0x829E24;
    MEM32(esp + 4) = 0x829E2C;
    MEM32(esp + 8) = 0x829E34;
    eax = MEM32(esp + edx * 4);
    edx = MEM32(esp + 0x114);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, 0x80);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0035D6E2u); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D6E2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D6EBu); RECOMP_ABI_CALL(0x000345DCu, sub_000345DC); /* call 0x000345DC */

loc_0035D6EB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035D6F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D736; /* jne: not equal / not zero */

loc_0035D6FA: ;
    eax = MEM32(esp + 0x120);
    edx = MEM32(esp + 0x118);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x118);
    PUSH32(esp, 0x80);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0035D723u); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D723: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D72Cu); RECOMP_ABI_CALL(0x0002B879u, sub_0002B879); /* call 0x0002B879 */

loc_0035D72C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035D736: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D777; /* jne: not equal / not zero */

loc_0035D73B: ;
    ecx = MEM32(esp + 0x120);
    eax = MEM32(esp + 0x118);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, 0x80);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x0035D764u); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D764: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D76Du); RECOMP_ABI_CALL(0x0001155Au, sub_0001155A); /* call 0x0001155A */

loc_0035D76D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035D777: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D7B8; /* jne: not equal / not zero */

loc_0035D77C: ;
    edx = MEM32(esp + 0x120);
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x118);
    PUSH32(esp, 0x80);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x0035D7A5u); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D7A5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D7AEu); RECOMP_ABI_CALL(0x00025550u, sub_00025550); /* call 0x00025550 */

loc_0035D7AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035D7B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035D7FE; /* jne: not equal / not zero */

loc_0035D7BD: ;
    eax = MEM32(esp + 0x120);
    edx = MEM32(esp + 0x118);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x118);
    PUSH32(esp, 0x82D630);
    PUSH32(esp, 0x80);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);

loc_0035D7E6: ;
    PUSH32(esp, 0x0035D7EBu); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D7EB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D7F4u); RECOMP_ABI_CALL(0x00026B85u, sub_00026B85); /* call 0x00026B85 */

loc_0035D7F4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035D7FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D83C; /* je: equal / zero */

loc_0035D803: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D83C; /* je: equal / zero */

loc_0035D808: ;
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x11C);
    PUSH32(esp, 0x80);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x120);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D830u); RECOMP_ABI_CALL(0x00036C1Au, sub_00036C1A); /* call 0x00036C1A */

loc_0035D830: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035D839u); RECOMP_ABI_CALL(0x0002B0E5u, sub_0002B0E5); /* call 0x0002B0E5 */

loc_0035D839: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035D83C: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035D950
 * Original: 0x0035D950 - 0x0035D97B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035D950: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2AC0);
    PUSH32(esp, 0x0035D95Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035D95C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035D970; /* je: equal / zero */

loc_0035D963: ;
    ecx = eax;
    PUSH32(esp, 0x0035D96Au); RECOMP_ABI_CALL(0x0001C5D1u, sub_0001C5D1); /* call 0x0001C5D1 */

loc_0035D96A: ;
    MEM32(0x8FCBB0) = eax;
    esp += 4; return; /* ret */

loc_0035D970: ;
    MEM32(0x8FCBB0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0035D990
 * Original: 0x0035D990 - 0x0035D9AE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035D990: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0035D998u); RECOMP_ABI_CALL(0x0001FE75u, sub_0001FE75); /* call 0x0001FE75 */

loc_0035D998: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0035D9A8; /* je: equal / zero */

loc_0035D99F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035D9A5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0035D9A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035D9A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035D9C0
 * Original: 0x0035D9C0 - 0x0035DA9A (218 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035D9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035D9C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x44;
    PUSH32(esp, 0x0035D9CEu); RECOMP_ABI_CALL(0x000352FCu, sub_000352FC); /* call 0x000352FC */

loc_0035D9CE: ;
    ecx = esi + 0x91C;
    PUSH32(esp, 0x0035D9D9u); RECOMP_ABI_CALL(0x0001F7F4u, sub_0001F7F4); /* call 0x0001F7F4 */

loc_0035D9D9: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035D9F5; /* jle: less or equal (signed <=) */

loc_0035D9E1: ;
    ebx = esi + 4;

loc_0035D9E4: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0035D9EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035D9E8u); } /* indirect call */
    }

loc_0035D9EB: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035D9E4; /* jl: less (signed <) */

loc_0035D9F5: ;
    eax = MEM32(0x8FC604);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    edi = esi + 0xA74;
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0035DA1E; /* je: equal / zero */

loc_0035DA0A: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035DA1E; /* je: equal / zero */

loc_0035DA12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035DA1E; /* je: equal / zero */

loc_0035DA17: ;
    ecx = edi;
    PUSH32(esp, 0x0035DA1Eu); RECOMP_ABI_CALL(0x000117C6u, sub_000117C6); /* call 0x000117C6 */

loc_0035DA1E: ;
    ecx = edi + 0x120;
    PUSH32(esp, 0x0035DA29u); RECOMP_ABI_CALL(0x0003241Cu, sub_0003241C); /* call 0x0003241C */

loc_0035DA29: ;
    ecx = esi + 0xD60;
    PUSH32(esp, 0x0035DA34u); RECOMP_ABI_CALL(0x000207A3u, sub_000207A3); /* call 0x000207A3 */

loc_0035DA34: ;
    ecx = esi + 0x11F0;
    PUSH32(esp, 0x0035DA3Fu); RECOMP_ABI_CALL(0x0002D8A9u, sub_0002D8A9); /* call 0x0002D8A9 */

loc_0035DA3F: ;
    esi = MEM32(esi + 0x2AB0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035DA95; /* je: equal / zero */

loc_0035DA49: ;
    eax = MEM32(0x8FCAD8);
    MEM32(esp + 0xC) = 0;
    edx = MEM32(eax + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035DA89; /* jle: less or equal (signed <=) */

loc_0035DA5F: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035DA64: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0035DA85; /* jne: not equal / not zero */

loc_0035DA6A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035DA64; /* jl: less (signed <) */

loc_0035DA74: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x0035DA80u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035DA80: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0035DA85: ;
    MEM32(esp + 0xC) = ebx;

loc_0035DA89: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x0035DA95u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_0035DA95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035DAD0
 * Original: 0x0035DAD0 - 0x0035DB7B (171 bytes, 59 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035DAD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    ebx = ecx;
    ecx = MEM32(eax);
    MEM32(0x8FCA98) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 4;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    edx = MEM32(edi);
    eax = MEM32(edx);
    MEM32(0x8FCA94) = eax;
    ebp = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    MEM32(edi) = ebp;
    PUSH32(esp, 0x0035DB02u); RECOMP_ABI_CALL(0x000206C2u, sub_000206C2); /* call 0x000206C2 */

loc_0035DB02: ;
    ecx = MEM32(0x8FCA98);
    xmm0 = XMM_SCALAR(MEMF(0x7AD380)); /* movss */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0035DB1B; /* jne: not equal / not zero */

loc_0035DB18: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0035DB1B: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0035DB2Du); RECOMP_ABI_CALL(0x0001C950u, sub_0001C950); /* call 0x0001C950 */

loc_0035DB2D: ;
    eax = MEM32(0x8FCA98);
    xmm0 = XMM_SCALAR(MEMF(0x7AD380)); /* movss */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0035DB47; /* jne: not equal / not zero */

loc_0035DB44: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0035DB47: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0035DB59u); RECOMP_ABI_CALL(0x0001C950u, sub_0001C950); /* call 0x0001C950 */

loc_0035DB59: ;
    ebp = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0035DB6Au); RECOMP_ABI_CALL(0x00021860u, sub_00021860); /* call 0x00021860 */

loc_0035DB6A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0035DB74u); RECOMP_ABI_CALL(0x0002A690u, sub_0002A690); /* call 0x0002A690 */

loc_0035DB74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0035DBB0
 * Original: 0x0035DBB0 - 0x0035DCC7 (279 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035DBB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFBu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0035DBFD; /* ja: above (unsigned >) */

loc_0035DBBE: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x35DC0C); /* switch: 13 entries, 8 targets */
    if (_jt == 0x0035DBC5u) goto loc_0035DBC5;
    if (_jt == 0x0035DBD0u) goto loc_0035DBD0;
    if (_jt == 0x0035DBD9u) goto loc_0035DBD9;
    if (_jt == 0x0035DBE2u) goto loc_0035DBE2;
    if (_jt == 0x0035DBEBu) goto loc_0035DBEB;
    if (_jt == 0x0035DBF4u) goto loc_0035DBF4;
    if (_jt == 0x0035DBFDu) goto loc_0035DBFD;
    if (_jt == 0x0035DC06u) goto loc_0035DC06;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0035DBC5: ;
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_00021171(); return; /* tail jmp 0x00021171 */

loc_0035DBD0: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002B9FA(); return; /* tail jmp 0x0002B9FA */

loc_0035DBD9: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001AD08(); return; /* tail jmp 0x0001AD08 */

loc_0035DBE2: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000110C3(); return; /* tail jmp 0x000110C3 */

loc_0035DBEB: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001E174(); return; /* tail jmp 0x0001E174 */

loc_0035DBF4: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000318AA(); return; /* tail jmp 0x000318AA */

loc_0035DBFD: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00017ABD(); return; /* tail jmp 0x00017ABD */

loc_0035DC06: ;
    esp += 8; return; /* ret 4 */

    eax = eax ^ 0x35DBF400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

}

/**
 * sub_0035DD40
 * Original: 0x0035DD40 - 0x0035DE9B (347 bytes, 119 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035DD40: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = 0xFFFFFFFFu;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    eax = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0035DD65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035DD62u); } /* indirect call */
    }

loc_0035DD65: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM32(esi + 0x54) = eax;
    MEM8(esi + 0x58) = LO8(ecx);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    _fa = (uint32_t)(MEM8(0x8C4679)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8C4679), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035DE94; /* je: equal / zero */

loc_0035DDA2: ;
    _fa = (uint32_t)(MEM32(0x8FCBDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FCBDC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035DDBE; /* jne: not equal / not zero */

loc_0035DDAA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8242B8);
    PUSH32(esp, 0x0035DDB6u); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_0035DDB6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FCBDC) = eax;

loc_0035DDBE: ;
    ecx = MEM32(0x902558);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0035DDD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035DDD2u); } /* indirect call */
    }

loc_0035DDD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035DDE2; /* je: equal / zero */

loc_0035DDD9: ;
    ecx = eax;
    PUSH32(esp, 0x0035DDE0u); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_0035DDE0: ;
    goto loc_0035DDE4;

loc_0035DDE2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035DDE4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x500);
    MEM32(esi) = eax;
    edx = MEM32(eax);
    PUSH32(esp, 0x82C8AC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0035DDFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035DDF9u); } /* indirect call */
    }

loc_0035DDFC: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035DE04u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0035DE04: ;
    ecx = eax;
    PUSH32(esp, 0x0035DE0Bu); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_0035DE0B: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0035DE17u); RECOMP_ABI_CALL(0x000128E2u, sub_000128E2); /* call 0x000128E2 */

loc_0035DE17: ;
    eax = MEM32(esi + 0x1C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0035DE3B; /* js: sign (negative) */

loc_0035DE1D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + eax * 4 + 4;
    ebp = eax + 1;

loc_0035DE26: ;
    ecx = MEM32(edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x58));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035DE33u); RECOMP_ABI_CALL(0x00012D10u, sub_00012D10); /* call 0x00012D10 */

loc_0035DE33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0035DE26; /* jne: not equal / not zero */

loc_0035DE39: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0035DE3B: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035DE43u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0035DE43: ;
    ecx = eax;
    PUSH32(esp, 0x0035DE4Au); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0035DE4A: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035DE56; /* je: equal / zero */

loc_0035DE50: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0035DE56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035DE54u); } /* indirect call */
    }

loc_0035DE56: ;
    MEM32(esi) = ebx;
    eax = MEM32(0x8FCBDC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035DE65u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_0035DE65: ;
    MEM32(0x8FCBDC) = ebx;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = 0x8BFE70;
    MEM32(esi + 0x14) = eax;
    edx = MEM32(0x8BFE70);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0035DE8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035DE87u); } /* indirect call */
    }

loc_0035DE8A: ;
    ecx = esi;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0035DE94u); RECOMP_ABI_CALL(0x00027247u, sub_00027247); /* call 0x00027247 */

loc_0035DE94: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0035DF00
 * Original: 0x0035DF00 - 0x0035DF2E (46 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035DF00: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035DF28; /* je: equal / zero */

loc_0035DF06: ;
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035DF19u); RECOMP_ABI_CALL(0x00021658u, sub_00021658); /* call 0x00021658 */

loc_0035DF19: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035DF28; /* je: equal / zero */

loc_0035DF21: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0035DF28: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035DF40
 * Original: 0x0035DF40 - 0x0035E009 (201 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035DF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035DF40: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E4);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    MEM32(0x8FCB8C) = ecx;
    MEM32(0x8FCB94) = 0x8BFE60;
    PUSH32(esp, 0x0035DF65u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035DF65: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035DF7B; /* je: equal / zero */

loc_0035DF6C: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    goto loc_0035DF7D;

loc_0035DF7B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035DF7D: ;
    PUSH32(esp, 0x30);
    ecx = eax;
    MEM32(0x8FCAD8) = eax;
    PUSH32(esp, 0x0035DF8Bu); RECOMP_ABI_CALL(0x0002F40Bu, sub_0002F40B); /* call 0x0002F40B */

loc_0035DF8B: ;
    ecx = MEM32(0x8FCAD8);
    PUSH32(esp, 0x0035DF96u); RECOMP_ABI_CALL(0x00019F5Cu, sub_00019F5C); /* call 0x00019F5C */

loc_0035DF96: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2AC0);
    PUSH32(esp, 0x0035DFA2u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035DFA2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035DFB7; /* je: equal / zero */

loc_0035DFA9: ;
    ecx = eax;
    PUSH32(esp, 0x0035DFB0u); RECOMP_ABI_CALL(0x0001C5D1u, sub_0001C5D1); /* call 0x0001C5D1 */

loc_0035DFB0: ;
    MEM32(0x8FCBB0) = eax;
    goto loc_0035DFC1;

loc_0035DFB7: ;
    MEM32(0x8FCBB0) = 0;

loc_0035DFC1: ;
    PUSH32(esp, 0x0035DFC6u); RECOMP_ABI_CALL(0x0002C3A0u, sub_0002C3A0); /* call 0x0002C3A0 */

loc_0035DFC6: ;
    PUSH32(esp, 0x0035DFCBu); RECOMP_ABI_CALL(0x000148A9u, sub_000148A9); /* call 0x000148A9 */

loc_0035DFCB: ;
    SET_LO8(eax, MEM8(0x8FCB98));
    SET_LO8(edx, MEM8(0x8FCBA4));
    SET_LO8(ecx, MEM8(0x8FCB9C));
    MEM8(esp + 2) = LO8(eax);
    MEM8(esp + 3) = LO8(edx);
    SET_LO8(edx, MEM8(0x8FCBA0));
    eax = esp;
    PUSH32(esp, eax);
    MEM8(esp + 5) = LO8(ecx);
    MEM8(esp + 4) = LO8(edx);
    PUSH32(esp, 0x0035DFFBu); RECOMP_ABI_CALL(0x0001F0BFu, sub_0001F0BF); /* call 0x0001F0BF */

loc_0035DFFB: ;
    ecx = eax;
    PUSH32(esp, 0x0035E002u); RECOMP_ABI_CALL(0x000151C8u, sub_000151C8); /* call 0x000151C8 */

loc_0035E002: ;
    PUSH32(esp, 0x0035E007u); RECOMP_ABI_CALL(0x00015AB5u, sub_00015AB5); /* call 0x00015AB5 */

loc_0035E007: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035E040
 * Original: 0x0035E040 - 0x0035E067 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035E040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035E040: ;
    ecx = MEM32(0x8FCBB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0035E05B; /* je: equal / zero */

loc_0035E04D: ;
    PUSH32(esp, 0x0035E052u); RECOMP_ABI_CALL(0x0001FE75u, sub_0001FE75); /* call 0x0001FE75 */

loc_0035E052: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035E058u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0035E058: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035E05B: ;
    MEM32(0x8FCBB0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0035E070
 * Original: 0x0035E070 - 0x0035E296 (550 bytes, 189 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035E070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035E070: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = ecx;
    esi = ecx + 0x2C;
    MEM32(esp + 0x24) = 0x2C;

loc_0035E086: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x82A03C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035E099u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035E099: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x38;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x18) = ebp;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0035E0B2u); RECOMP_ABI_CALL(0x00013012u, sub_00013012); /* call 0x00013012 */

loc_0035E0B2: ;
    edi = MEM32(esp + 0x7C);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E0DD; /* je: equal / zero */

loc_0035E0BA: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x15;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0035E0D0u); RECOMP_ABI_CALL(0x00021658u, sub_00021658); /* call 0x00021658 */

loc_0035E0D0: ;
    SET_LO8(ecx, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E0DD; /* je: equal / zero */

loc_0035E0D8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035E0DF;

loc_0035E0DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035E0DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0035E0F0; /* je: equal / zero */

loc_0035E0E7: ;
    ecx = MEM32(eax);
    ebx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;

loc_0035E0F0: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0035E0F9u); RECOMP_ABI_CALL(0x00012A2Cu, sub_00012A2C); /* call 0x00012A2C */

loc_0035E0F9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035E184; /* jne: not equal / not zero */

loc_0035E101: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035E27A; /* jne: not equal / not zero */

loc_0035E10C: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, 0x82A03C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035E11Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035E11E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    MEM32(esp + 0x18) = ebp;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0035E135u); RECOMP_ABI_CALL(0x00013012u, sub_00013012); /* call 0x00013012 */

loc_0035E135: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E15C; /* je: equal / zero */

loc_0035E139: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x16;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0035E14Fu); RECOMP_ABI_CALL(0x00021658u, sub_00021658); /* call 0x00021658 */

loc_0035E14F: ;
    SET_LO8(ecx, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E15C; /* je: equal / zero */

loc_0035E157: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035E15E;

loc_0035E15C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035E15E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0035E16F; /* je: equal / zero */

loc_0035E166: ;
    edx = MEM32(eax);
    ebx = MEM32(eax + 4);
    MEM32(esp + 0x14) = edx;

loc_0035E16F: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0035E178u); RECOMP_ABI_CALL(0x00012A2Cu, sub_00012A2C); /* call 0x00012A2C */

loc_0035E178: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM8(esi + 0x18) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0035E27A; /* je: equal / zero */

loc_0035E184: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0035E1C3; /* je: equal / zero */

loc_0035E199: ;
    /* nop */

loc_0035E1A0: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E1BD; /* je: equal / zero */

loc_0035E1A7: ;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0035E1B7; /* jae: above or equal (unsigned >=) */

loc_0035E1AF: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035E1A0; /* jne: not equal / not zero */

loc_0035E1B5: ;
    goto loc_0035E1C3;

loc_0035E1B7: ;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 0x1C) = ecx;

loc_0035E1BD: ;
    ecx = esi + -4;
    MEM32(eax + 0x20) = ecx;

loc_0035E1C3: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x82BCB0);
    if (CMP_EQ(_fa, _fb)) goto loc_0035E1DE; /* je: equal / zero */

loc_0035E1CF: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82AA0C);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    goto loc_0035E1EC;

loc_0035E1DE: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82AA0C);
    edx = esp + 0x44;
    PUSH32(esp, edx);

loc_0035E1EC: ;
    PUSH32(esp, 0x0035E1F1u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035E1F1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0035E204u); RECOMP_ABI_CALL(0x00013012u, sub_00013012); /* call 0x00013012 */

loc_0035E204: ;
    ecx = MEM32(esp + 0x7C);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E22E; /* je: equal / zero */

loc_0035E20D: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035E221u); RECOMP_ABI_CALL(0x00021658u, sub_00021658); /* call 0x00021658 */

loc_0035E221: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E22E; /* je: equal / zero */

loc_0035E229: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0035E230;

loc_0035E22E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035E230: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0035E241; /* je: equal / zero */

loc_0035E23C: ;
    edi = MEM32(eax);
    ebp = MEM32(eax + 4);

loc_0035E241: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0035E24Au); RECOMP_ABI_CALL(0x00012A2Cu, sub_00012A2C); /* call 0x00012A2C */

loc_0035E24A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E27A; /* je: equal / zero */

loc_0035E24E: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 8) = edi;
    MEM32(esi + 0x10) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_0035E26A; /* jge: greater or equal (signed >=) */

loc_0035E25C: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035E27A; /* jl: less (signed <) */

loc_0035E264: ;
    MEM8(esi + 0x1B) = 1;
    goto loc_0035E276;

loc_0035E26A: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0035E27A; /* jl: less (signed <) */

loc_0035E272: ;
    MEM8(esi + 0x1B) = 0;

loc_0035E276: ;
    MEM8(esi + 0x1A) = 1;

loc_0035E27A: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = eax;
    if ((_fa != 0)) goto loc_0035E086; /* jne: not equal / not zero */

loc_0035E28C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0035E320
 * Original: 0x0035E320 - 0x0035E6E8 (968 bytes, 330 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035E320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035E320: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x20;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x0035E334u); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_0035E334: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x82D870);
    ecx = esp + 0x38;
    PUSH32(esp, 0x0035E34Fu); RECOMP_ABI_CALL(0x0001F85Du, sub_0001F85D); /* call 0x0001F85D */

loc_0035E34F: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035E359u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0035E359: ;
    ecx = eax;
    PUSH32(esp, 0x0035E360u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_0035E360: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0035E36Cu); RECOMP_ABI_CALL(0x0001731Fu, sub_0001731F); /* call 0x0001731F */

loc_0035E36C: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 1);
    PUSH32(esp, 0x82D870);
    PUSH32(esp, 0x0035E37Au); RECOMP_ABI_CALL(0x00598C36u, sub_00598C36); /* call 0x00598C36 */

loc_0035E37A: ;
    esi = MEM32(edi + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0035E6A3; /* je: equal / zero */

loc_0035E38C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi = edi;

loc_0035E390: ;
    SET_LO8(eax, MEM8(esi + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E564; /* je: equal / zero */

loc_0035E39B: ;
    SET_LO8(eax, MEM8(esi + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebp = 1;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0035E3B6; /* je: equal / zero */

loc_0035E3AB: ;
    eax = MEM32(esi + 0x10);
    edi = MEM32(esi + 0x14);
    edx = MEM32(esi + 0xC);
    goto loc_0035E3BF;

loc_0035E3B6: ;
    eax = MEM32(esi + 0xC);
    edi = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x10);

loc_0035E3BF: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E422; /* je: equal / zero */

loc_0035E3CE: ;
    edi = edi;

loc_0035E3D0: ;
    SET_LO8(ecx, MEM8(eax + 0x1E));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E422; /* je: equal / zero */

loc_0035E3D7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0035E422; /* jge: greater or equal (signed >=) */

loc_0035E3DC: ;
    SET_LO8(ecx, MEM8(eax + 0x1F));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E3EE; /* je: equal / zero */

loc_0035E3E3: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x14);
    ebp = MEM32(eax + 0xC);
    goto loc_0035E3F7;

loc_0035E3EE: ;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x18);
    ebp = MEM32(eax + 0x10);

loc_0035E3F7: ;
    ebx = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = edx + -128;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    ebp = MEM32(esp + 0x18);
    if (CMP_GE(_fas, _fbs)) goto loc_0035E422; /* jge: greater or equal (signed >=) */

loc_0035E40C: ;
    ebx = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = edx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0035E3D0; /* jne: not equal / not zero */

loc_0035E422: ;
    edx = MEM32(0x8FC1D0);
    ecx = MEM32(edx + 0xE8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    PUSH32(esp, 0x82D860);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0035E445u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035E442u); } /* indirect call */
    }

loc_0035E445: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x64);
    ebx = eax;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0x0035E45Eu); RECOMP_ABI_CALL(0x00598C5Du, sub_00598C5D); /* call 0x00598C5D */

loc_0035E45E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E54E; /* je: equal / zero */

loc_0035E469: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035E54E; /* jle: less or equal (signed <=) */

loc_0035E471: ;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = ebp;
    /* nop */

loc_0035E480: ;
    edx = MEM32(esp + 0x10);
    edi = MEM32(esi + 0x10);
    ebx = MEM32(esi + 0xC);
    SET_LO8(eax, MEM8(esi + 0x1C));
    ebp = esi + 0x10;
    ecx = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x82BCB4);
    if (CMP_EQ(_fa, _fb)) goto loc_0035E4AF; /* je: equal / zero */

loc_0035E49F: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82AA0C);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    goto loc_0035E4BC;

loc_0035E4AF: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82AA0C);
    eax = esp + 0x48;
    PUSH32(esp, eax);

loc_0035E4BC: ;
    PUSH32(esp, 0x0035E4C1u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035E4C1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x44;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035E4DAu); RECOMP_ABI_CALL(0x0001C59Fu, sub_0001C59F); /* call 0x0001C59F */

loc_0035E4DA: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x82BCB0);
    if (CMP_EQ(_fa, _fb)) goto loc_0035E4F9; /* je: equal / zero */

loc_0035E4E9: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82AA0C);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    goto loc_0035E506;

loc_0035E4F9: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82AA0C);
    eax = esp + 0x48;
    PUSH32(esp, eax);

loc_0035E506: ;
    PUSH32(esp, 0x0035E50Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035E50B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035E523u); RECOMP_ABI_CALL(0x0001C59Fu, sub_0001C59F); /* call 0x0001C59F */

loc_0035E523: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035E532; /* jle: less or equal (signed <=) */

loc_0035E52F: ;
    esi = MEM32(esi + 0x20);

loc_0035E532: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_0035E480; /* jne: not equal / not zero */

loc_0035E54A: ;
    ebx = MEM32(esp + 0x20);

loc_0035E54E: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0035E55Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035E55Cu); } /* indirect call */
    }

loc_0035E55F: ;
    goto loc_0035E692;

loc_0035E564: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    eax = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0);
    edi = esi + 0x18;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82D860);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0035E58Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035E589u); } /* indirect call */
    }

loc_0035E58C: ;
    ecx = MEM32(edi);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    ebx = eax;
    eax = MEM32(esp + 0x1C);
    ebp = esi + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035E5A5u); RECOMP_ABI_CALL(0x00598C5Du, sub_00598C5D); /* call 0x00598C5D */

loc_0035E5A5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E5ED; /* je: equal / zero */

loc_0035E5AC: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x82BCB4);
    if (CMP_EQ(_fa, _fb)) goto loc_0035E5C8; /* je: equal / zero */

loc_0035E5B8: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82AA0C);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    goto loc_0035E5D5;

loc_0035E5C8: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82AA0C);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);

loc_0035E5D5: ;
    PUSH32(esp, 0x0035E5DAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035E5DA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edx = esp + 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035E5EAu); RECOMP_ABI_CALL(0x0001C59Fu, sub_0001C59F); /* call 0x0001C59F */

loc_0035E5EA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035E5ED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0035E5F3u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0035E5F3: ;
    eax = MEM32(esi + 0x14);
    ebp = esi + 0x14;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E692; /* je: equal / zero */

loc_0035E604: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82D860);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0035E627u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035E624u); } /* indirect call */
    }

loc_0035E627: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esp + 0x14);
    edi = eax;
    eax = MEM32(ebp);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    ebx = esi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035E641u); RECOMP_ABI_CALL(0x00598C5Du, sub_00598C5D); /* call 0x00598C5D */

loc_0035E641: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E689; /* je: equal / zero */

loc_0035E648: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x82BCB0);
    if (CMP_EQ(_fa, _fb)) goto loc_0035E664; /* je: equal / zero */

loc_0035E654: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82AA0C);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    goto loc_0035E671;

loc_0035E664: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x82AA0C);
    eax = esp + 0x48;
    PUSH32(esp, eax);

loc_0035E671: ;
    PUSH32(esp, 0x0035E676u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0035E676: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esp + 0x44;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035E686u); RECOMP_ABI_CALL(0x0001C59Fu, sub_0001C59F); /* call 0x0001C59F */

loc_0035E686: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035E689: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0035E68Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0035E68F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035E692: ;
    esi = MEM32(esi + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035E390; /* jne: not equal / not zero */

loc_0035E69D: ;
    edi = MEM32(esp + 0x24);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0035E6A3: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035E6AFu); RECOMP_ABI_CALL(0x00598CBFu, sub_00598CBF); /* call 0x00598CBF */

loc_0035E6AF: ;
    eax = esp + 0x28;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035E6BCu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0035E6BC: ;
    ecx = eax;
    PUSH32(esp, 0x0035E6C3u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0035E6C3: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0035E6CCu); RECOMP_ABI_CALL(0x00014B47u, sub_00014B47); /* call 0x00014B47 */

loc_0035E6CC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0035E6D2u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0035E6D2: ;
    ecx = eax;
    PUSH32(esp, 0x0035E6D9u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_0035E6D9: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0035E6E2u); RECOMP_ABI_CALL(0x000132C4u, sub_000132C4); /* call 0x000132C4 */

loc_0035E6E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035E7E0
 * Original: 0x0035E7E0 - 0x0035E83B (91 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035E7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035E7E0: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x0035E7ECu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035E7EC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E81D; /* je: equal / zero */

loc_0035E7F3: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0035E804u); RECOMP_ABI_CALL(0x0002CA1Cu, sub_0002CA1C); /* call 0x0002CA1C */

loc_0035E804: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2A109);
    MEM32(0x8FCBD8) = eax;
    PUSH32(esp, 0x0035E819u); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_0035E819: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035E81D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2A109);
    MEM32(0x8FCBD8) = 0;
    PUSH32(esp, 0x0035E837u); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_0035E837: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035E860
 * Original: 0x0035E860 - 0x0035E8A8 (72 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035E860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035E860: ;
    PUSH32(esp, 0x2A109);
    PUSH32(esp, 0x0035E86Au); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_0035E86A: ;
    SET_LO8(eax, MEM8(0x8C4679));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E881; /* je: equal / zero */

loc_0035E876: ;
    ecx = MEM32(0x8FCBD8);
    PUSH32(esp, 0x0035E881u); RECOMP_ABI_CALL(0x0002EB6Eu, sub_0002EB6E); /* call 0x0002EB6E */

loc_0035E881: ;
    ecx = MEM32(0x8FCBD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0035E89C; /* je: equal / zero */

loc_0035E88E: ;
    PUSH32(esp, 0x0035E893u); RECOMP_ABI_CALL(0x00027413u, sub_00027413); /* call 0x00027413 */

loc_0035E893: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035E899u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0035E899: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035E89C: ;
    MEM32(0x8FCBD8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0035E8C0
 * Original: 0x0035E8C0 - 0x0035E949 (137 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035E8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035E8C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035E8C8u); RECOMP_ABI_CALL(0x000381AAu, sub_000381AA); /* call 0x000381AA */

loc_0035E8C8: ;
    ecx = MEM32(0x8FCBB0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0035E8E4; /* je: equal / zero */

loc_0035E8D6: ;
    PUSH32(esp, 0x0035E8DBu); RECOMP_ABI_CALL(0x0001FE75u, sub_0001FE75); /* call 0x0001FE75 */

loc_0035E8DB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035E8E1u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0035E8E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035E8E4: ;
    esi = MEM32(0x8FCAD8);
    MEM32(0x8FCBB0) = ebx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0035E907; /* je: equal / zero */

loc_0035E8F9: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035E902u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0035E902: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebx;

loc_0035E907: ;
    eax = MEM32(0x8FCAD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035E919; /* je: equal / zero */

loc_0035E910: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035E916u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0035E916: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0035E919: ;
    MEM32(0x8FCAD8) = ebx;
    PUSH32(esp, 0x0035E924u); RECOMP_ABI_CALL(0x0002BEB4u, sub_0002BEB4); /* call 0x0002BEB4 */

loc_0035E924: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM8(esp + 0xF) = LO8(ebx);
    MEM8(esp + 0xE) = LO8(ebx);
    MEM8(esp + 0xD) = LO8(ebx);
    MEM8(esp + 0xC) = LO8(ebx);
    PUSH32(esp, 0x0035E93Eu); RECOMP_ABI_CALL(0x0001F0BFu, sub_0001F0BF); /* call 0x0001F0BF */

loc_0035E93E: ;
    ecx = eax;
    PUSH32(esp, 0x0035E945u); RECOMP_ABI_CALL(0x000151C8u, sub_000151C8); /* call 0x000151C8 */

loc_0035E945: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035E970
 * Original: 0x0035E970 - 0x0035E9C0 (80 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035E970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035E970: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x50);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x18) = eax;
    if ((_fas < 0)) goto loc_0035E9AB; /* js: sign (negative) */

loc_0035E988: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    /* nop */

loc_0035E990: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    eax = MEM32(ebx + 0x54);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035E9A7u); RECOMP_ABI_CALL(0x00018A53u, sub_00018A53); /* call 0x00018A53 */

loc_0035E9A7: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0035E990; /* jns: not sign (positive) */

loc_0035E9AA: ;
    POP32(esp, ebp);

loc_0035E9AB: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035E9BA; /* jle: less or equal (signed <=) */

loc_0035E9B4: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0035E9BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035E9E0
 * Original: 0x0035E9E0 - 0x0035EA30 (80 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035E9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035E9E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x50);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x18) = eax;
    if ((_fas < 0)) goto loc_0035EA1B; /* js: sign (negative) */

loc_0035E9F8: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    /* nop */

loc_0035EA00: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    eax = MEM32(ebx + 0x54);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + esi * 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035EA17u); RECOMP_ABI_CALL(0x00018A53u, sub_00018A53); /* call 0x00018A53 */

loc_0035EA17: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0035EA00; /* jns: not sign (positive) */

loc_0035EA1A: ;
    POP32(esp, ebp);

loc_0035EA1B: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035EA2A; /* jle: less or equal (signed <=) */

loc_0035EA24: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0035EA2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035EA50
 * Original: 0x0035EA50 - 0x0035EAA3 (83 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035EA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035EA50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(eax + 0x54);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = MEM32(eax + 0x58);
    if (CMP_LE(_fas, _fbs)) goto loc_0035EA8E; /* jle: less or equal (signed <=) */

loc_0035EA6C: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);

loc_0035EA71: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0035EA84u); RECOMP_ABI_CALL(0x00018A53u, sub_00018A53); /* call 0x00018A53 */

loc_0035EA84: ;
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x170;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0035EA71; /* jne: not equal / not zero */

loc_0035EA8D: ;
    POP32(esp, ebp);

loc_0035EA8E: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035EA9D; /* jle: less or equal (signed <=) */

loc_0035EA97: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0035EA9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035EAC0
 * Original: 0x0035EAC0 - 0x0035EAE2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035EAC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035EAC0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035EADEu); RECOMP_ABI_CALL(0x000315F8u, sub_000315F8); /* call 0x000315F8 */

loc_0035EADE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035EAF0
 * Original: 0x0035EAF0 - 0x0035EB12 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035EAF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035EAF0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035EB0Eu); RECOMP_ABI_CALL(0x00019A39u, sub_00019A39); /* call 0x00019A39 */

loc_0035EB0E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035EB20
 * Original: 0x0035EB20 - 0x0035EB42 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035EB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035EB20: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035EB3Eu); RECOMP_ABI_CALL(0x00014877u, sub_00014877); /* call 0x00014877 */

loc_0035EB3E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035EB50
 * Original: 0x0035EB50 - 0x0035EB57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035EB50(void)
{

loc_0035EB50: ;
    eax = ecx + 0x130;
    esp += 4; return; /* ret */

}

/**
 * sub_0035EB60
 * Original: 0x0035EB60 - 0x0035EB64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035EB60(void)
{

loc_0035EB60: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0035EB70
 * Original: 0x0035EB70 - 0x0035ECFD (397 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035EB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035EB70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0035ECF6; /* je: equal / zero */

loc_0035EB89: ;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0035EB92: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = edx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x60); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x5C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x64); /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x68) = xmm2.f[0]; /* movss */
    esi = eax + 0x28;
    if (CMP_EQ(_fa, _fb)) goto loc_0035EC80; /* je: equal / zero */

loc_0035EBDA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x14); /* subss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x18); /* subss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x1C); /* subss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0035EC7B; /* je: equal / zero */

loc_0035EC0B: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x14); /* subss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x18); /* subss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x1C); /* subss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x2C); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x30); /* subss */
    edi = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x34); /* subss */
    MEM32(esi) = edi;
    edi = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esi + 4) = edi;
    edi = MEM32(esp + 0x1C);
    goto loc_0035ECBD;

loc_0035EC7B: ;
    edi = ecx + 0x2C;
    goto loc_0035ECB0;

loc_0035EC80: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x14); /* subss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x18); /* subss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x1C); /* subss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    edi = edx + 0x2C;

loc_0035ECB0: ;
    ebx = MEM32(edi);
    MEM32(esi) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(esi + 4) = ebx;
    edi = MEM32(edi + 8);

loc_0035ECBD: ;
    MEM32(esi + 8) = edi;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 0x6C) = xmm1.f[0]; /* movss */
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0035EB92; /* jne: not equal / not zero */

loc_0035ECF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0035ED60
 * Original: 0x0035ED60 - 0x0035EDB3 (83 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035ED60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035ED60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(eax + 0x54);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = MEM32(eax + 0x58);
    if (CMP_LE(_fas, _fbs)) goto loc_0035ED9E; /* jle: less or equal (signed <=) */

loc_0035ED7C: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);

loc_0035ED81: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0035ED94u); RECOMP_ABI_CALL(0x00018A53u, sub_00018A53); /* call 0x00018A53 */

loc_0035ED94: ;
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x170;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0035ED81; /* jne: not equal / not zero */

loc_0035ED9D: ;
    POP32(esp, ebp);

loc_0035ED9E: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035EDAD; /* jle: less or equal (signed <=) */

loc_0035EDA7: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0035EDAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0035EDD0
 * Original: 0x0035EDD0 - 0x0035EE2E (94 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035EDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035EDD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x50;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035EDF6u); RECOMP_ABI_CALL(0x000367A1u, sub_000367A1); /* call 0x000367A1 */

loc_0035EDF6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035EE20; /* je: equal / zero */

loc_0035EDFD: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035EE10u); RECOMP_ABI_CALL(0x00016D84u, sub_00016D84); /* call 0x00016D84 */

loc_0035EE10: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0035EE19u); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035EE19: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035EE20: ;
    ecx = esp;
    PUSH32(esp, 0x0035EE28u); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035EE28: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035EE50
 * Original: 0x0035EE50 - 0x0035EEC5 (117 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035EE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035EE50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x50;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035EE76u); RECOMP_ABI_CALL(0x000367A1u, sub_000367A1); /* call 0x000367A1 */

loc_0035EE76: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035EEB7; /* je: equal / zero */

loc_0035EE7D: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035EE92u); RECOMP_ABI_CALL(0x0002EBBEu, sub_0002EBBE); /* call 0x0002EBBE */

loc_0035EE92: ;
    ecx = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035EEA7u); RECOMP_ABI_CALL(0x00016D84u, sub_00016D84); /* call 0x00016D84 */

loc_0035EEA7: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0035EEB0u); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035EEB0: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035EEB7: ;
    ecx = esp;
    PUSH32(esp, 0x0035EEBFu); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035EEBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035EEF0
 * Original: 0x0035EEF0 - 0x0035F196 (678 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035EEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0035EEF0: ;
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
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x18);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x10);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x18);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEM32(esp + 0x40) = edx;
    edx = MEM32(ebp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    esi = MEM32(esp + 0x10);
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x44) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(esp + 0x48) = esi;
    esi = MEM32(esp + 0x18);
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x4C) = esi;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0035F102; /* jb: below (unsigned <) (xmm6.f[0] vs xmm0.f[0]) */

loc_0035F04E: ;
    _fca = xmm6.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0035F078; /* jb: below (unsigned <) (xmm6.f[0] vs xmm1.f[0]) */

loc_0035F053: ;
    edx = MEM32(eax);
    ecx = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0035F078: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0035F0CB; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0035F0A6: ;
    edx = MEM32(ecx);
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0035F0CB: ;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0x18);
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    goto loc_0035F17B;

loc_0035F102: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0035F149; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0035F124: ;
    ecx = MEM32(edx);
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0035F149: ;
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0x18);
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */

loc_0035F17B: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0035F240
 * Original: 0x0035F240 - 0x0035F243 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0035F240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F240: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035F250
 * Original: 0x0035F250 - 0x0035F253 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0035F250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035F250: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035F260
 * Original: 0x0035F260 - 0x0035F627 (967 bytes, 232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035F260(void)
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

loc_0035F260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0035F294; /* jne: not equal / not zero */

loc_0035F275: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F27Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035F27D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F28D; /* je: equal / zero */

loc_0035F284: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F28Bu); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_0035F28B: ;
    goto loc_0035F28F;

loc_0035F28D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035F28F: ;
    MEM32(0x8FA278) = eax;

loc_0035F294: ;
    ebx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x114)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0x114); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x118)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 0x118); /* subss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x110)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(edi + 0x110); /* subss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 0x164)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(edi + 0x164); /* addss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0035F61E; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm0.f[0]) */

loc_0035F313: ;
    esi = MEM32(eax + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F330; /* je: equal / zero */

loc_0035F31C: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(eax + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0035F32B; /* je: equal / zero */

loc_0035F326: ;
    MEM32(ecx + 0x3C) = edx;
    goto loc_0035F339;

loc_0035F32B: ;
    MEM32(eax + 0x14) = edx;
    goto loc_0035F339;

loc_0035F330: ;
    esi = MEM32(eax + 8);
    ecx = esi + 0x70;
    MEM32(eax + 8) = ecx;

loc_0035F339: ;
    ecx = MEM32(eax + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7FE2B4)); /* movss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = ecx;
    MEM32(esi + 0x48) = edx;
    MEM32(esi + 0x4C) = edx;
    MEM32(esi + 0x50) = edx;
    MEM32(esi + 0x54) = edx;
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x164)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    MEMF(esp + 0x30) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x18) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x1C) = eax;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x20) = ecx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x110)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x114)); /* movss */
    edx = MEM32(esp + 0x30);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x118)); /* movss */
    eax = MEM32(esp + 0x34);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEM32(esp + 0x24) = edx;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    edx = esp + 0x18;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    MEM32(esp + 0x30) = ecx;
    ecx = esi + 0x58;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F430u); RECOMP_ABI_CALL(0x00034109u, sub_00034109); /* call 0x00034109 */

loc_0035F430: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    edx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = xmm0; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_0035F4DE; /* jne: not equal / not zero */

loc_0035F457: ;
    ecx = MEM32(edi + 0x10);
    MEM32(esi + 0x50) = ecx;
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(ebp + 0x14);
    MEM32(esi + 0x54) = edx;
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 0x164); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 0x130); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x5C)); /* movss */
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 0x164); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 0x134); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 0x164); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x138); /* addss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    edx = ecx + 0x2C;
    ebx = MEM32(edx);
    eax = esi + 0x28;
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edi + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;
    edx = MEM32(ebp + 0x18);
    goto loc_0035F5DC;

loc_0035F4DE: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x50) = eax;
    ecx = MEM32(ebx + 0x10);
    MEM32(esi + 0x54) = ecx;
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 0x164); /* mulss */
    ecx = MEM32(ebp + 0x14);
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 0x130); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x5C)); /* movss */
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 0x164); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 0x134); /* addss */
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x164)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x138); /* addss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x164)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x58); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x130); /* addss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0x164); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x134); /* addss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x164)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x138); /* addss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x2C); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x30); /* subss */
    ebx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x34); /* subss */
    eax = esi + 0x28;
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(esp + 0x34);
    MEM32(edi + 4) = ebx;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x38);
    MEM32(edi + 8) = ebx;

loc_0035F5DC: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x5C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x58); /* mulss */
    MEM32(esi + 0x48) = ecx;
    ecx = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, esi);
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x4C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F615u); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_0035F615: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0035F61E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_0035F720
 * Original: 0x0035F720 - 0x0035F970 (592 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0035F720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0035F720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0035F754; /* jne: not equal / not zero */

loc_0035F735: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F73Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0035F73D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F74D; /* je: equal / zero */

loc_0035F744: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F74Bu); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_0035F74B: ;
    goto loc_0035F74F;

loc_0035F74D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0035F74F: ;
    MEM32(0x8FA278) = eax;

loc_0035F754: ;
    esi = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(0x7FE328)); /* movss */
    ecx = MEM32(ebp + 8);
    edx = eax;
    eax = MEM32(esi + 0xE0);
    esi = MEM32(esi + 0xE8);
    edi = MEM32(eax + 0x10);
    MEM32(esp + 0x10) = esi;
    esi = MEM32(eax + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0035F967; /* jle: less or equal (signed <=) */

loc_0035F784: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x24);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x118); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x114); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x110); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x164); /* comiss */
    if ((_fca > _fcb)) goto loc_0035F967; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x164)) */

loc_0035F7CF: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0035F7D9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0035F7D4: ;
    xmm1 = xmm0; /* movaps */
    ebx = edi;

loc_0035F7D9: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0035F784; /* jg: greater (signed >) */

loc_0035F7E3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F967; /* je: equal / zero */

loc_0035F7EB: ;
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035F806; /* je: equal / zero */

loc_0035F7F2: ;
    edi = MEM32(esi + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(edx + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0035F801; /* je: equal / zero */

loc_0035F7FC: ;
    MEM32(edi + 0x3C) = eax;
    goto loc_0035F80F;

loc_0035F801: ;
    MEM32(edx + 0x14) = eax;
    goto loc_0035F80F;

loc_0035F806: ;
    esi = MEM32(edx + 8);
    edi = esi + 0x70;
    MEM32(edx + 8) = edi;

loc_0035F80F: ;
    edi = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7FE2B4)); /* movss */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0xC) = edi;
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x24);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    ebx = MEM32(edi);
    edx = esi + 0x58;
    MEM32(edx) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(edx + 4) = ebx;
    edi = MEM32(edi + 8);
    MEM32(edx + 8) = edi;
    edx = MEM32(eax + 0xC);
    edi = MEM32(ebp + 0x14);
    MEM32(esi + 0x64) = edx;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x164)); /* movss */
    edx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x164); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x130)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x134)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x138)); /* movss */
    eax = esi + 0x28;
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm2.f[0]; /* movss */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0035F8E7; /* jne: not equal / not zero */

loc_0035F8D5: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi);
    MEM32(ecx) = edx;
    edx = MEM32(edi + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(edi + 8);
    goto loc_0035F928;

loc_0035F8E7: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x2C); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x30); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x34); /* subss */
    edx = MEM32(esp + 0x14);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x1C);

loc_0035F928: ;
    MEM32(ecx + 8) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x5C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    ecx = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, esi);
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0035F95Eu); RECOMP_ABI_CALL(0x00022751u, sub_00022751); /* call 0x00022751 */

loc_0035F95E: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0035F967: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0035FA10
 * Original: 0x0035FA10 - 0x0035FB0A (250 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FA10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x160)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x164)); /* movss */
    ecx = eax + 0x120;
    PUSH32(esp, esi);
    esi = eax + 0x50;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    edx = esi + 0x50;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(ecx + 8);
    MEM32(edx + 8) = edi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = esi + 0x60;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    MEMF(esi + 0xA0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(esi);
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    PUSH32(esp, 0x8FA320);
    ecx = esi;
    MEMF(esi + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAC) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0035FAA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035FAA5u); } /* indirect call */
    }

loc_0035FAA8: ;
    ecx = MEM32(esp + 0x1C);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035FAB8u); RECOMP_ABI_CALL(0x0001DD96u, sub_0001DD96); /* call 0x0001DD96 */

loc_0035FAB8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FAF9; /* je: equal / zero */

loc_0035FABF: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035FAD3u); RECOMP_ABI_CALL(0x0002EBBEu, sub_0002EBBE); /* call 0x0002EBBE */

loc_0035FAD3: ;
    ecx = MEM32(esp + 0x2C);
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035FAE8u); RECOMP_ABI_CALL(0x00016D84u, sub_00016D84); /* call 0x00016D84 */

loc_0035FAE8: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0035FAF1u); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FAF1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035FAF9: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0035FB02u); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FB02: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035FB50
 * Original: 0x0035FB50 - 0x0035FC4A (250 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FB50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x160)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x164)); /* movss */
    ecx = eax + 0x120;
    PUSH32(esp, esi);
    esi = eax + 0x50;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    edx = esi + 0x50;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(ecx + 8);
    MEM32(edx + 8) = edi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = esi + 0x60;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    MEMF(esi + 0xA0) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(esi);
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    PUSH32(esp, 0x8FA320);
    ecx = esi;
    MEMF(esi + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xAC) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0035FBE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0035FBE5u); } /* indirect call */
    }

loc_0035FBE8: ;
    ecx = MEM32(esp + 0x18);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0035FBF8u); RECOMP_ABI_CALL(0x0001DD96u, sub_0001DD96); /* call 0x0001DD96 */

loc_0035FBF8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FC39; /* je: equal / zero */

loc_0035FBFF: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035FC13u); RECOMP_ABI_CALL(0x0002EBBEu, sub_0002EBBE); /* call 0x0002EBBE */

loc_0035FC13: ;
    ecx = MEM32(esp + 0x2C);
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035FC28u); RECOMP_ABI_CALL(0x00016D84u, sub_00016D84); /* call 0x00016D84 */

loc_0035FC28: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0035FC31u); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FC31: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035FC39: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0035FC42u); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FC42: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035FC90
 * Original: 0x0035FC90 - 0x0035FC93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0035FC90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FC90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035FCA0
 * Original: 0x0035FCA0 - 0x0035FD12 (114 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FCA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035FCC3u); RECOMP_ABI_CALL(0x0002A938u, sub_0002A938); /* call 0x0002A938 */

loc_0035FCC3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FD04; /* je: equal / zero */

loc_0035FCCA: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035FCDFu); RECOMP_ABI_CALL(0x0002EBBEu, sub_0002EBBE); /* call 0x0002EBBE */

loc_0035FCDF: ;
    ecx = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035FCF4u); RECOMP_ABI_CALL(0x00016D84u, sub_00016D84); /* call 0x00016D84 */

loc_0035FCF4: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0035FCFDu); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FCFD: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035FD04: ;
    ecx = esp;
    PUSH32(esp, 0x0035FD0Cu); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FD0C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035FD30
 * Original: 0x0035FD30 - 0x0035FDA2 (114 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FD30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035FD53u); RECOMP_ABI_CALL(0x0002A938u, sub_0002A938); /* call 0x0002A938 */

loc_0035FD53: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FD94; /* je: equal / zero */

loc_0035FD5A: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035FD6Fu); RECOMP_ABI_CALL(0x0002EBBEu, sub_0002EBBE); /* call 0x0002EBBE */

loc_0035FD6F: ;
    ecx = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035FD84u); RECOMP_ABI_CALL(0x00016D84u, sub_00016D84); /* call 0x00016D84 */

loc_0035FD84: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0035FD8Du); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FD8D: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035FD94: ;
    ecx = esp;
    PUSH32(esp, 0x0035FD9Cu); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FD9C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035FDC0
 * Original: 0x0035FDC0 - 0x0035FE32 (114 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FDC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035FDE3u); RECOMP_ABI_CALL(0x0001DD96u, sub_0001DD96); /* call 0x0001DD96 */

loc_0035FDE3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FE24; /* je: equal / zero */

loc_0035FDEA: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035FDFFu); RECOMP_ABI_CALL(0x0002EBBEu, sub_0002EBBE); /* call 0x0002EBBE */

loc_0035FDFF: ;
    ecx = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035FE14u); RECOMP_ABI_CALL(0x00016D84u, sub_00016D84); /* call 0x00016D84 */

loc_0035FE14: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0035FE1Du); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FE1D: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035FE24: ;
    ecx = esp;
    PUSH32(esp, 0x0035FE2Cu); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FE2C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035FE50
 * Original: 0x0035FE50 - 0x0035FEC2 (114 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FE50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035FE73u); RECOMP_ABI_CALL(0x0001DD96u, sub_0001DD96); /* call 0x0001DD96 */

loc_0035FE73: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FEB4; /* je: equal / zero */

loc_0035FE7A: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035FE8Fu); RECOMP_ABI_CALL(0x0002EBBEu, sub_0002EBBE); /* call 0x0002EBBE */

loc_0035FE8F: ;
    ecx = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035FEA4u); RECOMP_ABI_CALL(0x00016D84u, sub_00016D84); /* call 0x00016D84 */

loc_0035FEA4: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0035FEADu); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FEAD: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035FEB4: ;
    ecx = esp;
    PUSH32(esp, 0x0035FEBCu); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FEBC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035FEE0
 * Original: 0x0035FEE0 - 0x0035FF52 (114 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FEE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035FF03u); RECOMP_ABI_CALL(0x000367A1u, sub_000367A1); /* call 0x000367A1 */

loc_0035FF03: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FF44; /* je: equal / zero */

loc_0035FF0A: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035FF1Fu); RECOMP_ABI_CALL(0x0002EBBEu, sub_0002EBBE); /* call 0x0002EBBE */

loc_0035FF1F: ;
    ecx = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035FF34u); RECOMP_ABI_CALL(0x00016D84u, sub_00016D84); /* call 0x00016D84 */

loc_0035FF34: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0035FF3Du); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FF3D: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035FF44: ;
    ecx = esp;
    PUSH32(esp, 0x0035FF4Cu); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FF4C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0035FF70
 * Original: 0x0035FF70 - 0x0035FFE2 (114 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035FF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0035FF70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035FF93u); RECOMP_ABI_CALL(0x000367A1u, sub_000367A1); /* call 0x000367A1 */

loc_0035FF93: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0035FFD4; /* je: equal / zero */

loc_0035FF9A: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0035FFAFu); RECOMP_ABI_CALL(0x0002EBBEu, sub_0002EBBE); /* call 0x0002EBBE */

loc_0035FFAF: ;
    ecx = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035FFC4u); RECOMP_ABI_CALL(0x00016D84u, sub_00016D84); /* call 0x00016D84 */

loc_0035FFC4: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0035FFCDu); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FFCD: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0035FFD4: ;
    ecx = esp;
    PUSH32(esp, 0x0035FFDCu); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_0035FFDC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00360000
 * Original: 0x00360000 - 0x0036001B (27 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00360000: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x54);
    MEM32(esp + 8) = ecx;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x50);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000315C6(); return; /* tail jmp 0x000315C6 */

}

/**
 * sub_00360030
 * Original: 0x00360030 - 0x00360040 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00360030: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x50);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_000315C6(); return; /* tail jmp 0x000315C6 */

}

/**
 * sub_00360050
 * Original: 0x00360050 - 0x00360075 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360050: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00360071u); RECOMP_ABI_CALL(0x000315C6u, sub_000315C6); /* call 0x000315C6 */

loc_00360071: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00360080
 * Original: 0x00360080 - 0x003600A5 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360080: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x54);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003600A1u); RECOMP_ABI_CALL(0x000315C6u, sub_000315C6); /* call 0x000315C6 */

loc_003600A1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003600B0
 * Original: 0x003600B0 - 0x003600C0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003600B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003600B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x54);
    MEM32(esp + 8) = ecx;
    g_seh_ebp = ebp; sub_000315C6(); return; /* tail jmp 0x000315C6 */

}

/**
 * sub_003600D0
 * Original: 0x003600D0 - 0x003600F2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003600D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003600D0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003600EEu); RECOMP_ABI_CALL(0x000315C6u, sub_000315C6); /* call 0x000315C6 */

loc_003600EE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00360100
 * Original: 0x00360100 - 0x00360177 (119 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00360100: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    eax = MEM32(ebp + 8);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(eax + 0x58);
    eax = MEM32(eax + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00360161; /* jle: less or equal (signed <=) */

loc_0036011C: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, edi);

loc_00360122: ;
    eax = MEM32(esp + 0x18);
    edi = MEM32(eax + 0x54);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = MEM32(eax + 0x58);
    if (CMP_LE(_fas, _fbs)) goto loc_0036014E; /* jle: less or equal (signed <=) */

loc_00360130: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00360142u); RECOMP_ABI_CALL(0x00015795u, sub_00015795); /* call 0x00015795 */

loc_00360142: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x170;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00360130; /* jne: not equal / not zero */

loc_0036014E: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x170;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_00360122; /* jne: not equal / not zero */

loc_0036015F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00360161: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00360171; /* jle: less or equal (signed <=) */

loc_0036016A: ;
    eax = MEM32(ebp);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00360171: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003601A0
 * Original: 0x003601A0 - 0x003601C4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003601A0(void)
{

loc_003601A0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x160);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x003601C3u); RECOMP_ABI_CALL(0x00018A53u, sub_00018A53); /* call 0x00018A53 */

loc_003601C3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003601D0
 * Original: 0x003601D0 - 0x003601F4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003601D0(void)
{

loc_003601D0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x160);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x003601F3u); RECOMP_ABI_CALL(0x00018A53u, sub_00018A53); /* call 0x00018A53 */

loc_003601F3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00360200
 * Original: 0x00360200 - 0x00360201 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360200(void)
{

loc_00360200: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00360210
 * Original: 0x00360210 - 0x00360216 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360210(void)
{

loc_00360210: ;
    eax = MEM32(0x8FE148);
    esp += 4; return; /* ret */

}

/**
 * sub_00360220
 * Original: 0x00360220 - 0x00360240 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360220: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = 0xFF;
    MEM8(eax + 0x10) = LO8(ecx);
    MEM8(eax + 0x11) = LO8(ecx);
    MEM8(eax + 0x12) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00360250
 * Original: 0x00360250 - 0x0036028C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360250: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x0036025Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0036025B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360284; /* je: equal / zero */

loc_00360262: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ebx;
    MEM8(eax + 0x10) = LO8(ebx);
    MEM8(eax + 0x11) = LO8(ebx);
    MEM8(eax + 0x12) = LO8(ebx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0xFF;
    MEM32(0x8FE148) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00360284: ;
    MEM32(0x8FE148) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003602A0
 * Original: 0x003602A0 - 0x003602B9 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003602A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003602A0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003602B3; /* je: equal / zero */

loc_003602AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003602B0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003602B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003602B3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003602C0
 * Original: 0x003602C0 - 0x003602F6 (54 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003602C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003602C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003602C7u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_003602C7: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003602D0;

    /* nop */

loc_003602D0: ;
    eax = ZX8(LO8(ebx));
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003602DBu); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_003602DB: ;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003602E5; /* je: equal / zero */

loc_003602E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003602F1; /* je: equal / zero */

loc_003602E5: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003602D0; /* jl: less (signed <) */

loc_003602EB: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003602F1: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00360310
 * Original: 0x00360310 - 0x0036031B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360310: ;
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00360320
 * Original: 0x00360320 - 0x0036032C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360320: ;
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00360330
 * Original: 0x00360330 - 0x0036033C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360330: ;
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00360340
 * Original: 0x00360340 - 0x0036034C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360340: ;
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00360350
 * Original: 0x00360350 - 0x0036035A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360350(void)
{

loc_00360350: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360360
 * Original: 0x00360360 - 0x0036036A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360360(void)
{

loc_00360360: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360370
 * Original: 0x00360370 - 0x003603C4 (84 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360370: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x11));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003603BD; /* jne: not equal / not zero */

loc_0036037D: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00360384u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00360384: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003603BD; /* jne: not equal / not zero */

loc_0036038B: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003603BD; /* je: equal / zero */

loc_00360391: ;
    PUSH32(esp, 0x00360396u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00360396: ;
    ebx = MEM32(esp + 0xC);
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003603A5u); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_003603A5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003603AF; /* jne: not equal / not zero */

loc_003603AA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003603B6; /* jne: not equal / not zero */

loc_003603AF: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003603B6: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003603BD: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003603E0
 * Original: 0x003603E0 - 0x00360456 (118 bytes, 41 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003603E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003603E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360451; /* je: equal / zero */

loc_003603ED: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003603FA; /* je: equal / zero */

loc_003603F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00360451; /* jne: not equal / not zero */

loc_003603FA: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036040Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036040D: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360429; /* je: equal / zero */

loc_00360419: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360429; /* je: equal / zero */

loc_0036041D: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82DD80);
    goto loc_00360433;

loc_00360429: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82DD50);

loc_00360433: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82DD24);
    PUSH32(esp, 0x00360443u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00360443: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x12) = 0;
    MEM32(esi + 4) = 0xFFFFFFFFu;

loc_00360451: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00360480
 * Original: 0x00360480 - 0x0036049D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360480: ;
    eax = MEM32(0x8FE148);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360492; /* je: equal / zero */

loc_00360489: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036048Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036048F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00360492: ;
    MEM32(0x8FE148) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003604B0
 * Original: 0x003604B0 - 0x003604D2 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003604B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003604B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003604D0; /* je: equal / zero */

loc_003604BA: ;
    PUSH32(esp, 0x003604BFu); RECOMP_ABI_CALL(0x000159D4u, sub_000159D4); /* call 0x000159D4 */

loc_003604BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003604CD; /* jne: not equal / not zero */

loc_003604C4: ;
    MEM8(esi + 0x12) = 0;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003604CD: ;
    MEM32(esi + 4) = eax;

loc_003604D0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003604E0
 * Original: 0x003604E0 - 0x00360523 (67 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003604E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003604E0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(eax + 0x12) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0036051D; /* je: equal / zero */

loc_003604F6: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036051D; /* jne: not equal / not zero */

loc_003604FC: ;
    eax = esp;
    edx = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0xB;
    MEM32(esp + 4) = 0x4B65AF5;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x0036051Du); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_0036051D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360540
 * Original: 0x00360540 - 0x003605FE (190 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360540: ;
    ecx = MEM32(esp + 4);
    eax = ZX16(MEM16(ecx + 0x44));
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_003605AA; /* je: equal / zero */

loc_0036054E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003605FC; /* jne: not equal / not zero */

loc_00360555: ;
    PUSH32(esp, 0x0036055Au); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_0036055A: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ecx + eax + 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x191);
    PUSH32(esp, 0x0036057Au); RECOMP_ABI_CALL(0x00505D60u, sub_00505D60); /* call 0x00505D60 */

loc_0036057A: ;
    eax = MEM32(esi);
    ecx = MEM32(0x8FE148);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00360590u); RECOMP_ABI_CALL(0x0001B64Fu, sub_0001B64F); /* call 0x0001B64F */

loc_00360590: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003605FC; /* je: equal / zero */

loc_00360594: ;
    ecx = MEM32(esi);
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FE148);
    PUSH32(esp, 0x003605A8u); RECOMP_ABI_CALL(0x000218CEu, sub_000218CE); /* call 0x000218CE */

loc_003605A8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003605AA: ;
    PUSH32(esp, 0x003605AFu); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_003605AF: ;
    eax = MEM32(eax);
    edx = eax;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx + eax + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x003605CDu); RECOMP_ABI_CALL(0x00505D60u, sub_00505D60); /* call 0x00505D60 */

loc_003605CD: ;
    ecx = MEM32(0x8FE148);
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003605FC; /* jne: not equal / not zero */

loc_003605DD: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003605FC; /* je: equal / zero */

loc_003605E6: ;
    PUSH32(esp, 0x003605EBu); RECOMP_ABI_CALL(0x000159D4u, sub_000159D4); /* call 0x000159D4 */

loc_003605EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003605F9; /* jne: not equal / not zero */

loc_003605F0: ;
    MEM8(esi + 0x12) = 0;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003605F9: ;
    MEM32(esi + 4) = eax;

loc_003605FC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00360630
 * Original: 0x00360630 - 0x0036065C (44 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360630(void)
{

loc_00360630: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(edx, MEM8(esp + 4));
    MEM32(ecx) = eax;
    SET_LO8(eax, MEM8(esp + 8));
    MEM8(ecx + 0x10) = LO8(edx);
    MEM8(ecx + 0x11) = LO8(eax);
    PUSH32(esp, 0x00360649u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00360649: ;
    edx = MEM32(eax + 0x1C);
    ecx = eax + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, 0x30897);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00360659u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00360656u); } /* indirect call */
    }

loc_00360659: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00360670
 * Original: 0x00360670 - 0x003606A8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360670: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00360678u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00360678: ;
    ecx = eax + 0x1C;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x30897);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00360685u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00360682u); } /* indirect call */
    }

loc_00360685: ;
    SET_LO8(ecx, MEM8(esi + 0x10));
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esi) = 0;
    MEM32(esi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003606A6; /* je: equal / zero */

loc_00360698: ;
    MEM8(esi + 0x12) = 0;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = 0xFF;

loc_003606A6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003606C0
 * Original: 0x003606C0 - 0x003606D9 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003606C0(void)
{

loc_003606C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003606CDu); RECOMP_ABI_CALL(0x00031F76u, sub_00031F76); /* call 0x00031F76 */

loc_003606CD: ;
    MEM32(esi) = 0x82F49C;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003606E0
 * Original: 0x003606E0 - 0x003606E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003606E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003606E0: ;
    g_seh_ebp = ebp; sub_00017301(); return; /* tail jmp 0x00017301 */

}

/**
 * sub_003606F0
 * Original: 0x003606F0 - 0x003606F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003606F0(void)
{

loc_003606F0: ;
    SET_LO8(eax, MEM8(ecx + 8));
    esp += 4; return; /* ret */

}

/**
 * sub_00360700
 * Original: 0x00360700 - 0x00360719 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360700(void)
{

loc_00360700: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0036070Du); RECOMP_ABI_CALL(0x00031F76u, sub_00031F76); /* call 0x00031F76 */

loc_0036070D: ;
    MEM32(esi) = 0x82F4AC;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360720
 * Original: 0x00360720 - 0x00360742 (34 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360720: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    edx = esp;
    PUSH32(esp, edx);
    MEM32(esp + 4) = 0x48D8683;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0036073Cu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_0036073C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360750
 * Original: 0x00360750 - 0x00360755 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00360750: ;
    g_seh_ebp = ebp; sub_00017301(); return; /* tail jmp 0x00017301 */

}

/**
 * sub_00360760
 * Original: 0x00360760 - 0x003607BA (90 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360760(void)
{

loc_00360760: ;
    eax = ecx;
    edx = 0x40;
    ecx = 0x100;
    MEM32(eax) = 0x200;
    MEM32(eax + 4) = 0x200;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = 0x180;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = 0x180;
    MEM32(eax + 0x24) = 0x20;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0x400;
    MEM32(eax + 0x30) = 0x80;
    MEM32(eax + 0x34) = 8;
    MEM8(eax + 0x38) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003607D0
 * Original: 0x003607D0 - 0x003607D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003607D0(void)
{

loc_003607D0: ;
    SET_LO8(eax, MEM8(ecx + 0xFC));
    esp += 4; return; /* ret */

}

/**
 * sub_003607E0
 * Original: 0x003607E0 - 0x003607E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003607E0(void)
{

loc_003607E0: ;
    eax = ecx + 0xCC;
    esp += 4; return; /* ret */

}

/**
 * sub_003607F0
 * Original: 0x003607F0 - 0x003607FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003607F0(void)
{

loc_003607F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xF5) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360800
 * Original: 0x00360800 - 0x0036080A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360800(void)
{

loc_00360800: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x54) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360810
 * Original: 0x00360810 - 0x00360822 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360810(void)
{

loc_00360810: ;
    SET_LO8(eax, MEM8(esp + 8));
    edx = MEM32(esp + 4);
    MEM8(edx + ecx + 0x134) = LO8(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00360830
 * Original: 0x00360830 - 0x0036084D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360830: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0xD8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00360840: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00360840; /* jne: not equal / not zero */

loc_0036084A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360860
 * Original: 0x00360860 - 0x0036087D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360860: ;
    eax = MEM32(esp + 4);
    edx = ecx + 0x98;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00360870: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00360870; /* jne: not equal / not zero */

loc_0036087A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360890
 * Original: 0x00360890 - 0x0036089D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360890(void)
{

loc_00360890: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3F8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003608A0
 * Original: 0x003608A0 - 0x003608AD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003608A0(void)
{

loc_003608A0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x13D) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003608B0
 * Original: 0x003608B0 - 0x003608C2 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003608B0(void)
{

loc_003608B0: ;
    SET_LO8(eax, MEM8(esp + 8));
    edx = MEM32(esp + 4);
    MEM8(edx + ecx + 0x13E) = LO8(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003608D0
 * Original: 0x003608D0 - 0x003608E2 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003608D0(void)
{

loc_003608D0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x194) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003608F0
 * Original: 0x003608F0 - 0x00360902 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003608F0(void)
{

loc_003608F0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x154) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00360910
 * Original: 0x00360910 - 0x00360922 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360910(void)
{

loc_00360910: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x15C) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00360930
 * Original: 0x00360930 - 0x00360942 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360930(void)
{

loc_00360930: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x164) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00360950
 * Original: 0x00360950 - 0x00360962 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360950(void)
{

loc_00360950: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x16C) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00360970
 * Original: 0x00360970 - 0x00360982 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360970(void)
{

loc_00360970: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x174) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00360990
 * Original: 0x00360990 - 0x003609A2 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360990(void)
{

loc_00360990: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x17C) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003609B0
 * Original: 0x003609B0 - 0x003609C2 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003609B0(void)
{

loc_003609B0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x184) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003609D0
 * Original: 0x003609D0 - 0x003609E2 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003609D0(void)
{

loc_003609D0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x43C) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003609F0
 * Original: 0x003609F0 - 0x00360A02 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003609F0(void)
{

loc_003609F0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x410) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00360A10
 * Original: 0x00360A10 - 0x00360A17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360A10(void)
{

loc_00360A10: ;
    eax = ecx + 0x118;
    esp += 4; return; /* ret */

}

/**
 * sub_00360A20
 * Original: 0x00360A20 - 0x00360A24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360A20(void)
{

loc_00360A20: ;
    eax = MEM32(ecx + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_00360A30
 * Original: 0x00360A30 - 0x00360A3E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360A30(void)
{

loc_00360A30: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0x134));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360A50
 * Original: 0x00360A50 - 0x00360A57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360A50(void)
{

loc_00360A50: ;
    eax = ecx + 0xD8;
    esp += 4; return; /* ret */

}

/**
 * sub_00360A60
 * Original: 0x00360A60 - 0x00360A64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360A60(void)
{

loc_00360A60: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_00360A70
 * Original: 0x00360A70 - 0x00360A7E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360A70(void)
{

loc_00360A70: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x12C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360A90
 * Original: 0x00360A90 - 0x00360A97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360A90(void)
{

loc_00360A90: ;
    eax = MEM32(ecx + 0x3F8);
    esp += 4; return; /* ret */

}

/**
 * sub_00360AA0
 * Original: 0x00360AA0 - 0x00360AA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360AA0(void)
{

loc_00360AA0: ;
    eax = MEM32(ecx + 0x50);
    esp += 4; return; /* ret */

}

/**
 * sub_00360AB0
 * Original: 0x00360AB0 - 0x00360AB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360AB0(void)
{

loc_00360AB0: ;
    SET_LO8(eax, MEM8(ecx + 0x13C));
    esp += 4; return; /* ret */

}

/**
 * sub_00360AC0
 * Original: 0x00360AC0 - 0x00360AC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360AC0(void)
{

loc_00360AC0: ;
    SET_LO8(eax, MEM8(ecx + 0x13D));
    esp += 4; return; /* ret */

}

/**
 * sub_00360AD0
 * Original: 0x00360AD0 - 0x00360ADE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360AD0(void)
{

loc_00360AD0: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + ecx + 0x13E));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360AF0
 * Original: 0x00360AF0 - 0x00360AFE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360AF0(void)
{

loc_00360AF0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x18C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360B10
 * Original: 0x00360B10 - 0x00360B1E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360B10(void)
{

loc_00360B10: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x194);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360B30
 * Original: 0x00360B30 - 0x00360B3E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360B30(void)
{

loc_00360B30: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x154);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360B50
 * Original: 0x00360B50 - 0x00360B5E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360B50(void)
{

loc_00360B50: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x15C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360B70
 * Original: 0x00360B70 - 0x00360B7E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360B70(void)
{

loc_00360B70: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x164);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360B90
 * Original: 0x00360B90 - 0x00360B9E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360B90(void)
{

loc_00360B90: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x16C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360BB0
 * Original: 0x00360BB0 - 0x00360BBE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360BB0(void)
{

loc_00360BB0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x174);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360BD0
 * Original: 0x00360BD0 - 0x00360BDE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360BD0(void)
{

loc_00360BD0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x17C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360BF0
 * Original: 0x00360BF0 - 0x00360BFE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360BF0(void)
{

loc_00360BF0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x184);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360C10
 * Original: 0x00360C10 - 0x00360C17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360C10(void)
{

loc_00360C10: ;
    eax = MEM32(ecx + 0x3EC);
    esp += 4; return; /* ret */

}

/**
 * sub_00360C20
 * Original: 0x00360C20 - 0x00360C27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360C20(void)
{

loc_00360C20: ;
    eax = MEM32(ecx + 0x3F4);
    esp += 4; return; /* ret */

}

/**
 * sub_00360C30
 * Original: 0x00360C30 - 0x00360C37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360C30(void)
{

loc_00360C30: ;
    eax = MEM32(ecx + 0x40C);
    esp += 4; return; /* ret */

}

/**
 * sub_00360C40
 * Original: 0x00360C40 - 0x00360C43 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360C40(void)
{

loc_00360C40: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360C50
 * Original: 0x00360C50 - 0x00360CAC (92 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360C50: ;
    eax = 0x100C;
    PUSH32(esp, 0x00360C5Au); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_00360C5A: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360CA2; /* je: equal / zero */

loc_00360C64: ;
    eax = MEM32(esp + 0x1014);
    PUSH32(esp, 0x1000);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1020);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00360C85u); RECOMP_ABI_CALL(0x00017905u, sub_00017905); /* call 0x00017905 */

loc_00360C85: ;
    ecx = MEM32(esi + 0x1C);
    eax = esp + 4;
    edx = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x4B64ADB;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x00360CA2u); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00360CA2: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00360CD0
 * Original: 0x00360CD0 - 0x00360D66 (150 bytes, 49 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360CD0: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 8;
    PUSH32(esp, 0x00360CE3u); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_00360CE3: ;
    PUSH32(esp, 0x82F4BC);
    PUSH32(esp, 0x00360CEDu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00360CED: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00360CF8u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00360CF8: ;
    ecx = eax;
    PUSH32(esp, 0x00360CFFu); RECOMP_ABI_CALL(0x0002B3D8u, sub_0002B3D8); /* call 0x0002B3D8 */

loc_00360CFF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00360D19; /* je: equal / zero */

loc_00360D03: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00360D10u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00360D10: ;
    ecx = eax;
    PUSH32(esp, 0x00360D17u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00360D17: ;
    goto loc_00360D2F;

loc_00360D19: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00360D20;

    /* nop */

loc_00360D20: ;
    SET_LO8(ecx, MEM8(eax + 0x82F4BC));
    MEM8(esp + eax + 0x14) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00360D20; /* jne: not equal / not zero */

loc_00360D2F: ;
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6530);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00360D44u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00360D44: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0xF);
    ecx = edi;
    PUSH32(esp, 0x00360D52u); RECOMP_ABI_CALL(0x0002A1DBu, sub_0002A1DB); /* call 0x0002A1DB */

loc_00360D52: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00360D5Bu); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_00360D5B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360D90
 * Original: 0x00360D90 - 0x00360DBB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360D90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x00360D9Fu); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_00360D9F: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    ecx = esi;
    PUSH32(esp, 0x00360DADu); RECOMP_ABI_CALL(0x0002A1DBu, sub_0002A1DB); /* call 0x0002A1DB */

loc_00360DAD: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00360DB6u); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_00360DB6: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00360DD0
 * Original: 0x00360DD0 - 0x00360DFB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360DD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x00360DDFu); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_00360DDF: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    ecx = esi;
    PUSH32(esp, 0x00360DEDu); RECOMP_ABI_CALL(0x0002A1DBu, sub_0002A1DB); /* call 0x0002A1DB */

loc_00360DED: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00360DF6u); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_00360DF6: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00360E10
 * Original: 0x00360E10 - 0x00360E72 (98 bytes, 30 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360E10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x00360E1Bu); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_00360E1B: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xAD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xAD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00360E3E; /* je: equal / zero */

loc_00360E26: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00360E35; /* je: equal / zero */

loc_00360E29: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00360E53; /* jne: not equal / not zero */

loc_00360E2C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82F508);
    goto loc_00360E45;

loc_00360E35: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82F4F4);
    goto loc_00360E45;

loc_00360E3E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82F4E0);

loc_00360E45: ;
    ecx = esp + 8;
    PUSH32(esp, 0x7CFB5C);
    PUSH32(esp, 0x00360E53u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00360E53: ;
    ecx = MEM32(0x9001DC);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x00360E64u); RECOMP_ABI_CALL(0x0002A1DBu, sub_0002A1DB); /* call 0x0002A1DB */

loc_00360E64: ;
    ecx = esp;
    PUSH32(esp, 0x00360E6Cu); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_00360E6C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360E90
 * Original: 0x00360E90 - 0x00360E97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360E90(void)
{

loc_00360E90: ;
    eax = MEM32(ecx + 0x21C);
    esp += 4; return; /* ret */

}

/**
 * sub_00360EA0
 * Original: 0x00360EA0 - 0x00360EA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360EA0(void)
{

loc_00360EA0: ;
    eax = MEM32(ecx + 0x220);
    esp += 4; return; /* ret */

}

/**
 * sub_00360EB0
 * Original: 0x00360EB0 - 0x00360EBD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360EB0(void)
{

loc_00360EB0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x214) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360EC0
 * Original: 0x00360EC0 - 0x00360EC9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360EC0(void)
{

loc_00360EC0: ;
    eax = ecx;
    MEM32(eax) = 0x82F528;
    esp += 4; return; /* ret */

}

/**
 * sub_00360ED0
 * Original: 0x00360ED0 - 0x00360ED7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360ED0(void)
{

loc_00360ED0: ;
    MEM32(ecx) = 0x82F528;
    esp += 4; return; /* ret */

}

/**
 * sub_00360EE0
 * Original: 0x00360EE0 - 0x00360EFF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00360EE0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F528;
    if (TEST_Z(_fa, _fb)) goto loc_00360EF9; /* je: equal / zero */

loc_00360EF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00360EF6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00360EF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00360EF9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00360F10
 * Original: 0x00360F10 - 0x00360F11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00360F10(void)
{

loc_00360F10: ;
    esp += 4; return; /* ret */

}
