/**
 * nhl_07_recomp - Recompiled code chunk 141
 * Functions: 250 (0x0024E7B0 - 0x00254320)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0024E7B0
 * Original: 0x0024E7B0 - 0x0024E7C9 (25 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E7B0(void)
{

loc_0024E7B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 2 + 9;
    eax = edx + eax * 4;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + eax * 4) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0024E7D0
 * Original: 0x0024E7D0 - 0x0024E826 (86 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024E7D0: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    PUSH32(esp, esi);
    esi = 8;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024E7EB; /* jl: less (signed <) */

loc_0024E7E8: ;
    esi = edx + 1;

loc_0024E7EB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0024E822; /* jge: greater or equal (signed >=) */

loc_0024E7F0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0024E822; /* jge: greater or equal (signed >=) */

loc_0024E7F4: ;
    eax = edx + edx * 2 + 9;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx + 0x40;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0024E804: ;
    ecx = edi;
    edx = 0xC;
    goto loc_0024E810;

    /* nop */

loc_0024E810: ;
    ebx = MEM32(ecx);
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024E810; /* jne: not equal / not zero */

loc_0024E81D: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024E804; /* jne: not equal / not zero */

loc_0024E820: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0024E822: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E840
 * Original: 0x0024E840 - 0x0024E850 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024E840: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2 + 9;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E860
 * Original: 0x0024E860 - 0x0024E86B (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E860(void)
{

loc_0024E860: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x40);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E870
 * Original: 0x0024E870 - 0x0024E8A7 (55 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024E870: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x8FA488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E8A4; /* je: equal / zero */

loc_0024E87E: ;
    PUSH32(esp, esi);
    esi = edx + edx;
    SET_LO8(edx, MEM8(esi + ecx + 0x21C));
    MEM8(ecx + eax * 2 + 0x21C) = LO8(edx);
    SET_LO8(edx, MEM8(esi + ecx + 0x21D));
    MEM8(ecx + eax * 2 + 0x21D) = LO8(edx);
    MEM32(0x8FA488) = eax;
    POP32(esp, esi);

loc_0024E8A4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E8C0
 * Original: 0x0024E8C0 - 0x0024E90A (74 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E8C0(void)
{

loc_0024E8C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x40);
    MEM32(esi) = 0x7FE8B8;
    PUSH32(esp, 0x0024E8D1u); RECOMP_ABI_CALL(0x0059E46Eu, sub_0059E46E); /* call 0x0059E46E */

loc_0024E8D1: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    eax = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0024E8E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024E8E2u); } /* indirect call */
    }

loc_0024E8E5: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 4) = 0;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0024E901u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024E8FEu); } /* indirect call */
    }

loc_0024E901: ;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024E920
 * Original: 0x0024E920 - 0x0024E95A (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024E920: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x0024E92Bu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0024E92B: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0024E951; /* jle: less or equal (signed <=) */

loc_0024E943: ;
    edx = MEM32(esi + 8);
    MEM32(edx + eax * 4) = ecx;
    edx = MEM32(esi + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024E943; /* jl: less (signed <) */

loc_0024E951: ;
    ecx = MEM32(esi + 0x40);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_0024E970
 * Original: 0x0024E970 - 0x0024E9C3 (83 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024E970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x40);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0024E97Eu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0024E97E: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024E9B4; /* jle: less or equal (signed <=) */

loc_0024E985: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    PUSH32(esp, 0x8C);
    PUSH32(esp, eax);
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024E9A1u); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_0024E9A1: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x10)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x10))); }
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, 1);
    MEM32(esi + 0x18) = edx;

loc_0024E9B4: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x0024E9BCu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0024E9BC: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024E9E0
 * Original: 0x0024E9E0 - 0x0024EA28 (72 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024E9E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0024E9ECu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0024E9EC: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi + 8);
    eax = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EA17; /* je: equal / zero */

loc_0024E9FB: ;
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x40);
    edi = eax;
    PUSH32(esp, 0x0024EA10u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0024EA10: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0024EA17: ;
    ecx = MEM32(esi + 0x40);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0024EA21u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0024EA21: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EA40
 * Original: 0x0024EA40 - 0x0024EABF (127 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024EA40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x40);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0024EA4Fu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0024EA4F: ;
    eax = MEM32(esi + 8);
    ebp = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x18);
    ecx = eax + ebp * 4;
    eax = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EAAF; /* je: equal / zero */

loc_0024EA62: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x10)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x10))); }
    MEM32(ecx) = edx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EAA9; /* je: equal / zero */

loc_0024EA76: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EAAC; /* jne: not equal / not zero */

loc_0024EA7B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024EAA0; /* jle: less or equal (signed <=) */

loc_0024EA83: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EAAC; /* jne: not equal / not zero */

loc_0024EA87: ;
    eax = MEM32(esi + 8);
    edi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + ecx * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EA94; /* jne: not equal / not zero */

loc_0024EA92: ;
    SET_LO8(edx, 1);

loc_0024EA94: ;
    eax = MEM32(esi + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024EA83; /* jl: less (signed <) */

loc_0024EA9C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EAAC; /* jne: not equal / not zero */

loc_0024EAA0: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + ebp * 4);
    MEM32(esi + 0x1C) = edx;

loc_0024EAA9: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0024EAAC: ;
    SET_LO8(ebx, 1);
    POP32(esp, edi);

loc_0024EAAF: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x0024EAB7u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0024EAB7: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EAE0
 * Original: 0x0024EAE0 - 0x0024EB02 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024EAE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, 0x0024EAECu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0024EAEC: ;
    ecx = MEM32(edi + 0xC);
    esi = MEM32(edi + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi + 0x40);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0024EAFDu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0024EAFD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024EB10
 * Original: 0x0024EB10 - 0x0024EB35 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024EB10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x0024EB1Cu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0024EB1C: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    ecx = MEM32(esi + 0x40);
    SET_LO8(ebx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    PUSH32(esp, 0x0024EB2Eu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0024EB2E: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EB40
 * Original: 0x0024EB40 - 0x0024EB44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EB40(void)
{

loc_0024EB40: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0024EB50
 * Original: 0x0024EB50 - 0x0024EB53 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EB50(void)
{

loc_0024EB50: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024EB60
 * Original: 0x0024EB60 - 0x0024EB64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EB60(void)
{

loc_0024EB60: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0024EB70
 * Original: 0x0024EB70 - 0x0024EB79 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EB70(void)
{

loc_0024EB70: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EB80
 * Original: 0x0024EB80 - 0x0024EB8A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EB80(void)
{

loc_0024EB80: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EB90
 * Original: 0x0024EB90 - 0x0024EB9B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EB90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024EB90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0024EBA0
 * Original: 0x0024EBA0 - 0x0024EBCB (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024EBA0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EBC3; /* je: equal / zero */

loc_0024EBBB: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_0024EBC3: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EBE0
 * Original: 0x0024EBE0 - 0x0024EC06 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EBE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024EBE0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax) = LO16(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEM8(eax + 0xA) = LO8(ecx);
    MEM8(eax + 0xB) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024EC10
 * Original: 0x0024EC10 - 0x0024EC2F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024EC10: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FE860;
    if (TEST_Z(_fa, _fb)) goto loc_0024EC29; /* je: equal / zero */

loc_0024EC20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0024EC26u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0024EC26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024EC29: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EC40
 * Original: 0x0024EC40 - 0x0024EC77 (55 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024EC40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(0x8FA488);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + edi * 2;

loc_0024EC52: ;
    ebx = ZX8(MEM8(edx + eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EC68; /* je: equal / zero */

loc_0024EC5A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024EC52; /* jl: less (signed <) */

loc_0024EC60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0024EC68: ;
    eax = eax + edi * 2;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + ecx) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EC90
 * Original: 0x0024EC90 - 0x0024ECCB (59 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024EC90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x8C2200);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024ECC3; /* jle: less or equal (signed <=) */

loc_0024EC9F: ;
    esi = MEM32(esp + 0x10);

loc_0024ECA3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024ECA5: ;
    ebx = ZX8(MEM8(ecx + eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ECBB; /* je: equal / zero */

loc_0024ECAD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024ECA5; /* jl: less (signed <) */

loc_0024ECB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0024ECBB: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024ECA3; /* jl: less (signed <) */

loc_0024ECC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024ECE0
 * Original: 0x0024ECE0 - 0x0024ED1B (59 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024ECE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024ECE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x8C2200);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024ED0B; /* jle: less or equal (signed <=) */

loc_0024ECEF: ;
    esi = MEM32(esp + 0x10);

loc_0024ECF3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024ECF5: ;
    ebx = ZX8(MEM8(ecx + eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ED13; /* je: equal / zero */

loc_0024ECFD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024ECF5; /* jl: less (signed <) */

loc_0024ED03: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024ECF3; /* jl: less (signed <) */

loc_0024ED0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0024ED13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024ED30
 * Original: 0x0024ED30 - 0x0024ED37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024ED30(void)
{

loc_0024ED30: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0024ED40
 * Original: 0x0024ED40 - 0x0024ED7F (63 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024ED40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024ED40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0024ED4Cu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0024ED4C: ;
    eax = MEM32(esi + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ED70; /* je: equal / zero */

loc_0024ED56: ;
    ecx = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x40);
    edi = eax;
    PUSH32(esp, 0x0024ED6Bu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0024ED6B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0024ED70: ;
    ecx = MEM32(esi + 0x40);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0024ED7Au); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0024ED7A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024ED90
 * Original: 0x0024ED90 - 0x0024ED98 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024ED90(void)
{

loc_0024ED90: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0024ED97u); RECOMP_ABI_CALL(0x000288AEu, sub_000288AE); /* call 0x000288AE */

loc_0024ED97: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024EDA0
 * Original: 0x0024EDA0 - 0x0024EDB2 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EDA0(void)
{

loc_0024EDA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 2;
    PUSH32(esp, 0x0024EDABu); RECOMP_ABI_CALL(0x00022DAFu, sub_00022DAF); /* call 0x00022DAF */

loc_0024EDAB: ;
    MEM8(esi) = 0x28;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024EDC0
 * Original: 0x0024EDC0 - 0x0024EE09 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024EDC0: ;
    eax = MEM32(0x8FA48C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EE08; /* je: equal / zero */

loc_0024EDC9: ;
    ecx = MEM32(0x8FA490);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EDE4; /* je: equal / zero */

loc_0024EDD3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0024EDDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024EDD7u); } /* indirect call */
    }

loc_0024EDDA: ;
    MEM32(0x8FA490) = 0;

loc_0024EDE4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0024EDEBu); RECOMP_ABI_CALL(0x0002C64Du, sub_0002C64D); /* call 0x0002C64D */

loc_0024EDEB: ;
    ecx = MEM32(0x8FA48C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EDFE; /* je: equal / zero */

loc_0024EDF8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0024EDFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024EDFCu); } /* indirect call */
    }

loc_0024EDFE: ;
    MEM32(0x8FA48C) = 0;

loc_0024EE08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024EE20
 * Original: 0x0024EE20 - 0x0024EE5C (60 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024EE20: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FE874;
    eax = esi + 0x544;
    ecx = 8;

loc_0024EE34: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x7FE860;
    if ((_fa != 0)) goto loc_0024EE34; /* jne: not equal / not zero */

loc_0024EE40: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x7FE824;
    if (TEST_Z(_fa, _fb)) goto loc_0024EE56; /* je: equal / zero */

loc_0024EE4D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0024EE53u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0024EE53: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024EE56: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EE70
 * Original: 0x0024EE70 - 0x0024EE74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EE70(void)
{

loc_0024EE70: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0024EE80
 * Original: 0x0024EE80 - 0x0024EE84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EE80(void)
{

loc_0024EE80: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0024EE90
 * Original: 0x0024EE90 - 0x0024EEB1 (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0024EE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024EE90: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EEAC; /* je: equal / zero */

loc_0024EE97: ;
    ecx = MEM32(esp + 4);
    goto loc_0024EEA0;

    /* nop */

loc_0024EEA0: ;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EEAE; /* je: equal / zero */

loc_0024EEA5: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EEA0; /* jne: not equal / not zero */

loc_0024EEAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024EEAE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EEC0
 * Original: 0x0024EEC0 - 0x0024EEFA (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024EEC0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EEF8; /* je: equal / zero */

loc_0024EECA: ;
    /* nop */

loc_0024EED0: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xFF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024EEF1; /* jne: not equal / not zero */

loc_0024EED8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EEEF; /* je: equal / zero */

loc_0024EEDC: ;
    edx = MEM32(eax + 0x48);
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024EEF1; /* jle: less or equal (signed <=) */

loc_0024EEEF: ;
    eax = esi;

loc_0024EEF1: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EED0; /* jne: not equal / not zero */

loc_0024EEF8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024EF10
 * Original: 0x0024EF10 - 0x0024EF96 (134 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024EF10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0024EF26u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0024EF26: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0024EF2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024EF2Au); } /* indirect call */
    }

loc_0024EF2D: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024EF34: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024EF36: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0024EF44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024EF41u); } /* indirect call */
    }

loc_0024EF44: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024EF68; /* jne: not equal / not zero */

loc_0024EF4D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EF66; /* je: equal / zero */

loc_0024EF52: ;
    edx = eax;
    ecx = esi;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024EF68; /* jle: less or equal (signed <=) */

loc_0024EF66: ;
    esi = eax;

loc_0024EF68: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024EF36; /* jl: less (signed <) */

loc_0024EF6E: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024EF34; /* jl: less (signed <) */

loc_0024EF74: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EF8C; /* je: equal / zero */

loc_0024EF7F: ;
    /* nop */

loc_0024EF80: ;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EF8E; /* je: equal / zero */

loc_0024EF85: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EF80; /* jne: not equal / not zero */

loc_0024EF8C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024EF8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024EFC0
 * Original: 0x0024EFC0 - 0x0024EFE1 (33 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EFC0(void)
{

loc_0024EFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x18) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0024EFCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024EFCCu); } /* indirect call */
    }

loc_0024EFCF: ;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024EFF0
 * Original: 0x0024EFF0 - 0x0024F169 (377 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024EFF0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0024EFFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024EFF8u); } /* indirect call */
    }

loc_0024EFFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F164; /* je: equal / zero */

loc_0024F003: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0024F00Fu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0024F00F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F138; /* je: equal / zero */

loc_0024F017: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0024F024u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0024F024: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0024F02Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F028u); } /* indirect call */
    }

loc_0024F02B: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x18) = ebp;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0024F050;

loc_0024F03D: ;
    eax = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0024F050;

loc_0024F045: ;
    eax = MEM32(esp + 0x14);
    /* nop */

loc_0024F050: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0024F062u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F05Fu); } /* indirect call */
    }

loc_0024F062: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F113; /* je: equal / zero */

loc_0024F06F: ;
    esi = MEM32(ebx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F113; /* je: equal / zero */

loc_0024F07A: ;
    /* nop */

loc_0024F080: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F091; /* je: equal / zero */

loc_0024F085: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F080; /* jne: not equal / not zero */

loc_0024F08C: ;
    goto loc_0024F113;

loc_0024F091: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x224);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0024F0EA; /* jg: greater (signed >) */

loc_0024F0A0: ;
    _fa = (uint32_t)(MEM32(eax + 0x218)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x218), 2 (32-bit) */
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0024F0CA; /* jne: not equal / not zero */

loc_0024F0AE: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0024F0B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F0AEu); } /* indirect call */
    }

loc_0024F0B1: ;
    ecx = edi + ebp;
    eax = eax + ecx * 8 + 0xE;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = 0;
    SET_LO16(edx, MEM16(eax));
    SET_LO16(edx, LO16(edx) ^ MEM16(esi + 0x18));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    goto loc_0024F109;

loc_0024F0CA: ;
    eax = MEM32(esi);
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0024F0D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F0D0u); } /* indirect call */
    }

loc_0024F0D3: ;
    ebp = MEM32(esp + 0x18);
    ecx = edi + ebp;
    edx = eax + ecx * 8 + 0xE;
    eax = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0024F0E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F0E5u); } /* indirect call */
    }

loc_0024F0E8: ;
    goto loc_0024F113;

loc_0024F0EA: ;
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0024F0F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F0EFu); } /* indirect call */
    }

loc_0024F0F2: ;
    ecx = edi + ebp;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0x18));
    eax = eax + ecx * 8 + 0xE;
    MEM32(esi + 0x14) = 0;
    SET_LO16(edx, LO16(edx) ^ MEM16(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */

loc_0024F109: ;
    edx = edx & 0x1000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + 0x18) = MEM16(esi + 0x18) ^ LO16(edx);
    _fa = (uint32_t)(MEM16(esi + 0x18)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */

loc_0024F113: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024F045; /* jl: less (signed <) */

loc_0024F11D: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 6;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xC (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0024F03D; /* jl: less (signed <) */

loc_0024F136: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0024F138: ;
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0024F140u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F13Du); } /* indirect call */
    }

loc_0024F140: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F163; /* je: equal / zero */

loc_0024F144: ;
    _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1D;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 2;
    /* nop */

loc_0024F150: ;
    SET_LO8(ecx, MEM8(eax + -1));
    MEM8(ebx + -1) = LO8(ecx);
    SET_LO8(edx, MEM8(eax));
    MEM8(ebx) = LO8(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024F150; /* jne: not equal / not zero */

loc_0024F163: ;
    POP32(esp, esi);

loc_0024F164: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024F1D0
 * Original: 0x0024F1D0 - 0x0024F1F5 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F1D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0024F1D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F1D5u); } /* indirect call */
    }

loc_0024F1D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024F1F3; /* jbe: below or equal (unsigned <=) */

loc_0024F1DC: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 8) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0024F1EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F1E8u); } /* indirect call */
    }

loc_0024F1EB: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00026CCA(); return; /* tail jmp 0x00026CCA */

loc_0024F1F3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024F200
 * Original: 0x0024F200 - 0x0024F209 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F200(void)
{

loc_0024F200: ;
    eax = ecx;
    MEM32(eax) = 0x7FE8DC;
    esp += 4; return; /* ret */

}

/**
 * sub_0024F210
 * Original: 0x0024F210 - 0x0024F213 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F210(void)
{

loc_0024F210: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F220
 * Original: 0x0024F220 - 0x0024F23B (27 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F220: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x346D39FC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x346D39FC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F238; /* jne: not equal / not zero */

