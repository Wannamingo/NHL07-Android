/**
 * nhl_07_recomp - Recompiled code chunk 95
 * Functions: 250 (0x000E80E0 - 0x000EBA70)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000E80E0
 * Original: 0x000E80E0 - 0x000E8237 (343 bytes, 96 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E80E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E80E0: ;
    ecx = MEM32(0x8E9390);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8110; /* je: equal / zero */

loc_000E80EA: ;
    SET_LO8(eax, MEM8(ecx + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E8110; /* jge: greater or equal (signed >=) */

loc_000E80F4: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8110; /* je: equal / zero */

loc_000E80FA: ;
    _fa = (uint32_t)(MEM32(0x8EFF94)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFF94), 0x1E (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E8110; /* jle: less or equal (signed <=) */

loc_000E8103: ;
    eax = MEM32(0x8E8F84);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E8110u); RECOMP_ABI_CALL(0x00031FE4u, sub_00031FE4); /* call 0x00031FE4 */

loc_000E8110: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x8EFF90);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8144; /* jne: not equal / not zero */

loc_000E811D: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx);
    MEM32(0x8EFFC8) = eax;
    ecx = MEM32(edx + 4);
    MEM32(0x8EFFCC) = ecx;
    edx = MEM32(edx + 8);
    MEM32(0x8EFFD0) = edx;
    goto loc_000E814E;

loc_000E8144: ;
    ecx = 0x8EFFC8;
    PUSH32(esp, 0x000E814Eu); RECOMP_ABI_CALL(0x000E6E40u, sub_000E6E40); /* call 0x000E6E40 */

loc_000E814E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E816A; /* jle: less or equal (signed <=) */

loc_000E8152: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E8163; /* jle: less or equal (signed <=) */

loc_000E8157: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E816A; /* jne: not equal / not zero */

loc_000E815C: ;
    eax = MEM32(0x8E9AA8);
    goto loc_000E8174;

loc_000E8163: ;
    eax = MEM32(0x8E9AA4);
    goto loc_000E8174;

loc_000E816A: ;
    ecx = 0x8E96A0;
    PUSH32(esp, 0x000E8174u); RECOMP_ABI_CALL(0x0001DF9Eu, sub_0001DF9E); /* call 0x0001DF9E */

loc_000E8174: ;
    ecx = MEM32(0x8EFF94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    SET_LO8(ebx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x40);
    MEM32(ecx + 0x774) = eax;
    PUSH32(esp, 0x000E8194u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_000E8194: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E81B1; /* jne: not equal / not zero */

loc_000E819B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E81AE; /* je: equal / zero */

loc_000E819F: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x000E81AAu); RECOMP_ABI_CALL(0x000334ACu, sub_000334AC); /* call 0x000334AC */

loc_000E81AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E81B5; /* jne: not equal / not zero */

loc_000E81AE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000E81B1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E81AE; /* je: equal / zero */

loc_000E81B5: ;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E81D0; /* jne: not equal / not zero */

loc_000E81BF: ;
    _fa = (uint32_t)(MEM16(0x896162)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896162), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E81D0; /* jne: not equal / not zero */

loc_000E81C9: ;
    MEM32(0x8EFF9C) = MEM32(0x8EFF9C) | 2;
    _fa = (uint32_t)(MEM32(0x8EFF9C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E81D0: ;
    eax = MEM32(0x8EFFAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E81DE; /* je: equal / zero */

loc_000E81D9: ;
    PUSH32(esp, 0x000E81DEu); RECOMP_ABI_CALL(0x00035437u, sub_00035437); /* call 0x00035437 */

loc_000E81DE: ;
    PUSH32(esp, 0x000E81E3u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_000E81E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E81F9; /* jne: not equal / not zero */

loc_000E81E7: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E81F9; /* je: equal / zero */

loc_000E81F0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E81F9; /* je: equal / zero */

loc_000E81F4: ;
    PUSH32(esp, 0x000E81F9u); RECOMP_ABI_CALL(0x000E7460u, sub_000E7460); /* call 0x000E7460 */

loc_000E81F9: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E820A; /* je: equal / zero */

loc_000E8203: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E820Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8203u); } /* indirect call */
    }

loc_000E820A: ;
    MEM32(0x8EFF88) = 0xA;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC150); PUSH32(esp, 0x000E821Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8214u); } /* indirect call */
    }

loc_000E821A: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E81AE; /* je: equal / zero */

loc_000E822E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8AC158)); return; /* indirect tail jmp */

}

/**
 * sub_000E8290
 * Original: 0x000E8290 - 0x000E832D (157 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8290: ;
    eax = MEM32(0x8EFFAC);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E82AC; /* jne: not equal / not zero */

loc_000E829C: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8960F1);
    MEM32(0x8EFF98) = eax;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E82AC: ;
    eax = MEM32(0x8EFF94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E82BB; /* jge: greater or equal (signed >=) */

loc_000E82B6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000E82D1;

loc_000E82BB: ;
    ecx = eax + -5;
    eax = 0xB60B60B7u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
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

loc_000E82D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8EFF98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8EFF98) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8329; /* je: equal / zero */

loc_000E82D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8329; /* je: equal / zero */

loc_000E82DE: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x8960F1);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(0x8EFF98) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000E8329; /* jge: greater or equal (signed >=) */

loc_000E82EE: ;
    _fa = (uint32_t)(MEM32(0x8EFF90)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFF90), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8329; /* je: equal / zero */

loc_000E82F7: ;
    ecx = esp;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM16(esp + 0xC) = 0x58;
    MEM32(esp + 0x1C) = 0xC;
    MEM32(esp) = 0x7C2754;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000E8329u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E8329: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E8360
 * Original: 0x000E8360 - 0x000E848F (303 bytes, 72 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8360: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x8FC5D8) = LO8(ebx);
    PUSH32(esp, 0x000E8371u); RECOMP_ABI_CALL(0x000324C6u, sub_000324C6); /* call 0x000324C6 */

loc_000E8371: ;
    PUSH32(esp, 0x000E8376u); RECOMP_ABI_CALL(0x00023304u, sub_00023304); /* call 0x00023304 */

loc_000E8376: ;
    PUSH32(esp, 0x000E837Bu); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000E837B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E83B4; /* jne: not equal / not zero */

loc_000E837F: ;
    PUSH32(esp, 0x000E8384u); RECOMP_ABI_CALL(0x00028246u, sub_00028246); /* call 0x00028246 */

loc_000E8384: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000E838Fu); RECOMP_ABI_CALL(0x00018A49u, sub_00018A49); /* call 0x00018A49 */

loc_000E838F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000E839Au); RECOMP_ABI_CALL(0x00033DDAu, sub_00033DDA); /* call 0x00033DDA */

loc_000E839A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E83A7u); RECOMP_ABI_CALL(0x00018A49u, sub_00018A49); /* call 0x00018A49 */

loc_000E83A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E83B1u); RECOMP_ABI_CALL(0x00033DDAu, sub_00033DDA); /* call 0x00033DDA */

loc_000E83B1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E83B4: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x000E83BFu); RECOMP_ABI_CALL(0x00012F4Au, sub_00012F4A); /* call 0x00012F4A */

loc_000E83BF: ;
    MEM32(0x8EFF8C) = 2;
    PUSH32(esp, 0x000E83CEu); RECOMP_ABI_CALL(0x00022CFBu, sub_00022CFB); /* call 0x00022CFB */

loc_000E83CE: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFFB0) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E83E5; /* je: equal / zero */

loc_000E83DE: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E83E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E83DEu); } /* indirect call */
    }

loc_000E83E5: ;
    MEM32(0x8EFF88) = 0xA;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC150); PUSH32(esp, 0x000E83F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E83EFu); } /* indirect call */
    }

loc_000E83F5: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E840C; /* je: equal / zero */

loc_000E8405: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC158); PUSH32(esp, 0x000E840Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8405u); } /* indirect call */
    }

loc_000E840C: ;
    _fa = (uint32_t)(MEM32(0x8EFFA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFFA0), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E845B; /* je: equal / zero */

loc_000E8415: ;
    _fa = (uint32_t)(MEM32(0x8EFFA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFFA8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E845B; /* je: equal / zero */

loc_000E841D: ;
    eax = MEM32(0x8EFFA4);
    ecx = MEM32(eax * 4 + 0x8F0040);
    edx = MEM32(ecx + 8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    ecx = esp + 4;
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0xC) = ebx;
    MEM16(esp + 0x10) = 0x18;
    MEM16(esp + 0x20) = LO16(eax);
    MEM32(esp + 4) = 0x7C2734;
    PUSH32(esp, 0x000E8455u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E8455: ;
    MEM32(0x8EFFA8) = ebx;

loc_000E845B: ;
    _fa = (uint32_t)(MEM8(0x8EFF9C)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x8EFF9C), 8 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_000E8476; /* je: equal / zero */

loc_000E8465: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x000E846Fu); RECOMP_ABI_CALL(0x00022AA3u, sub_00022AA3); /* call 0x00022AA3 */

loc_000E846F: ;
    MEM32(0x8EFF9C) = MEM32(0x8EFF9C) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(0x8EFF9C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000E8476: ;
    _fa = (uint32_t)(MEM8(0x8EFF9C)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x8EFF9C), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E848B; /* je: equal / zero */

loc_000E847F: ;
    PUSH32(esp, 0x000E8484u); RECOMP_ABI_CALL(0x000E7460u, sub_000E7460); /* call 0x000E7460 */

loc_000E8484: ;
    MEM32(0x8EFF9C) = MEM32(0x8EFF9C) & 0xFFFFFFBFu;
    _fa = (uint32_t)(MEM32(0x8EFF9C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000E848B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E84E0
 * Original: 0x000E84E0 - 0x000E8511 (49 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E84E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E84E0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    SET_LO16(eax, MEM16(esp + 0x24));
    ecx = esp;
    MEM16(esp + 0xC) = 6;
    MEM16(esp + 0x1C) = LO16(eax);
    MEM32(esp) = 0x7CD0F8;
    PUSH32(esp, 0x000E850Du); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E850D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E8520
 * Original: 0x000E8520 - 0x000E85D2 (178 bytes, 58 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E8520: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E852Cu); RECOMP_ABI_CALL(0x00014C46u, sub_00014C46); /* call 0x00014C46 */

loc_000E852C: ;
    esi = eax;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x80000001u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_000E853B; /* jns: not sign (positive) */

loc_000E8536: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    esi = esi | 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E853B: ;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E8547u); RECOMP_ABI_CALL(0x000380C9u, sub_000380C9); /* call 0x000380C9 */

loc_000E8547: ;
    edi = eax;
    PUSH32(esp, 0x000E854Eu); RECOMP_ABI_CALL(0x00014C46u, sub_00014C46); /* call 0x00014C46 */

loc_000E854E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E8564u); RECOMP_ABI_CALL(0x000152C7u, sub_000152C7); /* call 0x000152C7 */

loc_000E8564: ;
    edx = MEM32(0x8F0044);
    ebx = (uint32_t)(int32_t)SMEM16(edx + 0x1A);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    ecx = MEM32(0x8F0040);
    ebp = (uint32_t)(int32_t)SMEM16(ecx + 0x1A);
    edi = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x000E858Cu); RECOMP_ABI_CALL(0x00014C46u, sub_00014C46); /* call 0x00014C46 */

loc_000E858C: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x14;
    MEM16(esp + 0x20) = 0x49;
    MEM32(esp + 0x14) = 0x7CD138;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x40) = ebp;
    MEM32(esp + 0x44) = ebx;
    PUSH32(esp, 0x000E85CAu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E85CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E8600
 * Original: 0x000E8600 - 0x000E8644 (68 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8600: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x000E8615u); RECOMP_ABI_CALL(0x00028D22u, sub_00028D22); /* call 0x00028D22 */

loc_000E8615: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 4;
    MEM16(esp + 0x10) = 0x46;
    MEM32(esp + 4) = 0x7CD158;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0x000E863Fu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E863F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E8660
 * Original: 0x000E8660 - 0x000E86B6 (86 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E8660: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E8666u); RECOMP_ABI_CALL(0x00030C7Fu, sub_00030C7F); /* call 0x00030C7F */

loc_000E8666: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E8670;

    /* nop */

loc_000E8670: ;
    ecx = MEM32(esi + 0x8E8EB8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000E867Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8678u); } /* indirect call */
    }

loc_000E867B: ;
    ecx = MEM32(esi + 0x8E8EB8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000E8686u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8683u); } /* indirect call */
    }

loc_000E8686: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xCC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E8670; /* jl: less (signed <) */

loc_000E8691: ;
    eax = MEM32(0x8F010C);
    MEM32(eax) = 0;
    PUSH32(esp, 0x000E86A1u); RECOMP_ABI_CALL(0x00016000u, sub_00016000); /* call 0x00016000 */

loc_000E86A1: ;
    PUSH32(esp, 0x000E86A6u); RECOMP_ABI_CALL(0x000124E1u, sub_000124E1); /* call 0x000124E1 */

loc_000E86A6: ;
    PUSH32(esp, 0x000E86ABu); RECOMP_ABI_CALL(0x0001A74Fu, sub_0001A74F); /* call 0x0001A74F */

loc_000E86AB: ;
    PUSH32(esp, 0x000E86B0u); RECOMP_ABI_CALL(0x0001DE59u, sub_0001DE59); /* call 0x0001DE59 */

loc_000E86B0: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001C432(); return; /* tail jmp 0x0001C432 */

}

/**
 * sub_000E86D0
 * Original: 0x000E86D0 - 0x000E86FD (45 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E86D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E86D0: ;
    PUSH32(esp, 0x000E86D5u); RECOMP_ABI_CALL(0x00028246u, sub_00028246); /* call 0x00028246 */