loc_0024F22C: ;
    eax = MEM32(eax + 4);
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_0024F238: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F250
 * Original: 0x0024F250 - 0x0024F2C0 (112 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F250(void)
{

loc_0024F250: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x7FE8E8;
    PUSH32(esp, 0x0024F25Fu); RECOMP_ABI_CALL(0x00014E4Eu, sub_00014E4E); /* call 0x00014E4E */

loc_0024F25F: ;
    ecx = eax;
    PUSH32(esp, 0x0024F266u); RECOMP_ABI_CALL(0x0001E755u, sub_0001E755); /* call 0x0001E755 */

loc_0024F266: ;
    ecx = MEM32(esi + 0x2E0);
    MEM32(esi + 0x2A0) = 0x7FE8B8;
    PUSH32(esp, 0x0024F27Bu); RECOMP_ABI_CALL(0x0059E46Eu, sub_0059E46E); /* call 0x0059E46E */

loc_0024F27B: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    eax = MEM32(esi + 0x2A4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0024F292u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F28Fu); } /* indirect call */
    }

loc_0024F292: ;
    eax = MEM32(esi + 0x2A8);
    MEM32(esi + 0x2A4) = 0;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0024F2B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F2B1u); } /* indirect call */
    }

loc_0024F2B4: ;
    MEM32(esi + 0x2A8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024F2E0
 * Original: 0x0024F2E0 - 0x0024F3A6 (198 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F2E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = ecx;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x0024F2F2u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0024F2F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F3A0; /* je: equal / zero */

loc_0024F2FA: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0024F309u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0024F309: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0024F310u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F30Du); } /* indirect call */
    }

loc_0024F310: ;
    esi = MEM32(esp + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax;
    MEM32(esp + 0x18) = edi;
    MEM8(esi + 1) = 0;
    MEM8(esi + 2) = 0;
    MEM8(esi + 3) = 0;
    MEM8(esi + 4) = 0;
    MEM16(esi + 6) = LO16(ebx);
    MEM16(esi + 8) = LO16(ebx);
    MEM8(esi) = 0x6E;
    MEM32(esp + 0x20) = ebx;
    goto loc_0024F340;

    /* nop */

loc_0024F340: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024F342: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0024F354u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F351u); } /* indirect call */
    }

loc_0024F354: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024F385; /* jne: not equal / not zero */

loc_0024F35D: ;
    edi = ebx + ebp;
    ecx = esi + edi * 8 + 0xE;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024F374u); RECOMP_ABI_CALL(0x0001EE85u, sub_0001EE85); /* call 0x0001EE85 */

loc_0024F374: ;
    ecx = edi;
    edi = MEM32(esp + 0x18);
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM16(esi + 6) = MEM16(esi + 6) | LO16(edx);
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0024F385: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024F342; /* jl: less (signed <) */

loc_0024F38B: ;
    edx = MEM32(esp + 0x20);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xC (32-bit) */
    MEM32(esp + 0x20) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0024F340; /* jl: less (signed <) */

loc_0024F39C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0024F3A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F3E0
 * Original: 0x0024F3E0 - 0x0024F423 (67 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F3E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F3E0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = (uint32_t)(int32_t)SMEM8(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7DADA4)); /* movss */
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esp + 8);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0024F41Fu); RECOMP_ABI_CALL(0x000149A3u, sub_000149A3); /* call 0x000149A3 */

loc_0024F41F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024F440
 * Original: 0x0024F440 - 0x0024F502 (194 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F440: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x20);
    eax = esi + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi) = 0x7FE8B8;
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0x0024F459u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0024F459: ;
    ecx = MEM32(esi + 0x40);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0024F464u); RECOMP_ABI_CALL(0x0059E463u, sub_0059E463); /* call 0x0059E463 */

loc_0024F464: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x10) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(0x8FC1D0);
    ecx = MEM32(edx + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FE8F8);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0024F495u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F492u); } /* indirect call */
    }

loc_0024F495: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    eax = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    PUSH32(esp, 0x100);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FE8F8);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0024F4B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F4B6u); } /* indirect call */
    }

loc_0024F4B9: ;
    ecx = MEM32(esi + 0x40);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0024F4C4u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0024F4C4: ;
    ecx = MEM32(esi + 0x10);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(esi + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x18) = 0;
    MEM32(esi + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0024F4F4; /* jle: less or equal (signed <=) */

loc_0024F4E2: ;
    edx = MEM32(esi + 8);
    MEM32(edx + eax * 4) = 0;
    ecx = MEM32(esi + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024F4E2; /* jl: less (signed <) */

loc_0024F4F4: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0x0024F4FCu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0024F4FC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0024F540
 * Original: 0x0024F540 - 0x0024F5A1 (97 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F540: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x40);
    MEM32(esi) = 0x7FE8B8;
    PUSH32(esp, 0x0024F551u); RECOMP_ABI_CALL(0x0059E46Eu, sub_0059E46E); /* call 0x0059E46E */

loc_0024F551: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    eax = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0024F565u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F562u); } /* indirect call */
    }

loc_0024F565: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 4) = 0;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0024F581u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024F57Eu); } /* indirect call */
    }

loc_0024F581: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi + 8) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0024F59B; /* je: equal / zero */

loc_0024F58F: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0024F59Bu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0024F59B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F5C0
 * Original: 0x0024F5C0 - 0x0024F5D0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F5C0(void)
{

loc_0024F5C0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0024F5E0
 * Original: 0x0024F5E0 - 0x0024F5ED (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F5E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F5E0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0024F5F0
 * Original: 0x0024F5F0 - 0x0024F61B (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F5F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F613; /* je: equal / zero */

loc_0024F60B: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_0024F613: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F630
 * Original: 0x0024F630 - 0x0024F677 (71 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F630: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F674; /* je: equal / zero */

loc_0024F638: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024F648; /* je: equal / zero */

loc_0024F640: ;
    edi = MEM32(eax + 4);
    MEM32(edx + 4) = edi;
    goto loc_0024F64E;

loc_0024F648: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_0024F64E: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F65D; /* je: equal / zero */

loc_0024F655: ;
    edi = MEM32(eax + 8);
    MEM32(edx + 8) = edi;
    goto loc_0024F663;

loc_0024F65D: ;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;

loc_0024F663: ;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);

loc_0024F674: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F690
 * Original: 0x0024F690 - 0x0024F747 (183 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F690: ;
    eax = ecx;
    edx = eax + 0x18;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax) = 0x7FE860;
    ecx = 1;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM32(eax + 0x14) = ecx;
    MEM16(edx + -12) = LO16(ebx);
    MEM8(edx + -10) = LO8(ebx);
    MEM8(edx + -9) = LO8(ebx);
    MEM8(edx + -8) = LO8(ebx);
    MEM8(edx + -7) = LO8(ebx);
    MEM8(edx + -6) = LO8(ebx);
    MEM8(edx + -5) = LO8(ebx);
    MEM8(edx + -4) = LO8(ebx);
    MEM8(edx + -3) = LO8(ebx);
    MEM8(edx + -2) = LO8(ebx);
    MEM8(edx + -1) = LO8(ebx);
    MEM16(edx) = LO16(ebx);
    MEM8(edx + 2) = LO8(ebx);
    MEM8(edx + 3) = LO8(ebx);
    MEM8(edx + 4) = LO8(ebx);
    MEM8(edx + 5) = LO8(ebx);
    MEM8(edx + 6) = LO8(ebx);
    MEM8(edx + 7) = LO8(ebx);
    MEM8(edx + 8) = LO8(ebx);
    MEM8(edx + 9) = LO8(ebx);
    MEM8(edx + 0xA) = LO8(ebx);
    MEM8(edx + 0xB) = LO8(ebx);
    edx = eax + 0x30;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx + -12) = LO16(ebx);
    MEM8(edx + -10) = LO8(ebx);
    MEM8(edx + -9) = LO8(ebx);
    MEM8(edx + -8) = LO8(ebx);
    MEM8(edx + -7) = LO8(ebx);
    MEM8(edx + -6) = LO8(ebx);
    MEM8(edx + -5) = LO8(ebx);
    MEM8(edx + -4) = LO8(ebx);
    MEM8(edx + -3) = LO8(ebx);
    MEM8(edx + -2) = LO8(ebx);
    MEM8(edx + -1) = LO8(ebx);
    MEM16(edx) = LO16(ebx);
    MEM8(edx + 2) = LO8(ebx);
    MEM8(edx + 3) = LO8(ebx);
    MEM8(edx + 4) = LO8(ebx);
    MEM8(edx + 5) = LO8(ebx);
    MEM8(edx + 6) = LO8(ebx);
    MEM8(edx + 7) = LO8(ebx);
    MEM8(edx + 8) = LO8(ebx);
    MEM8(edx + 9) = LO8(ebx);
    MEM8(edx + 0xA) = LO8(ebx);
    MEM8(edx + 0xB) = LO8(ebx);
    MEM32(eax + 0x48) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024F780
 * Original: 0x0024F780 - 0x0024F882 (258 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F780: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax) = 0x7FE860;
    PUSH32(esp, esi);
    esi = eax + 0x18;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 1;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM32(eax + 0x14) = ecx;
    MEM16(esi + -12) = LO16(edx);
    MEM8(esi + -10) = LO8(edx);
    MEM8(esi + -9) = LO8(edx);
    MEM8(esi + -8) = LO8(edx);
    MEM8(esi + -7) = LO8(edx);
    MEM8(esi + -6) = LO8(edx);
    MEM8(esi + -5) = LO8(edx);
    MEM8(esi + -4) = LO8(edx);
    MEM8(esi + -3) = LO8(edx);
    MEM8(esi + -2) = LO8(edx);
    MEM8(esi + -1) = LO8(edx);
    ecx = MEM32(esp + 8);
    MEM16(esi) = LO16(edx);
    MEM8(esi + 2) = LO8(edx);
    MEM8(esi + 3) = LO8(edx);
    MEM8(esi + 4) = LO8(edx);
    MEM8(esi + 5) = LO8(edx);
    MEM8(esi + 6) = LO8(edx);
    MEM8(esi + 7) = LO8(edx);
    MEM8(esi + 8) = LO8(edx);
    MEM8(esi + 9) = LO8(edx);
    MEM8(esi + 0xA) = LO8(edx);
    MEM8(esi + 0xB) = LO8(edx);
    esi = eax + 0x30;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xFF (8-bit) */
    MEM16(esi + -12) = LO16(edx);
    MEM8(esi + -10) = LO8(edx);
    MEM8(esi + -9) = LO8(edx);
    MEM8(esi + -8) = LO8(edx);
    MEM8(esi + -7) = LO8(edx);
    MEM8(esi + -6) = LO8(edx);
    MEM8(esi + -5) = LO8(edx);
    MEM8(esi + -4) = LO8(edx);
    MEM8(esi + -3) = LO8(edx);
    MEM8(esi + -2) = LO8(edx);
    MEM8(esi + -1) = LO8(edx);
    MEM16(esi) = LO16(edx);
    MEM8(esi + 2) = LO8(edx);
    MEM8(esi + 3) = LO8(edx);
    MEM8(esi + 4) = LO8(edx);
    MEM8(esi + 5) = LO8(edx);
    MEM8(esi + 6) = LO8(edx);
    MEM8(esi + 7) = LO8(edx);
    MEM8(esi + 8) = LO8(edx);
    MEM8(esi + 9) = LO8(edx);
    MEM8(esi + 0xA) = LO8(edx);
    MEM8(esi + 0xB) = LO8(edx);
    MEM32(eax + 0x48) = ecx;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0024F87F; /* je: equal / zero */

loc_0024F83B: ;
    MEM16(eax + 0x24) = LO16(edx);
    MEM8(eax + 0x26) = LO8(edx);
    MEM8(eax + 0x27) = LO8(edx);
    MEM8(eax + 0x28) = LO8(edx);
    MEM8(eax + 0x29) = LO8(edx);
    MEM8(eax + 0x2A) = LO8(edx);
    MEM8(eax + 0x2B) = LO8(edx);
    MEM8(eax + 0x2C) = LO8(edx);
    MEM8(eax + 0x2D) = LO8(edx);
    MEM8(eax + 0x2E) = LO8(edx);
    MEM8(eax + 0x2F) = LO8(edx);
    MEM16(eax + 0x3C) = LO16(edx);
    MEM8(eax + 0x3E) = LO8(edx);
    MEM8(eax + 0x3F) = LO8(edx);
    MEM8(eax + 0x40) = LO8(edx);
    MEM8(eax + 0x41) = LO8(edx);
    MEM8(eax + 0x42) = LO8(edx);
    MEM8(eax + 0x43) = LO8(edx);
    MEM8(eax + 0x44) = LO8(edx);
    MEM8(eax + 0x45) = LO8(edx);
    MEM8(eax + 0x46) = LO8(edx);
    MEM8(eax + 0x47) = LO8(edx);

loc_0024F87F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F8D0
 * Original: 0x0024F8D0 - 0x0024F9A2 (210 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F8D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F8D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x18;
    PUSH32(esp, edi);
    MEM32(esi + 0x14) = 0;
    edx = eax;
    edi = MEM32(edx);
    ecx = esi + 0x30;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = edi;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0xC);
    SET_LO16(edx, MEM16(ecx));
    xmm0 = XMM_SCALAR(MEMF(0x7DADA4)); /* movss */
    MEM16(eax) = LO16(edx);
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 3));
    MEM8(eax + 3) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 4));
    MEM8(eax + 4) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 5));
    MEM8(eax + 5) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 6));
    MEM8(eax + 6) = LO8(edx);
    SET_LO8(ecx, MEM8(ecx + 7));
    MEM8(eax + 7) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1C);
    edx = esi + 0x22;
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1B);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0024F95Cu); RECOMP_ABI_CALL(0x000149A3u, sub_000149A3); /* call 0x000149A3 */

loc_0024F95C: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1E);
    xmm0 = XMM_SCALAR(MEMF(0x7DADA4)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x23;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1D);
    ecx = esi + 0x21;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0024F99Au); RECOMP_ABI_CALL(0x000149A3u, sub_000149A3); /* call 0x000149A3 */

loc_0024F99A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024F9E0
 * Original: 0x0024F9E0 - 0x0024FB29 (329 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F9E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    MEM32(esi + 0x14) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_0024FB26; /* jne: not equal / not zero */

loc_0024F9F7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 0x24;
    edx = edi;
    ebx = MEM32(edx);
    ecx = esi + 0x3C;
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 4) = ebx;
    PUSH32(esp, eax);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, 0x0024FA1Du); RECOMP_ABI_CALL(0x00014E4Eu, sub_00014E4E); /* call 0x00014E4E */

loc_0024FA1D: ;
    ecx = eax;
    PUSH32(esp, 0x0024FA24u); RECOMP_ABI_CALL(0x00019188u, sub_00019188); /* call 0x00019188 */

loc_0024FA24: ;
    ebx = esi + 0x2A;
    PUSH32(esp, ebx);
    ebp = esi + 0x29;
    PUSH32(esp, ebp);
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    edx = esi + 0x27;
    PUSH32(esp, edx);
    ecx = esi + 0x26;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FA490);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024FA45u); RECOMP_ABI_CALL(0x00015565u, sub_00015565); /* call 0x00015565 */

loc_0024FA45: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x28);
    xmm0 = XMM_SCALAR(MEMF(0x7DADA4)); /* movss */
    edx = esi + 0x2E;
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x27);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0024FA80u); RECOMP_ABI_CALL(0x000149A3u, sub_000149A3); /* call 0x000149A3 */

loc_0024FA80: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx);
    xmm0 = XMM_SCALAR(MEMF(0x7DADA4)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x2F;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(ebp);
    ecx = esi + 0x2D;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0024FABDu); RECOMP_ABI_CALL(0x000149A3u, sub_000149A3); /* call 0x000149A3 */

loc_0024FABD: ;
    eax = MEM32(0x8FCA50);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FAF1; /* je: equal / zero */

loc_0024FACB: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x8C2214); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C650C); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    MEM8(esi + 0x2B) = LO8(eax);
    goto loc_0024FAF4;

loc_0024FAF1: ;
    MEM8(esi + 0x2B) = LO8(ecx);

loc_0024FAF4: ;
    edx = MEM32(0x8FA490);
    _fa = (uint32_t)(MEM8(edx + 0x210)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x210), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024FB23; /* jne: not equal / not zero */

loc_0024FB02: ;
    MEM16(edi) = LO16(ecx);
    MEM8(edi + 2) = LO8(ecx);
    MEM8(edi + 3) = LO8(ecx);
    MEM8(edi + 4) = LO8(ecx);
    MEM8(edi + 5) = LO8(ecx);
    MEM8(edi + 6) = LO8(ecx);
    MEM8(edi + 7) = LO8(ecx);
    MEM8(edi + 8) = LO8(ecx);
    MEM8(edi + 9) = LO8(ecx);
    MEM8(edi + 0xA) = LO8(ecx);
    MEM8(edi + 0xB) = LO8(ecx);

loc_0024FB23: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0024FB26: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FB80
 * Original: 0x0024FB80 - 0x0024FC03 (131 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FB80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FE874;
    MEM8(esi + 4) = LO8(eax);
    MEM8(esi + 5) = 1;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    edi = esi + 0x24;
    ebx = 8;

loc_0024FBB1: ;
    ecx = edi + 2;
    PUSH32(esp, 0x0024FBB9u); RECOMP_ABI_CALL(0x00022DAFu, sub_00022DAF); /* call 0x00022DAF */

loc_0024FBB9: ;
    MEM8(edi) = 0x28;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024FBB1; /* jne: not equal / not zero */

loc_0024FBC2: ;
    edi = esi + 0x184;
    ebx = 8;
    /* nop */

loc_0024FBD0: ;
    ecx = edi + 2;
    PUSH32(esp, 0x0024FBD8u); RECOMP_ABI_CALL(0x00022DAFu, sub_00022DAF); /* call 0x00022DAF */

loc_0024FBD8: ;
    MEM8(edi) = 0x28;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024FBD0; /* jne: not equal / not zero */

loc_0024FBE1: ;
    edi = esi + 0x2E4;
    ebx = 8;
    /* nop */

loc_0024FBF0: ;
    ecx = edi;
    PUSH32(esp, 0x0024FBF7u); RECOMP_ABI_CALL(0x00036666u, sub_00036666); /* call 0x00036666 */

loc_0024FBF7: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024FBF0; /* jne: not equal / not zero */

loc_0024FBFD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FC30
 * Original: 0x0024FC30 - 0x0024FC66 (54 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024FC30: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FC64; /* je: equal / zero */

loc_0024FC3A: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024FC57; /* jne: not equal / not zero */

loc_0024FC41: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FC57; /* je: equal / zero */

loc_0024FC48: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0024FC4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024FC4Au); } /* indirect call */
    }

loc_0024FC4C: ;
    MEM32(esi + 8) = eax;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00026CCA(); return; /* tail jmp 0x00026CCA */

loc_0024FC57: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00026CCA(); return; /* tail jmp 0x00026CCA */

loc_0024FC64: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FC80
 * Original: 0x0024FC80 - 0x0024FE1D (413 bytes, 136 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FC80: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFF00u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FCA4; /* jne: not equal / not zero */

loc_0024FC94: ;
    eax = ecx;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ebx = eax + edi + 0x24;
    goto loc_0024FCB6;

loc_0024FCA4: ;
    edx = ecx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    ebx = edx + edi + 0x184;

loc_0024FCB6: ;
    SET_LO8(eax, MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FCCC; /* jne: not equal / not zero */

loc_0024FCBC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FDA5; /* je: equal / zero */

loc_0024FCC4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FDA5; /* jne: not equal / not zero */

loc_0024FCCC: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FCE3; /* je: equal / zero */

loc_0024FCD3: ;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x48), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FE14; /* je: equal / zero */

loc_0024FCDC: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024FCD3; /* jne: not equal / not zero */

loc_0024FCE3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi + 0x32C;
    /* nop */

loc_0024FCF0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FD00; /* je: equal / zero */

loc_0024FCF5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024FCF0; /* jl: less (signed <) */

loc_0024FCFE: ;
    goto loc_0024FD0A;

loc_0024FD00: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    esi = eax + edi + 0x2E4;

loc_0024FD0A: ;
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0024FD16u); RECOMP_ABI_CALL(0x0001B762u, sub_0001B762); /* call 0x0001B762 */

loc_0024FD16: ;
    eax = MEM32(esp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF00u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024FD2F; /* jne: not equal / not zero */

loc_0024FD21: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + edi + 0x24;
    goto loc_0024FD3E;

loc_0024FD2F: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + edi + 0x184;

loc_0024FD3E: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 4) = 0;
    MEM32(edi + 0x14) = esi;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FD60; /* je: equal / zero */

loc_0024FD5B: ;
    MEM32(eax + 4) = esi;
    goto loc_0024FD63;

loc_0024FD60: ;
    MEM32(edi + 0x10) = esi;

loc_0024FD63: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FE14; /* je: equal / zero */

loc_0024FD6F: ;
    PUSH32(esp, 0x32);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0024FD7Au); RECOMP_ABI_CALL(0x00031431u, sub_00031431); /* call 0x00031431 */

loc_0024FD7A: ;
    PUSH32(esp, 4);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0024FD8Au); RECOMP_ABI_CALL(0x0002307Fu, sub_0002307F); /* call 0x0002307F */

loc_0024FD8A: ;
    PUSH32(esp, 0x0024FD8Fu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0024FD8F: ;
    ecx = eax + 0x1C;
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0024FD9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024FD99u); } /* indirect call */
    }

loc_0024FD9C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0024FDA5: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FE14; /* je: equal / zero */

loc_0024FDAC: ;
    /* nop */

loc_0024FDB0: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FDC5; /* je: equal / zero */

loc_0024FDB5: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024FDB0; /* jne: not equal / not zero */

loc_0024FDBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0024FDC5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FDF7; /* je: equal / zero */

loc_0024FDC9: ;
    PUSH32(esp, 0x33);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0024FDD4u); RECOMP_ABI_CALL(0x00031431u, sub_00031431); /* call 0x00031431 */

loc_0024FDD4: ;
    PUSH32(esp, 4);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0024FDE4u); RECOMP_ABI_CALL(0x0002307Fu, sub_0002307F); /* call 0x0002307F */

loc_0024FDE4: ;
    PUSH32(esp, 0x0024FDE9u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0024FDE9: ;
    edx = MEM32(eax + 0x1C);
    ecx = eax + 0x1C;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0024FDF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024FDF4u); } /* indirect call */
    }

loc_0024FDF7: ;
    PUSH32(esp, esi);
    ecx = edi + 0xC;
    PUSH32(esp, 0x0024FE00u); RECOMP_ABI_CALL(0x0002749Fu, sub_0002749F); /* call 0x0002749F */

loc_0024FE00: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0024FE14u); RECOMP_ABI_CALL(0x0001B762u, sub_0001B762); /* call 0x0001B762 */

loc_0024FE14: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024FE90
 * Original: 0x0024FE90 - 0x0024FEAE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FE90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0024FE98u); RECOMP_ABI_CALL(0x00024AA6u, sub_00024AA6); /* call 0x00024AA6 */

loc_0024FE98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024FEA8; /* je: equal / zero */

loc_0024FE9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0024FEA5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0024FEA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024FEA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0024FEC0
 * Original: 0x0024FEC0 - 0x0024FF0B (75 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024FEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FEC0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, 0x0024FEC9u); RECOMP_ABI_CALL(0x00014E4Eu, sub_00014E4E); /* call 0x00014E4E */

loc_0024FEC9: ;
    esi = eax;
    eax = MEM32(esi + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024FF08; /* jle: less or equal (signed <=) */

loc_0024FED5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ebp + 0x212;
    ebx = ebp + 0x2A0;

loc_0024FEE3: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0024FEEBu); RECOMP_ABI_CALL(0x00013A7Bu, sub_00013A7B); /* call 0x00013A7B */

loc_0024FEEB: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0024FEF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024FEF0u); } /* indirect call */
    }

loc_0024FEF3: ;
    ecx = MEM32(esi + 0xD8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xD8) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_0024FEE3; /* jg: greater (signed >) */

loc_0024FF06: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0024FF08: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FF20
 * Original: 0x0024FF20 - 0x0024FF5F (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FF20: ;
    eax = MEM32(0x8FA48C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024FF5E; /* jne: not equal / not zero */

loc_0024FF29: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x544);
    PUSH32(esp, 0x0024FF35u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0024FF35: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FF50; /* je: equal / zero */

loc_0024FF3C: ;
    ecx = eax;
    PUSH32(esp, 0x0024FF43u); RECOMP_ABI_CALL(0x0002DCBEu, sub_0002DCBE); /* call 0x0002DCBE */

loc_0024FF43: ;
    PUSH32(esp, eax);
    MEM32(0x8FA48C) = eax;
    PUSH32(esp, 0x0024FF4Eu); RECOMP_ABI_CALL(0x0002C64Du, sub_0002C64D); /* call 0x0002C64D */

loc_0024FF4E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024FF50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(0x8FA48C) = eax;
    PUSH32(esp, 0x0024FF5Du); RECOMP_ABI_CALL(0x0002C64Du, sub_0002C64D); /* call 0x0002C64D */

loc_0024FF5D: ;
    POP32(esp, ecx);

loc_0024FF5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0024FF44
 * Original: 0x0024FF44 - 0x0024FF5F (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FF44(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FF44: ;
    MEM32(0x8FA48C) = eax;
    PUSH32(esp, 0x0024FF4Eu); RECOMP_ABI_CALL(0x0002C64Du, sub_0002C64D); /* call 0x0002C64D */

loc_0024FF4E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FF70
 * Original: 0x0024FF70 - 0x0024FFC1 (81 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FF70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x8FA490);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FF83; /* je: equal / zero */

loc_0024FF7E: ;
    PUSH32(esp, 0x0024FF83u); RECOMP_ABI_CALL(0x0001475Au, sub_0001475A); /* call 0x0001475A */

loc_0024FF83: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FF9E; /* je: equal / zero */

loc_0024FF8A: ;
    /* nop */

loc_0024FF90: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0024FF97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024FF94u); } /* indirect call */
    }

loc_0024FF97: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024FF90; /* jne: not equal / not zero */

loc_0024FF9E: ;
    SET_LO8(eax, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FFBE; /* je: equal / zero */

loc_0024FFA5: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FFBE; /* je: equal / zero */

loc_0024FFAC: ;
    /* nop */

loc_0024FFB0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0024FFB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024FFB4u); } /* indirect call */
    }

loc_0024FFB7: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024FFB0; /* jne: not equal / not zero */

loc_0024FFBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FFAA
 * Original: 0x0024FFAA - 0x0024FFC1 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FFAA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FFAA: ;
    if (_flags /* je: equal / zero */) goto loc_0024FFBE;

loc_0024FFAC: ;
    /* nop */

loc_0024FFB0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0024FFB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024FFB4u); } /* indirect call */
    }

loc_0024FFB7: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024FFB0; /* jne: not equal / not zero */

loc_0024FFBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FFE0
 * Original: 0x0024FFE0 - 0x002500A6 (198 bytes, 71 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024FFE0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF00u (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_0024FFFE; /* jne: not equal / not zero */

loc_0024FFF0: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    esi = eax + ecx + 0x24;
    goto loc_0025000D;

loc_0024FFFE: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    esi = eax + ecx + 0x184;

loc_0025000D: ;
    SET_LO8(eax, MEM8(esp + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = MEM32(esp + 0x58);
    if (CMP_EQ(_fa, _fb)) goto loc_00250035; /* je: equal / zero */

loc_00250019: ;
    SET_LO8(eax, MEM8(esi));
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    MEM8(esi) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0025002A; /* jne: not equal / not zero */

loc_00250024: ;
    SET_LO8(eax, LO8(eax) & 0xFB);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi) = LO8(eax);
    goto loc_0025003F;

loc_0025002A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025003F; /* jne: not equal / not zero */

loc_0025002F: ;
    SET_LO8(eax, LO8(eax) & 0xFD);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi) = LO8(eax);
    goto loc_0025003F;

loc_00250035: ;
    SET_LO8(edx, MEM8(esi));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi) = LO8(edx);

loc_0025003F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025009E; /* je: equal / zero */

loc_00250044: ;
    edx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025004Eu); RECOMP_ABI_CALL(0x00037C00u, sub_00037C00); /* call 0x00037C00 */

loc_0025004E: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025009E; /* je: equal / zero */

loc_00250053: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025009E; /* je: equal / zero */

loc_00250058: ;
    SET_LO8(eax, MEM8(esp + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_00250074; /* je: equal / zero */

loc_00250064: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x0025006Bu); RECOMP_ABI_CALL(0x00031431u, sub_00031431); /* call 0x00031431 */

loc_0025006B: ;
    PUSH32(esp, 4);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    goto loc_00250082;

loc_00250074: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 0x0025007Bu); RECOMP_ABI_CALL(0x00031431u, sub_00031431); /* call 0x00031431 */

loc_0025007B: ;
    PUSH32(esp, 4);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);

loc_00250082: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0025008Bu); RECOMP_ABI_CALL(0x0002307Fu, sub_0002307F); /* call 0x0002307F */

loc_0025008B: ;
    PUSH32(esp, 0x00250090u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00250090: ;
    edx = MEM32(eax + 0x1C);
    ecx = eax + 0x1C;
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0025009Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025009Bu); } /* indirect call */
    }

loc_0025009E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00250020
 * Original: 0x00250020 - 0x002500A6 (134 bytes, 51 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250020: ;
    MEM8(esi) = LO8(eax);
    if (_flags /* jne: not equal / not zero */) goto loc_0025002A;

loc_00250024: ;
    SET_LO8(eax, LO8(eax) & 0xFB);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi) = LO8(eax);
    goto loc_0025003F;

loc_0025002A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025003F; /* jne: not equal / not zero */

loc_0025002F: ;
    SET_LO8(eax, LO8(eax) & 0xFD);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi) = LO8(eax);
    goto loc_0025003F;

    SET_LO8(edx, MEM8(esi));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(edx, LO8(edx) & LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi) = LO8(edx);

loc_0025003F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025009E; /* je: equal / zero */

loc_00250044: ;
    edx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025004Eu); RECOMP_ABI_CALL(0x00037C00u, sub_00037C00); /* call 0x00037C00 */

loc_0025004E: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025009E; /* je: equal / zero */

loc_00250053: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025009E; /* je: equal / zero */

loc_00250058: ;
    SET_LO8(eax, MEM8(esp + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_00250074; /* je: equal / zero */

loc_00250064: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x0025006Bu); RECOMP_ABI_CALL(0x00031431u, sub_00031431); /* call 0x00031431 */

loc_0025006B: ;
    PUSH32(esp, 4);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    goto loc_00250082;

loc_00250074: ;
    PUSH32(esp, 0x31);
    PUSH32(esp, 0x0025007Bu); RECOMP_ABI_CALL(0x00031431u, sub_00031431); /* call 0x00031431 */

loc_0025007B: ;
    PUSH32(esp, 4);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);

loc_00250082: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0025008Bu); RECOMP_ABI_CALL(0x0002307Fu, sub_0002307F); /* call 0x0002307F */

loc_0025008B: ;
    PUSH32(esp, 0x00250090u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00250090: ;
    edx = MEM32(eax + 0x1C);
    ecx = eax + 0x1C;
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0025009Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025009Bu); } /* indirect call */
    }

loc_0025009E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002500E0
 * Original: 0x002500E0 - 0x002501E1 (257 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002500E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002500E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    MEM32(esp + 0x14) = 0;
    goto loc_00250100;

    /* nop */
    /* nop */

loc_00250100: ;
    eax = ZX8(MEM8(esp + 0x14));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x18) = eax;
    goto loc_00250120;

loc_00250116: ;
    eax = MEM32(esp + 0x18);
    /* nop */

loc_00250120: ;
    esi = ZX8(MEM8(esp + 0x10));
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = esi;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((8) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00250146; /* jne: not equal / not zero */

loc_00250134: ;
    eax = esi;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    edi = eax + ebx;
    eax = edi + 0x24;
    goto loc_0025015A;

loc_00250146: ;
    ecx = esi;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edi = ecx + ebx;
    eax = edi + 0x184;

loc_0025015A: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM8(eax) = LO8(ecx);
    MEM32(esp + 0x1C) = esi;
    eax = edi + 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_00250172; /* je: equal / zero */

loc_0025016C: ;
    eax = edi + 0x184;

loc_00250172: ;
    MEM8(eax) = MEM8(eax) & 0xFD;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00250181u); RECOMP_ABI_CALL(0x00037C00u, sub_00037C00); /* call 0x00037C00 */

loc_00250181: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x1C) = esi;
    eax = edi + 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_00250192; /* je: equal / zero */

loc_0025018C: ;
    eax = edi + 0x184;

loc_00250192: ;
    MEM8(eax) = MEM8(eax) & 0xFB;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x002501A1u); RECOMP_ABI_CALL(0x00037C00u, sub_00037C00); /* call 0x00037C00 */

loc_002501A1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x1C) = esi;
    eax = edi + 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_002501B2; /* je: equal / zero */

loc_002501AC: ;
    eax = edi + 0x184;

loc_002501B2: ;
    MEM8(eax) = MEM8(eax) & 0xEF;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00250116; /* jl: less (signed <) */

loc_002501C7: ;
    eax = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00250100; /* jl: less (signed <) */

loc_002501D9: ;
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
 * sub_00250230
 * Original: 0x00250230 - 0x002502AD (125 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250230: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX8(MEM8(esp + 0x50));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF00u (32-bit) */
    ecx = MEM32(0x8FA48C);
    PUSH32(esp, esi);
    MEM32(esp + 0x54) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00250258; /* jne: not equal / not zero */

loc_0025024A: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    esi = eax + ecx + 0x24;
    goto loc_00250267;

loc_00250258: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    esi = eax + ecx + 0x184;

loc_00250267: ;
    MEM8(esi) = MEM8(esi) | 1;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00250274u); RECOMP_ABI_CALL(0x00037C00u, sub_00037C00); /* call 0x00037C00 */

loc_00250274: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 8 (8-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002502A7; /* je: equal / zero */

loc_0025027A: ;
    PUSH32(esp, 0x30);
    ecx = esp + 4;
    PUSH32(esp, 0x00250285u); RECOMP_ABI_CALL(0x00031431u, sub_00031431); /* call 0x00031431 */

loc_00250285: ;
    PUSH32(esp, 4);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x00250295u); RECOMP_ABI_CALL(0x0002307Fu, sub_0002307F); /* call 0x0002307F */

loc_00250295: ;
    PUSH32(esp, 0x0025029Au); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0025029A: ;
    edx = MEM32(eax + 0x1C);
    ecx = eax + 0x1C;
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002502A7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x002502A4u); } /* indirect call */
    }

loc_002502A7: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002502D0
 * Original: 0x002502D0 - 0x0025034D (125 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002502D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002502D0: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX8(MEM8(esp + 0x50));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF00u (32-bit) */
    ecx = MEM32(0x8FA48C);
    PUSH32(esp, esi);
    MEM32(esp + 0x54) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_002502F8; /* jne: not equal / not zero */

loc_002502EA: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    esi = eax + ecx + 0x24;
    goto loc_00250307;

loc_002502F8: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    esi = eax + ecx + 0x184;

loc_00250307: ;
    MEM8(esi) = MEM8(esi) & 0xFE;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00250314u); RECOMP_ABI_CALL(0x00037C00u, sub_00037C00); /* call 0x00037C00 */

loc_00250314: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 8 (8-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00250347; /* je: equal / zero */

loc_0025031A: ;
    PUSH32(esp, 0x31);
    ecx = esp + 4;
    PUSH32(esp, 0x00250325u); RECOMP_ABI_CALL(0x00031431u, sub_00031431); /* call 0x00031431 */

loc_00250325: ;
    PUSH32(esp, 4);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x00250335u); RECOMP_ABI_CALL(0x0002307Fu, sub_0002307F); /* call 0x0002307F */

loc_00250335: ;
    PUSH32(esp, 0x0025033Au); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0025033A: ;
    edx = MEM32(eax + 0x1C);
    ecx = eax + 0x1C;
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00250347u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00250344u); } /* indirect call */
    }