loc_000E86D5: ;
    PUSH32(esp, 0x000E86DAu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000E86DA: ;
    ecx = eax;
    PUSH32(esp, 0x000E86E1u); RECOMP_ABI_CALL(0x00021C9Du, sub_00021C9D); /* call 0x00021C9D */

loc_000E86E1: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E86F0; /* jne: not equal / not zero */

loc_000E86EB: ;
    g_seh_ebp = ebp; sub_00029EC0(); return; /* tail jmp 0x00029EC0 */

loc_000E86F0: ;
    eax = MEM32(0x8E9248);
    MEM32(eax + 0x34) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_000E8710
 * Original: 0x000E8710 - 0x000E89B2 (674 bytes, 174 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E8710: ;
    edx = MEM32(0x8EFF9C);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    edx = edx & 0xFFFFFFAFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8EFF90) = esi;
    MEM32(0x8EFF9C) = edx;
    PUSH32(esp, 0x000E8734u); RECOMP_ABI_CALL(0x0001FB96u, sub_0001FB96); /* call 0x0001FB96 */

loc_000E8734: ;
    PUSH32(esp, 0x000E8739u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_000E8739: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000E8779; /* je: equal / zero */

loc_000E8742: ;
    PUSH32(esp, 0x000E8747u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000E8747: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8779; /* jne: not equal / not zero */

loc_000E874B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E8755u); RECOMP_ABI_CALL(0x00018A49u, sub_00018A49); /* call 0x00018A49 */

loc_000E8755: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E875Fu); RECOMP_ABI_CALL(0x00033DDAu, sub_00033DDA); /* call 0x00033DDA */

loc_000E875F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E876Au); RECOMP_ABI_CALL(0x00018A49u, sub_00018A49); /* call 0x00018A49 */

loc_000E876A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E8774u); RECOMP_ABI_CALL(0x00033DDAu, sub_00033DDA); /* call 0x00033DDA */

loc_000E8774: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E877B;

loc_000E8779: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E877B: ;
    _fa = (uint32_t)(MEM8(0x8EFF9C)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x8EFF9C), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E878E; /* je: equal / zero */

loc_000E8784: ;
    eax = MEM32(0x8EFF9C);
    eax = eax & 0xFFFFFFDFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_000E87AB;

loc_000E878E: ;
    PUSH32(esp, 0x000E8793u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000E8793: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E879E; /* je: equal / zero */

loc_000E8797: ;
    PUSH32(esp, 0x000E879Cu); RECOMP_ABI_CALL(0x0001E1D8u, sub_0001E1D8); /* call 0x0001E1D8 */

loc_000E879C: ;
    goto loc_000E87B0;

loc_000E879E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E87B0; /* jne: not equal / not zero */

loc_000E87A3: ;
    eax = MEM32(0x8EFF9C);
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E87AB: ;
    MEM32(0x8EFF9C) = eax;

loc_000E87B0: ;
    PUSH32(esp, 0x000E87B5u); RECOMP_ABI_CALL(0x000E7A20u, sub_000E7A20); /* call 0x000E7A20 */

loc_000E87B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO16(ecx, MEM16(0x896166));
    MEM32(0x8EFFAC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E87F7; /* je: equal / zero */

loc_000E87C5: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E87D0; /* jle: less or equal (signed <=) */

loc_000E87CB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E87FD; /* je: equal / zero */

loc_000E87D0: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = ebp;
    MEM16(esp + 0x20) = 6;
    MEM16(esp + 0x30) = LO16(esi);
    MEM32(esp + 0x14) = 0x7CD0F8;
    PUSH32(esp, 0x000E87F5u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E87F5: ;
    goto loc_000E8838;

loc_000E87F7: ;
    MEM32(0x8EFFB0) = ebx;

loc_000E87FD: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8838; /* je: equal / zero */

loc_000E8804: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E882D; /* jne: not equal / not zero */

loc_000E8809: ;
    PUSH32(esp, ebp);
    MEM8(0x896176) = LO8(ebx);
    MEM8(0x896177) = LO8(ebx);
    PUSH32(esp, 0x000E881Bu); RECOMP_ABI_CALL(0x000319CCu, sub_000319CC); /* call 0x000319CC */

loc_000E881B: ;
    PUSH32(esp, ebp);
    MEM16(0x896166) = 0xFF;
    PUSH32(esp, 0x000E882Au); RECOMP_ABI_CALL(0x0001E269u, sub_0001E269); /* call 0x0001E269 */

loc_000E882A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E882D: ;
    MEM32(0x8EFFB8) = ebp;
    PUSH32(esp, 0x000E8838u); RECOMP_ABI_CALL(0x000E8600u, sub_000E8600); /* call 0x000E8600 */

loc_000E8838: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E884D; /* je: equal / zero */

loc_000E883D: ;
    PUSH32(esp, 0x000E8842u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000E8842: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x896177) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E8853; /* je: equal / zero */

loc_000E884D: ;
    MEM8(0x896177) = LO8(ebx);

loc_000E8853: ;
    PUSH32(esp, 0x000E8858u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000E8858: ;
    ecx = eax;
    PUSH32(esp, 0x000E885Fu); RECOMP_ABI_CALL(0x00021C9Du, sub_00021C9D); /* call 0x00021C9D */

loc_000E885F: ;
    PUSH32(esp, 0x000E8864u); RECOMP_ABI_CALL(0x000370ACu, sub_000370AC); /* call 0x000370AC */

loc_000E8864: ;
    ecx = MEM32(0x8EFF9C);
    ecx = ecx & 0xFFFFFF7Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    MEM32(0x8EFF9C) = ecx;
    MEM32(0x8EFF90) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E8936; /* je: equal / zero */

loc_000E8885: ;
    _fa = (uint32_t)(MEM32(0x8EFFAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFFAC), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8913; /* jne: not equal / not zero */

loc_000E8891: ;
    ecx = 0x8F0DE8;
    PUSH32(esp, 0x000E889Bu); RECOMP_ABI_CALL(0x00034E79u, sub_00034E79); /* call 0x00034E79 */

loc_000E889B: ;
    PUSH32(esp, 0x000E88A0u); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_000E88A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E88AC; /* je: equal / zero */

loc_000E88A4: ;
    MEM8(0x896175) = LO8(ebx);
    goto loc_000E88C7;

loc_000E88AC: ;
    SET_LO8(eax, MEM8(0x896175));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E88C7; /* jne: not equal / not zero */

loc_000E88B5: ;
    PUSH32(esp, 0x000E88BAu); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_000E88BA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E88C7; /* jne: not equal / not zero */

loc_000E88BE: ;
    PUSH32(esp, 0x000E88C3u); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_000E88C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E88DC; /* je: equal / zero */

loc_000E88C7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E88CDu); RECOMP_ABI_CALL(0x00026A0Eu, sub_00026A0E); /* call 0x00026A0E */

loc_000E88CD: ;
    eax = MEM32(0x8EFF9C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8EFF9C) = eax;

loc_000E88DC: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E88F0u); RECOMP_ABI_CALL(0x0003531Fu, sub_0003531F); /* call 0x0003531F */

loc_000E88F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x14) = 0x7ABE10;
    MEM16(esp + 0x20) = 0x22;
    PUSH32(esp, 0x000E8913u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E8913: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8924; /* je: equal / zero */

loc_000E891D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E8924u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E891Du); } /* indirect call */
    }

loc_000E8924: ;
    MEM32(0x8EFF88) = 5;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC13C); PUSH32(esp, 0x000E8934u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E892Eu); } /* indirect call */
    }

loc_000E8934: ;
    goto loc_000E898F;

loc_000E8936: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x000E8941u); RECOMP_ABI_CALL(0x00031D2Du, sub_00031D2D); /* call 0x00031D2D */

loc_000E8941: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x000E894Cu); RECOMP_ABI_CALL(0x0002EF29u, sub_0002EF29); /* call 0x0002EF29 */

loc_000E894C: ;
    eax = MEM32(0x901E28);
    MEM8(eax + 0x115) = LO8(ebx);
    ecx = MEM32(0x901E40);
    PUSH32(esp, 0x000E8962u); RECOMP_ABI_CALL(0x000177CFu, sub_000177CF); /* call 0x000177CF */

loc_000E8962: ;
    ecx = MEM32(0x8FC1D0);
    MEM8(ecx + 0x1DC) = LO8(ebx);
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E897F; /* je: equal / zero */

loc_000E8978: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E897Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8978u); } /* indirect call */
    }

loc_000E897F: ;
    MEM32(0x8EFF88) = 6;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC140); PUSH32(esp, 0x000E898Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8989u); } /* indirect call */
    }

loc_000E898F: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000E89A6; /* je: equal / zero */

loc_000E899F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC158); PUSH32(esp, 0x000E89A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E899Fu); } /* indirect call */
    }

loc_000E89A6: ;
    PUSH32(esp, 0x000E89ABu); RECOMP_ABI_CALL(0x0001C3D8u, sub_0001C3D8); /* call 0x0001C3D8 */

loc_000E89AB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E8A60
 * Original: 0x000E8A60 - 0x000E8A69 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8A60(void)
{

loc_000E8A60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000E8A67u); RECOMP_ABI_CALL(0x0001A85Du, sub_0001A85D); /* call 0x0001A85D */

loc_000E8A67: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E8A70
 * Original: 0x000E8A70 - 0x000E8B15 (165 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8A70: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x28);
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(eax, MEM8(esp + 0x2C));
    PUSH32(esp, esi);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = edx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x20) = LO8(ecx);
    ecx = esp + 4;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM16(esp + 0x10) = 0x48;
    MEM8(esp + 0x21) = LO8(eax);
    MEM32(esp + 4) = 0x7CD118;
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0x000E8AC1u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E8AC1: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8B07; /* je: equal / zero */

loc_000E8ACB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8B07; /* je: equal / zero */

loc_000E8AD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8ADC; /* je: equal / zero */

loc_000E8AD5: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E8ADCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8AD5u); } /* indirect call */
    }

loc_000E8ADC: ;
    MEM32(0x8EFF88) = 0xA;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC150); PUSH32(esp, 0x000E8AECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8AE6u); } /* indirect call */
    }

loc_000E8AEC: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E8B07; /* je: equal / zero */

loc_000E8B00: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC158); PUSH32(esp, 0x000E8B07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8B00u); } /* indirect call */
    }

loc_000E8B07: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E8B0Du); RECOMP_ABI_CALL(0x00030199u, sub_00030199); /* call 0x00030199 */

loc_000E8B0D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E8B40
 * Original: 0x000E8B40 - 0x000E8BBE (126 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8B40: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0xAC));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8B7E; /* jne: not equal / not zero */

loc_000E8B51: ;
    ecx = esp;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM16(esp + 0xC) = 6;
    MEM16(esp + 0x1C) = 0x13;
    MEM32(esp) = 0x7CD0F8;
    PUSH32(esp, 0x000E8B7Eu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E8B7E: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8B8F; /* je: equal / zero */

loc_000E8B88: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E8B8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8B88u); } /* indirect call */
    }

loc_000E8B8F: ;
    MEM32(0x8EFF88) = 5;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC13C); PUSH32(esp, 0x000E8B9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8B99u); } /* indirect call */
    }

loc_000E8B9F: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E8BBA; /* je: equal / zero */

loc_000E8BB3: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC158); PUSH32(esp, 0x000E8BBAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000E8BB3u); } /* indirect call */
    }