loc_00250347: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00250370
 * Original: 0x00250370 - 0x002503D4 (100 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250370: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0025038E; /* je: equal / zero */

loc_0025037D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002503D0; /* jne: not equal / not zero */

loc_00250380: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0025038Au); RECOMP_ABI_CALL(0x0001BEB0u, sub_0001BEB0); /* call 0x0001BEB0 */

loc_0025038A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0025038E: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00250398u); RECOMP_ABI_CALL(0x00034244u, sub_00034244); /* call 0x00034244 */

loc_00250398: ;
    eax = MEM32(0x83628C);
    xmm0 = XMM_SCALAR(MEMF(0x7AD378)); /* movss */
    MEMF(0x8FA47C) = xmm0.f[0]; /* movss */
    MEM32(0x8FA480) = 0x8CF8E0;
    MEM32(0x8FA484) = eax;
    ecx = MEM32(esi);
    PUSH32(esp, 0x8FA478);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002503C9u); RECOMP_ABI_CALL(0x00014E4Eu, sub_00014E4E); /* call 0x00014E4E */

loc_002503C9: ;
    ecx = eax;
    PUSH32(esp, 0x002503D0u); RECOMP_ABI_CALL(0x0001FDA3u, sub_0001FDA3); /* call 0x0001FDA3 */

loc_002503D0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002503F0
 * Original: 0x002503F0 - 0x0025057A (394 bytes, 99 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002503F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002503F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = 1;
    PUSH32(esp, ebx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0x2A0;
    MEM32(esi) = 0x7FE8E8;
    MEM8(esi + 0x210) = LO8(ebx);
    PUSH32(esp, 0xA);
    ecx = ebp;
    MEM32(esi + 0x21C) = edi;
    PUSH32(esp, 0x00250420u); RECOMP_ABI_CALL(0x00013DF5u, sub_00013DF5); /* call 0x00013DF5 */

loc_00250420: ;
    eax = 4;
    ecx = 8;
    MEM32(esi + 0x10) = edi;
    edx = 2;
    edi = esi + 0x40;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(edi) = 0x40;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x44) = 0x20;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x48) = 0x80;
    MEM32(esi + 0x1C) = 3;
    MEM32(esi + 0x4C) = 0x10;
    MEM32(esi + 0x50) = 0x100;
    MEM32(esi + 0x24) = 5;
    MEM32(esi + 0x54) = 0x800;
    MEM32(esi + 0x28) = 6;
    MEM32(esi + 0x2C) = 7;
    MEM32(esi + 0x5C) = ecx;
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x34) = 9;
    MEM32(esi + 0x64) = edx;
    MEM32(esi + 0x38) = 0xA;
    MEM32(esi + 0x68) = 0x200;
    MEM32(esi + 0x3C) = 0xB;
    MEM32(esi + 0x6C) = 0x400;
    eax = esi + 0x90;
    MEM32(esp + 0x10) = ecx;
    /* nop */

loc_002504C0: ;
    ecx = edi;
    edx = 0xC;

loc_002504C7: ;
    ebx = MEM32(ecx);
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002504C7; /* jne: not equal / not zero */

loc_002504D4: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002504C0; /* jne: not equal / not zero */

loc_002504DA: ;
    eax = 0x19191919;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x8C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0x64);
    ecx = esi + 0x212;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(eax);
    MEM32(esi + 0x70) = 0xC;
    MEM32(esi + 0x80) = 8;
    MEM32(esi + 0x74) = 0xD;
    MEM32(esi + 0x84) = 2;
    MEM32(esi + 0x78) = 0xE;
    MEM32(esi + 0x88) = 1;
    MEM32(esi + 0x7C) = 0xF;
    MEM32(esi + 0x8C) = 4;
    PUSH32(esp, 0x00250548u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00250548: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00250551u); RECOMP_ABI_CALL(0x00014E4Eu, sub_00014E4E); /* call 0x00014E4E */

loc_00250551: ;
    ecx = eax;
    PUSH32(esp, 0x00250558u); RECOMP_ABI_CALL(0x00030DCEu, sub_00030DCE); /* call 0x00030DCE */

loc_00250558: ;
    edi = MEM32(0x8FA48C);
    eax = edi + 0x18;
    MEM32(eax) = ebp;
    eax = ebp;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0025056Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00250569u); } /* indirect call */
    }

loc_0025056C: ;
    MEM32(edi + 0x1C) = ebx;
    MEM32(edi + 8) = ebx;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002505E0
 * Original: 0x002505E0 - 0x00250614 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002505E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002505E0: ;
    eax = MEM32(0x8FA490);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00250613; /* jne: not equal / not zero */

loc_002505E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E4);
    PUSH32(esp, 0x002505F5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002505F5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250609; /* je: equal / zero */

loc_002505FC: ;
    ecx = eax;
    PUSH32(esp, 0x00250603u); RECOMP_ABI_CALL(0x00015C40u, sub_00015C40); /* call 0x00015C40 */

loc_00250603: ;
    MEM32(0x8FA490) = eax;
    esp += 4; return; /* ret */

loc_00250609: ;
    MEM32(0x8FA490) = 0;

loc_00250613: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250630
 * Original: 0x00250630 - 0x00250634 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250630(void)
{

loc_00250630: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00250640
 * Original: 0x00250640 - 0x002506F7 (183 bytes, 81 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250640: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ebx);
    eax = edi + 0x5F;
    PUSH32(esp, eax);
    ecx = edi + 0x78;
    PUSH32(esp, ecx);
    edx = edi + 0x76;
    PUSH32(esp, edx);
    eax = edi + 0x5E;
    PUSH32(esp, eax);
    ecx = edi + 0x5D;
    PUSH32(esp, ecx);
    esi = edi + 0x71;
    PUSH32(esp, esi);
    edx = edi + 0x70;
    PUSH32(esp, edx);
    eax = edi + 0x6F;
    PUSH32(esp, eax);
    ecx = edi + 0x6E;
    PUSH32(esp, ecx);
    edx = edi + 0x6D;
    PUSH32(esp, edx);
    eax = edi + 0x6C;
    PUSH32(esp, eax);
    ecx = edi + 0x6B;
    PUSH32(esp, ecx);
    edx = edi + 0x6A;
    PUSH32(esp, edx);
    eax = edi + 0x69;
    PUSH32(esp, eax);
    ecx = edi + 0x68;
    PUSH32(esp, ecx);
    edx = edi + 0x67;
    PUSH32(esp, edx);
    eax = edi + 0x66;
    PUSH32(esp, eax);
    ecx = edi + 0x65;
    PUSH32(esp, ecx);
    edx = edi + 0x64;
    PUSH32(esp, edx);
    eax = edi + 0x63;
    PUSH32(esp, eax);
    ecx = edi + 0x62;
    PUSH32(esp, ecx);
    edx = edi + 0x61;
    PUSH32(esp, edx);
    eax = edi + 0x60;
    PUSH32(esp, eax);
    ecx = edi + 0x5C;
    PUSH32(esp, ecx);
    edx = edi + 0x5A;
    PUSH32(esp, edx);
    eax = edi + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x80;
    PUSH32(esp, 0x7FFEE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002506CFu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002506CF: ;
    SET_LO8(edx, MEM8(esi));
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    MEM8(edi + 0x74) = LO8(ebx);
    MEM8(edi + 0x73) = LO8(edx);
    MEM8(edi + 0x72) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_002506EE; /* jne: not equal / not zero */

loc_002506E3: ;
    ecx = 0x1E;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */

loc_002506EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00250730
 * Original: 0x00250730 - 0x002507E7 (183 bytes, 81 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250730: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ebx);
    eax = edi + 0x5F;
    PUSH32(esp, eax);
    ecx = edi + 0x78;
    PUSH32(esp, ecx);
    edx = edi + 0x76;
    PUSH32(esp, edx);
    eax = edi + 0x5E;
    PUSH32(esp, eax);
    ecx = edi + 0x5D;
    PUSH32(esp, ecx);
    esi = edi + 0x71;
    PUSH32(esp, esi);
    edx = edi + 0x70;
    PUSH32(esp, edx);
    eax = edi + 0x6F;
    PUSH32(esp, eax);
    ecx = edi + 0x6E;
    PUSH32(esp, ecx);
    edx = edi + 0x6D;
    PUSH32(esp, edx);
    eax = edi + 0x6C;
    PUSH32(esp, eax);
    ecx = edi + 0x6B;
    PUSH32(esp, ecx);
    edx = edi + 0x6A;
    PUSH32(esp, edx);
    eax = edi + 0x69;
    PUSH32(esp, eax);
    ecx = edi + 0x68;
    PUSH32(esp, ecx);
    edx = edi + 0x67;
    PUSH32(esp, edx);
    eax = edi + 0x66;
    PUSH32(esp, eax);
    ecx = edi + 0x65;
    PUSH32(esp, ecx);
    edx = edi + 0x64;
    PUSH32(esp, edx);
    eax = edi + 0x63;
    PUSH32(esp, eax);
    ecx = edi + 0x62;
    PUSH32(esp, ecx);
    edx = edi + 0x61;
    PUSH32(esp, edx);
    eax = edi + 0x60;
    PUSH32(esp, eax);
    ecx = edi + 0x5C;
    PUSH32(esp, ecx);
    edx = edi + 0x5A;
    PUSH32(esp, edx);
    eax = edi + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x80;
    PUSH32(esp, 0x800280);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002507BFu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002507BF: ;
    SET_LO8(edx, MEM8(esi));
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    MEM8(edi + 0x74) = LO8(ebx);
    MEM8(edi + 0x73) = LO8(edx);
    MEM8(edi + 0x72) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_002507DE; /* jne: not equal / not zero */

loc_002507D3: ;
    ecx = 0x1E;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */

loc_002507DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00250820
 * Original: 0x00250820 - 0x00250931 (273 bytes, 86 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250820: ;
    ecx = MEM32(0x8F5AD0);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x74);
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0025083Au); RECOMP_ABI_CALL(0x0001EA7Fu, sub_0001EA7F); /* call 0x0001EA7F */

loc_0025083A: ;
    eax = MEM32(esp + 0x7C);
    ecx = esp + 9;
    esi = eax;
    edx = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00250848: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00250848; /* jne: not equal / not zero */

loc_00250852: ;
    ecx = esp + 0x31;
    esi = eax + 0x3C;
    edx = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00250860: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00250860; /* jne: not equal / not zero */

loc_0025086A: ;
    SET_LO16(ecx, MEM16(esp + 0x50));
    SET_LO8(edx, MEM8(esp + 0x52));
    MEM16(eax + 0x5A) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x70));
    MEM8(eax + 0x5C) = LO8(edx);
    SET_LO16(edx, MEM16(esp + 0x72));
    MEM16(eax + 0x76) = LO16(ecx);
    SET_LO8(ecx, MEM8(esp + 0x55));
    MEM16(eax + 0x78) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x53));
    MEM8(eax + 0x5F) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x54));
    MEM8(eax + 0x5D) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x57));
    MEM8(eax + 0x5E) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x58));
    MEM8(eax + 0x60) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x59));
    MEM8(eax + 0x61) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x5A));
    MEM8(eax + 0x62) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x5B));
    MEM8(eax + 0x63) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x5C));
    MEM8(eax + 0x64) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x5D));
    MEM8(eax + 0x65) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x5E));
    MEM8(eax + 0x66) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x5F));
    MEM8(eax + 0x67) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x60));
    MEM8(eax + 0x68) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x61));
    MEM8(eax + 0x69) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x62));
    MEM8(eax + 0x6A) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x63));
    MEM8(eax + 0x6B) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x64));
    MEM8(eax + 0x6C) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x65));
    MEM8(eax + 0x6D) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x67));
    MEM8(eax + 0x6E) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x68));
    MEM8(eax + 0x6F) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x69));
    POP32(esp, esi);
    MEM8(eax + 0x74) = LO8(ebx);
    MEM8(eax + 0x73) = LO8(ebx);
    MEM8(eax + 0x72) = 0;
    MEM8(eax + 0x70) = LO8(edx);
    MEM8(eax + 0x71) = LO8(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00250980
 * Original: 0x00250980 - 0x00250A8A (266 bytes, 85 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250980: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x74);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x8F5AD0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0025099Du); RECOMP_ABI_CALL(0x0001EA7Fu, sub_0001EA7F); /* call 0x0001EA7F */

loc_0025099D: ;
    eax = MEM32(esp + 0x80);
    esi = esp + 0xD;
    ecx = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_002509B0: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002509B0; /* jne: not equal / not zero */

loc_002509BA: ;
    ecx = eax + 0x3C;
    esi = esp + 0x35;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002509C3: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002509C3; /* jne: not equal / not zero */

loc_002509CD: ;
    SET_LO16(ecx, MEM16(eax + 0x76));
    SET_LO16(edx, MEM16(eax + 0x78));
    MEM16(esp + 0x74) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 0x5A));
    MEM16(esp + 0x54) = LO16(ecx);
    SET_LO8(ecx, MEM8(eax + 0x61));
    MEM16(esp + 0x76) = LO16(edx);
    SET_LO8(edx, MEM8(eax + 0x60));
    MEM8(esp + 0x5C) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x63));
    MEM8(esp + 0x5B) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x62));
    MEM8(esp + 0x5E) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x65));
    MEM8(esp + 0x5D) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x64));
    MEM8(esp + 0x60) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x67));
    MEM8(esp + 0x5F) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x66));
    MEM8(esp + 0x62) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x69));
    MEM8(esp + 0x61) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x68));
    MEM8(esp + 0x64) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x6B));
    MEM8(esp + 0x63) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x6A));
    MEM8(esp + 0x66) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x6D));
    MEM8(esp + 0x65) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x6C));
    MEM8(esp + 0x68) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x6F));
    MEM8(esp + 0x67) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x6E));
    MEM8(esp + 0x6B) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x71));
    MEM8(esp + 0x69) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x70));
    MEM8(esp + 0x6D) = LO8(ecx);
    ecx = esp + 0xC;
    MEM8(esp + 0x6C) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x5D));
    SET_LO8(eax, MEM8(eax + 0x5E));
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM8(esp + 0x5F) = LO8(edx);
    MEM8(esp + 0x60) = LO8(eax);
    PUSH32(esp, 0x00250A81u); RECOMP_ABI_CALL(0x00033ED4u, sub_00033ED4); /* call 0x00033ED4 */

loc_00250A81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00250AD0
 * Original: 0x00250AD0 - 0x00250AE6 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250AD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250AD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x32);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00250AE0u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00250AE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250AF0
 * Original: 0x00250AF0 - 0x00250AFA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250AF0(void)
{

loc_00250AF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250B00
 * Original: 0x00250B00 - 0x00250B0A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250B00(void)
{

loc_00250B00: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250B10
 * Original: 0x00250B10 - 0x00250B1A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250B10(void)
{

loc_00250B10: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250B20
 * Original: 0x00250B20 - 0x00250B36 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250B20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250B20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x32);
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00250B30u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00250B30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250B40
 * Original: 0x00250B40 - 0x00250B44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250B40(void)
{

loc_00250B40: ;
    eax = ecx + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00250B50
 * Original: 0x00250B50 - 0x00250B54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250B50(void)
{

loc_00250B50: ;
    eax = MEM32(ecx + 0x74);
    esp += 4; return; /* ret */

}

/**
 * sub_00250B60
 * Original: 0x00250B60 - 0x00250B7E (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250B60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250B60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x2E);
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00250B73u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00250B73: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x6D) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250B90
 * Original: 0x00250B90 - 0x00250B9A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250B90(void)
{

loc_00250B90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x74) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250BA0
 * Original: 0x00250BA0 - 0x00250BB7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250BA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250BA0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x80061C;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x78) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00250BC0
 * Original: 0x00250BC0 - 0x00250BC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250BC0(void)
{

loc_00250BC0: ;
    MEM32(ecx) = 0x80061C;
    esp += 4; return; /* ret */

}

/**
 * sub_00250BD0
 * Original: 0x00250BD0 - 0x00250C29 (89 bytes, 35 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250BD0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, 0xDEADDEADu);
    eax = edi + -2006;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 4;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, 0x800620);
    PUSH32(esp, eax);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00250C04u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00250C04: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    MEM8(esi + 8) = 0;
    MEM32(esi + 0x3C) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00250C1E; /* jne: not equal / not zero */

loc_00250C13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00250C1E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00250C40
 * Original: 0x00250C40 - 0x00250CF1 (177 bytes, 69 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00250C40: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x60);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x60);
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF82Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFF82Au;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esi + 0x3C;
    PUSH32(esp, edx);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x800690);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00250C7Cu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00250C7C: ;
    PUSH32(esp, 4);
    edx = esp + 0x48;
    ebp = eax;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM8(esi + 8) = LO8(ebx);
    MEM32(esi + 0x78) = edi;
    PUSH32(esp, 0x00250C97u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00250C97: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x14) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00250CA0: ;
    _fa = (uint32_t)(MEM8(esp + eax + 0x10)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + eax + 0x10), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00250CAB; /* jne: not equal / not zero */

loc_00250CA7: ;
    MEM8(esp + eax + 0x10) = LO8(ebx);

loc_00250CAB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00250CA0; /* jl: less (signed <) */

loc_00250CB1: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00250CBBu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_00250CBB: ;
    PUSH32(esp, 0x2E);
    edx = esp + 0x30;
    MEM32(esi + 0x74) = eax;
    PUSH32(esp, edx);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00250CCEu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00250CCE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x17 (32-bit) */
    MEM8(esi + 0x6D) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00250CE5; /* jne: not equal / not zero */

loc_00250CD9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00250CE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00250D20
 * Original: 0x00250D20 - 0x00250D93 (115 bytes, 38 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250D20: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7D6 (32-bit) */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    if (CMP_L(_fas, _fbs)) goto loc_00250D44; /* jl: less (signed <) */

loc_00250D31: ;
    eax = MEM32(esp + 0x2C);
    MEM32(eax) = 1;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00250D44: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF85Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF85Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x800740);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00250D68u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00250D68: ;
    ecx = ZX16(MEM16(esp + 0x1C));
    edx = MEM32(esp + 0x44);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    MEM32(edx) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00250D7D; /* jne: not equal / not zero */

loc_00250D7B: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00250D7D: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00250D87u); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_00250D87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00250DB0
 * Original: 0x00250DB0 - 0x00250DE4 (52 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250DB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF82Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF82Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x8007D8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00250DDEu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00250DDE: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00250E00
 * Original: 0x00250E00 - 0x00250E59 (89 bytes, 31 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250E00: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x50);
    ecx = MEM32(esi + 0x74);
    eax = esi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, 0x8008F0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00250E1Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00250E1F: ;
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x58);
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, 0xDEADDEADu);
    _fb = (uint32_t)(0xFFFFF82Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF82Au;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, 0x800848);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00250E4Fu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00250E4F: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00250E70
 * Original: 0x00250E70 - 0x00250E81 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250E70(void)
{

loc_00250E70: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00250E80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00250E7Du); } /* indirect call */
    }

loc_00250E80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250E90
 * Original: 0x00250E90 - 0x00250EA1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250E90(void)
{

loc_00250E90: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00250EA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00250E9Du); } /* indirect call */
    }

loc_00250EA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250EB0
 * Original: 0x00250EB0 - 0x00250EC1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250EB0(void)
{

loc_00250EB0: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00250EC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00250EBDu); } /* indirect call */
    }

loc_00250EC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250ED0
 * Original: 0x00250ED0 - 0x00250EE1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250ED0(void)
{

loc_00250ED0: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00250EE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00250EDDu); } /* indirect call */
    }

loc_00250EE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00250EF0
 * Original: 0x00250EF0 - 0x00250EF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250EF0(void)
{

loc_00250EF0: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00250F00
 * Original: 0x00250F00 - 0x00250F04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F00(void)
{

loc_00250F00: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_00250F10
 * Original: 0x00250F10 - 0x00250F1A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F10(void)
{

loc_00250F10: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250F20
 * Original: 0x00250F20 - 0x00250F2A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F20(void)
{

loc_00250F20: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250F30
 * Original: 0x00250F30 - 0x00250F3A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F30(void)
{

loc_00250F30: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250F40
 * Original: 0x00250F40 - 0x00250F4A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F40(void)
{

loc_00250F40: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250F50
 * Original: 0x00250F50 - 0x00250F5A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F50(void)
{

loc_00250F50: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250F60
 * Original: 0x00250F60 - 0x00250F6A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F60(void)
{

loc_00250F60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250F70
 * Original: 0x00250F70 - 0x00250F7A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F70(void)
{

loc_00250F70: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250F80
 * Original: 0x00250F80 - 0x00250F8A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F80(void)
{

loc_00250F80: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250F90
 * Original: 0x00250F90 - 0x00250F94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250F90(void)
{

loc_00250F90: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00250FA0
 * Original: 0x00250FA0 - 0x00250FAA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250FA0(void)
{

loc_00250FA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250FB0
 * Original: 0x00250FB0 - 0x00250FBA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250FB0(void)
{

loc_00250FB0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 8) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250FC0
 * Original: 0x00250FC0 - 0x00250FCA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250FC0(void)
{

loc_00250FC0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 9) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00250FD0
 * Original: 0x00250FD0 - 0x00250FE8 (24 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250FD0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1A);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + eax * 4 + 0xC) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00250FF0
 * Original: 0x00250FF0 - 0x00250FFF (15 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250FF0: ;
    eax = ecx;
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251010
 * Original: 0x00251010 - 0x00251014 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251010(void)
{

loc_00251010: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_00251020
 * Original: 0x00251020 - 0x00251024 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251020(void)
{

loc_00251020: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_00251030
 * Original: 0x00251030 - 0x00251034 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251030(void)
{

loc_00251030: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00251040
 * Original: 0x00251040 - 0x00251044 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251040(void)
{

loc_00251040: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_00251050
 * Original: 0x00251050 - 0x00251054 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251050(void)
{

loc_00251050: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_00251060
 * Original: 0x00251060 - 0x00251064 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251060(void)
{

loc_00251060: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_00251070
 * Original: 0x00251070 - 0x00251074 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251070(void)
{

loc_00251070: ;
    eax = MEM32(ecx + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_00251080
 * Original: 0x00251080 - 0x00251084 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251080(void)
{

loc_00251080: ;
    eax = MEM32(ecx + 0x50);
    esp += 4; return; /* ret */

}

/**
 * sub_00251090
 * Original: 0x00251090 - 0x00251094 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251090(void)
{

loc_00251090: ;
    eax = MEM32(ecx + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_002510A0
 * Original: 0x002510A0 - 0x002510A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002510A0(void)
{

loc_002510A0: ;
    eax = MEM32(ecx + 0x58);
    esp += 4; return; /* ret */

}

/**
 * sub_002510B0
 * Original: 0x002510B0 - 0x002510BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002510B0(void)
{

loc_002510B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x5C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002510C0
 * Original: 0x002510C0 - 0x002510CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002510C0(void)
{

loc_002510C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002510D0
 * Original: 0x002510D0 - 0x002510DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002510D0(void)
{

loc_002510D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002510E0
 * Original: 0x002510E0 - 0x002510EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002510E0(void)
{

loc_002510E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002510F0
 * Original: 0x002510F0 - 0x002510FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002510F0(void)
{

loc_002510F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x38) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251100
 * Original: 0x00251100 - 0x0025110A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251100(void)
{

loc_00251100: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251110
 * Original: 0x00251110 - 0x0025111A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251110(void)
{

loc_00251110: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251120
 * Original: 0x00251120 - 0x0025112A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251120(void)
{

loc_00251120: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x40) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251130
 * Original: 0x00251130 - 0x0025113A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251130(void)
{

loc_00251130: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x44) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251140
 * Original: 0x00251140 - 0x0025114A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251140(void)
{

loc_00251140: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x48) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251150
 * Original: 0x00251150 - 0x0025115A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251150(void)
{

loc_00251150: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x4C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251160
 * Original: 0x00251160 - 0x0025116A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251160(void)
{

loc_00251160: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x50) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251170
 * Original: 0x00251170 - 0x0025117A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251170(void)
{

loc_00251170: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x54) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251180
 * Original: 0x00251180 - 0x0025118A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251180(void)
{

loc_00251180: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x58) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251190
 * Original: 0x00251190 - 0x002511C5 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251190: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = 0xFFFFFFFFu;
    MEM8(eax) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002511E0
 * Original: 0x002511E0 - 0x0025124F (111 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002511E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002511E0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(edx + 0x28);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(edx + 0x2C);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(edx + 0x30);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(edx + 0x34);
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(edx + 0x38);
    MEM32(eax + 0x38) = ecx;
    ecx = MEM32(edx + 0x3C);
    MEM32(eax + 0x3C) = ecx;
    ecx = MEM32(edx + 0x40);
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(edx + 0x44);
    MEM32(eax + 0x44) = ecx;
    ecx = MEM32(edx + 0x48);
    MEM32(eax + 0x48) = ecx;
    ecx = MEM32(edx + 0x4C);
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(edx + 0x50);
    MEM32(eax + 0x50) = ecx;
    ecx = MEM32(edx + 0x54);
    MEM32(eax + 0x54) = ecx;
    ecx = MEM32(edx + 0x58);
    MEM32(eax + 0x58) = ecx;
    ecx = MEM32(edx + 0x5C);
    PUSH32(esp, esi);
    esi = eax;
    MEM32(eax + 0x5C) = ecx;
    ecx = edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00251241: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251241; /* jne: not equal / not zero */

loc_0025124B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251270
 * Original: 0x00251270 - 0x0025127D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251270(void)
{

loc_00251270: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xE8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251280
 * Original: 0x00251280 - 0x0025128D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251280(void)
{

loc_00251280: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xE4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251290
 * Original: 0x00251290 - 0x0025129A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251290(void)
{

loc_00251290: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x60) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002512A0
 * Original: 0x002512A0 - 0x002512AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002512A0(void)
{

loc_002512A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x64) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002512B0
 * Original: 0x002512B0 - 0x002512BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002512B0(void)
{

loc_002512B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x68) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002512C0
 * Original: 0x002512C0 - 0x002512CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002512C0(void)
{

loc_002512C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x78) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002512D0
 * Original: 0x002512D0 - 0x002512DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002512D0(void)
{

loc_002512D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x74) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002512E0
 * Original: 0x002512E0 - 0x002512EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002512E0(void)
{

loc_002512E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x70) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002512F0
 * Original: 0x002512F0 - 0x002512FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002512F0(void)
{

loc_002512F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x6C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251300
 * Original: 0x00251300 - 0x0025130F (15 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251300(void)
{

loc_00251300: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x7C) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00251320
 * Original: 0x00251320 - 0x0025132D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251320(void)
{

loc_00251320: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251330
 * Original: 0x00251330 - 0x0025133D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251330(void)
{

loc_00251330: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251340
 * Original: 0x00251340 - 0x0025134D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251340(void)
{

loc_00251340: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xCC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251350
 * Original: 0x00251350 - 0x0025135D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251350(void)
{

loc_00251350: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xD0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251360
 * Original: 0x00251360 - 0x0025136D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251360(void)
{

loc_00251360: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xD4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251370
 * Original: 0x00251370 - 0x0025137D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251370(void)
{

loc_00251370: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xD8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251380
 * Original: 0x00251380 - 0x0025138D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251380(void)
{

loc_00251380: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xDC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251390
 * Original: 0x00251390 - 0x0025139D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251390(void)
{

loc_00251390: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xE0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002513A0
 * Original: 0x002513A0 - 0x002513B2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002513A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002513A0: ;
    edx = MEM32(ecx + 0x34);
    eax = MEM32(ecx + 0x38);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002513C0
 * Original: 0x002513C0 - 0x002513C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002513C0(void)
{

loc_002513C0: ;
    eax = MEM32(ecx + 0x60);
    esp += 4; return; /* ret */

}

/**
 * sub_002513D0
 * Original: 0x002513D0 - 0x002513D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002513D0(void)
{

loc_002513D0: ;
    eax = MEM32(ecx + 0x64);
    esp += 4; return; /* ret */

}

/**
 * sub_002513E0
 * Original: 0x002513E0 - 0x002513E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002513E0(void)
{

loc_002513E0: ;
    eax = MEM32(ecx + 0x68);
    esp += 4; return; /* ret */

}

/**
 * sub_002513F0
 * Original: 0x002513F0 - 0x002513F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002513F0(void)
{

loc_002513F0: ;
    eax = MEM32(ecx + 0x78);
    esp += 4; return; /* ret */

}

/**
 * sub_00251400
 * Original: 0x00251400 - 0x00251404 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251400(void)
{

loc_00251400: ;
    eax = MEM32(ecx + 0x74);
    esp += 4; return; /* ret */

}

/**
 * sub_00251410
 * Original: 0x00251410 - 0x00251414 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251410(void)
{

loc_00251410: ;
    eax = MEM32(ecx + 0x70);
    esp += 4; return; /* ret */

}

/**
 * sub_00251420
 * Original: 0x00251420 - 0x00251424 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251420(void)
{

loc_00251420: ;
    eax = MEM32(ecx + 0x6C);
    esp += 4; return; /* ret */

}

/**
 * sub_00251430
 * Original: 0x00251430 - 0x00251437 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251430(void)
{

loc_00251430: ;
    eax = MEM32(ecx + 0xC4);
    esp += 4; return; /* ret */

}

/**
 * sub_00251440
 * Original: 0x00251440 - 0x00251447 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251440(void)
{

loc_00251440: ;
    eax = MEM32(ecx + 0xC8);
    esp += 4; return; /* ret */

}

/**
 * sub_00251450
 * Original: 0x00251450 - 0x00251457 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251450(void)
{

loc_00251450: ;
    eax = MEM32(ecx + 0xCC);
    esp += 4; return; /* ret */

}

/**
 * sub_00251460
 * Original: 0x00251460 - 0x00251467 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251460(void)
{

loc_00251460: ;
    eax = MEM32(ecx + 0xD0);
    esp += 4; return; /* ret */

}

/**
 * sub_00251470
 * Original: 0x00251470 - 0x00251477 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251470(void)
{

loc_00251470: ;
    eax = MEM32(ecx + 0xD4);
    esp += 4; return; /* ret */

}

/**
 * sub_00251480
 * Original: 0x00251480 - 0x00251487 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251480(void)
{

loc_00251480: ;
    eax = MEM32(ecx + 0xD8);
    esp += 4; return; /* ret */

}

/**
 * sub_00251490
 * Original: 0x00251490 - 0x00251497 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251490(void)
{

loc_00251490: ;
    eax = MEM32(ecx + 0xDC);
    esp += 4; return; /* ret */

}

/**
 * sub_002514A0
 * Original: 0x002514A0 - 0x002514A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002514A0(void)
{

loc_002514A0: ;
    eax = MEM32(ecx + 0xE0);
    esp += 4; return; /* ret */

}

/**
 * sub_002514B0
 * Original: 0x002514B0 - 0x002514BB (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002514B0(void)
{

loc_002514B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x7C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002514C0
 * Original: 0x002514C0 - 0x002514C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002514C0(void)
{

loc_002514C0: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_002514D0
 * Original: 0x002514D0 - 0x002514D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002514D0(void)
{

loc_002514D0: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_002514E0
 * Original: 0x002514E0 - 0x002514E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002514E0(void)
{

loc_002514E0: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_002514F0
 * Original: 0x002514F0 - 0x002514F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002514F0(void)
{

loc_002514F0: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_00251500
 * Original: 0x00251500 - 0x00251504 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251500(void)
{

loc_00251500: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_00251510
 * Original: 0x00251510 - 0x00251514 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251510(void)
{

loc_00251510: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_00251520
 * Original: 0x00251520 - 0x00251524 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251520(void)
{

loc_00251520: ;
    eax = MEM32(ecx + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_00251530
 * Original: 0x00251530 - 0x00251539 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251530(void)
{

loc_00251530: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251540
 * Original: 0x00251540 - 0x0025154A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251540(void)
{

loc_00251540: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251550
 * Original: 0x00251550 - 0x0025155A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251550(void)
{

loc_00251550: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251560
 * Original: 0x00251560 - 0x0025156A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251560(void)
{

loc_00251560: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251570
 * Original: 0x00251570 - 0x0025157A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251570(void)
{

loc_00251570: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251580
 * Original: 0x00251580 - 0x0025158A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251580(void)
{

loc_00251580: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251590
 * Original: 0x00251590 - 0x0025159A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251590(void)
{

loc_00251590: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002515A0
 * Original: 0x002515A0 - 0x002515AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002515A0(void)
{

loc_002515A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x24) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002515B0
 * Original: 0x002515B0 - 0x002515BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002515B0(void)
{

loc_002515B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002515C0
 * Original: 0x002515C0 - 0x002515CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002515C0(void)
{

loc_002515C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002515D0
 * Original: 0x002515D0 - 0x002515DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002515D0(void)
{

loc_002515D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002515E0
 * Original: 0x002515E0 - 0x002515EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002515E0(void)
{

loc_002515E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002515F0
 * Original: 0x002515F0 - 0x002515FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002515F0(void)
{

loc_002515F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x38) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251600
 * Original: 0x00251600 - 0x0025160A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251600(void)
{

loc_00251600: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251610
 * Original: 0x00251610 - 0x0025161A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251610(void)
{

loc_00251610: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x40) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251620
 * Original: 0x00251620 - 0x0025162A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251620(void)
{

loc_00251620: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x44) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251630
 * Original: 0x00251630 - 0x0025163A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251630(void)
{

loc_00251630: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x48) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251640
 * Original: 0x00251640 - 0x0025164A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251640(void)
{

loc_00251640: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x4C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251650
 * Original: 0x00251650 - 0x0025165A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251650(void)
{

loc_00251650: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x54) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251660
 * Original: 0x00251660 - 0x0025166A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251660(void)
{

loc_00251660: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x58) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251670
 * Original: 0x00251670 - 0x0025167A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251670(void)
{

loc_00251670: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x5C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251680
 * Original: 0x00251680 - 0x0025168A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251680(void)
{

loc_00251680: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x60) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00251690
 * Original: 0x00251690 - 0x0025169A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251690(void)
{

loc_00251690: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x64) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002516A0
 * Original: 0x002516A0 - 0x002516AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002516A0(void)
{

loc_002516A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x68) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002516B0
 * Original: 0x002516B0 - 0x002516BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002516B0(void)
{

loc_002516B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x6C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002516C0
 * Original: 0x002516C0 - 0x002516CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002516C0(void)
{

loc_002516C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x58) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002516D0
 * Original: 0x002516D0 - 0x002516DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002516D0(void)
{

loc_002516D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x5C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002516E0
 * Original: 0x002516E0 - 0x002516F1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002516E0(void)
{

loc_002516E0: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002516F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002516EDu); } /* indirect call */
    }

loc_002516F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251700
 * Original: 0x00251700 - 0x00251711 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251700(void)
{

loc_00251700: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00251710u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025170Du); } /* indirect call */
    }

loc_00251710: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251720
 * Original: 0x00251720 - 0x00251754 (52 bytes, 19 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251720(void)
{

loc_00251720: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00251743u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00251743: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0025174Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025174Bu); } /* indirect call */
    }

loc_0025174E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00251770
 * Original: 0x00251770 - 0x00251781 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251770(void)
{

loc_00251770: ;
    PUSH32(esp, 0x00251775u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00251775: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00251780u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025177Du); } /* indirect call */
    }

loc_00251780: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00251790
 * Original: 0x00251790 - 0x00251811 (129 bytes, 47 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251790: ;
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x002517A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025179Du); } /* indirect call */
    }

loc_002517A0: ;
    ebx = MEM32(esp + 0x114);
    ecx = ebx;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002517B2u); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_002517B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00251805; /* jle: less or equal (signed <=) */

loc_002517B6: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x128);
    edi = edi;

loc_002517C0: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x002517CFu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_002517CF: ;
    edx = MEM32(esp + 0x120);
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002517F8; /* jne: not equal / not zero */

loc_002517DC: ;
    edx = MEM32(esp + 0x124);
    eax = MEM32(edi);
    ecx = esi + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x120);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002517F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002517F5u); } /* indirect call */
    }

loc_002517F8: ;
    ecx = ebx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00251800u); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_00251800: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002517C0; /* jl: less (signed <) */

loc_00251804: ;
    POP32(esp, ebp);

loc_00251805: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00251840
 * Original: 0x00251840 - 0x00251932 (242 bytes, 89 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251840: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x114);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0025185Bu); RECOMP_ABI_CALL(0x00022F1Cu, sub_00022F1C); /* call 0x00022F1C */

loc_0025185B: ;
    ecx = MEM32(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax;
    eax = MEM32(ecx);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0025186Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251867u); } /* indirect call */
    }