loc_000E8BBA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E8BE0
 * Original: 0x000E8BE0 - 0x000E8E08 (552 bytes, 147 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E8BE0: ;
    eax = MEM32(0x8EFFB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8CA5; /* jne: not equal / not zero */

loc_000E8BEE: ;
    PUSH32(esp, 0x000E8BF3u); RECOMP_ABI_CALL(0x00016924u, sub_00016924); /* call 0x00016924 */

loc_000E8BF3: ;
    eax = MEM32(0x8EFFAC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8C04; /* je: equal / zero */

loc_000E8BFF: ;
    PUSH32(esp, 0x000E8C04u); RECOMP_ABI_CALL(0x000E8290u, sub_000E8290); /* call 0x000E8290 */

loc_000E8C04: ;
    eax = MEM32(0x8EFFA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8EFFBC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8EFFBC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8C1F; /* jne: not equal / not zero */

loc_000E8C11: ;
    _fa = (uint32_t)(MEM32(0x8EFFAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFFAC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8C1F; /* je: equal / zero */

loc_000E8C19: ;
    MEM32(0x8EFFBC) = esi;

loc_000E8C1F: ;
    _fa = (uint32_t)(MEM8(0x8EFF9C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x8EFF9C), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E8C44; /* jne: not equal / not zero */

loc_000E8C28: ;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), LO16(esi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8C44; /* jne: not equal / not zero */

loc_000E8C31: ;
    _fa = (uint32_t)(MEM16(0x896162)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896162), LO16(esi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8C44; /* jne: not equal / not zero */

loc_000E8C3A: ;
    PUSH32(esp, 0x000E8C3Fu); RECOMP_ABI_CALL(0x0001448Fu, sub_0001448F); /* call 0x0001448F */

loc_000E8C3F: ;
    PUSH32(esp, 0x000E8C44u); RECOMP_ABI_CALL(0x00026AB8u, sub_00026AB8); /* call 0x00026AB8 */

loc_000E8C44: ;
    PUSH32(esp, 0x000E8C49u); RECOMP_ABI_CALL(0x00025D07u, sub_00025D07); /* call 0x00025D07 */

loc_000E8C49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8E06; /* je: equal / zero */

loc_000E8C51: ;
    _fa = (uint32_t)(MEM32(0x8EFFAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFFAC), esi (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000E8D11; /* jne: not equal / not zero */

loc_000E8C5E: ;
    SET_LO8(eax, MEM8(0x8EFF9C));
    ebx = 0x10;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E8CC5; /* jne: not equal / not zero */

loc_000E8C6C: ;
    PUSH32(esp, 0x000E8C71u); RECOMP_ABI_CALL(0x00020EB0u, sub_00020EB0); /* call 0x00020EB0 */

loc_000E8C71: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8CC5; /* jne: not equal / not zero */

loc_000E8C75: ;
    PUSH32(esp, 0x000E8C7Au); RECOMP_ABI_CALL(0x0002C675u, sub_0002C675); /* call 0x0002C675 */

loc_000E8C7A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8CC5; /* jne: not equal / not zero */

loc_000E8C7E: ;
    PUSH32(esp, 0x000E8C83u); RECOMP_ABI_CALL(0x00037A8Eu, sub_00037A8E); /* call 0x00037A8E */

loc_000E8C83: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8CC5; /* jne: not equal / not zero */

loc_000E8C87: ;
    PUSH32(esp, 0x000E8C8Cu); RECOMP_ABI_CALL(0x000E6C80u, sub_000E6C80); /* call 0x000E6C80 */

loc_000E8C8C: ;
    eax = MEM32(0x8EFF9C);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0xA;
    MEM32(0x8EFF9C) = eax;
    PUSH32(esp, 0x000E8CA2u); RECOMP_ABI_CALL(0x000E5A00u, sub_000E5A00); /* call 0x000E5A00 */

loc_000E8CA2: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E8CA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8BF3; /* jne: not equal / not zero */

loc_000E8CAE: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x000E8CB5u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_000E8CB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8E07; /* je: equal / zero */

loc_000E8CC0: ;
    g_seh_ebp = ebp; sub_00034965(); return; /* tail jmp 0x00034965 */

loc_000E8CC5: ;
    edx = MEM32(0x8EFF9C);
    eax = MEM32(0x8EFF88);
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF9C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E8CE4; /* je: equal / zero */

loc_000E8CDD: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E8CE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8CDDu); } /* indirect call */
    }

loc_000E8CE4: ;
    MEM32(0x8EFF88) = 9;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC14C); PUSH32(esp, 0x000E8CF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8CEEu); } /* indirect call */
    }

loc_000E8CF4: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E8E05; /* je: equal / zero */

loc_000E8D08: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8AC158)); return; /* indirect tail jmp */

loc_000E8D11: ;
    eax = MEM32(0x8EFF90);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8D62; /* jne: not equal / not zero */

loc_000E8D1F: ;
    _fa = (uint32_t)(MEM8(0x8F6A27)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8F6A27), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8E05; /* je: equal / zero */

loc_000E8D2C: ;
    _fa = (uint32_t)(MEM32(0x8EFFB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFFB0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8D62; /* jne: not equal / not zero */

loc_000E8D34: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2E2EF);
    PUSH32(esp, 0x000E8D3Fu); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_000E8D3F: ;
    ecx = eax;
    PUSH32(esp, 0x000E8D46u); RECOMP_ABI_CALL(0x0001F4CAu, sub_0001F4CA); /* call 0x0001F4CA */

loc_000E8D46: ;
    MEM8(0x8FC5D8) = LO8(ebx);
    POP32(esp, ebx);
    MEM32(0x8EFFB0) = 2;
    ecx = 0x8FC5D8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00026AD1(); return; /* tail jmp 0x00026AD1 */

loc_000E8D62: ;
    PUSH32(esp, 0x000E8D67u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000E8D67: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8DA6; /* je: equal / zero */

loc_000E8D6B: ;
    PUSH32(esp, 0x000E8D70u); RECOMP_ABI_CALL(0x000E8520u, sub_000E8520); /* call 0x000E8520 */

loc_000E8D70: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8D81; /* je: equal / zero */

loc_000E8D7A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E8D81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8D7Au); } /* indirect call */
    }

loc_000E8D81: ;
    MEM32(0x8EFF88) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC12C); PUSH32(esp, 0x000E8D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8D87u); } /* indirect call */
    }

loc_000E8D8D: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E8E05; /* je: equal / zero */

loc_000E8D9D: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8AC158)); return; /* indirect tail jmp */

loc_000E8DA6: ;
    _fa = (uint32_t)(MEM32(0x8EFFAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFFAC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8DBB; /* jne: not equal / not zero */

loc_000E8DAE: ;
    esi = 9;
    PUSH32(esp, 0x000E8DB8u); RECOMP_ABI_CALL(0x000E5A00u, sub_000E5A00); /* call 0x000E5A00 */

loc_000E8DB8: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E8DBB: ;
    PUSH32(esp, edi);
    edi = MEM32(0x8F0650);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8DF4; /* je: equal / zero */

loc_000E8DC6: ;
    eax = MEM32(edi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8DD6; /* je: equal / zero */

loc_000E8DD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8DF4; /* jne: not equal / not zero */

loc_000E8DD6: ;
    SET_LO8(eax, MEM8(edi + 0x99));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8DF4; /* je: equal / zero */

loc_000E8DE0: ;
    esi = 4;
    PUSH32(esp, 0x000E8DEAu); RECOMP_ABI_CALL(0x000E5A00u, sub_000E5A00); /* call 0x000E5A00 */

loc_000E8DEA: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00027639(); return; /* tail jmp 0x00027639 */

loc_000E8DF4: ;
    PUSH32(esp, 0x000E8DF9u); RECOMP_ABI_CALL(0x00023DEAu, sub_00023DEA); /* call 0x00023DEA */

loc_000E8DF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8E04; /* jne: not equal / not zero */

loc_000E8DFD: ;
    esi = ebx;
    PUSH32(esp, 0x000E8E04u); RECOMP_ABI_CALL(0x000E5A00u, sub_000E5A00); /* call 0x000E5A00 */

loc_000E8E04: ;
    POP32(esp, edi);

loc_000E8E05: ;
    POP32(esp, ebx);

loc_000E8E06: ;
    POP32(esp, esi);

loc_000E8E07: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E8EA0
 * Original: 0x000E8EA0 - 0x000E8EA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8EA0(void)
{

loc_000E8EA0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E8EB0
 * Original: 0x000E8EB0 - 0x000E8EB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8EB0(void)
{

loc_000E8EB0: ;
    eax = ecx + 0x1D4;
    esp += 4; return; /* ret */

}

/**
 * sub_000E8EC0
 * Original: 0x000E8EC0 - 0x000E8EC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8EC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E8EC0: ;
    fp_push(MEMF(ecx + 0x2B0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E8ED0
 * Original: 0x000E8ED0 - 0x000E8ED7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8ED0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E8ED0: ;
    fp_push(MEMF(ecx + 0x2B4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E8EE0
 * Original: 0x000E8EE0 - 0x000E8EE6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8EE0(void)
{

loc_000E8EE0: ;
    eax = 0x5A;
    esp += 4; return; /* ret */

}

/**
 * sub_000E8EF0
 * Original: 0x000E8EF0 - 0x000E8EF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8EF0(void)
{

loc_000E8EF0: ;
    eax = MEM32(ecx + 0x144);
    esp += 4; return; /* ret */

}

/**
 * sub_000E8F00
 * Original: 0x000E8F00 - 0x000E8F5F (95 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000E8F00: ;
    eax = MEM32(ecx + 0x138);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8F0F; /* jne: not equal / not zero */

loc_000E8F0C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000E8F0F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E8F1B; /* jle: less or equal (signed <=) */

loc_000E8F15: ;
    MEM32(ecx + 0x138) = eax;

loc_000E8F1B: ;
    eax = MEM32(0x8EACE4);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 4), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8F34; /* je: equal / zero */

loc_000E8F25: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8F34; /* jne: not equal / not zero */

loc_000E8F2B: ;
    MEM32(ecx + 0x138) = edx;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000E8F34: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E8F4E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E8F49: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000E8F53;

loc_000E8F4E: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_000E8F53: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7CD504); /* comiss */
    if ((_fca > _fcb)) goto loc_000E8F2B; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7CD504)) */

loc_000E8F5C: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000E8F80
 * Original: 0x000E8F80 - 0x000E916F (495 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8F80(void)
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

loc_000E8F80: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(0x8F0108) = 0;
    MEM8(0x8F0109) = 0;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E8FA3u); RECOMP_ABI_CALL(0x00015AA6u, sub_00015AA6); /* call 0x00015AA6 */

loc_000E8FA3: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ebp = eax;
    PUSH32(esp, 0x000E8FB1u); RECOMP_ABI_CALL(0x0002893Fu, sub_0002893F); /* call 0x0002893F */

loc_000E8FB1: ;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E8FC1u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000E8FC1: ;
    esi = eax;
    eax = MEM32(esi);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000E8FCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8FCCu); } /* indirect call */
    }

loc_000E8FCF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E8FD5u); RECOMP_ABI_CALL(0x0002335Eu, sub_0002335E); /* call 0x0002335E */

loc_000E8FD5: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_000E8FE0: ;
    eax = MEM32(esi + 0x1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E90A8; /* jne: not equal / not zero */

loc_000E8FEE: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E90A8; /* je: equal / zero */

loc_000E8FFB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000E9002u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8FFFu); } /* indirect call */
    }

loc_000E9002: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E9009u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_000E9009: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000E9030; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000E9028: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_000E9030: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000E904B; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000E9043: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_000E904B: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E9095; /* jnp: not parity */

loc_000E9054: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E9066; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000E905E: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_000E9071;

loc_000E9066: ;
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x30); /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */

loc_000E9071: ;
    eax = MEM32(0x8E931C);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x48610000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E908Au); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_000E908A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_000E9095: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E90A8; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_000E90A2: ;
    MEM8(0x8F0109) = MEM8(0x8F0109) + 1;
    _fa = (uint32_t)(MEM8(0x8F0109)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_000E90A8: ;
    PUSH32(esp, 1);
    ecx = esi + 0x1E8;
    PUSH32(esp, 0x000E90B5u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000E90B5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E8FE0; /* jne: not equal / not zero */

loc_000E90BF: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E90CCu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000E90CC: ;
    esi = eax;
    SET_LO8(eax, MEM8(0x8F0109));
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000E90FB; /* jle: less or equal (signed <=) */

loc_000E90D9: ;
    /* nop */

loc_000E90E0: ;
    PUSH32(esp, 1);
    ecx = esi + 0x1E8;
    PUSH32(esp, 0x000E90EDu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000E90ED: ;
    edx = (uint32_t)(int32_t)SMEM8(0x8F0109);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000E90E0; /* jl: less (signed <) */

loc_000E90FB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E911C; /* jne: not equal / not zero */

loc_000E90FF: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000E9107u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E9104u); } /* indirect call */
    }

loc_000E9107: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E9114u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_000E9114: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B1E14)); /* fadd dword ptr [0x7b1e14] */
    goto loc_000E912A;

loc_000E911C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000E9123u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E9120u); } /* indirect call */
    }

loc_000E9123: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E912Au); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_000E912A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9168; /* je: equal / zero */

loc_000E9135: ;
    eax = MEM32(ebp + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E9155; /* je: equal / zero */

loc_000E913E: ;
    ecx = ebp;
    PUSH32(esp, 0x000E9145u); RECOMP_ABI_CALL(0x0001C94Bu, sub_0001C94B); /* call 0x0001C94B */

loc_000E9145: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000E9155; /* jb: below (unsigned <) */

loc_000E914F: ;
    MEM8(0x8F0108) = MEM8(0x8F0108) + 1;
    _fa = (uint32_t)(MEM8(0x8F0108)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_000E9155: ;
    PUSH32(esp, 1);
    ecx = ebp + 0x1E8;
    PUSH32(esp, 0x000E9162u); RECOMP_ABI_CALL(0x00015AA6u, sub_00015AA6); /* call 0x00015AA6 */

loc_000E9162: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E9135; /* jne: not equal / not zero */

loc_000E9168: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000E91F0
 * Original: 0x000E91F0 - 0x000E9310 (288 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E91F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_000E91F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E9244; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E923E: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_000E9244: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x132);
    ecx = MEM32(ecx * 4 + 0x8E904C);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000E9273u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E9270u); } /* indirect call */
    }

loc_000E9273: ;
    eax = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm3 = xmm4; /* movaps */
    if ((_fca >= _fcb)) goto loc_000E9299; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E9296: ;
    xmm3 = xmm2; /* movaps */

loc_000E9299: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E92A7; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E92A4: ;
    xmm2 = xmm4; /* movaps */

loc_000E92A7: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000E92EA; /* jp: parity */

loc_000E92B0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x132);
    edx = MEM32(0x8E9380);
    SET_LO8(eax, MEM8(ecx + edx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E9309; /* jne: not equal / not zero */

loc_000E92C5: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E92CF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E92CA: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000E92D3;

loc_000E92CF: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000E92D3: ;
    xmm1 = XMM_SCALAR(MEMF(0x7CD50C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000E9309; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E92E0: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E92EA: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E92F4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E92EF: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000E92F8;

loc_000E92F4: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000E92F8: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7CD50C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E9309; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7CD50C)) */

loc_000E9301: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E9309: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E9360
 * Original: 0x000E9360 - 0x000E9393 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9360: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E9366u); RECOMP_ABI_CALL(0x00034852u, sub_00034852); /* call 0x00034852 */

loc_000E9366: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9388; /* je: equal / zero */

loc_000E936E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E937D; /* je: equal / zero */

loc_000E9372: ;
    MEM32(esi + 0x144) = 1;
    esp += 4; return; /* ret */

loc_000E937D: ;
    MEM32(esi + 0x144) = 2;
    esp += 4; return; /* ret */

loc_000E9388: ;
    MEM32(esi + 0x144) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000E93A0
 * Original: 0x000E93A0 - 0x000E93D3 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E93A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E93A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E93A6u); RECOMP_ABI_CALL(0x00034852u, sub_00034852); /* call 0x00034852 */

loc_000E93A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E93C8; /* je: equal / zero */

loc_000E93AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E93BD; /* je: equal / zero */

loc_000E93B2: ;
    MEM32(esi + 0x148) = 1;
    esp += 4; return; /* ret */

loc_000E93BD: ;
    MEM32(esi + 0x148) = 2;
    esp += 4; return; /* ret */