loc_0025186A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002518A0; /* jne: not equal / not zero */

loc_00251873: ;
    ecx = MEM32(esp + 0x128);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x12C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x128);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00251894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251891u); } /* indirect call */
    }

loc_00251894: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_002518A0: ;
    PUSH32(esp, ebp);
    ebp = 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00251925; /* jl: less (signed <) */

loc_002518AA: ;
    /* nop */

loc_002518B0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002518BAu); RECOMP_ABI_CALL(0x000344D8u, sub_000344D8); /* call 0x000344D8 */

loc_002518BA: ;
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002518C3u); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_002518C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002518F1; /* jle: less or equal (signed <=) */

loc_002518C7: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002518D6u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_002518D6: ;
    eax = MEM32(esp + 0x124);
    ecx = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251903; /* je: equal / zero */

loc_002518E6: ;
    ecx = esi;
    PUSH32(esp, 0x002518EDu); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_002518ED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002518C7; /* jl: less (signed <) */

loc_002518F1: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002518B0; /* jle: less or equal (signed <=) */

loc_002518F6: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00251903: ;
    eax = MEM32(esp + 0x12C);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x130);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x12C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00251925u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251922u); } /* indirect call */
    }

loc_00251925: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00251970
 * Original: 0x00251970 - 0x00251A85 (277 bytes, 88 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251970: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 2;
    MEM32(esp + 0x10) = 3;
    MEM32(esp + 0x14) = 4;
    MEM32(esp + 0x18) = 6;
    MEM32(esp + 0x1C) = 7;
    MEM32(esp + 0x20) = 8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x002519AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002519ACu); } /* indirect call */
    }

loc_002519AF: ;
    edi = MEM32(esp + 0x12C);
    esi = eax;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x002519C5u); RECOMP_ABI_CALL(0x00022F1Cu, sub_00022F1C); /* call 0x00022F1C */

loc_002519C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002519F6; /* jg: greater (signed >) */

loc_002519CA: ;
    eax = MEM32(esp + 0x13C);
    ecx = MEM32(esp + 0x138);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x138);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002519EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002519E8u); } /* indirect call */
    }

loc_002519EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_002519F6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x138);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00251A01: ;
    ecx = MEM32(esp + ebp * 4 + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00251A0Fu); RECOMP_ABI_CALL(0x000344D8u, sub_000344D8); /* call 0x000344D8 */

loc_00251A0F: ;
    ecx = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00251A18u); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_00251A18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00251A43; /* jle: less or equal (signed <=) */

loc_00251A1C: ;
    /* nop */

loc_00251A20: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00251A2Fu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251A2F: ;
    eax = MEM32(esp + 0x2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251A56; /* je: equal / zero */

loc_00251A38: ;
    ecx = edi;
    PUSH32(esp, 0x00251A3Fu); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_00251A3F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00251A20; /* jl: less (signed <) */

loc_00251A43: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00251A01; /* jl: less (signed <) */

loc_00251A49: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00251A56: ;
    edx = MEM32(esp + 0x144);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x148);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x144);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00251A78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251A75u); } /* indirect call */
    }

loc_00251A78: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00251AD0
 * Original: 0x00251AD0 - 0x00251B86 (182 bytes, 64 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251AD0: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00251AE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251ADDu); } /* indirect call */
    }

loc_00251AE0: ;
    ecx = MEM32(esp + 0x118);
    ebp = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0xF) = 0;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00251AF7u); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_00251AF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00251B7A; /* jle: less or equal (signed <=) */

loc_00251AFB: ;
    PUSH32(esp, esi);
    /* nop */

loc_00251B00: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251B79; /* jne: not equal / not zero */

loc_00251B08: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x120);
    PUSH32(esp, 0x31);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00251B1Cu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251B1C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00251B20: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251B68; /* jne: not equal / not zero */

loc_00251B28: ;
    eax = MEM32(esp + 0x124);
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + esi * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + esi * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251B62; /* jne: not equal / not zero */

loc_00251B38: ;
    ecx = MEM32(esp + 0x128);
    edx = MEM32(ebp);
    eax = ebx + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x124);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251B57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251B54u); } /* indirect call */
    }

loc_00251B57: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x12 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251B62; /* jne: not equal / not zero */

loc_00251B5D: ;
    MEM8(esp + 0x13) = 1;

loc_00251B62: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00251B20; /* jl: less (signed <) */

loc_00251B68: ;
    ecx = MEM32(esp + 0x11C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00251B75u); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_00251B75: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00251B00; /* jl: less (signed <) */

loc_00251B79: ;
    POP32(esp, esi);

loc_00251B7A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00251BC0
 * Original: 0x00251BC0 - 0x00251EF0 (816 bytes, 299 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251BC0: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00251BD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251BCEu); } /* indirect call */
    }

loc_00251BD1: ;
    edi = MEM32(esp + 0x120);
    ebx = MEM32(esp + 0x11C);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x39);
    PUSH32(esp, edi);
    ecx = ebx;
    esi = eax;
    PUSH32(esp, 0x00251BF0u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251BF0: ;
    eax = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x12C);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251C16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251C13u); } /* indirect call */
    }

loc_00251C16: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251C25u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251C25: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251C44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251C41u); } /* indirect call */
    }

loc_00251C44: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3A);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251C53u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251C53: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x10) = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x128);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    edx = MEM32(esp + 0x124);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00251C8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251C8Au); } /* indirect call */
    }

loc_00251C8D: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x35);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251C9Cu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251C9C: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    ecx = MEM32(esp + 0x130);
    eax = MEM32(esp + 0x12C);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251CBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251CB8u); } /* indirect call */
    }

loc_00251CBB: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x36);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251CCAu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251CCA: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251CE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251CE6u); } /* indirect call */
    }

loc_00251CE9: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x37);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251CF8u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251CF8: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 5);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251D17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251D14u); } /* indirect call */
    }

loc_00251D17: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251D26u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251D26: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 6);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251D45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251D42u); } /* indirect call */
    }

loc_00251D45: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3B);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251D54u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251D54: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 7);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251D73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251D70u); } /* indirect call */
    }

loc_00251D73: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3C);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251D82u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251D82: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 8);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251DA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251D9Eu); } /* indirect call */
    }

loc_00251DA1: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251DB0u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251DB0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 9);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251DCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251DCCu); } /* indirect call */
    }

loc_00251DCF: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251DDEu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251DDE: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 0xA);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251DFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251DFAu); } /* indirect call */
    }

loc_00251DFD: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x41);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251E0Cu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251E0C: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 0xB);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251E2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251E28u); } /* indirect call */
    }

loc_00251E2B: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251E3Au); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251E3A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251E59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251E56u); } /* indirect call */
    }

loc_00251E59: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x45);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251E68u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251E68: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 0xD);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251E87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251E84u); } /* indirect call */
    }

loc_00251E87: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x46);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251E96u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251E96: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 0xE);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251EB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251EB2u); } /* indirect call */
    }

loc_00251EB5: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x47);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00251EC4u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00251EC4: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 0xF);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00251EE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251EE0u); } /* indirect call */
    }

loc_00251EE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00251FC0
 * Original: 0x00251FC0 - 0x00252079 (185 bytes, 64 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251FC0: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00251FD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00251FCDu); } /* indirect call */
    }

loc_00251FD0: ;
    ecx = MEM32(esp + 0x118);
    ebp = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0xF) = 0;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00251FE7u); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_00251FE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025206D; /* jle: less or equal (signed <=) */

loc_00251FEF: ;
    PUSH32(esp, esi);

loc_00251FF0: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025206C; /* jne: not equal / not zero */

loc_00251FF8: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x120);
    PUSH32(esp, 0x31);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0025200Cu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0025200C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00252010: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025205B; /* jne: not equal / not zero */

loc_00252018: ;
    eax = MEM32(esp + 0x124);
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + esi * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + esi * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00252055; /* jne: not equal / not zero */

loc_00252028: ;
    ecx = MEM32(esp + 0x128);
    edx = MEM32(ebp);
    eax = ebx + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x128);
    PUSH32(esp, 3);
    eax = esi + 0x12;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0025204Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00252047u); } /* indirect call */
    }

loc_0025204A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00252055; /* jne: not equal / not zero */

loc_00252050: ;
    MEM8(esp + 0x13) = 1;

loc_00252055: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00252010; /* jl: less (signed <) */

loc_0025205B: ;
    ecx = MEM32(esp + 0x11C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00252068u); RECOMP_ABI_CALL(0x0001C2F7u, sub_0001C2F7); /* call 0x0001C2F7 */

loc_00252068: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00251FF0; /* jl: less (signed <) */

loc_0025206C: ;
    POP32(esp, esi);

loc_0025206D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002520B0
 * Original: 0x002520B0 - 0x00252384 (724 bytes, 265 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002520B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002520B0: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x002520C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002520BEu); } /* indirect call */
    }

loc_002520C1: ;
    edi = MEM32(esp + 0x120);
    ebx = MEM32(esp + 0x11C);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x39);
    PUSH32(esp, edi);
    ecx = ebx;
    esi = eax;
    PUSH32(esp, 0x002520E0u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_002520E0: ;
    eax = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x12C);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00252106u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00252103u); } /* indirect call */
    }

loc_00252106: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00252115u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00252115: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00252134u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00252131u); } /* indirect call */
    }

loc_00252134: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3A);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00252143u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00252143: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x10) = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x128);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    edx = MEM32(esp + 0x124);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0025217Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025217Au); } /* indirect call */
    }

loc_0025217D: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x35);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0025218Cu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0025218C: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    ecx = MEM32(esp + 0x130);
    eax = MEM32(esp + 0x12C);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x002521ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002521A8u); } /* indirect call */
    }

loc_002521AB: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x36);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x002521BAu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_002521BA: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x002521D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002521D6u); } /* indirect call */
    }

loc_002521D9: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x002521E8u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_002521E8: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 5);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00252207u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00252204u); } /* indirect call */
    }

loc_00252207: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00252216u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00252216: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 6);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00252235u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00252232u); } /* indirect call */
    }

loc_00252235: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4D);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00252244u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00252244: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 7);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00252263u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00252260u); } /* indirect call */
    }

loc_00252263: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4E);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00252272u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00252272: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 8);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00252291u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025228Eu); } /* indirect call */
    }

loc_00252291: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4F);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x002522A0u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_002522A0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 9);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x002522BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002522BCu); } /* indirect call */
    }

loc_002522BF: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x002522CEu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_002522CE: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 0xA);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x002522EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002522EAu); } /* indirect call */
    }

loc_002522ED: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x51);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x002522FCu); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_002522FC: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 0xB);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0025231Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00252318u); } /* indirect call */
    }

loc_0025231B: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x52);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0025232Au); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_0025232A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00252349u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00252346u); } /* indirect call */
    }

loc_00252349: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x54);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00252358u); RECOMP_ABI_CALL(0x0002D219u, sub_0002D219); /* call 0x0002D219 */

loc_00252358: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    PUSH32(esp, 0xD);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00252377u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00252374u); } /* indirect call */
    }

loc_00252377: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00252440
 * Original: 0x00252440 - 0x00252481 (65 bytes, 24 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252440: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x8008F8);
    PUSH32(esp, edx);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00252464u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00252464: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00252478; /* je: equal / zero */

loc_0025246F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00252478: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002524A0
 * Original: 0x002524A0 - 0x002524B9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002524A0(void)
{

loc_002524A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x80094C;
    PUSH32(esp, 0x002524AEu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002524AE: ;
    ecx = eax;
    PUSH32(esp, 0x002524B5u); RECOMP_ABI_CALL(0x00026B4Eu, sub_00026B4E); /* call 0x00026B4E */

loc_002524B5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002524C0
 * Original: 0x002524C0 - 0x002524D2 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002524C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002524C0: ;
    MEM32(ecx) = 0x80094C;
    PUSH32(esp, 0x002524CBu); RECOMP_ABI_CALL(0x0001B10Eu, sub_0001B10E); /* call 0x0001B10E */

loc_002524CB: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002A61D(); return; /* tail jmp 0x0002A61D */

}

/**
 * sub_002524E0
 * Original: 0x002524E0 - 0x00252887 (935 bytes, 197 insns)
 * CC: cdecl, 190 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002524E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002524E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    SET_LO8(eax, 1);
    PUSH32(esp, 0x14);
    ecx = esp + 0x118;
    MEM8(ebp + 0x89) = LO8(eax);
    MEM8(ebp + 0x88) = LO8(eax);
    MEM8(ebp + 0x8A) = LO8(eax);
    eax = MEM32(esp + 0x264);
    PUSH32(esp, ecx);
    edx = ebp + 4;
    PUSH32(esp, edx);
    MEM32(ebp) = eax;
    PUSH32(esp, 0x00252517u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00252517: ;
    PUSH32(esp, 0x14);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + 0x18;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    MEM8(ebp + 0x17) = LO8(ebx);
    PUSH32(esp, 0x0025252Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0025252C: ;
    PUSH32(esp, 0x14);
    edx = esp + 0x230;
    PUSH32(esp, edx);
    eax = ebp + 0x2C;
    PUSH32(esp, eax);
    MEM8(ebp + 0x2B) = LO8(ebx);
    PUSH32(esp, 0x00252542u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00252542: ;
    SET_LO16(ecx, MEM16(esp + 0x278));
    SET_LO8(edx, MEM8(esp + 0x281));
    SET_LO8(eax, MEM8(esp + 0x280));
    MEM16(ebp + 0x40) = LO16(ecx);
    ecx = ZX16(MEM16(esp + 0x27E));
    MEM32(ebp + 0x48) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x294));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebp + 0x43) = LO8(edx);
    edx = ZX16(MEM16(esp + 0x256));
    MEM8(ebp + 0x51) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x276));
    MEM8(ebp + 0x53) = LO8(ecx);
    SET_LO16(ecx, MEM16(esp + 0x26C));
    MEM32(ebp + 0x4C) = edx;
    SET_LO8(edx, MEM8(esp + 0x2D8));
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM16(ebp + 0x58) = LO16(ecx);
    MEM8(ebp + 0x52) = LO8(edx);
    SET_LO16(edx, MEM16(esp + 0x268));
    edi = ebp + 0x9D;
    ecx = 0x15;
    esi = esp + 0x279;
    MEM8(ebp + 0x44) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x274));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    MEM16(ebp + 0x56) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x271));
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
    SET_LO16(ecx, MEM16(esp + 0x272));
    MEM8(ebp + 0x3F) = LO8(ebx);
    MEM8(ebp + 0x50) = LO8(eax);
    MEM16(ebp + 0x54) = LO16(ebx);
    MEM8(ebp + 0x5E) = LO8(edx);
    MEM16(ebp + 0x60) = LO16(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0025273F; /* jne: not equal / not zero */

loc_002525F8: ;
    SET_LO8(edx, MEM8(esp + 0x2DE));
    SET_LO8(ecx, MEM8(esp + 0x2D5));
    MEM8(ebp + 0x88) = LO8(edx);
    _fa = (uint32_t)(MEM8(esp + 0x2D2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x2D2), LO8(ebx) (8-bit) */
    SET_LO8(eax, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    MEM8(ebp + 0x85) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2D4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    SET_LO8(eax, MEM8(esp + 0x2DF));
    MEM8(ebp + 0x89) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2E7));
    MEM8(ebp + 0x86) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2E0));
    MEM8(ebp + 0x8D) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2E9));
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + 0x87) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2F4));
    MEM8(ebp + 0x8A) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2E6));
    MEM8(ebp + 0x8B) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2EA));
    MEM8(ebp + 0x90) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2E4));
    MEM8(ebp + 0x8E) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2EB));
    MEM8(ebp + 0x8F) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2E2));
    MEM8(ebp + 0x93) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2F0));
    MEM8(ebp + 0x91) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2E3));
    MEM8(ebp + 0x92) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2EE));
    MEM8(ebp + 0x96) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2F2));
    MEM8(ebp + 0x94) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2F5));
    MEM8(ebp + 0x95) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2EC));
    MEM8(ebp + 0x99) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2E5));
    POP32(esp, edi);
    MEM8(ebp + 0x97) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2ED));
    MEM8(ebp + 0x98) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2EB));
    MEM8(ebp + 0x9C) = LO8(eax);
    POP32(esp, esi);
    MEM8(ebp + 0x8C) = LO8(ebx);
    MEM8(ebp + 0x9A) = LO8(ecx);
    MEM8(ebp + 0x9B) = LO8(edx);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 764; return; /* ret 760 */

loc_0025273F: ;
    SET_LO8(eax, MEM8(esp + 0x2D0));
    SET_LO8(ecx, MEM8(esp + 0x2DC));
    SET_LO8(edx, MEM8(esp + 0x2D1));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esp + 0x2DB));
    MEM8(ebp + 0x62) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2DD));
    MEM8(ebp + 0x64) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2E2));
    MEM8(ebp + 0x63) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2F5));
    MEM8(ebp + 0x66) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2EB));
    MEM8(ebp + 0x6D) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2E7));
    MEM8(ebp + 0x6C) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2E6));
    MEM8(ebp + 0x6E) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2E8));
    MEM8(ebp + 0x70) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2EC));
    MEM8(ebp + 0x6F) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2E9));
    MEM8(ebp + 0x71) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2ED));
    MEM8(ebp + 0x73) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2F4));
    MEM8(ebp + 0x72) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2E4));
    MEM8(ebp + 0x74) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2F3));
    MEM8(ebp + 0x76) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2E5));
    MEM8(ebp + 0x75) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2E3));
    MEM8(ebp + 0x77) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2F8));
    MEM8(ebp + 0x79) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2FA));
    MEM8(ebp + 0x78) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2F1));
    MEM8(ebp + 0x7A) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2F9));
    MEM8(ebp + 0x7C) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2F2));
    MEM8(ebp + 0x7B) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2F7));
    MEM8(ebp + 0x7D) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2EF));
    MEM8(ebp + 0x7F) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x2F6));
    POP32(esp, edi);
    MEM8(ebp + 0x7E) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x2EC));
    MEM8(ebp + 0x80) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x2EA));
    MEM8(ebp + 0x82) = LO8(eax);
    POP32(esp, esi);
    MEM8(ebp + 0x65) = LO8(ebx);
    MEM8(ebp + 0x67) = LO8(ebx);
    MEM8(ebp + 0x68) = LO8(ebx);
    MEM8(ebp + 0x69) = LO8(ebx);
    MEM8(ebp + 0x6A) = LO8(ebx);
    MEM8(ebp + 0x6B) = LO8(ebx);
    MEM8(ebp + 0x81) = LO8(edx);
    MEM8(ebp + 0x83) = LO8(ecx);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 764; return; /* ret 760 */

}

/**
 * sub_00252970
 * Original: 0x00252970 - 0x002529E9 (121 bytes, 38 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252970: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x800A30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025298Fu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025298F: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, 0x8009C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002529ABu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002529AB: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, 0x800988);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002529C4u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002529C4: ;
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x800950);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002529DDu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002529DD: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00252A10
 * Original: 0x00252A10 - 0x00252A75 (101 bytes, 35 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252A10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0x6D;
    /* nop */

loc_00252A20: ;
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x800AD8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00252A3Au); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00252A3A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0xC), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) edi = esi; /* cmove */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00252A20; /* je: equal / zero */

loc_00252A4C: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x800A68);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252A68u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00252A68: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00252A90
 * Original: 0x00252A90 - 0x00252BC2 (306 bytes, 105 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252A90: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax + 0x50));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00252AD3; /* jne: not equal / not zero */

loc_00252AA1: ;
    SET_LO8(ecx, MEM8(eax + 0x8A));
    SET_LO8(edx, MEM8(eax + 0x88));
    SET_LO8(ebx, MEM8(eax + 0x85));
    MEM8(esp + 0xB) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x87));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, MEM8(eax + 0x89));
    MEM8(esp + 0xA) = LO8(edx);
    MEM8(esp + 9) = 0;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    goto loc_00252AF4;

loc_00252AD3: ;
    SET_LO8(ecx, MEM8(eax + 0x62));
    SET_LO8(edx, MEM8(eax + 0x64));
    MEM8(esp + 0xA) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x63));
    MEM8(esp + 0xB) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x66));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(esp + 9) = LO8(edx);
    SET_LO8(edx, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_00252AF4: ;
    esi = MEM32(eax + 0x4C);
    PUSH32(esp, 0xDEADDEADu);
    MEM8(esp + 0x24) = LO8(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = SX8(LO8(edx));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7D6 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(0xFFFFF859u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFF859u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ZX8(MEM8(eax + 0x42));
    PUSH32(esp, ecx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x34);
    edx = ZX16(MEM16(eax + 0x5C));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x25);
    edx = (uint32_t)(int32_t)SMEM8(esp + 0x26);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x2B);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x53));
    edx = SX8(LO8(ebx));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x52));
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 0x56));
    PUSH32(esp, edx);
    edx = ZX16(MEM16(eax + 0x40));
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x50));
    ecx = eax + 0x2C;
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x51));
    PUSH32(esp, edx);
    edx = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x5E));
    _fb = (uint32_t)(0x96) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x96;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x43));
    _fb = (uint32_t)(0x36) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x36;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x44));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x48);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x7A7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x7A7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = eax + 4;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x7C;
    PUSH32(esp, 0x800B30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00252BA8u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00252BA8: ;
    ecx = MEM32(esp + 0x88);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00252BBC; /* je: equal / zero */

loc_00252BBA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00252BBC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00252C10
 * Original: 0x00252C10 - 0x00252CC3 (179 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252C10: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = ZX8(MEM8(eax + 0x7E));
    edx = ZX8(MEM8(eax + 0x7C));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x7D));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x82));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x6C));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x76));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x77));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x7F));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x7B));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x81));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x80));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x83));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x74));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x73));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x6E));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x72));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x71));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x70));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x6F));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x79));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x75));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x78));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x6D));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x7A));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, 0x800E50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252CB4u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00252CB4: ;
    _fa = (uint32_t)(MEM16(esp + 0x70)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x70), 0 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00252CF0
 * Original: 0x00252CF0 - 0x00252DB1 (193 bytes, 55 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252CF0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX8(MEM8(eax + 0x97));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(eax + 0x93));
    PUSH32(esp, edi);
    edi = ZX8(MEM8(eax + 0x8B));
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x99));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x9A));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x96));
    edx = ZX8(MEM8(eax + 0x8F));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x9B));
    esi = ZX8(MEM8(eax + 0x90));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x95));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x98));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x91));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x8E));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x8D));
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x9C));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x94));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x92));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, 0x801138);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252D9Du); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00252D9D: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 8), 0 (16-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00252DF0
 * Original: 0x00252DF0 - 0x00252F1C (300 bytes, 102 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252DF0: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax + 0x50));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00252E33; /* jne: not equal / not zero */

loc_00252E01: ;
    SET_LO8(ecx, MEM8(eax + 0x8A));
    SET_LO8(edx, MEM8(eax + 0x88));
    SET_LO8(ebx, MEM8(eax + 0x85));
    MEM8(esp + 0xB) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x87));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, MEM8(eax + 0x89));
    MEM8(esp + 0xA) = LO8(edx);
    MEM8(esp + 9) = 0;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    goto loc_00252E54;

loc_00252E33: ;
    SET_LO8(ecx, MEM8(eax + 0x62));
    SET_LO8(edx, MEM8(eax + 0x64));
    MEM8(esp + 0xA) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x63));
    MEM8(esp + 0xB) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x66));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(esp + 9) = LO8(edx);
    SET_LO8(edx, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_00252E54: ;
    esi = MEM32(eax + 0x4C);
    PUSH32(esp, 0xDEADDEADu);
    MEM8(esp + 0x24) = LO8(ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = SX8(LO8(edx));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7D6 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(0xFFFFF859u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFF859u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ZX8(MEM8(eax + 0x42));
    PUSH32(esp, ecx);
    edx = (uint32_t)(int32_t)SMEM8(esp + 0x34);
    ecx = ZX16(MEM16(eax + 0x5C));
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(esp + 0x21);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x26);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(esp + 0x2B);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x53));
    ecx = SX8(LO8(ebx));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x52));
    PUSH32(esp, edx);
    edx = ZX16(MEM16(eax + 0x56));
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 0x40));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x50));
    edx = eax + 0x2C;
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x51));
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x5E));
    _fb = (uint32_t)(0x96) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x96;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x43));
    _fb = (uint32_t)(0x36) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x36;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x44));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x48);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x7A7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x7A7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edx = eax + 4;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x7C;
    PUSH32(esp, 0x8013B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00252F08u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00252F08: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0xC), 0 (16-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00252F70
 * Original: 0x00252F70 - 0x00253023 (179 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00252F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00252F70: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = ZX8(MEM8(eax + 0x7E));
    edx = ZX8(MEM8(eax + 0x7C));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x7D));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x82));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x6C));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x76));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x77));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x7F));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x7B));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x81));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x80));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x83));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x74));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x73));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x6E));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x72));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x71));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x70));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x6F));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x79));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x75));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x78));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x6D));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x7A));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, 0x8016D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253014u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00253014: ;
    _fa = (uint32_t)(MEM16(esp + 0x70)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x70), 0 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00253050
 * Original: 0x00253050 - 0x00253111 (193 bytes, 55 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00253050: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX8(MEM8(eax + 0x97));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(eax + 0x93));
    PUSH32(esp, edi);
    edi = ZX8(MEM8(eax + 0x8B));
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x99));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x9A));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x96));
    edx = ZX8(MEM8(eax + 0x8F));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x9B));
    esi = ZX8(MEM8(eax + 0x90));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x95));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x98));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x91));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x8E));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x8D));
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x9C));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x94));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x92));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, 0x8019B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002530FDu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002530FD: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 8), 0 (16-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00253150
 * Original: 0x00253150 - 0x00253154 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253150(void)
{

loc_00253150: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00253160
 * Original: 0x00253160 - 0x002533AD (589 bytes, 254 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00253160: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025317C; /* je: equal / zero */

loc_00253170: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253176u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00253176: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = edi;

loc_0025317C: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025318F; /* je: equal / zero */

loc_00253183: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253189u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00253189: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = edi;

loc_0025318F: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x802714);
    PUSH32(esp, ecx);
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x002531AAu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002531AA: ;
    eax = ZX16(MEM16(esp + 0x18));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0025339B; /* jbe: below or equal (unsigned <=) */

loc_002531BD: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002531C7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002531C7: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002531D7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002531D7: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0025339B; /* jbe: below or equal (unsigned <=) */

loc_002531E8: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002531F0;

    /* nop */

loc_002531F0: ;
    PUSH32(esp, 0xDEADDEADu);
    edx = MEM32(esi + 0xC);
    eax = ebx + edx;
    ecx = eax + 0x45;
    PUSH32(esp, ecx);
    edx = eax + 0x44;
    PUSH32(esp, edx);
    ecx = eax + 0x43;
    PUSH32(esp, ecx);
    edx = eax + 0x42;
    PUSH32(esp, edx);
    ecx = eax + 0x41;
    PUSH32(esp, ecx);
    edx = eax + 0x40;
    PUSH32(esp, edx);
    ecx = eax + 0x3F;
    PUSH32(esp, ecx);
    edx = eax + 0x3E;
    PUSH32(esp, edx);
    ecx = eax + 0x3D;
    PUSH32(esp, ecx);
    edx = eax + 0x3C;
    PUSH32(esp, edx);
    ecx = eax + 0x3B;
    PUSH32(esp, ecx);
    edx = eax + 0x3A;
    PUSH32(esp, edx);
    ecx = eax + 0x39;
    PUSH32(esp, ecx);
    edx = eax + 0x38;
    PUSH32(esp, edx);
    ecx = eax + 0x37;
    PUSH32(esp, ecx);
    edx = eax + 0x36;
    PUSH32(esp, edx);
    ecx = eax + 0x35;
    PUSH32(esp, ecx);
    edx = eax + 0x34;
    PUSH32(esp, edx);
    ecx = eax + 0x33;
    PUSH32(esp, ecx);
    edx = eax + 0x32;
    PUSH32(esp, edx);
    ecx = eax + 0x31;
    PUSH32(esp, ecx);
    edx = eax + 0x30;
    PUSH32(esp, edx);
    ecx = eax + 0x2F;
    PUSH32(esp, ecx);
    edx = eax + 0x2E;
    PUSH32(esp, edx);
    ecx = eax + 0x2D;
    PUSH32(esp, ecx);
    edx = eax + 0x2C;
    PUSH32(esp, edx);
    ecx = eax + 0x2B;
    PUSH32(esp, ecx);
    edx = eax + 0x2A;
    PUSH32(esp, edx);
    ecx = eax + 0x29;
    PUSH32(esp, ecx);
    edx = eax + 0x28;
    PUSH32(esp, edx);
    ecx = eax + 0x27;
    PUSH32(esp, ecx);
    edx = eax + 0x26;
    PUSH32(esp, edx);
    ecx = eax + 0x25;
    PUSH32(esp, ecx);
    edx = eax + 0x24;
    PUSH32(esp, edx);
    ecx = eax + 0x23;
    PUSH32(esp, ecx);
    edx = eax + 0x22;
    PUSH32(esp, edx);
    ecx = eax + 0x21;
    PUSH32(esp, ecx);
    edx = eax + 0x20;
    PUSH32(esp, edx);
    ecx = eax + 0x1F;
    PUSH32(esp, ecx);
    edx = eax + 0x1E;
    PUSH32(esp, edx);
    ecx = eax + 0x1D;
    PUSH32(esp, ecx);
    edx = eax + 0x1C;
    PUSH32(esp, edx);
    ecx = eax + 0x1B;
    PUSH32(esp, ecx);
    edx = eax + 0x1A;
    PUSH32(esp, edx);
    ecx = eax + 0x19;
    PUSH32(esp, ecx);
    edx = eax + 0x18;
    PUSH32(esp, edx);
    ecx = eax + 0x17;
    PUSH32(esp, ecx);
    edx = eax + 0x16;
    PUSH32(esp, edx);
    ecx = eax + 0x15;
    PUSH32(esp, ecx);
    edx = eax + 0x14;
    PUSH32(esp, edx);
    ecx = eax + 0x13;
    PUSH32(esp, ecx);
    edx = eax + 0x12;
    PUSH32(esp, edx);
    ecx = eax + 0x11;
    PUSH32(esp, ecx);
    edx = eax + 0x10;
    PUSH32(esp, edx);
    ecx = eax + 0xF;
    PUSH32(esp, ecx);
    edx = eax + 0xE;
    PUSH32(esp, edx);
    ecx = eax + 0xD;
    PUSH32(esp, ecx);
    edx = eax + 0xC;
    PUSH32(esp, edx);
    ecx = eax + 0xB;
    PUSH32(esp, ecx);
    edx = eax + 0xA;
    PUSH32(esp, edx);
    ecx = eax + 9;
    PUSH32(esp, ecx);
    edx = eax + 8;
    PUSH32(esp, edx);
    ecx = eax + 7;
    PUSH32(esp, ecx);
    edx = eax + 6;
    PUSH32(esp, edx);
    ecx = eax + 5;
    PUSH32(esp, ecx);
    edx = eax + 4;
    PUSH32(esp, edx);
    ecx = eax + 3;
    PUSH32(esp, ecx);
    edx = eax + 2;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    ecx = eax + 1;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = edx + edi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x130;
    PUSH32(esp, 0x801E08);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025332Du); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025332D: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xDEADDEADu);
    ecx = eax + 0x53;
    PUSH32(esp, ecx);
    edx = eax + 0x52;
    PUSH32(esp, edx);
    ecx = eax + 0x51;
    PUSH32(esp, ecx);
    edx = eax + 0x50;
    PUSH32(esp, edx);
    ecx = eax + 0x4F;
    PUSH32(esp, ecx);
    edx = eax + 0x4E;
    PUSH32(esp, edx);
    ecx = eax + 0x4D;
    PUSH32(esp, ecx);
    edx = eax + 0x4C;
    PUSH32(esp, edx);
    ecx = eax + 0x4B;
    PUSH32(esp, ecx);
    edx = eax + 0x4A;
    PUSH32(esp, edx);
    ecx = eax + 0x49;
    PUSH32(esp, ecx);
    edx = eax + 0x48;
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    ecx = eax + 0x47;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x46) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x178;
    PUSH32(esp, 0x801C30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253385u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00253385: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x174;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x54;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002531F0; /* jb: below (unsigned <) */

loc_0025339A: ;
    POP32(esp, ebx);

loc_0025339B: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002533A4u); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_002533A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00253440
 * Original: 0x00253440 - 0x0025368D (589 bytes, 254 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00253440: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025345C; /* je: equal / zero */

loc_00253450: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253456u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00253456: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = edi;

loc_0025345C: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025346F; /* je: equal / zero */

loc_00253463: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253469u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00253469: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = edi;

loc_0025346F: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x80322C);
    PUSH32(esp, ecx);
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x0025348Au); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025348A: ;
    eax = ZX16(MEM16(esp + 0x18));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0025367B; /* jbe: below or equal (unsigned <=) */

loc_0025349D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002534A7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002534A7: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002534B7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002534B7: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0025367B; /* jbe: below or equal (unsigned <=) */

loc_002534C8: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002534D0;

    /* nop */