loc_000E93C8: ;
    MEM32(esi + 0x148) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000E93E0
 * Original: 0x000E93E0 - 0x000E93F4 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E93E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E93E0: ;
    PUSH32(esp, 0x000E93E5u); RECOMP_ABI_CALL(0x000E8F00u, sub_000E8F00); /* call 0x000E8F00 */

loc_000E93E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E93F3; /* jne: not equal / not zero */

loc_000E93E9: ;
    MEM32(ecx + 0x138) = 0;

loc_000E93F3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9400
 * Original: 0x000E9400 - 0x000E9471 (113 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E9400: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x148);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E940Eu); RECOMP_ABI_CALL(0x00034852u, sub_00034852); /* call 0x00034852 */

loc_000E940E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9432; /* je: equal / zero */

loc_000E9416: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9426; /* je: equal / zero */

loc_000E941A: ;
    MEM32(esi + 0x148) = 1;
    goto loc_000E943C;

loc_000E9426: ;
    MEM32(esi + 0x148) = 2;
    goto loc_000E943C;

loc_000E9432: ;
    MEM32(esi + 0x148) = 3;

loc_000E943C: ;
    edi = MEM32(esi + 0x148);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E946E; /* je: equal / zero */

loc_000E9446: ;
    SET_LO8(eax, MEM8(0x896177));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E946E; /* jne: not equal / not zero */

loc_000E944F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x000E9457u); RECOMP_ABI_CALL(0x000312D3u, sub_000312D3); /* call 0x000312D3 */

loc_000E9457: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E946E; /* jne: not equal / not zero */

loc_000E945C: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x000E9464u); RECOMP_ABI_CALL(0x0002109Au, sub_0002109A); /* call 0x0002109A */

loc_000E9464: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00037FE3(); return; /* tail jmp 0x00037FE3 */

loc_000E946E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E9490
 * Original: 0x000E9490 - 0x000E9610 (384 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    int _jf_000E9605 = 0; /* per-edge flags of joins */
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

loc_000E9490: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E949Eu); RECOMP_ABI_CALL(0x00034852u, sub_00034852); /* call 0x00034852 */

loc_000E949E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E94C4; /* je: equal / zero */

loc_000E94A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E94B8; /* je: equal / zero */

loc_000E94AC: ;
    MEM32(esi + 0x144) = 1;
    goto loc_000E94CE;

loc_000E94B8: ;
    MEM32(esi + 0x144) = 2;
    goto loc_000E94CE;

loc_000E94C4: ;
    MEM32(esi + 0x144) = 3;

loc_000E94CE: ;
    eax = MEM32(esi + 0x144);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E9501; /* je: equal / zero */

loc_000E94D7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E94E0; /* je: equal / zero */

loc_000E94DA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _jf_000E9605 = ((_fa != 0)) ? 1 : 0; /* flags of this edge */
    goto loc_000E9605;

loc_000E94E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x138) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_000E960D; /* jl: less (signed <) */

loc_000E94EE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E960D; /* jg: greater (signed >) */

loc_000E94F7: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000312D3(); return; /* tail jmp 0x000312D3 */

loc_000E9501: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E95D9; /* jne: not equal / not zero */

loc_000E950A: ;
    eax = MEM32(0x895AB0);
    edx = MEM32(0x8EADA0);
    ecx = MEM32(eax);
    _fb = (uint32_t)(MEM32(edx + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E95FC; /* jle: less or equal (signed <=) */

loc_000E9523: ;
    eax = MEM32(0x8E8F84);
    _fa = (uint32_t)(MEM32(eax + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E9582; /* jge: greater or equal (signed >=) */

loc_000E9530: ;
    PUSH32(esp, 0x000E9535u); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_000E9535: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E9556; /* jl: less (signed <) */

loc_000E9539: ;
    edi = MEM32(eax * 4 + 0x8E8EB8);
    ecx = edi;
    PUSH32(esp, 0x000E9547u); RECOMP_ABI_CALL(0x00036DAFu, sub_00036DAF); /* call 0x00036DAF */

loc_000E9547: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9556; /* je: equal / zero */

loc_000E954B: ;
    SET_LO8(ecx, MEM8(esi + 0x132));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edi + 0x30) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9582; /* je: equal / zero */

loc_000E9556: ;
    ecx = MEM32(0x8EACE0);
    PUSH32(esp, 0x000E9561u); RECOMP_ABI_CALL(0x0001734Cu, sub_0001734C); /* call 0x0001734C */

loc_000E9561: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9582; /* jne: not equal / not zero */

loc_000E9565: ;
    _fa = (uint32_t)(MEM8(0x8F0109)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8F0109), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9582; /* je: equal / zero */

loc_000E956D: ;
    ecx = esi;
    PUSH32(esp, 0x000E9574u); RECOMP_ABI_CALL(0x00021FF9u, sub_00021FF9); /* call 0x00021FF9 */

loc_000E9574: ;
    fp_push(MEMF(0x7AB82C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000E95FC; /* jb: below (unsigned <) */

loc_000E9582: ;
    eax = MEM32(0x8F0108);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 5 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E95FC; /* jg: greater (signed >) */

loc_000E958C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E95FC; /* jl: less (signed <) */

loc_000E9590: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E95AB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E95A6: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000E95B0;

loc_000E95AB: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_000E95B0: ;
    xmm1 = XMM_SCALAR(MEMF(0x7CD504)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E95D1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E95BD: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 0x138) = 0x5A;
    PUSH32(esp, 0x000E95CFu); RECOMP_ABI_CALL(0x000312D3u, sub_000312D3); /* call 0x000312D3 */

loc_000E95CF: ;
    goto loc_000E95F4;

loc_000E95D1: ;
    MEM32(esi + 0x138) = ebx;
    goto loc_000E95FC;

loc_000E95D9: ;
    _fa = (uint32_t)(MEM32(esi + 0x138)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x138), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E95FC; /* je: equal / zero */

loc_000E95E1: ;
    eax = MEM32(0x895AB0);
    eax = MEM32(eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E95FC; /* jne: not equal / not zero */

loc_000E95F4: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x000E95FCu); RECOMP_ABI_CALL(0x0002109Au, sub_0002109A); /* call 0x0002109A */

loc_000E95FC: ;
    ecx = esi;
    PUSH32(esp, 0x000E9603u); RECOMP_ABI_CALL(0x000E8F00u, sub_000E8F00); /* call 0x000E8F00 */

loc_000E9603: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _jf_000E9605 = (CMP_NE(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_000E9605: ;
    if (_jf_000E9605 /* jne: not equal / not zero */) goto loc_000E960D;

loc_000E9607: ;
    MEM32(esi + 0x138) = ebx;

loc_000E960D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E9670
 * Original: 0x000E9670 - 0x000E9864 (500 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9670(void)
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

loc_000E9670: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E9679u); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_000E9679: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E983E; /* jne: not equal / not zero */

loc_000E9681: ;
    PUSH32(esp, 0x000E9686u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000E9686: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E983E; /* jne: not equal / not zero */

loc_000E968E: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8E93B0);
    esi = MEM32(eax * 4 + 0x8F0040);
    ecx = MEM32(0x895AB0);
    MEM32(0x8F0100) = esi;
    eax = MEM32(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E9806; /* jne: not equal / not zero */

loc_000E96BA: ;
    eax = MEM32(0x8E9390);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E9806; /* jne: not equal / not zero */

loc_000E96C7: ;
    eax = MEM32(0x8EACE4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E96DD; /* je: equal / zero */

loc_000E96D3: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E9806; /* je: equal / zero */

loc_000E96DD: ;
    eax = MEM32(esi + 0x138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E9806; /* jne: not equal / not zero */

loc_000E96EB: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x1C)) >> 32) & 1);
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E96F9u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000E96F9: ;
    ecx = MEM32(0x8EACE0);
    edi = eax;
    PUSH32(esp, 0x000E9706u); RECOMP_ABI_CALL(0x0002863Du, sub_0002863D); /* call 0x0002863D */

loc_000E9706: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9732; /* je: equal / zero */

loc_000E970A: ;
    ecx = MEM32(0x8EACE0);
    PUSH32(esp, 0x000E9715u); RECOMP_ABI_CALL(0x0001734Cu, sub_0001734C); /* call 0x0001734C */

loc_000E9715: ;
    ecx = MEM32(0x8EACE0);
    esi = eax;
    PUSH32(esp, 0x000E9722u); RECOMP_ABI_CALL(0x0002A181u, sub_0002A181); /* call 0x0002A181 */

loc_000E9722: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000E972Au); RECOMP_ABI_CALL(0x00011861u, sub_00011861); /* call 0x00011861 */

loc_000E972A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000E97FF; /* jne: not equal / not zero */

loc_000E9732: ;
    esi = MEM32(0x8F0100);
    edx = MEM32(esi);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9805; /* je: equal / zero */

loc_000E9748: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9950)); /* movss */
    ecx = edx;
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x4C);
    PUSH32(esp, ebp);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x10); /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E976Cu); RECOMP_ABI_CALL(0x000253F2u, sub_000253F2); /* call 0x000253F2 */

loc_000E976C: ;
    esi = eax;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    ecx = MEM32(eax * 4 + 0x8F0040);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E9781u); RECOMP_ABI_CALL(0x00021FF9u, sub_00021FF9); /* call 0x00021FF9 */

loc_000E9781: ;
    ebp = MEM32(0x8E9950);
    fp_top() = RECOMP_FP_PC(MEMF(0x7ABE28) - fp_top()); /* fsubr dword ptr [0x7abe28] */
    PUSH32(esp, ebp);
    fp_push(MEMF(0x8E9954)); /* fld float */
    ecx = esp + 0x18;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7D0)); /* fmul dword ptr [0x7ab7d0] */
    PUSH32(esp, ecx);
    ecx = ebx;
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000E97ACu); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_000E97AC: ;
    PUSH32(esp, ebp);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000E97B9u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_000E97B9: ;
    eax = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E97C4u); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_000E97C4: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    ecx = esp + 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000E97DDu); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_000E97DD: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    POP32(esp, ebp);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebx);
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000E97FF; /* jbe: below or equal (unsigned <=) */

loc_000E97EE: ;
    edx = MEM32(0x8F0100);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E97FCu); RECOMP_ABI_CALL(0x0002D2DCu, sub_0002D2DC); /* call 0x0002D2DC */

loc_000E97FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E97FF: ;
    esi = MEM32(0x8F0100);

loc_000E9805: ;
    POP32(esp, edi);

loc_000E9806: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9852; /* je: equal / zero */

loc_000E980A: ;
    ecx = MEM32(0x8F0104);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9852; /* je: equal / zero */

loc_000E9814: ;
    eax = esi;
    PUSH32(esp, 0x000E981Bu); RECOMP_ABI_CALL(0x000E8F80u, sub_000E8F80); /* call 0x000E8F80 */

loc_000E981B: ;
    esi = MEM32(0x8F0100);
    PUSH32(esp, 0x000E9826u); RECOMP_ABI_CALL(0x000E9490u, sub_000E9490); /* call 0x000E9490 */

loc_000E9826: ;
    esi = MEM32(0x8F0100);
    esi = MEM32(esi);
    MEM32(0x8F0104) = esi;
    PUSH32(esp, 0x000E9839u); RECOMP_ABI_CALL(0x000E9400u, sub_000E9400); /* call 0x000E9400 */

loc_000E9839: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E983E: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x896178);
    esi = MEM32(ecx * 4 + 0x8F0040);
    MEM32(0x8F0100) = esi;

loc_000E9852: ;
    esi = MEM32(esi);
    MEM32(0x8F0104) = esi;
    PUSH32(esp, 0x000E985Fu); RECOMP_ABI_CALL(0x000E9400u, sub_000E9400); /* call 0x000E9400 */