loc_002534D0: ;
    PUSH32(esp, 0xDEADDEADu);
    edx = MEM32(esi + 0xC);
    eax = ebx + edx;
    ecx = eax + 0x45;
    PUSH32(esp, ecx);
    edx = eax + 0x44;
    PUSH32(esp, edx);
    ecx = eax + 0x43;
    PUSH32(esp, ecx);
    edx = eax + 0x42;
    PUSH32(esp, edx);
    ecx = eax + 0x41;
    PUSH32(esp, ecx);
    edx = eax + 0x40;
    PUSH32(esp, edx);
    ecx = eax + 0x3F;
    PUSH32(esp, ecx);
    edx = eax + 0x3E;
    PUSH32(esp, edx);
    ecx = eax + 0x3D;
    PUSH32(esp, ecx);
    edx = eax + 0x3C;
    PUSH32(esp, edx);
    ecx = eax + 0x3B;
    PUSH32(esp, ecx);
    edx = eax + 0x3A;
    PUSH32(esp, edx);
    ecx = eax + 0x39;
    PUSH32(esp, ecx);
    edx = eax + 0x38;
    PUSH32(esp, edx);
    ecx = eax + 0x37;
    PUSH32(esp, ecx);
    edx = eax + 0x36;
    PUSH32(esp, edx);
    ecx = eax + 0x35;
    PUSH32(esp, ecx);
    edx = eax + 0x34;
    PUSH32(esp, edx);
    ecx = eax + 0x33;
    PUSH32(esp, ecx);
    edx = eax + 0x32;
    PUSH32(esp, edx);
    ecx = eax + 0x31;
    PUSH32(esp, ecx);
    edx = eax + 0x30;
    PUSH32(esp, edx);
    ecx = eax + 0x2F;
    PUSH32(esp, ecx);
    edx = eax + 0x2E;
    PUSH32(esp, edx);
    ecx = eax + 0x2D;
    PUSH32(esp, ecx);
    edx = eax + 0x2C;
    PUSH32(esp, edx);
    ecx = eax + 0x2B;
    PUSH32(esp, ecx);
    edx = eax + 0x2A;
    PUSH32(esp, edx);
    ecx = eax + 0x29;
    PUSH32(esp, ecx);
    edx = eax + 0x28;
    PUSH32(esp, edx);
    ecx = eax + 0x27;
    PUSH32(esp, ecx);
    edx = eax + 0x26;
    PUSH32(esp, edx);
    ecx = eax + 0x25;
    PUSH32(esp, ecx);
    edx = eax + 0x24;
    PUSH32(esp, edx);
    ecx = eax + 0x23;
    PUSH32(esp, ecx);
    edx = eax + 0x22;
    PUSH32(esp, edx);
    ecx = eax + 0x21;
    PUSH32(esp, ecx);
    edx = eax + 0x20;
    PUSH32(esp, edx);
    ecx = eax + 0x1F;
    PUSH32(esp, ecx);
    edx = eax + 0x1E;
    PUSH32(esp, edx);
    ecx = eax + 0x1D;
    PUSH32(esp, ecx);
    edx = eax + 0x1C;
    PUSH32(esp, edx);
    ecx = eax + 0x1B;
    PUSH32(esp, ecx);
    edx = eax + 0x1A;
    PUSH32(esp, edx);
    ecx = eax + 0x19;
    PUSH32(esp, ecx);
    edx = eax + 0x18;
    PUSH32(esp, edx);
    ecx = eax + 0x17;
    PUSH32(esp, ecx);
    edx = eax + 0x16;
    PUSH32(esp, edx);
    ecx = eax + 0x15;
    PUSH32(esp, ecx);
    edx = eax + 0x14;
    PUSH32(esp, edx);
    ecx = eax + 0x13;
    PUSH32(esp, ecx);
    edx = eax + 0x12;
    PUSH32(esp, edx);
    ecx = eax + 0x11;
    PUSH32(esp, ecx);
    edx = eax + 0x10;
    PUSH32(esp, edx);
    ecx = eax + 0xF;
    PUSH32(esp, ecx);
    edx = eax + 0xE;
    PUSH32(esp, edx);
    ecx = eax + 0xD;
    PUSH32(esp, ecx);
    edx = eax + 0xC;
    PUSH32(esp, edx);
    ecx = eax + 0xB;
    PUSH32(esp, ecx);
    edx = eax + 0xA;
    PUSH32(esp, edx);
    ecx = eax + 9;
    PUSH32(esp, ecx);
    edx = eax + 8;
    PUSH32(esp, edx);
    ecx = eax + 7;
    PUSH32(esp, ecx);
    edx = eax + 6;
    PUSH32(esp, edx);
    ecx = eax + 5;
    PUSH32(esp, ecx);
    edx = eax + 4;
    PUSH32(esp, edx);
    ecx = eax + 3;
    PUSH32(esp, ecx);
    edx = eax + 2;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    ecx = eax + 1;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = edx + edi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x130;
    PUSH32(esp, 0x802920);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025360Du); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_0025360D: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xDEADDEADu);
    ecx = eax + 0x53;
    PUSH32(esp, ecx);
    edx = eax + 0x52;
    PUSH32(esp, edx);
    ecx = eax + 0x51;
    PUSH32(esp, ecx);
    edx = eax + 0x50;
    PUSH32(esp, edx);
    ecx = eax + 0x4F;
    PUSH32(esp, ecx);
    edx = eax + 0x4E;
    PUSH32(esp, edx);
    ecx = eax + 0x4D;
    PUSH32(esp, ecx);
    edx = eax + 0x4C;
    PUSH32(esp, edx);
    ecx = eax + 0x4B;
    PUSH32(esp, ecx);
    edx = eax + 0x4A;
    PUSH32(esp, edx);
    ecx = eax + 0x49;
    PUSH32(esp, ecx);
    edx = eax + 0x48;
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    ecx = eax + 0x47;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x46) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x178;
    PUSH32(esp, 0x802748);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253665u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00253665: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x174;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x54;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002534D0; /* jb: below (unsigned <) */

loc_0025367A: ;
    POP32(esp, ebx);

loc_0025367B: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00253684u); RECOMP_ABI_CALL(0x00025794u, sub_00025794); /* call 0x00025794 */

loc_00253684: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00253720
 * Original: 0x00253720 - 0x00253929 (521 bytes, 227 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00253720: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0025373E; /* je: equal / zero */

loc_0025372E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253734u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00253734: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_0025373E: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253755; /* je: equal / zero */

loc_00253745: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025374Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0025374B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = 0;

loc_00253755: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x54);
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x00253765u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00253765: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00253771u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00253771: ;
    PUSH32(esp, 0xDEADDEADu);
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 0xC);
    ecx = eax + 0x45;
    PUSH32(esp, ecx);
    edx = eax + 0x44;
    PUSH32(esp, edx);
    ecx = eax + 0x43;
    PUSH32(esp, ecx);
    edx = eax + 0x42;
    PUSH32(esp, edx);
    ecx = eax + 0x41;
    PUSH32(esp, ecx);
    edx = eax + 0x40;
    PUSH32(esp, edx);
    ecx = eax + 0x3F;
    PUSH32(esp, ecx);
    edx = eax + 0x3E;
    PUSH32(esp, edx);
    ecx = eax + 0x3D;
    PUSH32(esp, ecx);
    edx = eax + 0x3C;
    PUSH32(esp, edx);
    ecx = eax + 0x3B;
    PUSH32(esp, ecx);
    edx = eax + 0x3A;
    PUSH32(esp, edx);
    ecx = eax + 0x39;
    PUSH32(esp, ecx);
    edx = eax + 0x38;
    PUSH32(esp, edx);
    ecx = eax + 0x37;
    PUSH32(esp, ecx);
    edx = eax + 0x36;
    PUSH32(esp, edx);
    ecx = eax + 0x35;
    PUSH32(esp, ecx);
    edx = eax + 0x34;
    PUSH32(esp, edx);
    ecx = eax + 0x33;
    PUSH32(esp, ecx);
    edx = eax + 0x32;
    PUSH32(esp, edx);
    ecx = eax + 0x31;
    PUSH32(esp, ecx);
    edx = eax + 0x30;
    PUSH32(esp, edx);
    ecx = eax + 0x2F;
    PUSH32(esp, ecx);
    edx = eax + 0x2E;
    PUSH32(esp, edx);
    ecx = eax + 0x2D;
    PUSH32(esp, ecx);
    edx = eax + 0x2C;
    PUSH32(esp, edx);
    ecx = eax + 0x2B;
    PUSH32(esp, ecx);
    edx = eax + 0x2A;
    PUSH32(esp, edx);
    ecx = eax + 0x29;
    PUSH32(esp, ecx);
    edx = eax + 0x28;
    PUSH32(esp, edx);
    ecx = eax + 0x27;
    PUSH32(esp, ecx);
    edx = eax + 0x26;
    PUSH32(esp, edx);
    ecx = eax + 0x25;
    PUSH32(esp, ecx);
    edx = eax + 0x24;
    PUSH32(esp, edx);
    ecx = eax + 0x23;
    PUSH32(esp, ecx);
    edx = eax + 0x22;
    PUSH32(esp, edx);
    ecx = eax + 0x21;
    PUSH32(esp, ecx);
    edx = eax + 0x20;
    PUSH32(esp, edx);
    ecx = eax + 0x1F;
    PUSH32(esp, ecx);
    edx = eax + 0x1E;
    PUSH32(esp, edx);
    ecx = eax + 0x1D;
    PUSH32(esp, ecx);
    edx = eax + 0x1C;
    PUSH32(esp, edx);
    ecx = eax + 0x1B;
    PUSH32(esp, ecx);
    edx = eax + 0x1A;
    PUSH32(esp, edx);
    ecx = eax + 0x19;
    PUSH32(esp, ecx);
    edx = eax + 0x18;
    PUSH32(esp, edx);
    ecx = eax + 0x17;
    PUSH32(esp, ecx);
    edx = eax + 0x16;
    PUSH32(esp, edx);
    ecx = eax + 0x15;
    PUSH32(esp, ecx);
    edx = eax + 0x14;
    PUSH32(esp, edx);
    ecx = eax + 0x13;
    PUSH32(esp, ecx);
    edx = eax + 0x12;
    PUSH32(esp, edx);
    ecx = eax + 0x11;
    PUSH32(esp, ecx);
    edx = eax + 0x10;
    PUSH32(esp, edx);
    ecx = eax + 0xF;
    PUSH32(esp, ecx);
    edx = eax + 0xE;
    PUSH32(esp, edx);
    ecx = eax + 0xD;
    PUSH32(esp, ecx);
    edx = eax + 0xC;
    PUSH32(esp, edx);
    ecx = eax + 0xB;
    PUSH32(esp, ecx);
    edx = eax + 0xA;
    PUSH32(esp, edx);
    ecx = eax + 9;
    PUSH32(esp, ecx);
    edx = eax + 8;
    PUSH32(esp, edx);
    ecx = eax + 7;
    PUSH32(esp, ecx);
    edx = eax + 6;
    PUSH32(esp, edx);
    ecx = eax + 5;
    PUSH32(esp, ecx);
    edx = eax + 4;
    PUSH32(esp, edx);
    ecx = eax + 3;
    PUSH32(esp, ecx);
    edx = eax + 2;
    PUSH32(esp, edx);
    ecx = eax + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x138;
    PUSH32(esp, 0x803460);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002538A8u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_002538A8: ;
    eax = ZX16(MEM16(esp + 0x140));
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x138;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002538C7; /* jne: not equal / not zero */

loc_002538BD: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002538C7: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    ecx = eax + 0x53;
    PUSH32(esp, ecx);
    edx = eax + 0x52;
    PUSH32(esp, edx);
    ecx = eax + 0x51;
    PUSH32(esp, ecx);
    edx = eax + 0x50;
    PUSH32(esp, edx);
    ecx = eax + 0x4F;
    PUSH32(esp, ecx);
    edx = eax + 0x4E;
    PUSH32(esp, edx);
    ecx = eax + 0x4D;
    PUSH32(esp, ecx);
    edx = eax + 0x4C;
    PUSH32(esp, edx);
    ecx = eax + 0x4B;
    PUSH32(esp, ecx);
    edx = eax + 0x4A;
    PUSH32(esp, edx);
    ecx = eax + 0x49;
    PUSH32(esp, ecx);
    edx = eax + 0x48;
    PUSH32(esp, edx);
    ecx = eax + 0x47;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x46) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x48;
    PUSH32(esp, 0x803260);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00253917u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00253917: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002539B0
 * Original: 0x002539B0 - 0x002539F3 (67 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002539B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002539B0: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_002539CE; /* jbe: below or equal (unsigned <=) */

loc_002539BB: ;
    edx = MEM32(ecx + 0x10);
    edi = MEM32(esp + 0xC);

loc_002539C2: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002539CE; /* je: equal / zero */

loc_002539C6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002539C2; /* jb: below (unsigned <) */

loc_002539CE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002539D9; /* jne: not equal / not zero */

loc_002539D2: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002539D9: ;
    eax = MEM32(ecx + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x54);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x15;
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
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00253A10
 * Original: 0x00253A10 - 0x00253A3B (43 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00253A10: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x803D70);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00253A2Cu); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00253A2C: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00253A50
 * Original: 0x00253A50 - 0x00253C65 (533 bytes, 207 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00253A50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    eax = ZX8(MEM8(esi + 0x45));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x44));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x43));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x42));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x41));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x40));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x3F));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x3E));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x3D));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x3C));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x3B));
    edx = ZX8(MEM8(esi + 0x3A));
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(esi + 0x39));
    ecx = ZX8(MEM8(esi + 0x38));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x37));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x36));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x35));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x34));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x33));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x32));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x31));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x30));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x2F));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x2E));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x2D));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x2C));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x2B));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x2A));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x29));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x28));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x27));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x26));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x25));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x24));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x23));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x22));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x21));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    SET_LO8(ebx, 1);
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x20));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x1F));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x1E));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x1C));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x1B));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x1A));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x19));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x18));
    ecx = ZX8(MEM8(esi + 0x17));
    PUSH32(esp, eax);
    edx = ZX8(MEM8(esi + 0x16));
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(esi + 0x15));
    ecx = ZX8(MEM8(esi + 0x14));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x13));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x12));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x11));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x10));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0xF));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0xE));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0xD));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0xC));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0xB));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0xA));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 9));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 8));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 7));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 6));
    edi = MEM32(esp + 0x118);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 5));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 4));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 3));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 2));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 1));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x12C;
    PUSH32(esp, 0x803F70);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00253BD8u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00253BD8: ;
    eax = MEM32(esp + 0x138);
    _fb = (uint32_t)(0x128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x128;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253C4F; /* jne: not equal / not zero */

loc_00253BE9: ;
    edx = ZX8(MEM8(esi + 0x53));
    eax = ZX8(MEM8(esi + 0x52));
    ecx = ZX8(MEM8(esi + 0x51));
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x50));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x4F));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x4E));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x4D));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x4C));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x4B));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x4A));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x49));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x48));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x47));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x46));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x803DA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00253C44u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00253C44: ;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253C5A; /* je: equal / zero */

loc_00253C4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00253C5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00253CF0
 * Original: 0x00253CF0 - 0x00253F05 (533 bytes, 207 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00253CF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    eax = ZX8(MEM8(esi + 0x45));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x44));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x43));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x42));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x41));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x40));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x3F));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x3E));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x3D));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x3C));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x3B));
    edx = ZX8(MEM8(esi + 0x3A));
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(esi + 0x39));
    ecx = ZX8(MEM8(esi + 0x38));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x37));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x36));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x35));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x34));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x33));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x32));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x31));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x30));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x2F));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x2E));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x2D));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x2C));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x2B));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x2A));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x29));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x28));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x27));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x26));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x25));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x24));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x23));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x22));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x21));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    SET_LO8(ebx, 1);
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x20));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x1F));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x1E));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x1C));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x1B));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x1A));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x19));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x18));
    ecx = ZX8(MEM8(esi + 0x17));
    PUSH32(esp, eax);
    edx = ZX8(MEM8(esi + 0x16));
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(esi + 0x15));
    ecx = ZX8(MEM8(esi + 0x14));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x13));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x12));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x11));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x10));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0xF));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0xE));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0xD));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0xC));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0xB));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0xA));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 9));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 8));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 7));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 6));
    edi = MEM32(esp + 0x118);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 5));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 4));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 3));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 2));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 1));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x12C;
    PUSH32(esp, 0x804950);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00253E78u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00253E78: ;
    eax = MEM32(esp + 0x138);
    _fb = (uint32_t)(0x128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x128;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253EEF; /* jne: not equal / not zero */

loc_00253E89: ;
    edx = ZX8(MEM8(esi + 0x53));
    eax = ZX8(MEM8(esi + 0x52));
    ecx = ZX8(MEM8(esi + 0x51));
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x50));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x4F));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x4E));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x4D));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x4C));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x4B));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x4A));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x49));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x48));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x47));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x46));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x804788);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00253EE4u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00253EE4: ;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253EFA; /* je: equal / zero */

loc_00253EEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00253EFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00253F90
 * Original: 0x00253F90 - 0x002541A2 (530 bytes, 207 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00253F90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0xDEADDEADu);
    eax = ZX8(MEM8(esi + 0x45));
    edi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x44));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x43));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x42));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x41));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x40));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x3F));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x3E));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x3D));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x3C));
    ecx = ZX8(MEM8(esi + 0x3B));
    PUSH32(esp, eax);
    edx = ZX8(MEM8(esi + 0x3A));
    eax = ZX8(MEM8(esi + 0x39));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x38));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x37));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x36));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x35));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x34));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x33));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x32));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x31));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x30));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x2F));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x2E));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x2D));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x2C));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x2B));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x2A));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x29));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x28));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x27));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x26));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x25));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x24));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x23));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x22));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x21));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x20));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x1F));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x1E));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x1D));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x1C));
    PUSH32(esp, edx);
    eax = ZX8(MEM8(esi + 0x1B));
    PUSH32(esp, eax);
    ecx = ZX8(MEM8(esi + 0x1A));
    PUSH32(esp, ecx);
    edx = ZX8(MEM8(esi + 0x19));
    eax = ZX8(MEM8(esi + 0x18));
    PUSH32(esp, edx);
    ecx = ZX8(MEM8(esi + 0x17));
    PUSH32(esp, eax);
    edx = ZX8(MEM8(esi + 0x16));
    eax = ZX8(MEM8(esi + 0x15));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x14));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x13));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x12));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x11));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x10));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0xF));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0xE));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0xD));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0xC));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0xB));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0xA));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 9));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 8));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 7));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 6));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 5));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 4));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 3));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 2));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 1));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x12C;
    PUSH32(esp, 0x805168);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00254115u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00254115: ;
    eax = MEM32(esp + 0x138);
    _fb = (uint32_t)(0x128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x128;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025418C; /* jne: not equal / not zero */

loc_00254126: ;
    edx = ZX8(MEM8(esi + 0x53));
    eax = ZX8(MEM8(esi + 0x52));
    ecx = ZX8(MEM8(esi + 0x51));
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x50));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x4F));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x4E));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x4D));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x4C));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x4B));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x4A));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x49));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0x48));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x47));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x46));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x803DA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00254181u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00254181: ;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254197; /* je: equal / zero */

loc_0025418C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00254197: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00254230
 * Original: 0x00254230 - 0x0025426A (58 bytes, 20 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254230: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xDEADDEADu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x805980);
    PUSH32(esp, edx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00254254u); RECOMP_ABI_CALL(0x0002117Bu, sub_0002117B); /* call 0x0002117B */

loc_00254254: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esp + 4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 4), 0 (16-bit) */
    SET_LO8(eax, 1);
    if (CMP_A(_fa, _fb)) goto loc_00254263; /* ja: above (unsigned >) */

loc_00254261: ;
    SET_LO8(eax, LO8(ebx));

loc_00254263: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00254280
 * Original: 0x00254280 - 0x00254283 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254280(void)
{

loc_00254280: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00254290
 * Original: 0x00254290 - 0x00254291 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254290(void)
{

loc_00254290: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002542A0
 * Original: 0x002542A0 - 0x002542A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002542A0(void)
{

loc_002542A0: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_002542B0
 * Original: 0x002542B0 - 0x002542B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002542B0(void)
{

loc_002542B0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002542C0
 * Original: 0x002542C0 - 0x002542C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002542C0(void)
{

loc_002542C0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_002542D0
 * Original: 0x002542D0 - 0x002542E4 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002542D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002542D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x8059D4;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002542F0
 * Original: 0x002542F0 - 0x002542F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002542F0(void)
{

loc_002542F0: ;
    MEM32(ecx) = 0x8059D4;
    esp += 4; return; /* ret */

}

/**
 * sub_00254300
 * Original: 0x00254300 - 0x0025430A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254300(void)
{

loc_00254300: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00254310
 * Original: 0x00254310 - 0x0025431A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254310(void)
{

loc_00254310: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00254320
 * Original: 0x00254320 - 0x0025432A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254320(void)
{

loc_00254320: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xC) = LO8(eax);
    esp += 8; return; /* ret 4 */

}