loc_000E985F: ;
    POP32(esp, esi);
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
 * sub_000E98F0
 * Original: 0x000E98F0 - 0x000E98FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E98F0(void)
{

loc_000E98F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDA5C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9900
 * Original: 0x000E9900 - 0x000E993A (58 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9900: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x50);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E9910; /* je: equal / zero */

loc_000E990E: ;
    SET_LO8(ecx, 1);

loc_000E9910: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E9919; /* jne: not equal / not zero */

loc_000E9915: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E992C; /* je: equal / zero */

loc_000E9919: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000E992C: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E9950
 * Original: 0x000E9950 - 0x000E9959 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9950(void)
{

loc_000E9950: ;
    eax = ecx;
    MEM32(eax) = 0x7CDA74;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9960
 * Original: 0x000E9960 - 0x000E9963 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9960(void)
{

loc_000E9960: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9970
 * Original: 0x000E9970 - 0x000E997D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9970(void)
{

loc_000E9970: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDA84;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9980
 * Original: 0x000E9980 - 0x000E998E (14 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9980(void)
{

loc_000E9980: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E99A0
 * Original: 0x000E99A0 - 0x000E99A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E99A0(void)
{

loc_000E99A0: ;
    eax = ecx;
    MEM32(eax) = 0x7CDA98;
    esp += 4; return; /* ret */

}

/**
 * sub_000E99B0
 * Original: 0x000E99B0 - 0x000E99B3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E99B0(void)
{

loc_000E99B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E99C0
 * Original: 0x000E99C0 - 0x000E99CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E99C0(void)
{

loc_000E99C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDAA8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E99D0
 * Original: 0x000E99D0 - 0x000E99DE (14 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E99D0(void)
{

loc_000E99D0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E99F0
 * Original: 0x000E99F0 - 0x000E99F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E99F0(void)
{

loc_000E99F0: ;
    eax = ecx;
    MEM32(eax) = 0x7CDAC0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9A00
 * Original: 0x000E9A00 - 0x000E9A03 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9A00(void)
{

loc_000E9A00: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9A10
 * Original: 0x000E9A10 - 0x000E9A1D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9A10(void)
{

loc_000E9A10: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDAD0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9A20
 * Original: 0x000E9A20 - 0x000E9A40 (32 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9A20: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(eax + 0x50)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x50), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_000E9A35; /* jne: not equal / not zero */

loc_000E9A32: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000E9A35: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E9A50
 * Original: 0x000E9A50 - 0x000E9A59 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9A50(void)
{

loc_000E9A50: ;
    eax = ecx;
    MEM32(eax) = 0x7CDAE4;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9A60
 * Original: 0x000E9A60 - 0x000E9A63 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9A60(void)
{

loc_000E9A60: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9A70
 * Original: 0x000E9A70 - 0x000E9A7D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9A70(void)
{

loc_000E9A70: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDAF4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9A80
 * Original: 0x000E9A80 - 0x000E9B32 (178 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9A80: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x38);
    edx = ecx;
    PUSH32(esp, esi);
    edx = edx & 0xFC0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x980000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x980000 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E9A9F; /* jbe: below or equal (unsigned <=) */

loc_000E9A9A: ;
    esi = 1;

loc_000E9A9F: ;
    edx = ecx;
    edx = edx & 0x3F000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x26000000 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E9AB0; /* jbe: below or equal (unsigned <=) */

loc_000E9AAF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E9AB0: ;
    SET_LO8(edx, MEM8(eax + 0x47));
    SET_LO8(edx, LO8(edx) & 0x3F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x26) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x26 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E9ABC; /* jbe: below or equal (unsigned <=) */

loc_000E9ABB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E9ABC: ;
    edx = MEM32(eax + 0x48);
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x26) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x26 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E9AC8; /* jbe: below or equal (unsigned <=) */

loc_000E9AC7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E9AC8: ;
    edx = ecx;
    edx = edx & 0xFC0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x980) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x980 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E9AD9; /* jbe: below or equal (unsigned <=) */

loc_000E9AD8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E9AD9: ;
    ecx = ecx & 0x3F000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x26000 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E9AE8; /* jbe: below or equal (unsigned <=) */

loc_000E9AE7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E9AE8: ;
    ecx = MEM32(eax + 0x34);
    ecx = ecx & 0xFC000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x98000000u (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E9AFA; /* jbe: below or equal (unsigned <=) */

loc_000E9AF9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E9AFA: ;
    eax = MEM32(eax + 0x3C);
    edx = eax;
    edx = edx & 0xFC0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x980) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x980 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E9B0E; /* jbe: below or equal (unsigned <=) */

loc_000E9B0D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E9B0E: ;
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x26) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x26 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E9B16; /* jbe: below or equal (unsigned <=) */

loc_000E9B15: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E9B16: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_000E9B27; /* jge: greater or equal (signed >=) */

loc_000E9B24: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000E9B27: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E9B60
 * Original: 0x000E9B60 - 0x000E9B69 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9B60(void)
{

loc_000E9B60: ;
    eax = ecx;
    MEM32(eax) = 0x7CDB0C;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9B70
 * Original: 0x000E9B70 - 0x000E9B73 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9B70(void)
{

loc_000E9B70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9B80
 * Original: 0x000E9B80 - 0x000E9B8D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9B80(void)
{

loc_000E9B80: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDB1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9B90
 * Original: 0x000E9B90 - 0x000E9BBB (43 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9B90: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + 0x40);
    edx = edx & 0xFC0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB00 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E9BA9; /* jbe: below or equal (unsigned <=) */

loc_000E9BA7: ;
    SET_LO8(eax, 1);

loc_000E9BA9: ;
    eax = ZX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E9BD0
 * Original: 0x000E9BD0 - 0x000E9BD9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9BD0(void)
{

loc_000E9BD0: ;
    eax = ecx;
    MEM32(eax) = 0x7CDB34;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9BE0
 * Original: 0x000E9BE0 - 0x000E9BE3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9BE0(void)
{

loc_000E9BE0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9BF0
 * Original: 0x000E9BF0 - 0x000E9BFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9BF0(void)
{

loc_000E9BF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDB44;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9C00
 * Original: 0x000E9C00 - 0x000E9C51 (81 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9C00: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000E9C1C; /* je: equal / zero */

loc_000E9C10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9C1C; /* je: equal / zero */

loc_000E9C15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9C1C; /* je: equal / zero */

loc_000E9C1A: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E9C1C: ;
    eax = MEM32(edx + 0x38);
    edx = eax;
    edx = edx & 0xFC0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x780000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E9C31; /* jae: above or equal (unsigned >=) */

loc_000E9C2F: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E9C31: ;
    eax = eax & 0x3F000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E9C3F; /* jae: above or equal (unsigned >=) */

loc_000E9C3D: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E9C3F: ;
    eax = ZX8(LO8(ecx));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E9C70
 * Original: 0x000E9C70 - 0x000E9C79 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9C70(void)
{

loc_000E9C70: ;
    eax = ecx;
    MEM32(eax) = 0x7CDB58;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9C80
 * Original: 0x000E9C80 - 0x000E9C83 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9C80(void)
{

loc_000E9C80: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9C90
 * Original: 0x000E9C90 - 0x000E9C9D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9C90(void)
{

loc_000E9C90: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDB68;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9CA0
 * Original: 0x000E9CA0 - 0x000E9CE9 (73 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9CA0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + 0x38);
    edx = edx & 0xFC0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAC0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xAC0000 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E9CB9; /* jbe: below or equal (unsigned <=) */

loc_000E9CB7: ;
    SET_LO8(eax, 1);

loc_000E9CB9: ;
    SET_LO8(ecx, MEM8(ecx + 0x47));
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2B (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E9CC8; /* ja: above (unsigned >) */

loc_000E9CC4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9CDB; /* je: equal / zero */

loc_000E9CC8: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000E9CDB: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E9D00
 * Original: 0x000E9D00 - 0x000E9D09 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9D00(void)
{

loc_000E9D00: ;
    eax = ecx;
    MEM32(eax) = 0x7CDB80;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9D10
 * Original: 0x000E9D10 - 0x000E9D13 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9D10(void)
{

loc_000E9D10: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9D20
 * Original: 0x000E9D20 - 0x000E9D2D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9D20(void)
{

loc_000E9D20: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDB90;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9D30
 * Original: 0x000E9D30 - 0x000E9D62 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9D30(void)
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

loc_000E9D30: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x34)) >> 32) & 1);
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E9D3Du); RECOMP_ABI_CALL(0x000223C8u, sub_000223C8); /* call 0x000223C8 */

loc_000E9D3D: ;
    fp_push(MEMF(0x7AD450)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000E9D57; /* jbe: below or equal (unsigned <=) */

loc_000E9D54: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000E9D57: ;
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
 * sub_000E9D70
 * Original: 0x000E9D70 - 0x000E9D79 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9D70(void)
{

loc_000E9D70: ;
    eax = ecx;
    MEM32(eax) = 0x7CDBA8;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9D80
 * Original: 0x000E9D80 - 0x000E9D83 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9D80(void)
{

loc_000E9D80: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9D90
 * Original: 0x000E9D90 - 0x000E9D9D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9D90(void)
{

loc_000E9D90: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDBB8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9DA0
 * Original: 0x000E9DA0 - 0x000E9DF7 (87 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9DA0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + 0x44);
    edx = edx & 0xC00000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC00000 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_AE(_fa, _fb)) goto loc_000E9DB9; /* jae: above or equal (unsigned >=) */

loc_000E9DB7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E9DB9: ;
    edx = MEM32(ecx + 0x40);
    edx = edx & 0xFC0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x980000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x980000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E9DCC; /* jae: above or equal (unsigned >=) */

loc_000E9DCA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E9DCC: ;
    ecx = MEM32(ecx + 0x34);
    ecx = ecx & 0x3F00000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2100000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E9DE9; /* ja: above (unsigned >) */

loc_000E9DDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000E9DEC; /* jne: not equal / not zero */

loc_000E9DE9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000E9DEC: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E9E10
 * Original: 0x000E9E10 - 0x000E9E19 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9E10(void)
{

loc_000E9E10: ;
    eax = ecx;
    MEM32(eax) = 0x7CDBCC;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9E20
 * Original: 0x000E9E20 - 0x000E9E23 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9E20(void)
{

loc_000E9E20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9E30
 * Original: 0x000E9E30 - 0x000E9E3D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9E30(void)
{

loc_000E9E30: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDBDC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9E40
 * Original: 0x000E9E40 - 0x000E9EA9 (105 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9E40: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000E9E5C; /* je: equal / zero */

loc_000E9E50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9E5C; /* je: equal / zero */

loc_000E9E55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9E5C; /* je: equal / zero */

loc_000E9E5A: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E9E5C: ;
    eax = MEM32(edx + 0x40);
    eax = eax & 0xFC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x640) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x640 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E9E6D; /* jae: above or equal (unsigned >=) */

loc_000E9E6B: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E9E6D: ;
    eax = MEM32(edx + 0x34);
    eax = eax & 0xFC000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78000000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E9E7E; /* jae: above or equal (unsigned >=) */

loc_000E9E7C: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E9E7E: ;
    edx = MEM32(edx + 0x44);
    edx = edx & 0x3C0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1C0000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E9E9B; /* ja: above (unsigned >) */

loc_000E9E8F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000E9E9E; /* jne: not equal / not zero */

loc_000E9E9B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000E9E9E: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E9ED0
 * Original: 0x000E9ED0 - 0x000E9ED9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9ED0(void)
{

loc_000E9ED0: ;
    eax = ecx;
    MEM32(eax) = 0x7CDBF8;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9EE0
 * Original: 0x000E9EE0 - 0x000E9EE3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9EE0(void)
{

loc_000E9EE0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9EF0
 * Original: 0x000E9EF0 - 0x000E9EFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9EF0(void)
{

loc_000E9EF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDC08;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9F00
 * Original: 0x000E9F00 - 0x000E9F9D (157 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9F00: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000E9F1C; /* je: equal / zero */

loc_000E9F10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9F1C; /* je: equal / zero */

loc_000E9F15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9F1C; /* je: equal / zero */

loc_000E9F1A: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E9F1C: ;
    eax = MEM32(edx + 0x34);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi & 0x3FF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x48 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E9F2F; /* jae: above or equal (unsigned >=) */

loc_000E9F2D: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E9F2F: ;
    eax = eax & 0xFFC00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x33400 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E9F3D; /* jae: above or equal (unsigned >=) */

loc_000E9F3B: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E9F3D: ;
    eax = MEM32(edx + 0x38);
    eax = eax & 0x3F000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E9F4E; /* jae: above or equal (unsigned >=) */

loc_000E9F4C: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E9F4E: ;
    eax = MEM32(edx + 0x40);
    esi = eax;
    esi = esi & 0x3F000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x18000000 (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_000E9F64; /* jae: above or equal (unsigned >=) */

loc_000E9F62: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E9F64: ;
    eax = eax & 0xFC0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x240000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x240000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E9F72; /* jae: above or equal (unsigned >=) */

loc_000E9F70: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E9F72: ;
    edx = MEM32(edx + 0x3C);
    edx = edx & 0xF0000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF0000000u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E9F8F; /* ja: above (unsigned >) */

loc_000E9F83: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000E9F92; /* jne: not equal / not zero */

loc_000E9F8F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000E9F92: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E9FD0
 * Original: 0x000E9FD0 - 0x000E9FD9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9FD0(void)
{

loc_000E9FD0: ;
    eax = ecx;
    MEM32(eax) = 0x7CDC24;
    esp += 4; return; /* ret */

}

/**
 * sub_000E9FE0
 * Original: 0x000E9FE0 - 0x000E9FE3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9FE0(void)
{

loc_000E9FE0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E9FF0
 * Original: 0x000E9FF0 - 0x000E9FFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9FF0(void)
{

loc_000E9FF0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDC34;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA000
 * Original: 0x000EA000 - 0x000EA046 (70 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA000(void)
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

loc_000EA000: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000EA013; /* je: equal / zero */

loc_000EA011: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000EA013: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x34)) >> 32) & 1);
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EA01Cu); RECOMP_ABI_CALL(0x00019782u, sub_00019782); /* call 0x00019782 */

loc_000EA01C: ;
    fp_push(MEMF(0x7CD998)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000EA037; /* ja: above (unsigned >) */

loc_000EA02B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000EA03A; /* jne: not equal / not zero */

loc_000EA037: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EA03A: ;
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EA060
 * Original: 0x000EA060 - 0x000EA069 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA060(void)
{

loc_000EA060: ;
    eax = ecx;
    MEM32(eax) = 0x7CDC58;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA070
 * Original: 0x000EA070 - 0x000EA073 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA070(void)
{

loc_000EA070: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA080
 * Original: 0x000EA080 - 0x000EA08D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA080(void)
{

loc_000EA080: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDC68;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA090
 * Original: 0x000EA090 - 0x000EA0D6 (70 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA090(void)
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

loc_000EA090: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000EA0A3; /* je: equal / zero */

loc_000EA0A1: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000EA0A3: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x34)) >> 32) & 1);
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EA0ACu); RECOMP_ABI_CALL(0x00024D3Au, sub_00024D3A); /* call 0x00024D3A */

loc_000EA0AC: ;
    fp_push(MEMF(0x7CD994)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000EA0C7; /* ja: above (unsigned >) */

loc_000EA0BB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000EA0CA; /* jne: not equal / not zero */

loc_000EA0C7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EA0CA: ;
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EA0F0
 * Original: 0x000EA0F0 - 0x000EA0F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA0F0(void)
{

loc_000EA0F0: ;
    eax = ecx;
    MEM32(eax) = 0x7CDC8C;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA100
 * Original: 0x000EA100 - 0x000EA103 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA100(void)
{

loc_000EA100: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA110
 * Original: 0x000EA110 - 0x000EA11D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA110(void)
{

loc_000EA110: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDC9C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA120
 * Original: 0x000EA120 - 0x000EA15E (62 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA120: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + 0x34);
    edx = edx & 0xFC000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x9C000000u (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_AE(_fa, _fb)) goto loc_000EA139; /* jae: above or equal (unsigned >=) */

loc_000EA137: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000EA139: ;
    ecx = MEM32(ecx + 0x38);
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x28) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x28 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000EA150; /* jb: below (unsigned <) */

loc_000EA144: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000EA153; /* jne: not equal / not zero */

loc_000EA150: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EA153: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EA170
 * Original: 0x000EA170 - 0x000EA179 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA170(void)
{

loc_000EA170: ;
    eax = ecx;
    MEM32(eax) = 0x7CDCB4;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA180
 * Original: 0x000EA180 - 0x000EA183 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA180(void)
{

loc_000EA180: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA190
 * Original: 0x000EA190 - 0x000EA19D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA190(void)
{

loc_000EA190: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDCC4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA1A0
 * Original: 0x000EA1A0 - 0x000EA1E5 (69 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA1A0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000EA1BC; /* je: equal / zero */

loc_000EA1B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA1BC; /* je: equal / zero */

loc_000EA1B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA1BC; /* je: equal / zero */

loc_000EA1BA: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000EA1BC: ;
    eax = MEM32(edx + 0x3C);
    eax = eax & 0x3F000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000EA1D7; /* jb: below (unsigned <) */

loc_000EA1CB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000EA1DA; /* jne: not equal / not zero */

loc_000EA1D7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EA1DA: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EA200
 * Original: 0x000EA200 - 0x000EA209 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA200(void)
{

loc_000EA200: ;
    eax = ecx;
    MEM32(eax) = 0x7CDCE0;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA210
 * Original: 0x000EA210 - 0x000EA213 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA210(void)
{

loc_000EA210: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA220
 * Original: 0x000EA220 - 0x000EA22D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA220(void)
{

loc_000EA220: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDCF0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA230
 * Original: 0x000EA230 - 0x000EA253 (35 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA230: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x50), 0x40000 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_000EA248; /* jne: not equal / not zero */

loc_000EA245: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EA248: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EA260
 * Original: 0x000EA260 - 0x000EA269 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA260(void)
{

loc_000EA260: ;
    eax = ecx;
    MEM32(eax) = 0x7CDD00;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA270
 * Original: 0x000EA270 - 0x000EA273 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA270(void)
{

loc_000EA270: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA280
 * Original: 0x000EA280 - 0x000EA28D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA280(void)
{

loc_000EA280: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDD10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA290
 * Original: 0x000EA290 - 0x000EA29E (14 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA290(void)
{

loc_000EA290: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EA2B0
 * Original: 0x000EA2B0 - 0x000EA2B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA2B0(void)
{

loc_000EA2B0: ;
    eax = ecx;
    MEM32(eax) = 0x7CDD28;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA2C0
 * Original: 0x000EA2C0 - 0x000EA2C3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA2C0(void)
{

loc_000EA2C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA2D0
 * Original: 0x000EA2D0 - 0x000EA2DD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA2D0(void)
{

loc_000EA2D0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDD38;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA2E0
 * Original: 0x000EA2E0 - 0x000EA30B (43 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA2E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x44);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = ecx & 0xFC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x940) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x940 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000EA300; /* jae: above or equal (unsigned >=) */

loc_000EA2FD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EA300: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EA320
 * Original: 0x000EA320 - 0x000EA329 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA320(void)
{

loc_000EA320: ;
    eax = ecx;
    MEM32(eax) = 0x7CDD50;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA330
 * Original: 0x000EA330 - 0x000EA333 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA330(void)
{

loc_000EA330: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA340
 * Original: 0x000EA340 - 0x000EA34D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA340(void)
{

loc_000EA340: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDD60;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA350
 * Original: 0x000EA350 - 0x000EA37B (43 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA350: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x50);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = ecx & 0x3FC00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x800 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA370; /* je: equal / zero */

loc_000EA36D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EA370: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EA390
 * Original: 0x000EA390 - 0x000EA399 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA390(void)
{

loc_000EA390: ;
    eax = ecx;
    MEM32(eax) = 0x7CDD78;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA3A0
 * Original: 0x000EA3A0 - 0x000EA3A3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA3A0(void)
{

loc_000EA3A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA3B0
 * Original: 0x000EA3B0 - 0x000EA3BD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA3B0(void)
{

loc_000EA3B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDD88;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA3C0
 * Original: 0x000EA3C0 - 0x000EA3EB (43 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA3C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x50);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = ecx & 0x3FC00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC00 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA3E0; /* je: equal / zero */

loc_000EA3DD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EA3E0: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EA400
 * Original: 0x000EA400 - 0x000EA409 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA400(void)
{

loc_000EA400: ;
    eax = ecx;
    MEM32(eax) = 0x7CDDA4;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA410
 * Original: 0x000EA410 - 0x000EA413 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA410(void)
{

loc_000EA410: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA420
 * Original: 0x000EA420 - 0x000EA42D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA420(void)
{

loc_000EA420: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDDB4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA430
 * Original: 0x000EA430 - 0x000EA472 (66 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA430: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x50);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EA448; /* jne: not equal / not zero */

loc_000EA446: ;
    SET_LO8(ecx, 1);

loc_000EA448: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA451; /* je: equal / zero */

loc_000EA44D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA464; /* je: equal / zero */

loc_000EA451: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000EA464: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EA490
 * Original: 0x000EA490 - 0x000EA499 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA490(void)
{

loc_000EA490: ;
    eax = ecx;
    MEM32(eax) = 0x7CDDC4;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA4A0
 * Original: 0x000EA4A0 - 0x000EA4A3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA4A0(void)
{

loc_000EA4A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA4B0
 * Original: 0x000EA4B0 - 0x000EA4BD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA4B0(void)
{

loc_000EA4B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CDDD4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA4C0
 * Original: 0x000EA4C0 - 0x000EA52A (106 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA4C0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000EA4DC; /* je: equal / zero */

loc_000EA4D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA4DC; /* je: equal / zero */

loc_000EA4D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA4DC; /* je: equal / zero */

loc_000EA4DA: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000EA4DC: ;
    eax = MEM32(edx + 0x40);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi & 0xFC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x780 (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_000EA4F3; /* jae: above or equal (unsigned >=) */

loc_000EA4F1: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000EA4F3: ;
    eax = eax & 0x3F000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000EA501; /* jae: above or equal (unsigned >=) */

loc_000EA4FF: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000EA501: ;
    eax = MEM32(edx + 0x44);
    eax = eax & 0x3C0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C0000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000EA51C; /* ja: above (unsigned >) */

loc_000EA510: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000EA51F; /* jne: not equal / not zero */

loc_000EA51C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EA51F: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EA550
 * Original: 0x000EA550 - 0x000EA559 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA550(void)
{

loc_000EA550: ;
    eax = ecx;
    MEM32(eax) = 0x7CDDE8;
    esp += 4; return; /* ret */

}

/**
 * sub_000EA560
 * Original: 0x000EA560 - 0x000EA563 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA560(void)
{

loc_000EA560: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EA570
 * Original: 0x000EA570 - 0x000EA58A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA570: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA579u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA579: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA587; /* je: equal / zero */

loc_000EA580: ;
    MEM32(eax) = 0x7CDA74;
    esp += 4; return; /* ret */

loc_000EA587: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA590
 * Original: 0x000EA590 - 0x000EA5AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA590: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA599u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA599: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA5A7; /* je: equal / zero */

loc_000EA5A0: ;
    MEM32(eax) = 0x7CDA98;
    esp += 4; return; /* ret */

loc_000EA5A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA5B0
 * Original: 0x000EA5B0 - 0x000EA5CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA5B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA5B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA5B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA5C7; /* je: equal / zero */

loc_000EA5C0: ;
    MEM32(eax) = 0x7CDAC0;
    esp += 4; return; /* ret */

loc_000EA5C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA5D0
 * Original: 0x000EA5D0 - 0x000EA5EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA5D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA5D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA5D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA5E7; /* je: equal / zero */

loc_000EA5E0: ;
    MEM32(eax) = 0x7CDAE4;
    esp += 4; return; /* ret */

loc_000EA5E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA5F0
 * Original: 0x000EA5F0 - 0x000EA60A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA5F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA5F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA5F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA607; /* je: equal / zero */

loc_000EA600: ;
    MEM32(eax) = 0x7CDB0C;
    esp += 4; return; /* ret */

loc_000EA607: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA610
 * Original: 0x000EA610 - 0x000EA62A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA610: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA619u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA619: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA627; /* je: equal / zero */

loc_000EA620: ;
    MEM32(eax) = 0x7CDB34;
    esp += 4; return; /* ret */

loc_000EA627: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA630
 * Original: 0x000EA630 - 0x000EA64A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA630: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA639u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA639: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA647; /* je: equal / zero */

loc_000EA640: ;
    MEM32(eax) = 0x7CDB58;
    esp += 4; return; /* ret */

loc_000EA647: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA650
 * Original: 0x000EA650 - 0x000EA66A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA650: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA659u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA659: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA667; /* je: equal / zero */

loc_000EA660: ;
    MEM32(eax) = 0x7CDB80;
    esp += 4; return; /* ret */

loc_000EA667: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA670
 * Original: 0x000EA670 - 0x000EA68A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA670: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA679u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA679: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA687; /* je: equal / zero */

loc_000EA680: ;
    MEM32(eax) = 0x7CDBA8;
    esp += 4; return; /* ret */

loc_000EA687: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA690
 * Original: 0x000EA690 - 0x000EA6AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA690: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA699u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA699: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA6A7; /* je: equal / zero */

loc_000EA6A0: ;
    MEM32(eax) = 0x7CDBCC;
    esp += 4; return; /* ret */

loc_000EA6A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA6B0
 * Original: 0x000EA6B0 - 0x000EA6CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA6B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA6B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA6B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA6C7; /* je: equal / zero */

loc_000EA6C0: ;
    MEM32(eax) = 0x7CDBF8;
    esp += 4; return; /* ret */

loc_000EA6C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA6D0
 * Original: 0x000EA6D0 - 0x000EA6EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA6D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA6D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA6D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA6E7; /* je: equal / zero */

loc_000EA6E0: ;
    MEM32(eax) = 0x7CDC24;
    esp += 4; return; /* ret */

loc_000EA6E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA6F0
 * Original: 0x000EA6F0 - 0x000EA70A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA6F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA6F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA6F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA707; /* je: equal / zero */

loc_000EA700: ;
    MEM32(eax) = 0x7CDC58;
    esp += 4; return; /* ret */

loc_000EA707: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA710
 * Original: 0x000EA710 - 0x000EA72A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA710: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA719u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA719: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA727; /* je: equal / zero */

loc_000EA720: ;
    MEM32(eax) = 0x7CDC8C;
    esp += 4; return; /* ret */

loc_000EA727: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA730
 * Original: 0x000EA730 - 0x000EA74A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA730: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA739u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA739: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA747; /* je: equal / zero */

loc_000EA740: ;
    MEM32(eax) = 0x7CDCB4;
    esp += 4; return; /* ret */

loc_000EA747: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA750
 * Original: 0x000EA750 - 0x000EA76A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA750: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA759u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA759: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA767; /* je: equal / zero */

loc_000EA760: ;
    MEM32(eax) = 0x7CDCE0;
    esp += 4; return; /* ret */

loc_000EA767: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA770
 * Original: 0x000EA770 - 0x000EA78A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA770: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA779u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA779: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA787; /* je: equal / zero */

loc_000EA780: ;
    MEM32(eax) = 0x7CDD00;
    esp += 4; return; /* ret */

loc_000EA787: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA790
 * Original: 0x000EA790 - 0x000EA7AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA790: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA799u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA799: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA7A7; /* je: equal / zero */

loc_000EA7A0: ;
    MEM32(eax) = 0x7CDD28;
    esp += 4; return; /* ret */

loc_000EA7A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA7B0
 * Original: 0x000EA7B0 - 0x000EA7CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA7B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA7B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA7B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA7C7; /* je: equal / zero */

loc_000EA7C0: ;
    MEM32(eax) = 0x7CDD50;
    esp += 4; return; /* ret */

loc_000EA7C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA7D0
 * Original: 0x000EA7D0 - 0x000EA7EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA7D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA7D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA7D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA7E7; /* je: equal / zero */

loc_000EA7E0: ;
    MEM32(eax) = 0x7CDD78;
    esp += 4; return; /* ret */

loc_000EA7E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA7F0
 * Original: 0x000EA7F0 - 0x000EA80A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA7F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA7F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA7F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA807; /* je: equal / zero */

loc_000EA800: ;
    MEM32(eax) = 0x7CDDA4;
    esp += 4; return; /* ret */

loc_000EA807: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA810
 * Original: 0x000EA810 - 0x000EA82A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA810: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA819u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA819: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA827; /* je: equal / zero */

loc_000EA820: ;
    MEM32(eax) = 0x7CDDC4;
    esp += 4; return; /* ret */

loc_000EA827: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA830
 * Original: 0x000EA830 - 0x000EA84A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EA830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EA830: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EA839u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EA839: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA847; /* je: equal / zero */

loc_000EA840: ;
    MEM32(eax) = 0x7CDDE8;
    esp += 4; return; /* ret */

loc_000EA847: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EA850
 * Original: 0x000EA850 - 0x000EA86E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA850(void)
{

loc_000EA850: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x36698);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDA5C;
    PUSH32(esp, 0x000EA86Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EA86C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA880
 * Original: 0x000EA880 - 0x000EA89E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA880(void)
{

loc_000EA880: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x267D4);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDA84;
    PUSH32(esp, 0x000EA89Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EA89C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA8B0
 * Original: 0x000EA8B0 - 0x000EA8CE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA8B0(void)
{

loc_000EA8B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x25753);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDAA8;
    PUSH32(esp, 0x000EA8CCu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EA8CC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA8E0
 * Original: 0x000EA8E0 - 0x000EA8FE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA8E0(void)
{

loc_000EA8E0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x1E962);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDAD0;
    PUSH32(esp, 0x000EA8FCu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EA8FC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA910
 * Original: 0x000EA910 - 0x000EA92E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA910(void)
{

loc_000EA910: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x301B2);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDAF4;
    PUSH32(esp, 0x000EA92Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EA92C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA940
 * Original: 0x000EA940 - 0x000EA95E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA940(void)
{

loc_000EA940: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x14340);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDB1C;
    PUSH32(esp, 0x000EA95Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EA95C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA970
 * Original: 0x000EA970 - 0x000EA98E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA970(void)
{

loc_000EA970: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2BEFF);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDB44;
    PUSH32(esp, 0x000EA98Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EA98C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA9A0
 * Original: 0x000EA9A0 - 0x000EA9BE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA9A0(void)
{

loc_000EA9A0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x11997);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDB68;
    PUSH32(esp, 0x000EA9BCu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EA9BC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EA9D0
 * Original: 0x000EA9D0 - 0x000EA9EE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA9D0(void)
{

loc_000EA9D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x16EFB);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDB90;
    PUSH32(esp, 0x000EA9ECu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EA9EC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAA00
 * Original: 0x000EAA00 - 0x000EAA1E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAA00(void)
{

loc_000EAA00: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2A95B);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDBB8;
    PUSH32(esp, 0x000EAA1Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EAA1C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAA30
 * Original: 0x000EAA30 - 0x000EAA4E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAA30(void)
{

loc_000EAA30: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x20546);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDBDC;
    PUSH32(esp, 0x000EAA4Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EAA4C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAA60
 * Original: 0x000EAA60 - 0x000EAA7E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAA60(void)
{

loc_000EAA60: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x20712);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDC08;
    PUSH32(esp, 0x000EAA7Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EAA7C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAA90
 * Original: 0x000EAA90 - 0x000EAAAE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAA90(void)
{

loc_000EAA90: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2E06F);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDC34;
    PUSH32(esp, 0x000EAAACu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EAAAC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAAC0
 * Original: 0x000EAAC0 - 0x000EAADE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAAC0(void)
{

loc_000EAAC0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2D877);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDC68;
    PUSH32(esp, 0x000EAADCu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EAADC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAAF0
 * Original: 0x000EAAF0 - 0x000EAB0E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAAF0(void)
{

loc_000EAAF0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x15097);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDC9C;
    PUSH32(esp, 0x000EAB0Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EAB0C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAB20
 * Original: 0x000EAB20 - 0x000EAB3E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAB20(void)
{

loc_000EAB20: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x36260);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDCC4;
    PUSH32(esp, 0x000EAB3Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EAB3C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAB50
 * Original: 0x000EAB50 - 0x000EAB6E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAB50(void)
{

loc_000EAB50: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2EE57);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDCF0;
    PUSH32(esp, 0x000EAB6Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EAB6C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAB80
 * Original: 0x000EAB80 - 0x000EAB9E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAB80(void)
{

loc_000EAB80: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x31C9C);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDD10;
    PUSH32(esp, 0x000EAB9Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EAB9C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EABB0
 * Original: 0x000EABB0 - 0x000EABCE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EABB0(void)
{

loc_000EABB0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x3752A);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDD38;
    PUSH32(esp, 0x000EABCCu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EABCC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EABE0
 * Original: 0x000EABE0 - 0x000EABFE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EABE0(void)
{

loc_000EABE0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x281AB);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDD60;
    PUSH32(esp, 0x000EABFCu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EABFC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAC10
 * Original: 0x000EAC10 - 0x000EAC2E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC10(void)
{

loc_000EAC10: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2383B);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDD88;
    PUSH32(esp, 0x000EAC2Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EAC2C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAC40
 * Original: 0x000EAC40 - 0x000EAC5E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC40(void)
{

loc_000EAC40: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2343F);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDDB4;
    PUSH32(esp, 0x000EAC5Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EAC5C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EAC70
 * Original: 0x000EAC70 - 0x000EAC8E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC70(void)
{

loc_000EAC70: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x19485);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0x7CDDD4;
    PUSH32(esp, 0x000EAC8Cu); RECOMP_ABI_CALL(0x00012072u, sub_00012072); /* call 0x00012072 */

loc_000EAC8C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000EACA0
 * Original: 0x000EACA0 - 0x000EACA9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EACA0(void)
{

loc_000EACA0: ;
    eax = ecx;
    MEM32(eax) = 0x7CE264;
    esp += 4; return; /* ret */

}

/**
 * sub_000EACB0
 * Original: 0x000EACB0 - 0x000EACB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EACB0(void)
{

loc_000EACB0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000EACC0
 * Original: 0x000EACC0 - 0x000EACCD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EACC0(void)
{

loc_000EACC0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CE274;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EACD0
 * Original: 0x000EACD0 - 0x000EAD46 (118 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EACD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EACD0: ;
    eax = MEM32(0x8EADA0);
    eax = MEM32(eax + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000EAD43; /* ja: above (unsigned >) */

loc_000EACDD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xEAD48); /* switch: 6 entries, 5 targets */
    if (_jt == 0x000EACE4u) goto loc_000EACE4;
    if (_jt == 0x000EACF4u) goto loc_000EACF4;
    if (_jt == 0x000EAD10u) goto loc_000EAD10;
    if (_jt == 0x000EAD2Cu) goto loc_000EAD2C;
    if (_jt == 0x000EAD43u) goto loc_000EAD43;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000EACE4: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EACEEu); RECOMP_ABI_CALL(0x0003821Du, sub_0003821D); /* call 0x0003821D */

loc_000EACEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000EACF4: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xF0);
    _fa = (uint32_t)(MEM8(edx + 0x51)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x51), 4 (8-bit) */
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EAD21; /* je: equal / zero */

loc_000EAD05: ;
    PUSH32(esp, 0x000EAD0Au); RECOMP_ABI_CALL(0x00021851u, sub_00021851); /* call 0x00021851 */

loc_000EAD0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000EAD10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xF0);
    _fa = (uint32_t)(MEM8(ecx + 0x51)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x51), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EAD43; /* jne: not equal / not zero */

loc_000EAD20: ;
    PUSH32(esp, eax);

loc_000EAD21: ;
    PUSH32(esp, 0x000EAD26u); RECOMP_ABI_CALL(0x00034703u, sub_00034703); /* call 0x00034703 */

loc_000EAD26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000EAD2C: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xF0);
    _fa = (uint32_t)(MEM8(edx + 0x51)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x51), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EAD43; /* je: equal / zero */

loc_000EAD3C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EAD42u); RECOMP_ABI_CALL(0x00021851u, sub_00021851); /* call 0x00021851 */

loc_000EAD42: ;
    POP32(esp, ecx);

loc_000EAD43: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EAD46
 * Original: 0x000EAD46 - 0x000EADAA (100 bytes, 71 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000EAD46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EAD46: ;
    edi = edi;
    _fb = (uint32_t)(0xAD) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 0xAD);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + -83) = MEM8(ebx + -83) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx + -83)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + HI8(eax));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = MEM32(esi); esi += RECOMP_DF_STEP(4); /* lodsd */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + HI8(edx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp * 4 + -859045874) = MEM8(ebp * 4 + -859045874) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebp * 4 + -859045874)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000EAD99u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000EAD99: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EADA7; /* je: equal / zero */

loc_000EADA0: ;
    MEM32(eax) = 0x7CE264;
    esp += 4; return; /* ret */

loc_000EADA7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EADB0
 * Original: 0x000EADB0 - 0x000EADB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EADB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000EADB0: ;
    fp_push(MEMF(0x7CE514)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EADC0
 * Original: 0x000EADC0 - 0x000EADC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EADC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000EADC0: ;
    fp_push(MEMF(0x7CE4F8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EADD0
 * Original: 0x000EADD0 - 0x000EADD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EADD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000EADD0: ;
    fp_push(MEMF(0x7CE460)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EADE0
 * Original: 0x000EADE0 - 0x000EADE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EADE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000EADE0: ;
    fp_push(MEMF(0x7CE464)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EADF0
 * Original: 0x000EADF0 - 0x000EADF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EADF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000EADF0: ;
    fp_push(MEMF(0x7CE468)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EAE00
 * Original: 0x000EAE00 - 0x000EAE07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAE00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000EAE00: ;
    fp_push(MEMF(0x7CE514)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EAE10
 * Original: 0x000EAE10 - 0x000EAE17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAE10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000EAE10: ;
    fp_push(MEMF(0x7CE480)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EAE20
 * Original: 0x000EAE20 - 0x000EAE27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAE20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000EAE20: ;
    fp_push(MEMF(0x7CE484)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EAE30
 * Original: 0x000EAE30 - 0x000EAE37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAE30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000EAE30: ;
    fp_push(MEMF(0x7CE4D0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EAE40
 * Original: 0x000EAE40 - 0x000EAE47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAE40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000EAE40: ;
    fp_push(MEMF(0x7CE4E0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EAE50
 * Original: 0x000EAE50 - 0x000EAE57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAE50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000EAE50: ;
    fp_push(MEMF(0x7CE4E4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EAE60
 * Original: 0x000EAE60 - 0x000EAE67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAE60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000EAE60: ;
    fp_push(MEMF(0x7CE514)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EAE70
 * Original: 0x000EAE70 - 0x000EAE77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAE70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000EAE70: ;
    fp_push(MEMF(0x7CE4F8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EAE80
 * Original: 0x000EAE80 - 0x000EAE87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAE80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000EAE80: ;
    fp_push(MEMF(0x7CE4F0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EAE90
 * Original: 0x000EAE90 - 0x000EAF20 (144 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000EAE90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EAF11; /* je: equal / zero */

loc_000EAE9A: ;
    eax = MEM32(ecx + 0x54);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EAF11; /* je: equal / zero */

loc_000EAEA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EAF11; /* je: equal / zero */

loc_000EAEAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EAF11; /* je: equal / zero */

loc_000EAEAF: ;
    edx = MEM32(0x8E8F84);
    SET_LO8(eax, MEM8(ecx + 0x64));
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x40A00000);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EAEED; /* je: equal / zero */

loc_000EAECD: ;
    PUSH32(esp, 0x000EAED2u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_000EAED2: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7B047C); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EAF18; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 8)) */

loc_000EAEE5: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000EAEED: ;
    PUSH32(esp, 0x000EAEF2u); RECOMP_ABI_CALL(0x000274C7u, sub_000274C7); /* call 0x000274C7 */

loc_000EAEF2: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7B047C); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EAF18; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000EAF09: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000EAF11: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000EAF18: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EAF50
 * Original: 0x000EAF50 - 0x000EAF7D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAF50(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000EAF50: ;
    xmm3 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7B047C)); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EAF70; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EAF6C: ;
    xmm0 = xmm1; /* movaps */
    esp += 4; return; /* ret */

loc_000EAF70: ;
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EAF7C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000EAF79: ;
    xmm0 = xmm2; /* movaps */

loc_000EAF7C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000EAF90
 * Original: 0x000EAF90 - 0x000EB01B (139 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000EAF90: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000EAF9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EAF99u); } /* indirect call */
    }

loc_000EAF9C: ;
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000EAFBD; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000EAFB5: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_000EAFBD: ;
    edx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x7AEBF0); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7CE63C); /* comiss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EAFF5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7CE63C)) */

loc_000EAFE7: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7CE744); /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_000EAFF5: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EB016u); RECOMP_ABI_CALL(0x00014CE6u, sub_00014CE6); /* call 0x00014CE6 */

loc_000EB016: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000EB040
 * Original: 0x000EB040 - 0x000EB049 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB040(void)
{

loc_000EB040: ;
    eax = ecx;
    MEM32(eax) = 0x7CE748;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB050
 * Original: 0x000EB050 - 0x000EB053 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB050(void)
{

loc_000EB050: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB060
 * Original: 0x000EB060 - 0x000EB06D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB060(void)
{

loc_000EB060: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CE758;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB070
 * Original: 0x000EB070 - 0x000EB079 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB070(void)
{

loc_000EB070: ;
    eax = ecx;
    MEM32(eax) = 0x7CE77C;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB080
 * Original: 0x000EB080 - 0x000EB083 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB080(void)
{

loc_000EB080: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB090
 * Original: 0x000EB090 - 0x000EB09D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB090(void)
{

loc_000EB090: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CE78C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB0A0
 * Original: 0x000EB0A0 - 0x000EB0A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB0A0(void)
{

loc_000EB0A0: ;
    eax = ecx;
    MEM32(eax) = 0x7CE7B4;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB0B0
 * Original: 0x000EB0B0 - 0x000EB0B3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB0B0(void)
{

loc_000EB0B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB0C0
 * Original: 0x000EB0C0 - 0x000EB0CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB0C0(void)
{

loc_000EB0C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CE7C4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB0D0
 * Original: 0x000EB0D0 - 0x000EB0D9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB0D0(void)
{

loc_000EB0D0: ;
    eax = ecx;
    MEM32(eax) = 0x7CE7F0;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB0E0
 * Original: 0x000EB0E0 - 0x000EB0E3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB0E0(void)
{

loc_000EB0E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB0F0
 * Original: 0x000EB0F0 - 0x000EB0FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB0F0(void)
{

loc_000EB0F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CE800;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB100
 * Original: 0x000EB100 - 0x000EB109 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB100(void)
{

loc_000EB100: ;
    eax = ecx;
    MEM32(eax) = 0x7CE82C;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB110
 * Original: 0x000EB110 - 0x000EB113 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB110(void)
{

loc_000EB110: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB120
 * Original: 0x000EB120 - 0x000EB12D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB120(void)
{

loc_000EB120: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CE83C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB130
 * Original: 0x000EB130 - 0x000EB139 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB130(void)
{

loc_000EB130: ;
    eax = ecx;
    MEM32(eax) = 0x7CE870;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB140
 * Original: 0x000EB140 - 0x000EB143 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB140(void)
{

loc_000EB140: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB150
 * Original: 0x000EB150 - 0x000EB15D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB150(void)
{

loc_000EB150: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CE880;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB160
 * Original: 0x000EB160 - 0x000EB169 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB160(void)
{

loc_000EB160: ;
    eax = ecx;
    MEM32(eax) = 0x7CE8B4;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB170
 * Original: 0x000EB170 - 0x000EB173 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB170(void)
{

loc_000EB170: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB180
 * Original: 0x000EB180 - 0x000EB18D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB180(void)
{

loc_000EB180: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CE8C4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB190
 * Original: 0x000EB190 - 0x000EB1EA (90 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB190(void)
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

loc_000EB190: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, 0x000EB1A0u); RECOMP_ABI_CALL(0x00017C52u, sub_00017C52); /* call 0x00017C52 */

loc_000EB1A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EB1DB; /* je: equal / zero */

loc_000EB1A4: ;
    ecx = eax;
    PUSH32(esp, 0x000EB1ABu); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_000EB1AB: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM32(esi + 0x3EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3EC), 4 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7AF57C)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000EB1C8; /* je: equal / zero */

loc_000EB1C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7CE8F4)); /* movss */

loc_000EB1C8: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca > _fcb)) goto loc_000EB1DE; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000EB1DB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EB1DE: ;
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EB200
 * Original: 0x000EB200 - 0x000EB209 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB200(void)
{

loc_000EB200: ;
    eax = ecx;
    MEM32(eax) = 0x7CE8F8;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB210
 * Original: 0x000EB210 - 0x000EB213 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB210(void)
{

loc_000EB210: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB220
 * Original: 0x000EB220 - 0x000EB22D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB220(void)
{

loc_000EB220: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CE908;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB230
 * Original: 0x000EB230 - 0x000EB239 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB230(void)
{

loc_000EB230: ;
    eax = ecx;
    MEM32(eax) = 0x7CE92C;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB240
 * Original: 0x000EB240 - 0x000EB243 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB240(void)
{

loc_000EB240: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB250
 * Original: 0x000EB250 - 0x000EB25D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB250(void)
{

loc_000EB250: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CE93C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB260
 * Original: 0x000EB260 - 0x000EB269 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB260(void)
{

loc_000EB260: ;
    eax = ecx;
    MEM32(eax) = 0x7CE954;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB270
 * Original: 0x000EB270 - 0x000EB273 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB270(void)
{

loc_000EB270: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB280
 * Original: 0x000EB280 - 0x000EB28D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB280(void)
{

loc_000EB280: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CE964;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB290
 * Original: 0x000EB290 - 0x000EB2D9 (73 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EB290: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, 0x000EB2A0u); RECOMP_ABI_CALL(0x00017C52u, sub_00017C52); /* call 0x00017C52 */

loc_000EB2A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EB2CA; /* je: equal / zero */

loc_000EB2A4: ;
    ecx = MEM32(0x8EFCB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EB2B6; /* je: equal / zero */

loc_000EB2AE: ;
    _fa = (uint32_t)(MEM32(esi + 0x40C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EB2CA; /* jne: not equal / not zero */

loc_000EB2B6: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000EB2CA: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EB2F0
 * Original: 0x000EB2F0 - 0x000EB2F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB2F0(void)
{

loc_000EB2F0: ;
    eax = ecx;
    MEM32(eax) = 0x7CE980;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB300
 * Original: 0x000EB300 - 0x000EB303 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB300(void)
{

loc_000EB300: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB310
 * Original: 0x000EB310 - 0x000EB31D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB310(void)
{

loc_000EB310: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CE990;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB320
 * Original: 0x000EB320 - 0x000EB381 (97 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EB320: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    PUSH32(esp, eax);
    ecx = 0x8E985C;
    PUSH32(esp, 0x000EB335u); RECOMP_ABI_CALL(0x000180C6u, sub_000180C6); /* call 0x000180C6 */

loc_000EB335: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    edx = 1;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    ecx = 0x8E9CF0;
    esi = eax;
    PUSH32(esp, 0x000EB34Du); RECOMP_ABI_CALL(0x0002ECDBu, sub_0002ECDB); /* call 0x0002ECDB */

loc_000EB34D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = 0x8E9CF0;
    PUSH32(esp, 0x000EB35Au); RECOMP_ABI_CALL(0x00027A44u, sub_00027A44); /* call 0x00027A44 */

loc_000EB35A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000EB371; /* jl: less (signed <) */

loc_000EB361: ;
    _fa = (uint32_t)(MEM32(0x8EFCBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFCBC), esi (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_G(_fas, _fbs)) goto loc_000EB374; /* jg: greater (signed >) */

loc_000EB371: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EB374: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EB3A0
 * Original: 0x000EB3A0 - 0x000EB3A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB3A0(void)
{

loc_000EB3A0: ;
    eax = ecx;
    MEM32(eax) = 0x7CE9C4;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB3B0
 * Original: 0x000EB3B0 - 0x000EB3B3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB3B0(void)
{

loc_000EB3B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB3C0
 * Original: 0x000EB3C0 - 0x000EB3CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB3C0(void)
{

loc_000EB3C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CE9D4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB3D0
 * Original: 0x000EB3D0 - 0x000EB406 (54 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EB3D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EB3E0u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000EB3E0: ;
    eax = MEM32(eax + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EB3F8; /* je: equal / zero */

loc_000EB3EA: ;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 0xFFFFFFFFu (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000EB3FB; /* jne: not equal / not zero */

loc_000EB3F8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EB3FB: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EB420
 * Original: 0x000EB420 - 0x000EB42D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB420(void)
{

loc_000EB420: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CE9F0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB430
 * Original: 0x000EB430 - 0x000EB43D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB430(void)
{

loc_000EB430: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CEA08;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB440
 * Original: 0x000EB440 - 0x000EB5A1 (353 bytes, 111 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB440(void)
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

loc_000EB440: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0x50);
    PUSH32(esp, 0x000EB44Eu); RECOMP_ABI_CALL(0x0001A6B9u, sub_0001A6B9); /* call 0x0001A6B9 */

loc_000EB44E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000EB467; /* jne: not equal / not zero */

loc_000EB452: ;
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7CE4F0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x6C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EB591; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x6C)) */

loc_000EB467: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000EB591; /* jl: less (signed <) */

loc_000EB47B: ;
    edx = MEM32(edi + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000EB487u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000EB487: ;
    eax = MEM32(eax + 0x2C);
    esi = MEM32(eax + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000EB591; /* je: equal / zero */

loc_000EB498: ;
    ecx = esi;
    PUSH32(esp, 0x000EB49Fu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000EB49F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000EB591; /* je: equal / zero */

loc_000EB4A7: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000EB4AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EB4ABu); } /* indirect call */
    }

loc_000EB4AE: ;
    eax = MEM32(eax + 0x20);
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EB4C1u); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_000EB4C1: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000EB4CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EB4CCu); } /* indirect call */
    }

loc_000EB4CF: ;
    eax = MEM32(eax + 0x20);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000EB4E2u); RECOMP_ABI_CALL(0x0001EA4Du, sub_0001EA4D); /* call 0x0001EA4D */

loc_000EB4E2: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000EB505; /* ja: above (unsigned >) */

loc_000EB4F1: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EB4FAu); RECOMP_ABI_CALL(0x00016BBDu, sub_00016BBD); /* call 0x00016BBD */

loc_000EB4FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000EB591; /* je: equal / zero */

loc_000EB505: ;
    ecx = 0x8E985C;
    PUSH32(esp, 0x000EB50Fu); RECOMP_ABI_CALL(0x0001F8DFu, sub_0001F8DF); /* call 0x0001F8DF */

loc_000EB50F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB7D0)); /* fmul dword ptr [0x7ab7d0] */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000EB520u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_000EB520: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7CEA20)); /* fmul dword ptr [0x7cea20] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000EB591; /* jbe: below or equal (unsigned <=) */

loc_000EB539: ;
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x30)) >> 32) & 1);
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000EB546u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000EB546: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000EB552; /* je: equal / zero */

loc_000EB54D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000EB591; /* jne: not equal / not zero */

loc_000EB552: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000EB559u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EB556u); } /* indirect call */
    }

loc_000EB559: ;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000EB566u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000EB566: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000EB591; /* ja: above (unsigned >) */

loc_000EB56E: ;
    edx = ZX8(MEM8(eax + 0xEB5AC));
    { uint32_t _jt = MEM32(edx * 4 + 0xEB5A4); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000EB57Cu) goto loc_000EB57C;
    if (_jt == 0x000EB591u) goto loc_000EB591;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000EB57C: ;
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    POP32(esp, edi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000EB591: ;
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EB630
 * Original: 0x000EB630 - 0x000EB633 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB630(void)
{

loc_000EB630: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB640
 * Original: 0x000EB640 - 0x000EB64D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB640(void)
{

loc_000EB640: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CEA34;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB650
 * Original: 0x000EB650 - 0x000EB6BA (106 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB650(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000EB650: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000EB659u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EB656u); } /* indirect call */
    }

loc_000EB659: ;
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = xmm2; /* movaps */
    if ((_fca >= _fcb)) goto loc_000EB67C; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000EB674: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_000EB67C: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C2228); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EB6AF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7C2228)) */

loc_000EB697: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AA82C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EB6AF; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000EB6A4: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm2.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_000EB6AF: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm3.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EB6E0
 * Original: 0x000EB6E0 - 0x000EB6E9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB6E0(void)
{

loc_000EB6E0: ;
    eax = ecx;
    MEM32(eax) = 0x7CEA50;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB6F0
 * Original: 0x000EB6F0 - 0x000EB6F3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB6F0(void)
{

loc_000EB6F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB700
 * Original: 0x000EB700 - 0x000EB70D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB700(void)
{

loc_000EB700: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CEA60;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB710
 * Original: 0x000EB710 - 0x000EB786 (118 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB710(void)
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

loc_000EB710: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000EB719u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EB716u); } /* indirect call */
    }

loc_000EB719: ;
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000EB73A; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000EB732: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_000EB73A: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000EB757u); RECOMP_ABI_CALL(0x00037322u, sub_00037322); /* call 0x00037322 */

loc_000EB757: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000EB778; /* jb: below (unsigned <) */

loc_000EB761: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C2228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000EB77B; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_000EB778: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EB77B: ;
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
 * sub_000EB7B0
 * Original: 0x000EB7B0 - 0x000EB7B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB7B0(void)
{

loc_000EB7B0: ;
    eax = ecx;
    MEM32(eax) = 0x7CEA80;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB7C0
 * Original: 0x000EB7C0 - 0x000EB7C3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB7C0(void)
{

loc_000EB7C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB7D0
 * Original: 0x000EB7D0 - 0x000EB7DD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB7D0(void)
{

loc_000EB7D0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CEA90;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB7E0
 * Original: 0x000EB7E0 - 0x000EB940 (352 bytes, 84 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB7E0(void)
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

loc_000EB7E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000EB800u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EB7FDu); } /* indirect call */
    }

loc_000EB800: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000EB821; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000EB819: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_000EB821: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000EB838u); RECOMP_ABI_CALL(0x00037322u, sub_00037322); /* call 0x00037322 */

loc_000EB838: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000EB930; /* jbe: below or equal (unsigned <=) */

loc_000EB846: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000EB84Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EB84Au); } /* indirect call */
    }

loc_000EB84D: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000EB86D; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000EB865: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_000EB86D: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C2228); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EB8A5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7C2228)) */

loc_000EB888: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AA82C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EB8A5; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000EB895: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_000EB8AB;

loc_000EB8A5: ;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */

loc_000EB8AB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000EB8B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000EB8AFu); } /* indirect call */
    }

loc_000EB8B2: ;
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000EB8D3; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000EB8CB: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_000EB8D3: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000EB8F0u); RECOMP_ABI_CALL(0x00037322u, sub_00037322); /* call 0x00037322 */

loc_000EB8F0: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000EB911; /* jb: below (unsigned <) */

loc_000EB8FA: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C2228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000EB914; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_000EB911: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EB914: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EB930; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 4)) */

loc_000EB923: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca > _fcb)) goto loc_000EB933; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000EB930: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000EB933: ;
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EB9A0
 * Original: 0x000EB9A0 - 0x000EB9A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB9A0(void)
{

loc_000EB9A0: ;
    eax = ecx;
    MEM32(eax) = 0x7CEAB0;
    esp += 4; return; /* ret */

}

/**
 * sub_000EB9B0
 * Original: 0x000EB9B0 - 0x000EB9B3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB9B0(void)
{

loc_000EB9B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB9C0
 * Original: 0x000EB9C0 - 0x000EB9CD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB9C0(void)
{

loc_000EB9C0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CEAC0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EB9D0
 * Original: 0x000EB9D0 - 0x000EBA28 (88 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000EB9D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EB9DEu); RECOMP_ABI_CALL(0x0002893Fu, sub_0002893F); /* call 0x0002893F */

loc_000EB9DE: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EB9F4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000EB9EF: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000EB9FB;

loc_000EB9F4: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000EB9FB: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AA7D8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = MEM32(esp + 0x10);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EBA1E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000EBA0C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000EBA1E: ;
    MEMF(eax) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000EBA40
 * Original: 0x000EBA40 - 0x000EBA49 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBA40(void)
{

loc_000EBA40: ;
    eax = ecx;
    MEM32(eax) = 0x7CEADC;
    esp += 4; return; /* ret */

}

/**
 * sub_000EBA50
 * Original: 0x000EBA50 - 0x000EBA53 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBA50(void)
{

loc_000EBA50: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EBA60
 * Original: 0x000EBA60 - 0x000EBA6D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBA60(void)
{

loc_000EBA60: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7CEAEC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000EBA70
 * Original: 0x000EBA70 - 0x000EBAC8 (88 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000EBA70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000EBA7Eu); RECOMP_ABI_CALL(0x0002893Fu, sub_0002893F); /* call 0x0002893F */

loc_000EBA7E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EBA94; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000EBA8F: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000EBA9B;

loc_000EBA94: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000EBA9B: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AA7D8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = MEM32(esp + 0x10);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000EBAB6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000EBAAC: ;
    MEMF(eax) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000EBAB6: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}
