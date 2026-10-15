/**
 * nhl_07_recomp - Recompiled code chunk 245
 * Functions: 250 (0x00586A84 - 0x0058DA8C)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00586A84
 * Original: 0x00586A84 - 0x00586AAB (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586A84(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586A84: ;
    ecx = MEM32(esp + 4);
    eax = ecx + ecx * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x919EF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 0x23)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x23), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00586AAA; /* jne: not equal / not zero */

loc_00586A9A: ;
    SET_LO16(edx, MEM16(esp + 8));
    PUSH32(esp, ecx);
    MEM16(eax + 0x1C) = LO16(edx);
    PUSH32(esp, 0x00586AA9u); RECOMP_ABI_CALL(0x0058B560u, sub_0058B560); /* call 0x0058B560 */

loc_00586AA9: ;
    POP32(esp, ecx);

loc_00586AAA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00586AAB
 * Original: 0x00586AAB - 0x00586B07 (92 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586AAB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586AAB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00586AB8; /* jge: greater or equal (signed >=) */

loc_00586AB4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00586AC3;

loc_00586AB8: ;
    eax = 0x7FFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00586AC3; /* jle: less or equal (signed <=) */

loc_00586AC1: ;
    esi = eax;

loc_00586AC3: ;
    ecx = MEM32(esp + 8);
    eax = ecx + ecx * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = esi;
    esi = MEM32(0x919EF4);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax + esi + 0x60) = LO8(edx);
    edx = MEM32(0x919EF4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x60);
    eax = MEM32(eax + 0x64);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DADA4); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00586B03u); RECOMP_ABI_CALL(0x0058BF20u, sub_0058BF20); /* call 0x0058BF20 */

loc_00586B03: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00586B07
 * Original: 0x00586B07 - 0x00586B2B (36 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586B07(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586B07: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00586B13; /* jge: greater or equal (signed >=) */

loc_00586B0F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00586B1E;

loc_00586B13: ;
    eax = 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00586B1E; /* jle: less or equal (signed <=) */

loc_00586B1C: ;
    ecx = eax;

loc_00586B1E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00586B28u); RECOMP_ABI_CALL(0x0058C037u, sub_0058C037); /* call 0x0058C037 */

loc_00586B28: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00586B2B
 * Original: 0x00586B2B - 0x00586B4F (36 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586B2B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586B2B: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00586B37; /* jge: greater or equal (signed >=) */

loc_00586B33: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00586B42;

loc_00586B37: ;
    eax = 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00586B42; /* jle: less or equal (signed <=) */

loc_00586B40: ;
    ecx = eax;

loc_00586B42: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00586B4Cu); RECOMP_ABI_CALL(0x0058C12Bu, sub_0058C12B); /* call 0x0058C12B */

loc_00586B4C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00586B4F
 * Original: 0x00586B4F - 0x00586BB9 (106 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00586B4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586B4F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x919EF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00586B6E; /* jge: greater or equal (signed >=) */

loc_00586B6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00586B7B;

loc_00586B6E: ;
    eax = 0x7FFF;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00586B7B; /* jg: greater (signed >) */

loc_00586B78: ;
    eax = MEM32(ebp + 0xC);

loc_00586B7B: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), LO8(ecx) (8-bit) */
    ebx = eax;
    MEM32(ebp + 0xC) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00586BB5; /* jbe: below or equal (unsigned <=) */

loc_00586B88: ;
    PUSH32(esp, edi);
    edi = esi + 4;

loc_00586B8C: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    edx = MEM32(0x919EF4);
    ecx = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    MEM8(ecx + edx + 0x5F) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00586BA5u); RECOMP_ABI_CALL(0x0058B53Bu, sub_0058B53B); /* call 0x0058B53B */

loc_00586BA5: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(esi + 0x23));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00586B8C; /* jl: less (signed <) */

loc_00586BB4: ;
    POP32(esp, edi);

loc_00586BB5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00586BB9
 * Original: 0x00586BB9 - 0x00586BD9 (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586BB9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586BB9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00586BD0; /* jl: less (signed <) */

loc_00586BC1: ;
    eax = 0xFFFF;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00586BD0; /* jg: greater (signed >) */

loc_00586BCC: ;
    eax = MEM32(esp + 8);

loc_00586BD0: ;
    ecx = MEM32(esp + 4);
    MEM16(ecx + 0xC) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00586BD9
 * Original: 0x00586BD9 - 0x00586BFA (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586BD9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586BD9: ;
    ecx = MEM32(esp + 8);
    eax = 0x2000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00586BEF; /* jg: greater (signed >) */

loc_00586BE6: ;
    eax = 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00586BF1; /* jge: greater or equal (signed >=) */

loc_00586BEF: ;
    ecx = eax;

loc_00586BF1: ;
    eax = MEM32(esp + 4);
    MEM16(eax + 0xE) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00586BFA
 * Original: 0x00586BFA - 0x00586C1B (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586BFA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586BFA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00586C11; /* jl: less (signed <) */

loc_00586C02: ;
    eax = 0x7FFF;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00586C11; /* jg: greater (signed >) */

loc_00586C0D: ;
    eax = MEM32(esp + 8);

loc_00586C11: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ecx) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00586C1B
 * Original: 0x00586C1B - 0x00586C29 (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586C1B(void)
{

loc_00586C1B: ;
    SET_LO16(eax, MEM16(esp + 8));
    ecx = MEM32(esp + 4);
    MEM16(ecx + 8) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00586C29
 * Original: 0x00586C29 - 0x00586C4B (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586C29(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586C29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00586C40; /* jl: less (signed <) */

loc_00586C31: ;
    eax = 0x7FFF;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00586C40; /* jg: greater (signed >) */

loc_00586C3C: ;
    eax = MEM32(esp + 8);

loc_00586C40: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ecx + 5) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00586C4B
 * Original: 0x00586C4B - 0x00586C6B (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586C4B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586C4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00586C62; /* jl: less (signed <) */

loc_00586C53: ;
    eax = 0xFFFF;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00586C62; /* jg: greater (signed >) */

loc_00586C5E: ;
    eax = MEM32(esp + 8);

loc_00586C62: ;
    ecx = MEM32(esp + 4);
    MEM16(ecx + 0x14) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00586C6B
 * Original: 0x00586C6B - 0x00586C8B (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586C6B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586C6B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00586C82; /* jl: less (signed <) */

loc_00586C73: ;
    eax = 0xFFFF;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00586C82; /* jg: greater (signed >) */

loc_00586C7E: ;
    eax = MEM32(esp + 8);

loc_00586C82: ;
    ecx = MEM32(esp + 4);
    MEM16(ecx + 0x16) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00586C8B
 * Original: 0x00586C8B - 0x00586CAD (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586C8B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586C8B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00586CA2; /* jl: less (signed <) */

loc_00586C93: ;
    eax = 0x7FFF;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00586CA2; /* jg: greater (signed >) */

loc_00586C9E: ;
    eax = MEM32(esp + 8);

loc_00586CA2: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ecx + 4) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00586CAD
 * Original: 0x00586CAD - 0x00586CAE (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586CAD(void)
{

loc_00586CAD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00586CAE
 * Original: 0x00586CAE - 0x00586D12 (100 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00586CAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586CAE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + -24;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00586CC0u); RECOMP_ABI_CALL(0x005889D9u, sub_005889D9); /* call 0x005889D9 */

loc_00586CC0: ;
    edi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edi + 0xE)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xE), LO8(ebx) (8-bit) */
    POP32(esp, ecx);
    MEM8(ebp + -19) = LO8(ebx);
    esi = edi + 0x1C;
    if (CMP_BE(_fa, _fb)) goto loc_00586CF6; /* jbe: below or equal (unsigned <=) */

loc_00586CD1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    eax = ZX8(MEM8(esi));
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8DE190); PUSH32(esp, 0x00586CE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00586CDBu); } /* indirect call */
    }

loc_00586CE2: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 4) = eax;
    eax = ZX8(MEM8(edi + 0xE));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00586CD1; /* jl: less (signed <) */

loc_00586CF6: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax + 4));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(eax + 0x40));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00586D0Au); RECOMP_ABI_CALL(0x0058A115u, sub_0058A115); /* call 0x0058A115 */

loc_00586D0A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00586D12
 * Original: 0x00586D12 - 0x00586D20 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586D12(void)
{

loc_00586D12: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x00586D1Eu); RECOMP_ABI_CALL(0x0058C175u, sub_0058C175); /* call 0x0058C175 */

loc_00586D1E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00586D20
 * Original: 0x00586D20 - 0x00586D3A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586D20: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00586D2Bu); RECOMP_ABI_CALL(0x0058BDBEu, sub_0058BDBE); /* call 0x0058BDBE */

loc_00586D2B: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x00586D36u); RECOMP_ABI_CALL(0x0058C1B9u, sub_0058C1B9); /* call 0x0058C1B9 */

loc_00586D36: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00586D3A
 * Original: 0x00586D3A - 0x00586DAD (115 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00586D3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586D3A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    ebx = 0x1000;
    edi = 0x7FFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00586D56u); RECOMP_ABI_CALL(0x0058C60Au, sub_0058C60A); /* call 0x0058C60A */

loc_00586D56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00586DA8; /* jl: less (signed <) */

loc_00586D5E: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 0 (8-bit) */
    eax = esi + 0x1C;
    if (CMP_BE(_fa, _fb)) goto loc_00586D93; /* jbe: below or equal (unsigned <=) */

loc_00586D6B: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00586D79; /* jne: not equal / not zero */

loc_00586D71: ;
    ebx = MEM32(eax + 8);
    MEM32(eax + 4) = ebx;
    goto loc_00586D84;

loc_00586D79: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00586D84; /* jne: not equal / not zero */

loc_00586D7E: ;
    edi = MEM32(eax + 8);
    MEM32(eax + 4) = edi;

loc_00586D84: ;
    ecx = ZX8(MEM8(esi + 0xE));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00586D6B; /* jl: less (signed <) */

loc_00586D93: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00586D9Cu); RECOMP_ABI_CALL(0x0058698Fu, sub_0058698F); /* call 0x0058698F */

loc_00586D9C: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00586DA5u); RECOMP_ABI_CALL(0x00586A01u, sub_00586A01); /* call 0x00586A01 */

loc_00586DA5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00586DA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00586DAD
 * Original: 0x00586DAD - 0x00586DCF (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00586DAD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586DAD: ;
    ecx = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0xF)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xF), LO8(edx) (8-bit) */
    MEM8(ecx + 0x10) = 0xFF;
    if (CMP_EQ(_fa, _fb)) goto loc_00586DCC; /* je: equal / zero */

loc_00586DBC: ;
    eax = ZX8(MEM8(ecx + 0xE));
    eax = eax + eax * 2;
    eax = ecx + eax * 4 + 0x1C;
    MEM32(eax + 4) = edx;
    MEM32(eax) = edx;

loc_00586DCC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00586DCF
 * Original: 0x00586DCF - 0x00586EAB (220 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00586DCF(void)
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

loc_00586DCF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00586DE1u); RECOMP_ABI_CALL(0x0058C60Au, sub_0058C60A); /* call 0x0058C60A */

loc_00586DE1: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ecx);
    edi = esi + 0x1C;
    if (CMP_GE(_fas, _fbs)) goto loc_00586DF7; /* jge: greater or equal (signed >=) */

loc_00586DEB: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00586DF1u); RECOMP_ABI_CALL(0x00586DADu, sub_00586DAD); /* call 0x00586DAD */

loc_00586DF1: ;
    POP32(esp, ecx);
    goto loc_00586EA6;

loc_00586DF7: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00586E2C; /* jbe: below or equal (unsigned <=) */

loc_00586E01: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00586E1D; /* je: equal / zero */

loc_00586E09: ;
    ecx = ZX8(MEM8(edi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx * 4 + 0x8DE160); PUSH32(esp, 0x00586E15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00586E0Eu); } /* indirect call */
    }

loc_00586E15: ;
    eax = MEM32(edi + 8);
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(edi + 4) = eax;

loc_00586E1D: ;
    eax = ZX8(MEM8(esi + 0xE));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00586E01; /* jl: less (signed <) */

loc_00586E2C: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xF), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00586EA3; /* je: equal / zero */

loc_00586E32: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    esi = ebx + ebx * 8;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x919EF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    eax = ZX16(MEM16(esi + 0x20));
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00586E5Du); RECOMP_ABI_CALL(0x0058C63Eu, sub_0058C63E); /* call 0x0058C63E */

loc_00586E5D: ;
    POP32(esp, ecx);
    ecx = eax;
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp + -4); /* cvtss2si */
    MEM32(edi + 4) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00586EA0; /* jg: greater (signed >) */

loc_00586E7C: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00586E91; /* jge: greater or equal (signed >=) */

loc_00586E8B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00586E91: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(ebp + 8); /* cvtss2si */
    MEM32(edi) = eax;
    goto loc_00586EA3;

loc_00586EA0: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00586EA3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00586EA6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00586EAB
 * Original: 0x00586EAB - 0x00586F9C (241 bytes, 94 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00586EAB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00586EAB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00586EBC; /* jge: greater or equal (signed >=) */

loc_00586EB8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00586EC8;

loc_00586EBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00586EC6; /* jle: less or equal (signed <=) */

loc_00586EC1: ;
    PUSH32(esp, 2);
    POP32(esp, ebx);
    goto loc_00586EC8;

loc_00586EC6: ;
    ebx = eax;

loc_00586EC8: ;
    SET_LO8(ecx, MEM8(esi + 0xC));
    eax = SX8(LO8(ecx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00586F75; /* je: equal / zero */

loc_00586ED6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x10));
    if (CMP_NE(_fa, _fb)) goto loc_00586EF9; /* jne: not equal / not zero */

loc_00586EDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00586F6C; /* jl: less (signed <) */

loc_00586EE5: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8DE1D0); PUSH32(esp, 0x00586EF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00586EE9u); } /* indirect call */
    }

loc_00586EF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00586EF6u); RECOMP_ABI_CALL(0x00586DADu, sub_00586DAD); /* call 0x00586DAD */

loc_00586EF6: ;
    POP32(esp, ecx);
    goto loc_00586F6B;

loc_00586EF9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00586F5A; /* jne: not equal / not zero */

loc_00586EFE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00586F0F; /* jl: less (signed <) */

loc_00586F02: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8DE1F0); PUSH32(esp, 0x00586F0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00586F06u); } /* indirect call */
    }

loc_00586F0D: ;
    goto loc_00586F6B;

loc_00586F0F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00586F1A; /* jne: not equal / not zero */

loc_00586F14: ;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xD), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00586F6C; /* je: equal / zero */

loc_00586F1A: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00586F2B; /* jl: less (signed <) */

loc_00586F26: ;
    eax = edx + -1;
    goto loc_00586F31;

loc_00586F2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00586F31; /* jge: greater or equal (signed >=) */

loc_00586F2F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00586F31: ;
    eax = eax + eax * 2;
    eax = ecx + eax * 4 + 4;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + 0x10) = LO8(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = SX8(LO8(ecx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx * 4 + 0x8DE1C0); PUSH32(esp, 0x00586F49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00586F42u); } /* indirect call */
    }

loc_00586F49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00586F6C; /* jge: greater or equal (signed >=) */

loc_00586F52: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00586F58u); RECOMP_ABI_CALL(0x00586DADu, sub_00586DAD); /* call 0x00586DAD */

loc_00586F58: ;
    goto loc_00586F6B;

loc_00586F5A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00586F6C; /* jl: less (signed <) */

loc_00586F5E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    eax = SX8(LO8(eax));
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8DE1E0); PUSH32(esp, 0x00586F6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00586F64u); } /* indirect call */
    }

loc_00586F6B: ;
    POP32(esp, ecx);

loc_00586F6C: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    MEM8(esi + 0xD) = LO8(eax);
    MEM8(esi + 0xC) = LO8(ebx);

loc_00586F75: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00586F8F; /* jne: not equal / not zero */

loc_00586F7A: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00586F8F; /* jl: less (signed <) */

loc_00586F81: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8DE200); PUSH32(esp, 0x00586F8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00586F85u); } /* indirect call */
    }

loc_00586F8C: ;
    POP32(esp, ecx);
    ebx = eax;

loc_00586F8F: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00586F97; /* jge: greater or equal (signed >=) */

loc_00586F95: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00586F97: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00586F9C
 * Original: 0x00586F9C - 0x005870A3 (263 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00586F9C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00586F9C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00586FB3; /* jg: greater (signed >) */

loc_00586FAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005870A0;

loc_00586FB3: ;
    xmm1 = XMM_SCALAR(MEMF(0x919B48)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2.f[0] = (float)(int32_t)MEM32(esi + 0xC); /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ebp + -8) = xmm1.f[0]; /* movss */
    MEMF(ebp + -4) = xmm2.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00586FFB; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_00586FE4: ;
    xmm4 = xmm3; /* movaps */

loc_00586FE7: ;
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = xmm3; /* movaps */
    if ((_fca >= _fcb)) goto loc_00586FE7; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00586FF6: ;
    MEMF(esi + 4) = xmm4.f[0]; /* movss */

loc_00586FFB: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587037; /* jne: not equal / not zero */

loc_00587001: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x87772C); /* mulss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp + 8); /* cvtss2si */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058701Eu); RECOMP_ABI_CALL(0x0058C69Eu, sub_0058C69E); /* call 0x0058C69E */

loc_0058701E: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x863008); /* mulss */
    POP32(esp, ecx);
    goto loc_00587088;

loc_00587037: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587053; /* jne: not equal / not zero */

loc_0058703B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA820); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0058704E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA820)) */

loc_00587049: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00587088;

loc_0058704E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_00587088;

loc_00587053: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587062; /* jne: not equal / not zero */

loc_00587057: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    goto loc_00587088;

loc_00587062: ;
    xmm3 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    _fca = xmm3.f[0]; _fcb = MEMF(esi + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00587077; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(esi + 4)) */

loc_00587070: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    goto loc_0058707C;

loc_00587077: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */

loc_0058707C: ;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */

loc_00587088: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp + 8); /* cvtss2si */

loc_005870A0: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005870A3
 * Original: 0x005870A3 - 0x00587142 (159 bytes, 48 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005870A3(void)
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

loc_005870A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x18);
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    _fca = xmm1.f[0]; _fcb = MEMF(ecx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_005870D7; /* jnp: not parity */

loc_005870B9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005870C6; /* jne: not equal / not zero */

loc_005870BE: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00587104; /* je: equal / zero */

loc_005870C6: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_005870DB; /* jg: greater (signed >) */

loc_005870D3: ;
    MEMF(ecx) = xmm1.f[0]; /* movss */

loc_005870D7: ;
    eax = edx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_005870DB: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x919B48); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x877724); /* mulss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */

loc_00587104: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x14); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00587129; /* jb: below (unsigned <) (xmm2.f[0] vs MEMF(0x7AA840)) */

loc_00587124: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    goto loc_0058712C;

loc_00587129: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */

loc_0058712C: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00587132; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0058712E: ;
    MEMF(ecx) = xmm1.f[0]; /* movss */

loc_00587132: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp + 8); /* cvtss2si */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00587142
 * Original: 0x00587142 - 0x00587169 (39 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587142(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587142: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058715E; /* jle: less or equal (signed <=) */

loc_00587152: ;
    edx = ecx + 0xC;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00587156: ;
    _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00587156; /* jne: not equal / not zero */

loc_0058715E: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_00587168; /* jle: less or equal (signed <=) */

loc_00587166: ;
    eax = ecx;

loc_00587168: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00587169
 * Original: 0x00587169 - 0x0058717C (19 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587169(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587169: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058717B; /* jge: greater or equal (signed >=) */

loc_00587179: ;
    eax = ecx;

loc_0058717B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0058717C
 * Original: 0x0058717C - 0x00587190 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058717C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058717C: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 4));
    ecx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058718F; /* jle: less or equal (signed <=) */

loc_0058718D: ;
    eax = ecx;

loc_0058718F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00587190
 * Original: 0x00587190 - 0x0058719D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587190(void)
{

loc_00587190: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x19));
    MEM8(ecx + 0x19) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0058719D
 * Original: 0x0058719D - 0x005871AB (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058719D(void)
{

loc_0058719D: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx + 0x18) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_005871AB
 * Original: 0x005871AB - 0x005871B7 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005871AB(void)
{

loc_005871AB: ;
    eax = MEM32(esp + 8);
    MEM32(eax + 0x10) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005871B7
 * Original: 0x005871B7 - 0x005871DD (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005871B7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005871B7: ;
    eax = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x10), LO8(edx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005871DC; /* jbe: below or equal (unsigned <=) */

loc_005871C2: ;
    ecx = eax + 0x14;
    PUSH32(esp, esi);

loc_005871C6: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi + edx * 4);
    MEM32(ecx) = esi;
    esi = ZX8(MEM8(eax + 0x10));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005871C6; /* jl: less (signed <) */

loc_005871DB: ;
    POP32(esp, esi);

loc_005871DC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005871DD
 * Original: 0x005871DD - 0x00587207 (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005871DD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005871DD: ;
    eax = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x18), LO8(edx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00587202; /* jbe: below or equal (unsigned <=) */

loc_005871E8: ;
    ecx = eax + 0x1C;
    PUSH32(esp, esi);

loc_005871EC: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi + edx * 4);
    MEM32(ecx) = esi;
    esi = ZX8(MEM8(eax + 0x18));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005871EC; /* jl: less (signed <) */

loc_00587201: ;
    POP32(esp, esi);

loc_00587202: ;
    MEM8(eax + 0x19) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00587207
 * Original: 0x00587207 - 0x0058731C (277 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587207(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00587207: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058720Du); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058720D: ;
    esi = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(esi + 0x1C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x1E)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x1E) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058722C; /* jge: greater or equal (signed >=) */

loc_0058721B: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x30));
    PUSH32(esp, 0x00587224u); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_00587224: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00587232; /* jne: not equal / not zero */

loc_0058722B: ;
    POP32(esp, edi);

loc_0058722C: ;
    POP32(esp, esi);
    goto loc_00587317;

loc_00587232: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x30));
    PUSH32(esp, MEM32(esi + 0x2C));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0058723Fu); RECOMP_ABI_CALL(0x00585DDEu, sub_00585DDE); /* call 0x00585DDE */

loc_0058723F: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x38;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    PUSH32(esp, 0x0058725Cu); RECOMP_ABI_CALL(0x00585FBBu, sub_00585FBB); /* call 0x00585FBB */

loc_0058725C: ;
    eax = MEM32(esi + 0x28);
    ebx = edi + 0x18;
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = 0x919B14;
    PUSH32(esp, 0x00587276u); RECOMP_ABI_CALL(0x00585FBBu, sub_00585FBB); /* call 0x00585FBB */

loc_00587276: ;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x25), 0 (8-bit) */
    edi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00587295; /* je: equal / zero */

loc_0058727E: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    MEM32(edi + 8) = 0x5871AB;
    MEM32(edi + 0xC) = edi;
    PUSH32(esp, 0x00587292u); RECOMP_ABI_CALL(0x005967E1u, sub_005967E1); /* call 0x005967E1 */

loc_00587292: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00587295: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0x20)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x20), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005872BF; /* jbe: below or equal (unsigned <=) */

loc_0058729D: ;
    eax = edi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(edi + 0x10) = 0x58719D;
    MEM32(edi + 0x14) = edi;
    PUSH32(esp, 0x005872B1u); RECOMP_ABI_CALL(0x00596ED4u, sub_00596ED4); /* call 0x00596ED4 */

loc_005872B1: ;
    eax = ZX16(MEM16(esi + 0x20));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058729D; /* jl: less (signed <) */

loc_005872BF: ;
    _fa = (uint32_t)(MEM8(esi + 0x26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x26), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005872E1; /* je: equal / zero */

loc_005872C5: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    MEM32(edi + 8) = 0x5871B7;
    MEM32(edi + 0xC) = edi;
    PUSH32(esp, 0x005872D9u); RECOMP_ABI_CALL(0x00596815u, sub_00596815); /* call 0x00596815 */

loc_005872D9: ;
    eax = ZX8(MEM8(edi + 0x10));
    edi = edi + eax * 4 + 0x14;

loc_005872E1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0x22)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x22), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00587310; /* jbe: below or equal (unsigned <=) */

loc_005872E9: ;
    eax = edi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(edi + 0x10) = 0x5871DD;
    MEM32(edi + 0x14) = edi;
    PUSH32(esp, 0x005872FDu); RECOMP_ABI_CALL(0x00596CDDu, sub_00596CDD); /* call 0x00596CDD */

loc_005872FD: ;
    eax = ZX8(MEM8(edi + 0x18));
    edi = edi + eax * 4 + 0x1C;
    eax = ZX16(MEM16(esi + 0x22));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_005872E9; /* jl: less (signed <) */

loc_00587310: ;
    MEM16(esi + 0x1C) = MEM16(esi + 0x1C) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x1C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);

loc_00587317: ;
    g_seh_ebp = ebp; sub_00587904(); return; /* tail jmp 0x00587904 */

}

/**
 * sub_0058731C
 * Original: 0x0058731C - 0x00587412 (246 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058731C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058731C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(0x919B40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058732B; /* je: equal / zero */

loc_00587329: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0058732Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00587329u); } /* indirect call */
    }

loc_0058732B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587332u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_00587332: ;
    edi = MEM32(0x919B18);
    _fb = (uint32_t)(0xFFFFFFB0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFB0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0058734D; /* je: equal / zero */

loc_0058733D: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x3C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058735B; /* je: equal / zero */

loc_00587345: ;
    edi = MEM32(edi + 0x50);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0058733D; /* jne: not equal / not zero */

loc_0058734D: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, esi);

loc_00587350: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587355u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_00587355: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0058735B: ;
    esi = MEM32(edi + 0x1C);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi + 0xA)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xA), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005873B8; /* jbe: below or equal (unsigned <=) */

loc_0058736B: ;
    PUSH32(esp, ebx);

loc_0058736C: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    eax = esi + 4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587379u); RECOMP_ABI_CALL(0x00596DEBu, sub_00596DEB); /* call 0x00596DEB */

loc_00587379: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058739D; /* je: equal / zero */

loc_00587382: ;
    eax = MEM32(esi + 0x34);
    ebx = MEM32(ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(eax + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587396u); RECOMP_ABI_CALL(0x00586058u, sub_00586058); /* call 0x00586058 */

loc_00587396: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ecx);
    ecx = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00587382; /* jne: not equal / not zero */

loc_0058739D: ;
    eax = ZX8(MEM8(esi + 0x27));
    ecx = ZX8(MEM8(esi + 0x24));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + eax * 4 + 0x3C;
    eax = ZX16(MEM16(edi + 0xA));
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058736C; /* jl: less (signed <) */

loc_005873B7: ;
    POP32(esp, ebx);

loc_005873B8: ;
    eax = MEM32(edi + 0x48);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005873C8; /* je: equal / zero */

loc_005873C1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005873C7u); RECOMP_ABI_CALL(0x0058A8B2u, sub_0058A8B2); /* call 0x0058A8B2 */

loc_005873C7: ;
    POP32(esp, ecx);

loc_005873C8: ;
    eax = MEM32(edi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005873D6; /* jl: less (signed <) */

loc_005873CF: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005873D5u); RECOMP_ABI_CALL(0x0058A16Eu, sub_0058A16E); /* call 0x0058A16E */

loc_005873D5: ;
    POP32(esp, ecx);

loc_005873D6: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005873E4; /* jl: less (signed <) */

loc_005873DD: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005873E3u); RECOMP_ABI_CALL(0x0058A16Eu, sub_0058A16E); /* call 0x0058A16E */

loc_005873E3: ;
    POP32(esp, ecx);

loc_005873E4: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = 0x919B18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005873F2u); RECOMP_ABI_CALL(0x00585FD5u, sub_00585FD5); /* call 0x00585FD5 */

loc_005873F2: ;
    _fa = (uint32_t)(MEM32(0x919B18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x919B18), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587350; /* jne: not equal / not zero */

loc_005873FE: ;
    PUSH32(esp, 0x919B20);
    ecx = 0x919B50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058740Du); RECOMP_ABI_CALL(0x00585FD5u, sub_00585FD5); /* call 0x00585FD5 */

loc_0058740D: ;
    goto loc_00587350;

}

/**
 * sub_00587412
 * Original: 0x00587412 - 0x00587481 (111 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587412(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00587412: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00587418u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_00587418: ;
    edi = MEM32(0x919B18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00587478; /* je: equal / zero */

loc_00587422: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_00587425: ;
    esi = MEM32(edi + -52);
    _fb = (uint32_t)(0xFFFFFFB0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFB0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi + 0xA)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xA), LO16(ebp) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058746E; /* jbe: below or equal (unsigned <=) */

loc_00587435: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00587457; /* je: equal / zero */

loc_0058743C: ;
    eax = MEM32(esi + 0x34);
    ebx = MEM32(ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(eax + 0xC) = 1;
    PUSH32(esp, 0x00587450u); RECOMP_ABI_CALL(0x00586058u, sub_00586058); /* call 0x00586058 */

loc_00587450: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ecx);
    ecx = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0058743C; /* jne: not equal / not zero */

loc_00587457: ;
    eax = ZX8(MEM8(esi + 0x27));
    ecx = ZX8(MEM8(esi + 0x24));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi + eax * 4 + 0x3C;
    eax = ZX16(MEM16(edi + 0xA));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00587435; /* jl: less (signed <) */

loc_0058746E: ;
    edi = MEM32(edi + 0x50);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587425; /* jne: not equal / not zero */

loc_00587475: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00587478: ;
    PUSH32(esp, 0x0058747Du); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058747D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00587481
 * Original: 0x00587481 - 0x00587499 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587481(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587481: ;
    MEM32(0x919B44) = MEM32(0x919B44) + 1;
    _fa = (uint32_t)(MEM32(0x919B44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00587493; /* jns: not sign (positive) */

loc_00587489: ;
    MEM32(0x919B44) = 1;

loc_00587493: ;
    eax = MEM32(0x919B44);
    esp += 4; return; /* ret */

}

/**
 * sub_00587499
 * Original: 0x00587499 - 0x005874F4 (91 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00587499(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587499: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005874F1; /* je: equal / zero */

loc_005874A5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);

loc_005874AA: ;
    eax = ZX8(MEM8(esi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8DE210); PUSH32(esp, 0x005874B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005874AEu); } /* indirect call */
    }

loc_005874B5: ;
    MEM32(ebp + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), LO8(eax) (8-bit) */
    POP32(esp, ecx);
    ecx = esi + 4;
    if (CMP_BE(_fa, _fb)) goto loc_005874E5; /* jbe: below or equal (unsigned <=) */

loc_005874C3: ;
    edx = MEM32(ecx + 4);
    ebx = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005874D4; /* jne: not equal / not zero */

loc_005874CF: ;
    ebx = MEM32(ebp + 8);
    goto loc_005874D7;

loc_005874D4: ;
    ebx = MEM32(ebx + edi);

loc_005874D7: ;
    MEM32(edx) = ebx;
    edx = ZX8(MEM8(esi + 1));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005874C3; /* jl: less (signed <) */

loc_005874E5: ;
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx + 4;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005874AA; /* jne: not equal / not zero */

loc_005874EF: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_005874F1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_005874F4
 * Original: 0x005874F4 - 0x00587512 (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005874F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005874F4: ;
    PUSH32(esp, 0x005874F9u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_005874F9: ;
    goto loc_00587504;

loc_005874FB: ;
    PUSH32(esp, MEM32(eax + -20));
    PUSH32(esp, 0x00587503u); RECOMP_ABI_CALL(0x0058731Cu, sub_0058731C); /* call 0x0058731C */

loc_00587503: ;
    POP32(esp, ecx);

loc_00587504: ;
    eax = MEM32(0x919B18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005874FB; /* jne: not equal / not zero */

loc_0058750D: ;
    g_seh_ebp = ebp; sub_00587904(); return; /* tail jmp 0x00587904 */

}

/**
 * sub_00587512
 * Original: 0x00587512 - 0x005876D4 (450 bytes, 162 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00587512(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587512: ;
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
    MEM32(0x919ED4) = 0x5874F4;
    MEM32(0x919ED8) = 0x587412;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587534u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_00587534: ;
    edi = MEM32(ebp + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x919B18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x919B18), esi (32-bit) */
    eax = edi + 0x50;
    PUSH32(esp, eax);
    ecx = 0x919B18;
    MEM8(ebp + -1) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587551u); RECOMP_ABI_CALL(0x00585FBBu, sub_00585FBB); /* call 0x00585FBB */

loc_00587551: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00587577; /* jle: less or equal (signed <=) */

loc_00587558: ;
    edx = ecx + 4;

loc_0058755B: ;
    eax = MEM32(edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax);
    ebx = MEM32(ebx * 4 + 0x8DE210);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058755B; /* jl: less (signed <) */

loc_00587577: ;
    _fb = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x34);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    MEM32(ebp + 0xC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0058759B; /* jle: less or equal (signed <=) */

loc_0058758A: ;
    edx = eax + 4;

loc_0058758D: ;
    ecx = MEM32(edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + edi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058758D; /* jl: less (signed <) */

loc_0058759B: ;
    esi = MEM32(edi + 0x38);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = ebx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005875FD; /* jle: less or equal (signed <=) */

loc_005875A8: ;
    ebx = esi + 4;

loc_005875AB: ;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(ecx, MEM16(eax));
    MEM16(ebp + -8) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebp + -6) = LO16(ecx);
    ecx = MEM32(ebx);
    MEM32(ebp + -12) = eax;
    SET_LO8(eax, MEM8(ebx + 8));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005875DC; /* jne: not equal / not zero */

loc_005875D1: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005875DAu); RECOMP_ABI_CALL(0x00596C49u, sub_00596C49); /* call 0x00596C49 */

loc_005875DA: ;
    goto loc_005875F0;

loc_005875DC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    eax = ebp + -12;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_005875EB; /* jne: not equal / not zero */

loc_005875E4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005875E9u); RECOMP_ABI_CALL(0x00596C1Eu, sub_00596C1E); /* call 0x00596C1E */

loc_005875E9: ;
    goto loc_005875F0;

loc_005875EB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005875F0u); RECOMP_ABI_CALL(0x00596BF3u, sub_00596BF3); /* call 0x00596BF3 */

loc_005875F0: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005875AB; /* jl: less (signed <) */

loc_005875FD: ;
    esi = MEM32(edi + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi + 0xA)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xA), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058765A; /* jbe: below or equal (unsigned <=) */

loc_0058760A: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x28) = MEM32(esi + 0x28) + edi;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) + edi;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0xC;
    PUSH32(esp, eax);
    eax = esi + 4;
    PUSH32(esp, eax);
    MEM32(esi + 0x14) = 0x587207;
    MEM32(esi + 0x18) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587627u); RECOMP_ABI_CALL(0x00596DC9u, sub_00596DC9); /* call 0x00596DC9 */

loc_00587627: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x24), LO8(eax) (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_BE(_fa, _fb)) goto loc_00587643; /* jbe: below or equal (unsigned <=) */

loc_00587630: ;
    ecx = MEM32(esi + eax * 4 + 0x3C);
    edx = MEM32(esi + 0x2C);
    MEM32(ecx + edx) = edi;
    ecx = ZX8(MEM8(esi + 0x24));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00587630; /* jl: less (signed <) */

loc_00587643: ;
    eax = ZX8(MEM8(esi + 0x27));
    ecx = ZX8(MEM8(esi + 0x24));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi + eax * 4 + 0x3C;
    eax = ZX16(MEM16(edi + 0xA));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058760A; /* jl: less (signed <) */

loc_0058765A: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00587693; /* je: equal / zero */

loc_00587661: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00587693; /* je: equal / zero */

loc_00587666: ;
    eax = esi;
    ecx = eax + 1;

loc_0058766B: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058766B; /* jne: not equal / not zero */

loc_00587672: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058767Bu); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_0058767B: ;
    POP32(esp, ecx);
    MEM32(edi + 0x48) = eax;
    edx = esi;

loc_00587681: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00587681; /* jne: not equal / not zero */

loc_0058768B: ;
    eax = MEM32(ebp + 0x14);
    MEM32(edi + 0x4C) = eax;
    goto loc_00587697;

loc_00587693: ;
    MEM32(edi + 0x48) = MEM32(edi + 0x48) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00587697: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_005876CD; /* je: equal / zero */

loc_005876A0: ;
    eax = MEM32(0x919B50);
    MEM32(0x919B24) = MEM32(0x919B24) & 0;
    _fa = (uint32_t)(MEM32(0x919B24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x919B28) = 0x58C6EF;
    MEM32(0x919B20) = eax;
    ecx = 0x919B20;
    if (CMP_EQ(_fa, _fb)) goto loc_005876C7; /* je: equal / zero */

loc_005876C4: ;
    MEM32(eax + 4) = ecx;

loc_005876C7: ;
    MEM32(0x919B50) = ecx;

loc_005876CD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005876D2u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_005876D2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005876D4
 * Original: 0x005876D4 - 0x0058771F (75 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005876D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005876D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005876E9u); RECOMP_ABI_CALL(0x0058AFF8u, sub_0058AFF8); /* call 0x0058AFF8 */

loc_005876E9: ;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + -8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058771D; /* jge: greater or equal (signed >=) */

loc_005876F8: ;
    PUSH32(esp, esi);
    esi = ecx + ecx * 8;
    PUSH32(esp, edi);
    edi = MEM32(0x919EF4);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi + edi + 0x6D;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0058770C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00587712; /* je: equal / zero */

loc_00587711: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00587712: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0058770C; /* jne: not equal / not zero */

loc_0058771B: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0058771D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058771F
 * Original: 0x0058771F - 0x00587753 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058771F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058771F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058772Du); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058772D: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00587734u); RECOMP_ABI_CALL(0x005876D4u, sub_005876D4); /* call 0x005876D4 */

loc_00587734: ;
    PUSH32(esp, 0x400);
    MEM16(esi) = LO16(eax);
    edi = ZX16(LO16(eax));
    PUSH32(esp, 0x00587744u); RECOMP_ABI_CALL(0x005876D4u, sub_005876D4); /* call 0x005876D4 */

loc_00587744: ;
    MEM16(esi + 6) = LO16(eax);
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00587753
 * Original: 0x00587753 - 0x00587780 (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587753(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587753: ;
    eax = MEM32(0x919B4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x919B54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x919B54) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058777F; /* je: equal / zero */

loc_00587760: ;
    MEM32(0x919B54) = eax;
    eax = MEM32(0x919B50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058777F; /* je: equal / zero */

loc_0058776E: ;
    PUSH32(esp, esi);

loc_0058776F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0xC));
    esi = MEM32(eax);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00587777u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00587774u); } /* indirect call */
    }

loc_00587777: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0058776F; /* jne: not equal / not zero */

loc_0058777E: ;
    POP32(esp, esi);

loc_0058777F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00587780
 * Original: 0x00587780 - 0x005878EC (364 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587780(void)
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

loc_00587780: ;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(0x919E90)) + (uint64_t)(1)) >> 32) & 1);
    MEM32(0x919E90) = MEM32(0x919E90) + 1;
    _fa = (uint32_t)(MEM32(0x919E90)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00587790u); RECOMP_ABI_CALL(0x0058BC84u, sub_0058BC84); /* call 0x0058BC84 */

loc_00587790: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x919E8A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919E8A), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_005877AF; /* jle: less or equal (signed <=) */

loc_0058779C: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi * 4 + 0x919E94); PUSH32(esp, 0x005877A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0058779Cu); } /* indirect call */
    }

loc_005877A3: ;
    eax = (uint32_t)(int32_t)SMEM8(0x919E8A);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0058779C; /* jl: less (signed <) */

loc_005877AF: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x919E8C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x919E8C), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_005878E7; /* jle: less or equal (signed <=) */

loc_005877BE: ;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, edi);

loc_005877C3: ;
    eax = MEM32(0x919EF4);
    ecx = MEM32(esp + 0x10);
    esi = ecx + eax;
    _fa = (uint32_t)(MEM8(esi + 0x6D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x6D), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005878CE; /* jne: not equal / not zero */

loc_005877D9: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00587808; /* jl: less (signed <) */

loc_005877DD: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00587808; /* je: equal / zero */

loc_005877E5: ;
    MEM8(esi + 0x6C) = MEM8(esi + 0x6C) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(esi + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x6A)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x6A) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_005877F3; /* jb: below (unsigned <) */

loc_005877F0: ;
    MEM8(esi + 0x6C) = LO8(ebx);

loc_005877F3: ;
    PUSH32(esp, ebp);
    MEM16(esi + 0x8A) = LO16(ebx);
    PUSH32(esp, 0x00587800u); RECOMP_ABI_CALL(0x0058C970u, sub_0058C970); /* call 0x0058C970 */

loc_00587800: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00587806u); RECOMP_ABI_CALL(0x0058B6D5u, sub_0058B6D5); /* call 0x0058B6D5 */

loc_00587806: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00587808: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x7C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0058781E; /* je: equal / zero */

loc_0058780F: ;
    MEM8(esi + 0x6B) = MEM8(esi + 0x6B) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x6B)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(esi + 0x6B));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x69)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x69) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0058781E; /* jb: below (unsigned <) */

loc_0058781B: ;
    MEM8(esi + 0x6B) = LO8(ebx);

loc_0058781E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00587868; /* jnp: not parity */

loc_0058782F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x30); /* addss */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x30); /* comiss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00587851; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0x30)) */

loc_00587847: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    goto loc_00587855;

loc_00587851: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x34); /* comiss */

loc_00587855: ;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00587862; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x34)) */

loc_00587857: ;
    eax = MEM32(esi + 0x34);
    MEM32(esi + 0x38) = eax;
    MEMF(esi + 0x30) = xmm1.f[0]; /* movss */

loc_00587862: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x38); /* comiss */
    if ((_fca > _fcb)) goto loc_0058788A; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(esi + 0x38)) */

loc_00587868: ;
    MEM32(esi + 0x44) = MEM32(esi + 0x44) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(esi + 0x44);
    if (CMP_EQ(_fa, _fb)) goto loc_0058787B; /* je: equal / zero */

loc_00587875: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x40)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esi + 0x40) = MEM32(esi + 0x40) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0058787B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005878BC; /* jne: not equal / not zero */

loc_0058787F: ;
    MEM8(esi + 0x5D) = MEM8(esi + 0x5D) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x5D)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(esi + 0x5D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x5C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x5C) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00587893; /* jl: less (signed <) */

loc_0058788A: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x00587891u); RECOMP_ABI_CALL(0x0058C175u, sub_0058C175); /* call 0x0058C175 */

loc_00587891: ;
    goto loc_005878CD;

loc_00587893: ;
    ecx = MEM32(esi + 0x70);
    eax = SX8(LO8(eax));
    ecx = ecx + eax * 8;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x44) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_005878AC; /* jge: greater or equal (signed >=) */

loc_005878A5: ;
    MEM32(esi + 0x44) = 0x7FFFFFFF;

loc_005878AC: ;
    eax = MEM32(ecx + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x40)));
    eax = eax - MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x44)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x44))); }
    MEM32(esi + 0x3C) = eax;

loc_005878BC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_005878CE; /* je: equal / zero */

loc_005878C0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x005878C6u); RECOMP_ABI_CALL(0x0058C847u, sub_0058C847); /* call 0x0058C847 */

loc_005878C6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x005878CCu); RECOMP_ABI_CALL(0x0058BD73u, sub_0058BD73); /* call 0x0058BD73 */

loc_005878CC: ;
    POP32(esp, ecx);

loc_005878CD: ;
    POP32(esp, ecx);

loc_005878CE: ;
    eax = (uint32_t)(int32_t)SMEM16(0x919E8C);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x10)) + (uint64_t)(0x90)) >> 32) & 1);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 0x90;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_005877C3; /* jl: less (signed <) */

loc_005878E6: ;
    POP32(esp, edi);

loc_005878E7: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005878EC
 * Original: 0x005878EC - 0x005878F1 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005878EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005878EC: ;
    g_seh_ebp = ebp; sub_0058CA2E(); return; /* tail jmp 0x0058CA2E */

}

/**
 * sub_005878F1
 * Original: 0x005878F1 - 0x005878F6 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005878F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005878F1: ;
    g_seh_ebp = ebp; sub_0058CA3C(); return; /* tail jmp 0x0058CA3C */

}

/**
 * sub_005878F6
 * Original: 0x005878F6 - 0x00587904 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005878F6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005878F6: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8DE2B0); PUSH32(esp, 0x005878FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005878F6u); } /* indirect call */
    }

loc_005878FC: ;
    _fb = (uint32_t)(1) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(0x919E89) = MEM8(0x919E89) + 1;
    _fa = (uint32_t)(MEM8(0x919E89)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00587904
 * Original: 0x00587904 - 0x00587911 (13 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587904(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00587904: ;
    _fb = (uint32_t)(1) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    MEM8(0x919E89) = MEM8(0x919E89) - 1;
    _fa = (uint32_t)(MEM8(0x919E89)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x8DE2B4)); return; /* indirect tail jmp */

}

/**
 * sub_00587938
 * Original: 0x00587938 - 0x00587994 (92 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587938(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587938: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058793Eu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058793E: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x00587945u); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_00587945: ;
    esi = eax;
    PUSH32(esp, 0x0058794Cu); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058794C: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00587954u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_00587954: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587960; /* jne: not equal / not zero */

loc_0058795B: ;
    PUSH32(esp, 0xFFFFFFFEu);
    POP32(esp, eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00587960: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    MEM32(esi) = 0x46584253;
    edi = esi + 8;
    eax = 0x3F800000;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x24) = 1;
    MEM32(eax) = esi;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00587994
 * Original: 0x00587994 - 0x005879BA (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587994(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587994: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46584253) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x46584253 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005879B6; /* jne: not equal / not zero */

loc_0058799F: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005879AF; /* jne: not equal / not zero */

loc_005879A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005879ABu); RECOMP_ABI_CALL(0x0058D05Bu, sub_0058D05B); /* call 0x0058D05B */

loc_005879AB: ;
    POP32(esp, ecx);
    MEM32(esi + 0x28) = eax;

loc_005879AF: ;
    MEM32(esi + 0x24) = 1;

loc_005879B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005879BA
 * Original: 0x005879BA - 0x00587A01 (71 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005879BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_005879BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    edx = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_005879D6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_005879D1: ;
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */

loc_005879D6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_005879E4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 8)) */

loc_005879DF: ;
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */

loc_005879E4: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = edx + 8;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005879F8u); RECOMP_ABI_CALL(0x0058BFC4u, sub_0058BFC4); /* call 0x0058BFC4 */

loc_005879F8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00587A01
 * Original: 0x00587A01 - 0x00587A39 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587A01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00587A01: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00587A37; /* je: equal / zero */

loc_00587A08: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46584253) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x46584253 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587A37; /* jne: not equal / not zero */

loc_00587A10: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587A1B; /* jne: not equal / not zero */

loc_00587A16: ;
    PUSH32(esp, 0x00587A1Bu); RECOMP_ABI_CALL(0x00587994u, sub_00587994); /* call 0x00587994 */

loc_00587A1B: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00587A23u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_00587A23: ;
    PUSH32(esp, 0x00587A28u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_00587A28: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00587A2Eu); RECOMP_ABI_CALL(0x0058A8B2u, sub_0058A8B2); /* call 0x0058A8B2 */

loc_00587A2E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00587904(); return; /* tail jmp 0x00587904 */

loc_00587A37: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00587A39
 * Original: 0x00587A39 - 0x00587A55 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587A39(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587A39: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00587A41u); RECOMP_ABI_CALL(0x00587A01u, sub_00587A01); /* call 0x00587A01 */

loc_00587A41: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00587A4F; /* je: equal / zero */

loc_00587A48: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00587A4Eu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00587A4E: ;
    POP32(esp, ecx);

loc_00587A4F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00587A55
 * Original: 0x00587A55 - 0x00587A82 (45 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587A55(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587A55: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587A63; /* jne: not equal / not zero */

loc_00587A5E: ;
    PUSH32(esp, 0x00587A63u); RECOMP_ABI_CALL(0x00587994u, sub_00587994); /* call 0x00587994 */

loc_00587A63: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00587A6Du); RECOMP_ABI_CALL(0x0058D003u, sub_0058D003); /* call 0x0058D003 */

loc_00587A6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00587A78; /* je: equal / zero */

loc_00587A73: ;
    PUSH32(esp, 0xFFFFFFF7u);
    POP32(esp, eax);
    goto loc_00587A7E;

loc_00587A78: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00587A7E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00587A82
 * Original: 0x00587A82 - 0x00587AAF (45 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587A82(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587A82: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587A90; /* jne: not equal / not zero */

loc_00587A8B: ;
    PUSH32(esp, 0x00587A90u); RECOMP_ABI_CALL(0x00587994u, sub_00587994); /* call 0x00587994 */

loc_00587A90: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00587A9Au); RECOMP_ABI_CALL(0x0058CEABu, sub_0058CEAB); /* call 0x0058CEAB */

loc_00587A9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00587AA5; /* je: equal / zero */

loc_00587AA0: ;
    PUSH32(esp, 0xFFFFFFF7u);
    POP32(esp, eax);
    goto loc_00587AAB;

loc_00587AA5: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00587AAB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00587AAF
 * Original: 0x00587AAF - 0x00587ADC (45 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587AAF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587AAF: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587ABD; /* jne: not equal / not zero */

loc_00587AB8: ;
    PUSH32(esp, 0x00587ABDu); RECOMP_ABI_CALL(0x00587994u, sub_00587994); /* call 0x00587994 */

loc_00587ABD: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00587AC7u); RECOMP_ABI_CALL(0x0058D003u, sub_0058D003); /* call 0x0058D003 */

loc_00587AC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00587AD2; /* je: equal / zero */

loc_00587ACD: ;
    PUSH32(esp, 0xFFFFFFF7u);
    POP32(esp, eax);
    goto loc_00587AD8;

loc_00587AD2: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00587AD8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00587ADC
 * Original: 0x00587ADC - 0x00587B03 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587ADC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587ADC: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587AEA; /* jne: not equal / not zero */

loc_00587AE5: ;
    PUSH32(esp, 0x00587AEAu); RECOMP_ABI_CALL(0x00587994u, sub_00587994); /* call 0x00587994 */

loc_00587AEA: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00587AF4u); RECOMP_ABI_CALL(0x0058D02Fu, sub_0058D02F); /* call 0x0058D02F */

loc_00587AF4: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x28) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00587B03
 * Original: 0x00587B03 - 0x00587B0B (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00587B03(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587B03: ;
    PUSH32(esp, 0x00587B08u); RECOMP_ABI_CALL(0x00587A01u, sub_00587A01); /* call 0x00587A01 */

loc_00587B08: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00587B0B
 * Original: 0x00587B0B - 0x00587B31 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587B0B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587B0B: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8DE314);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    eax = eax + eax * 4;
    esi = ecx + eax * 2;
    esi = esi * 4 + 0x214;
    PUSH32(esp, 0x00587B2Cu); RECOMP_ABI_CALL(0x0058D15Bu, sub_0058D15B); /* call 0x0058D15B */

loc_00587B2C: ;
    POP32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00587B31
 * Original: 0x00587B31 - 0x00587B58 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587B31(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587B31: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00587B41u); RECOMP_ABI_CALL(0x00587B0Bu, sub_00587B0B); /* call 0x00587B0B */

loc_00587B41: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00587B50u); RECOMP_ABI_CALL(0x0059C5CFu, sub_0059C5CF); /* call 0x0059C5CF */

loc_00587B50: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00587B58
 * Original: 0x00587B58 - 0x00587C2A (210 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587B58(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00587B58: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x20); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00587B7F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esi + 0x20)) */

loc_00587B75: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    goto loc_00587B83;

loc_00587B7F: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x1C); /* comiss */

loc_00587B83: ;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00587B90; /* jb: below (unsigned <) (xmm2.f[0] vs xmm0.f[0]) */

loc_00587B85: ;
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 8) = eax;
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */

loc_00587B90: ;
    eax = ZX8(MEM8(esi + 5));
    eax = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = eax;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(eax + -312));
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x13C));
    eax = eax - 0x13C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00587BB0u); RECOMP_ABI_CALL(0x0058C60Au, sub_0058C60A); /* call 0x0058C60A */

loc_00587BB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00587C08; /* jl: less (signed <) */

loc_00587BB5: ;
    edx = MEM32(0x919EF4);
    eax = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(eax + 0x23));
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esi + 5));
    ecx = ecx + ecx * 2;
    ecx = (uint32_t)(int32_t)SMEM8(edi + ecx * 2 + 0x877F1E);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF80u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFF80u (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00587C08; /* je: equal / zero */

loc_00587BDD: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 4);
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    eax = ecx + ecx * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8DE310); /* mulss */
    PUSH32(esp, ecx);
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00587C07u); RECOMP_ABI_CALL(0x0058BD73u, sub_0058BD73); /* call 0x0058BD73 */

loc_00587C07: ;
    POP32(esp, ecx);

loc_00587C08: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00587C28; /* jp: parity */

loc_00587C1A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC)) >> 32) & 1);
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = 0x919B50;
    PUSH32(esp, 0x00587C28u); RECOMP_ABI_CALL(0x00585FD5u, sub_00585FD5); /* call 0x00585FD5 */

loc_00587C28: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00587C2A
 * Original: 0x00587C2A - 0x00587D19 (239 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00587C2A(void)
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

loc_00587C2A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587C37u); RECOMP_ABI_CALL(0x00587FCBu, sub_00587FCB); /* call 0x00587FCB */

loc_00587C37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00587C41; /* jne: not equal / not zero */

loc_00587C3C: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00587C41: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + 0x10); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DADA4); /* mulss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    if (CMP_G(_fas, _fbs)) goto loc_00587C74; /* jg: greater (signed >) */

loc_00587C5E: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587C6Fu); RECOMP_ABI_CALL(0x00589F82u, sub_00589F82); /* call 0x00589F82 */

loc_00587C6F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00587C74: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + 0xC); /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(ebp + -4) = xmm1.f[0]; /* movss */
    esi = eax + 0x15C;
    POP32(esp, ebx);
    edi = 0x919B50;

loc_00587C9B: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00587CBC; /* jnp: not parity */

loc_00587CAC: ;
    eax = esi + -20;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587CB7u); RECOMP_ABI_CALL(0x00585FD5u, sub_00585FD5); /* call 0x00585FD5 */

loc_00587CB7: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */

loc_00587CBC: ;
    xmm2 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + -24); /* subss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x919B48); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + -4) = xmm2.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00587D0C; /* jnp: not parity */

loc_00587CEF: ;
    eax = esi + -32;
    MEM32(esi + -8) = eax;
    eax = esi + -20;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + -12) = 0x587B58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587D07u); RECOMP_ABI_CALL(0x00585FBBu, sub_00585FBB); /* call 0x00585FBB */

loc_00587D07: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */

loc_00587D0C: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x24)) >> 32) & 1);
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00587C9B; /* jne: not equal / not zero */

loc_00587D12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00587D2D
 * Original: 0x00587D2D - 0x00587D62 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587D2D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00587D2D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x148)) >> 32) & 1);
    esi = esi + 0x148;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_00587D3C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00587D59; /* jnp: not parity */

loc_00587D4E: ;
    PUSH32(esp, esi);
    ecx = 0x919B50;
    PUSH32(esp, 0x00587D59u); RECOMP_ABI_CALL(0x00585FD5u, sub_00585FD5); /* call 0x00585FD5 */

loc_00587D59: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x24)) >> 32) & 1);
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00587D3C; /* jne: not equal / not zero */

loc_00587D5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00587D62
 * Original: 0x00587D62 - 0x00587F69 (519 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00587D62(void)
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

loc_00587D62: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0xEC;
    PUSH32(esp, eax);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587D85u); RECOMP_ABI_CALL(0x0058D1FDu, sub_0058D1FD); /* call 0x0058D1FD */

loc_00587D85: ;
    MEM32(esi + 4) = eax;
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587D90u); RECOMP_ABI_CALL(0x0058C60Au, sub_0058C60A); /* call 0x0058C60A */

loc_00587D90: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 0x16)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x16), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = eax;
    MEM32(ebp + -8) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_00587E4F; /* jbe: below or equal (unsigned <=) */

loc_00587DA6: ;
    ebx = edi + edi * 8;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = ebx;

loc_00587DB2: ;
    ecx = MEM32(0x919EF4);
    edx = (uint32_t)(int32_t)SMEM16(ebx + ecx);
    edi = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx + edx * 8;
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
    _fa = (uint32_t)(MEM32(0x8DE314)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8DE314), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = ZX8(MEM8(esi + 0x16));
    ecx = ecx + ecx * 2;
    ecx = (uint32_t)(int32_t)SMEM8(edi + ecx * 2 + 0x8DE2B2);
    ecx = ecx + ecx * 8;
    ecx = esi + ecx * 4 + 0x13C;
    MEM32(ebp + -16) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00587E16; /* jle: less or equal (signed <=) */

loc_00587DF0: ;
    ecx = MEM32(ebp + -4);
    edi = MEM32(esi + 0x104);
    ebx = MEM32(eax + 0x64);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    fp_push(MEMF(ecx + edi)); /* fld float */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(ecx + ebx) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DE314)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x8DE314) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00587DF0; /* jl: less (signed <) */

loc_00587E13: ;
    ebx = MEM32(ebp + -12);

loc_00587E16: ;
    ecx = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    edi = MEM32(ebp + -8);
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8DE310); /* mulss */
    PUSH32(esp, edx);
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587E39u); RECOMP_ABI_CALL(0x0058BD73u, sub_0058BD73); /* call 0x0058BD73 */

loc_00587E39: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(esi + 0x16));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    MEM32(ebp + -12) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00587DB2; /* jb: below (unsigned <) */

loc_00587E4F: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x12), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00587F46; /* jne: not equal / not zero */

loc_00587E59: ;
    eax = ZX8(MEM8(esi + 0x16));
    ecx = MEM32(0x919C44);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 2;
    edx = eax + eax * 2;
    ecx = ecx + ecx * 2;
    edx = edx * 2 + 0x87D24A;
    ecx = ecx * 2 + 0x87D1BA;
    MEM32(ebp + -12) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00587F46; /* jbe: below or equal (unsigned <=) */

loc_00587E8C: ;
    edi = edi + edi * 8;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ebp + -4) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + -4)) < (uint32_t)(edx));
    MEM32(ebp + -4) = MEM32(ebp + -4) - edx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00587E9B: ;
    eax = MEM32(0x919EF4);
    edx = (uint32_t)(int32_t)SMEM16(edi + eax);
    ebx = MEM32(ebp + 8);
    ecx = edx + edx * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(esi + 0x16));
    eax = eax + eax * 2;
    eax = (uint32_t)(int32_t)SMEM8(ebx + eax * 2 + 0x8DE2B2);
    eax = eax + eax * 8;
    ebx = esi + eax * 4 + 0x13C;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x877EB4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = edx;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00587EF5; /* jp: parity */

loc_00587EDC: ;
    edx = MEM32(ebp + -12);
    eax = MEM32(ebp + -4);
    ebx = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + ebx));
    MEM16(ecx + 0x1C) = LO16(edx);
    edx = MEM32(ebp + -16);
    goto loc_00587F2D;

loc_00587EF5: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x877EB8); /* mulss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp + -8); /* cvtss2si */
    MEM16(ecx + 0x1C) = LO16(eax);
    _fa = (uint32_t)(MEM8(ebx + 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 4), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00587F2D; /* jne: not equal / not zero */

loc_00587F18: ;
    eax = MEM32(ebp + -12);
    ebx = MEM32(ebp + 8);
    SET_LO16(eax, ZX8(MEM8(eax + ebx)));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -16))) >> 32) & 1);
    eax = eax + MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x1C) = LO16(eax);

loc_00587F2D: ;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587F33u); RECOMP_ABI_CALL(0x0058B560u, sub_0058B560); /* call 0x0058B560 */

loc_00587F33: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(esi + 0x16));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    if (CMP_B(_fa, _fb)) goto loc_00587E9B; /* jb: below (unsigned <) */

loc_00587F46: ;
    _fa = (uint32_t)(MEM32(esi + 0x118)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x118), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00587F60; /* je: equal / zero */

loc_00587F4F: ;
    eax = esi + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00587F5Eu); RECOMP_ABI_CALL(0x0058D8C3u, sub_0058D8C3); /* call 0x0058D8C3 */

loc_00587F5E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00587F60: ;
    POP32(esp, edi);
    MEM8(esi + 0x10) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00587F69
 * Original: 0x00587F69 - 0x00587FCB (98 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587F69(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587F69: ;
    ecx = MEM32(esp + 4);
    edx = ZX8(MEM8(ecx + 2));
    eax = ZX16(MEM16(ecx));
    SET_LO8(ecx, MEM8(ecx + 3));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x14 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587F8F; /* jne: not equal / not zero */

loc_00587F82: ;
    esi = 0x90;

loc_00587F87: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00587F8F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587F9B; /* jne: not equal / not zero */

loc_00587F94: ;
    esi = 0x88;
    goto loc_00587F87;

loc_00587F9B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587FA5; /* jne: not equal / not zero */

loc_00587FA0: ;
    PUSH32(esp, 0x33);

loc_00587FA2: ;
    POP32(esp, esi);
    goto loc_00587F87;

loc_00587FA5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x16) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x16 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587FAE; /* jne: not equal / not zero */

loc_00587FAA: ;
    PUSH32(esp, 0x66);
    goto loc_00587FA2;

loc_00587FAE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587FBA; /* jne: not equal / not zero */

loc_00587FB3: ;
    esi = 0x200;
    goto loc_00587F87;

loc_00587FBA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x10 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00587FC4; /* je: equal / zero */

loc_00587FBF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x17) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x17 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00587F87; /* jne: not equal / not zero */

loc_00587FC4: ;
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00587FCB
 * Original: 0x00587FCB - 0x00587FE9 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00587FCB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587FCB: ;
    ecx = ZX8(MEM8(0x919D5E));
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00587FE6; /* jge: greater or equal (signed >=) */

loc_00587FDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00587FE6; /* jl: less (signed <) */

loc_00587FDE: ;
    eax = MEM32(eax * 4 + 0x919B58);
    esp += 4; return; /* ret */

loc_00587FE6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00587FE9
 * Original: 0x00587FE9 - 0x00588033 (74 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00587FE9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00587FE9: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(eax * 4 + 0x919B58);
    PUSH32(esp, 0x00588004u); RECOMP_ABI_CALL(0x0058DA58u, sub_0058DA58); /* call 0x0058DA58 */

loc_00588004: ;
    edi = eax;
    eax = esi + 0x120;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00588013u); RECOMP_ABI_CALL(0x0058DA1Cu, sub_0058DA1C); /* call 0x0058DA1C */

loc_00588013: ;
    eax = esi + 0x12C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00588020u); RECOMP_ABI_CALL(0x0058D9B4u, sub_0058D9B4); /* call 0x0058D9B4 */

loc_00588020: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 0x138;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00588032; /* jne: not equal / not zero */

loc_0058802F: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00588032: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00588033
 * Original: 0x00588033 - 0x00588053 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588033(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588033: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + -4);
    PUSH32(esp, eax);
    eax = MEM32(eax);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax * 4 + 0x919B58);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x00588050u); RECOMP_ABI_CALL(0x0059C60Au, sub_0059C60A); /* call 0x0059C60A */

loc_00588050: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00588053
 * Original: 0x00588053 - 0x005880B2 (95 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588053(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588053: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 0x120);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00588069: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00588077; /* jbe: below or equal (unsigned <=) */

loc_0058806E: ;
    edx = MEM32(eax + 0x1C);
    esi = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00588077: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) - ecx;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0058808E; /* jb: below (unsigned <) */

loc_00588085: ;
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, 0x0058808Du); RECOMP_ABI_CALL(0x00587FE9u, sub_00587FE9); /* call 0x00587FE9 */

loc_0058808D: ;
    POP32(esp, ecx);

loc_0058808E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005880AE; /* je: equal / zero */

loc_00588092: ;
    eax = MEM32(edi + 0x120);
    ecx = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xC8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00588069; /* jle: less or equal (signed <=) */

loc_005880A5: ;
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, 0x005880ADu); RECOMP_ABI_CALL(0x00587FE9u, sub_00587FE9); /* call 0x00587FE9 */

loc_005880AD: ;
    POP32(esp, ecx);

loc_005880AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005880B2
 * Original: 0x005880B2 - 0x005881DF (301 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005880B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005880B2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax * 4 + 0x919B58);
    eax = ebx + 0x138;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_005880D9; /* jne: not equal / not zero */

loc_005880D1: ;
    ecx = MEM32(ebx + 0x120);
    goto loc_005880DB;

loc_005880D9: ;
    ecx = MEM32(ecx);

loc_005880DB: ;
    esi = ecx;
    edx = esi + 0x25;
    PUSH32(esp, edx);
    MEM32(eax) = ecx;
    edx = ebp + -48;
    PUSH32(esp, edx);
    eax = ebx + 0x84;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    ecx = ebx + 0x18;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588100u); RECOMP_ABI_CALL(0x0058DA8Cu, sub_0058DA8C); /* call 0x0058DA8C */

loc_00588100: ;
    eax = MEM32(ebp + -48);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x24) = 0;
    edi = ebx + 0xCC;
    goto loc_00588160;

loc_00588115: ;
    MEM32(ebp + -20) = 3;
    eax = MEM32(edi);
    MEM32(ebp + -16) = eax;
    eax = MEM32(edi + 0x10);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax;
    MEM32(edi + 0x10) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(0x919E8E)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919E8E), LO8(eax) (8-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00588160; /* jle: less or equal (signed <=) */

loc_00588142: ;
    eax = ebp + -20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    { uint32_t _icall_target = MEM32(eax * 4 + 0x919EC4); PUSH32(esp, 0x00588150u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00588149u); } /* indirect call */
    }

loc_00588150: ;
    eax = (uint32_t)(int32_t)SMEM8(0x919E8E);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00588142; /* jl: less (signed <) */

loc_00588160: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00588115; /* jne: not equal / not zero */

loc_00588165: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058816Fu); RECOMP_ABI_CALL(0x0059C60Au, sub_0059C60A); /* call 0x0059C60A */

loc_0058816F: ;
    edi = ebx + 0x18;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588178u); RECOMP_ABI_CALL(0x00587F69u, sub_00587F69); /* call 0x00587F69 */

loc_00588178: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebx + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058819F; /* jne: not equal / not zero */

loc_00588185: ;
    PUSH32(esp, 0x1A);
    POP32(esp, ecx);
    edi = ebx + 0x84;
    esi = ebx + 0x1C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_0058819F; /* jne: not equal / not zero */

loc_00588197: ;
    _fa = (uint32_t)(MEM32(ebx + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x9C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005881C7; /* je: equal / zero */

loc_0058819F: ;
    _fa = (uint32_t)(MEM16(ebx + 0x14)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x14), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005881AC; /* je: equal / zero */

loc_005881A6: ;
    MEM8(ebx + 0x10) = 2;
    goto loc_005881D8;

loc_005881AC: ;
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, 0x1A);
    edi = ebx + 0x1C;
    POP32(esp, ecx);
    esi = ebx + 0x84;
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
    MEM32(ebx + 0x9C) = MEM32(ebx + 0x9C) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x9C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x14) = eax;

loc_005881C7: ;
    _fa = (uint32_t)(MEM8(ebx + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x10), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005881D8; /* je: equal / zero */

loc_005881CD: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005881D3u); RECOMP_ABI_CALL(0x00587D62u, sub_00587D62); /* call 0x00587D62 */

loc_005881D3: ;
    POP32(esp, ecx);
    MEM8(ebx + 0x10) = 1;

loc_005881D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005881DF
 * Original: 0x005881DF - 0x0058824F (112 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005881DF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005881DF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0x138);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00588244; /* je: equal / zero */

loc_005881F2: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00588244; /* je: equal / zero */

loc_005881F7: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058824A; /* jl: less (signed <) */

loc_005881FC: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00588244; /* je: equal / zero */

loc_005881FE: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x00588205u); RECOMP_ABI_CALL(0x0059C60Fu, sub_0059C60F); /* call 0x0059C60F */

loc_00588205: ;
    POP32(esp, ecx);
    ecx = 0x3D0900;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x10));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x10)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x20) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00588241; /* jae: above or equal (unsigned >=) */

loc_00588220: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x00588227u); RECOMP_ABI_CALL(0x0059C614u, sub_0059C614); /* call 0x0059C614 */

loc_00588227: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00588241; /* je: equal / zero */

loc_0058822D: ;
    _fa = (uint32_t)(MEM32(edi + 0x134)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x134), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0058824A; /* jg: greater (signed >) */

loc_00588235: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x0058823Cu); RECOMP_ABI_CALL(0x0059C614u, sub_0059C614); /* call 0x0059C614 */

loc_0058823C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0058824A; /* jne: not equal / not zero */

loc_00588241: ;
    MEM32(esi + 0x20) = ebx;

loc_00588244: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00588246: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0058824A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00588246;

}

/**
 * sub_0058824F
 * Original: 0x0058824F - 0x0058826F (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058824F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058824F: ;
    ecx = ZX8(MEM8(0x919D5E));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058826E; /* jle: less or equal (signed <=) */

loc_0058825E: ;
    _fa = (uint32_t)(MEM32(edx * 4 + 0x919B58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx * 4 + 0x919B58), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00588269; /* je: equal / zero */

loc_00588268: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00588269: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058825E; /* jl: less (signed <) */

loc_0058826E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0058826F
 * Original: 0x0058826F - 0x0058833B (204 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058826F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058826F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058827Cu); RECOMP_ABI_CALL(0x00587FCBu, sub_00587FCB); /* call 0x00587FCB */

loc_0058827C: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00588289; /* jne: not equal / not zero */

loc_00588285: ;
    PUSH32(esp, 0xFFFFFFF8u);
    goto loc_00588293;

loc_00588289: ;
    _fa = (uint32_t)(MEM32(esi + 0x134)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x134), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00588299; /* jne: not equal / not zero */

loc_00588291: ;
    PUSH32(esp, 0xFFFFFFF3u);

loc_00588293: ;
    POP32(esp, eax);
    goto loc_00588337;

loc_00588299: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_005882B8; /* jne: not equal / not zero */

loc_0058829F: ;
    PUSH32(esp, 0x6C454353);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005882B1u); RECOMP_ABI_CALL(0x0059C5F1u, sub_0059C5F1); /* call 0x0059C5F1 */

loc_005882B1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    goto loc_005882D3;

loc_005882B8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005882D0; /* jne: not equal / not zero */

loc_005882BE: ;
    PUSH32(esp, 0x6C454353);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005882CEu); RECOMP_ABI_CALL(0x0059C5F6u, sub_0059C5F6); /* call 0x0059C5F6 */

loc_005882CE: ;
    goto loc_005882B1;

loc_005882D0: ;
    ebx = MEM32(ebp + 0x14);

loc_005882D3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005882DC; /* jne: not equal / not zero */

loc_005882D7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00588336;

loc_005882DC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005882E1u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_005882E1: ;
    eax = esi + 0x12C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005882EDu); RECOMP_ABI_CALL(0x0058D9FDu, sub_0058D9FD); /* call 0x0058D9FD */

loc_005882ED: ;
    edi = eax;
    PUSH32(esp, 0x28);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005882F7u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_005882F7: ;
    eax = esi + 0x120;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588304u); RECOMP_ABI_CALL(0x0058D9D8u, sub_0058D9D8); /* call 0x0058D9D8 */

loc_00588304: ;
    eax = esi + 0xC;
    MEM32(edi + 8) = ebx;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + 0x100;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058831E; /* jge: greater or equal (signed >=) */

loc_00588318: ;
    MEM32(eax) = 0;

loc_0058831E: ;
    eax = MEM32(eax);
    eax = eax | MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(edi + 0x20) = eax;
    edi = MEM32(edi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588334u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_00588334: ;
    eax = edi;

loc_00588336: ;
    POP32(esp, ebx);

loc_00588337: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0058833B
 * Original: 0x0058833B - 0x00588356 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058833B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058833B: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x00588352u); RECOMP_ABI_CALL(0x0058826Fu, sub_0058826F); /* call 0x0058826F */

loc_00588352: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00588356
 * Original: 0x00588356 - 0x0058842D (215 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588356(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00588356: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058835Du); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058835D: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00588366u); RECOMP_ABI_CALL(0x00587FCBu, sub_00587FCB); /* call 0x00587FCB */

loc_00588366: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00588377; /* jne: not equal / not zero */

loc_0058836F: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, esi);
    goto loc_00588423;

loc_00588377: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00588385; /* jl: less (signed <) */

loc_0058837C: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x00588384u); RECOMP_ABI_CALL(0x0058D879u, sub_0058D879); /* call 0x0058D879 */

loc_00588384: ;
    POP32(esp, ecx);

loc_00588385: ;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00588399; /* jne: not equal / not zero */

loc_00588391: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x00588398u); RECOMP_ABI_CALL(0x0059C600u, sub_0059C600); /* call 0x0059C600 */

loc_00588398: ;
    POP32(esp, ecx);

loc_00588399: ;
    eax = esi + 0x9C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_005883C3; /* je: equal / zero */

loc_005883A4: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1A), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005883C2; /* jbe: below or equal (unsigned <=) */

loc_005883AC: ;
    edi = eax;

loc_005883AE: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x005883B5u); RECOMP_ABI_CALL(0x0058A8B2u, sub_0058A8B2); /* call 0x0058A8B2 */

loc_005883B5: ;
    eax = ZX8(MEM8(esi + 0x1A));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_005883AE; /* jl: less (signed <) */

loc_005883C2: ;
    POP32(esp, ebp);

loc_005883C3: ;
    edi = esi + 0x120;

loc_005883C9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005883CFu); RECOMP_ABI_CALL(0x0058D9FDu, sub_0058D9FD); /* call 0x0058D9FD */

loc_005883CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_005883E5; /* je: equal / zero */

loc_005883D4: ;
    PUSH32(esp, eax);
    eax = esi + 0x12C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005883E1u); RECOMP_ABI_CALL(0x0058D9B4u, sub_0058D9B4); /* call 0x0058D9B4 */

loc_005883E1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_005883C9;

loc_005883E5: ;
    eax = esi + 0x14;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esi + 0x138) = ebx;
    MEM8(esi + 0x10) = LO8(ebx);
    PUSH32(esp, 0x005883F9u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_005883F9: ;
    eax = esi + 0x18;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00588404u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_00588404: ;
    eax = esi + 0x1C;
    PUSH32(esp, 0x68);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058840Fu); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058840F: ;
    PUSH32(esp, 0x68);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x84;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058841Du); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058841D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_00588423: ;
    PUSH32(esp, 0x00588428u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_00588428: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005884E6
 * Original: 0x005884E6 - 0x005885E2 (252 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005884E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005884E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x138);
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x25), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = 0x7FFFFFFF;
    if (CMP_EQ(_fa, _fb)) goto loc_00588524; /* je: equal / zero */

loc_00588509: ;
    MEM32(ebp + 0xC) = eax;
    SET_LO16(edx, MEM16(ebp + 0xE));
    MEM8(ebp + 0xE) = HI8(eax);
    MEM8(ebp + 0xF) = LO8(eax);
    eax = MEM32(ebp + -44);
    MEM8(ebp + 0xC) = HI8(edx);
    MEM8(ebp + 0xD) = LO8(edx);
    eax = eax ^ MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00588527;

loc_00588524: ;
    eax = eax ^ MEM32(ebp + -44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00588527: ;
    edx = ZX8(MEM8(ebx + 0x16));
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -44) = MEM32(ebp + -44) ^ eax;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0xC;
    ebx = eax + edx * 4;
    MEM32(ebp + -4) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058858D; /* jle: less or equal (signed <=) */

loc_0058853F: ;
    edx = ebp + -36;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = eax;
    goto loc_0058854C;

loc_00588549: ;
    eax = MEM32(ebp + -8);

loc_0058854C: ;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x25), 0 (8-bit) */
    eax = eax + ebx * 4;
    eax = MEM32(ebp + eax + -36);
    if (CMP_EQ(_fa, _fb)) goto loc_0058857A; /* je: equal / zero */

loc_00588559: ;
    MEM32(ebp + -12) = eax;
    SET_LO16(edx, MEM16(ebp + -10));
    MEM8(ebp + 0xC) = HI8(edx);
    MEM8(ebp + 0xD) = LO8(edx);
    edx = MEM32(ebp + -4);
    MEM8(ebp + 0xE) = HI8(eax);
    MEM8(ebp + 0xF) = LO8(eax);
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + ebx * 4 + -36) = edx;
    goto loc_00588581;

loc_0058857A: ;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + ebx * 4 + -36) = eax;

loc_00588581: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax + 0x16));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00588549; /* jl: less (signed <) */

loc_0058858D: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -44), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0058859F; /* jne: not equal / not zero */

loc_00588592: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058859Du); RECOMP_ABI_CALL(0x0059C60Au, sub_0059C60A); /* call 0x0059C60A */

loc_0058859D: ;
    goto loc_005885DB;

loc_0058859F: ;
    eax = MEM32(ebp + -36);
    MEM32(eax + -4) = ecx;
    eax = MEM32(esi + 0xC);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + -44);
    ecx = MEM32(esi + 0x1C);
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    eax = ZX8(MEM8(esi + 0x24));
    ecx = MEM32(ebp + -44);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -44) = eax;
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005885D7u); RECOMP_ABI_CALL(0x0058D536u, sub_0058D536); /* call 0x0058D536 */

loc_005885D7: ;
    MEM8(esi + 0x24) = 1;

loc_005885DB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005885E2
 * Original: 0x005885E2 - 0x00588625 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005885E2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005885E2: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C444353) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x6C444353 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi * 4 + 0x919B58);
    PUSH32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00588605; /* jne: not equal / not zero */

loc_005885FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00588603u); RECOMP_ABI_CALL(0x005884E6u, sub_005884E6); /* call 0x005884E6 */

loc_00588603: ;
    goto loc_0058861E;

loc_00588605: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C484353) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x6C484353 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00588617; /* jne: not equal / not zero */

loc_0058860D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00588613u); RECOMP_ABI_CALL(0x005880B2u, sub_005880B2); /* call 0x005880B2 */

loc_00588613: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00588621;

loc_00588617: ;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x0058861Eu); RECOMP_ABI_CALL(0x0059C60Au, sub_0059C60A); /* call 0x0059C60A */

loc_0058861E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00588621: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00588625
 * Original: 0x00588625 - 0x005886F7 (210 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588625(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00588625: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0058862Bu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058862B: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x919D5E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919D5E), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005886F1; /* jbe: below or equal (unsigned <=) */

loc_0058863A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0058863D: ;
    ebx = MEM32(ebp * 4 + 0x919B58);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005886DE; /* je: equal / zero */

loc_0058864C: ;
    _fa = (uint32_t)(MEM32(ebx + 0x128)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x128), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005886DE; /* je: equal / zero */

loc_00588659: ;
    _fa = (uint32_t)(MEM8(ebx + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x10), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00588697; /* jne: not equal / not zero */

loc_0058865F: ;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, 0x00588667u); RECOMP_ABI_CALL(0x0058D64Eu, sub_0058D64E); /* call 0x0058D64E */

loc_00588667: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_G(_fas, _fbs)) goto loc_005886DE; /* jg: greater (signed >) */

loc_0058866C: ;
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, 0x1A);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 8));
    esi = ebx + 0x84;
    edi = ebx + 0x1C;
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
    MEM32(ebx + 0x9C) = MEM32(ebx + 0x9C) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x9C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x14) = eax;
    PUSH32(esp, 0x0058868Fu); RECOMP_ABI_CALL(0x0058D879u, sub_0058D879); /* call 0x0058D879 */

loc_0058868F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00588695u); RECOMP_ABI_CALL(0x00587D62u, sub_00587D62); /* call 0x00587D62 */

loc_00588695: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00588697: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0058869Du); RECOMP_ABI_CALL(0x005881DFu, sub_005881DF); /* call 0x005881DF */

loc_0058869D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005886DE; /* jne: not equal / not zero */

loc_005886A2: ;
    _fa = (uint32_t)(MEM8(ebx + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x10), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005886B9; /* jne: not equal / not zero */

loc_005886A8: ;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, 0x005886B0u); RECOMP_ABI_CALL(0x0058D61Bu, sub_0058D61B); /* call 0x0058D61B */

loc_005886B0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_005886DE; /* jle: less or equal (signed <=) */

loc_005886B7: ;
    goto loc_005886BC;

loc_005886B9: ;
    PUSH32(esp, 8);
    POP32(esp, esi);

loc_005886BC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005886BE: ;
    PUSH32(esp, MEM32(ebx));
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x005886C6u); RECOMP_ABI_CALL(0x0059C605u, sub_0059C605); /* call 0x0059C605 */

loc_005886C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_005886D6; /* je: equal / zero */

loc_005886CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x005886D2u); RECOMP_ABI_CALL(0x005885E2u, sub_005885E2); /* call 0x005885E2 */

loc_005886D2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    edi = eax;

loc_005886D6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005886DE; /* je: equal / zero */

loc_005886DA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005886BE; /* jg: greater (signed >) */

loc_005886DE: ;
    eax = ZX8(MEM8(0x919D5E));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058863D; /* jl: less (signed <) */

loc_005886EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_005886F1: ;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00587904(); return; /* tail jmp 0x00587904 */

}

/**
 * sub_005886F7
 * Original: 0x005886F7 - 0x00588771 (122 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005886F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005886F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005886FEu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_005886FE: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00588708u); RECOMP_ABI_CALL(0x00587FCBu, sub_00587FCB); /* call 0x00587FCB */

loc_00588708: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00588719; /* jne: not equal / not zero */

loc_0058870F: ;
    PUSH32(esp, 0x00588714u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_00588714: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    goto loc_0058876E;

loc_00588719: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0058871Fu); RECOMP_ABI_CALL(0x00588356u, sub_00588356); /* call 0x00588356 */

loc_0058871F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00588725u); RECOMP_ABI_CALL(0x00587D2Du, sub_00587D2D); /* call 0x00587D2D */

loc_00588725: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, 0x0058872Cu); RECOMP_ABI_CALL(0x0058824Fu, sub_0058824F); /* call 0x0058824F */

loc_0058872C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00588743; /* jne: not equal / not zero */

loc_00588731: ;
    PUSH32(esp, 0x588625);
    PUSH32(esp, 0x0058873Bu); RECOMP_ABI_CALL(0x0058DE60u, sub_0058DE60); /* call 0x0058DE60 */

loc_0058873B: ;
    MEM32(0x919EEC) = MEM32(0x919EEC) & 0;
    _fa = (uint32_t)(MEM32(0x919EEC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_00588743: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x0058874Cu); RECOMP_ABI_CALL(0x0058D675u, sub_0058D675); /* call 0x0058D675 */

loc_0058874C: ;
    ebx = MEM32(esi);
    esi = (uint32_t)(int32_t)SMEM8(esi + 0x11);
    MEM32(edi * 4 + 0x919B58) = MEM32(edi * 4 + 0x919B58) & 0;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x919B58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    PUSH32(esp, 0x00588760u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_00588760: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058876B; /* jne: not equal / not zero */

loc_00588764: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0058876Au); RECOMP_ABI_CALL(0x0059C5DDu, sub_0059C5DD); /* call 0x0059C5DD */

loc_0058876A: ;
    POP32(esp, ecx);

loc_0058876B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_0058876E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00588771
 * Original: 0x00588771 - 0x00588794 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588771(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588771: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x919D5E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919D5E), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00588790; /* jbe: below or equal (unsigned <=) */

loc_0058877D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00588783u); RECOMP_ABI_CALL(0x005886F7u, sub_005886F7); /* call 0x005886F7 */

loc_00588783: ;
    eax = ZX8(MEM8(0x919D5E));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058877D; /* jl: less (signed <) */

loc_00588790: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00588794
 * Original: 0x00588794 - 0x005889B9 (549 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00588794(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588794: ;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005887A2u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_005887A2: ;
    ecx = ZX8(MEM8(0x919D5E));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005887BE; /* jle: less or equal (signed <=) */

loc_005887AF: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x919B58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x919B58), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005887CD; /* je: equal / zero */

loc_005887B9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005887AF; /* jl: less (signed <) */

loc_005887BE: ;
    PUSH32(esp, 0xFFFFFFF7u);
    POP32(esp, esi);

loc_005887C1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005887C6u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_005887C6: ;
    eax = esi;

loc_005887C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_005887CD: ;
    esi = MEM32(ebp + 0x14);
    MEM32(ebp + -20) = eax;
    eax = esi + 0x214;
    MEM32(ebp + -16) = eax;
    eax = MEM32(0x8DE314);
    ebx = esi;
    eax = eax * 4 + 0x214;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x214);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005887FAu); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_005887FA: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = edi + edi * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588813u); RECOMP_ABI_CALL(0x0058D15Bu, sub_0058D15B); /* call 0x0058D15B */

loc_00588813: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 0x120;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588827u); RECOMP_ABI_CALL(0x0058D9A5u, sub_0058D9A5); /* call 0x0058D9A5 */

loc_00588827: ;
    eax = ebx + 0x12C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588833u); RECOMP_ABI_CALL(0x0058D9A5u, sub_0058D9A5); /* call 0x0058D9A5 */

loc_00588833: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058885D; /* jle: less or equal (signed <=) */

loc_0058883A: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = edi;

loc_00588843: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = ebx + 0x12C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588852u); RECOMP_ABI_CALL(0x0058D9B4u, sub_0058D9B4); /* call 0x0058D9B4 */

loc_00588852: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x28;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_00588843; /* jne: not equal / not zero */

loc_0058885D: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588865u); RECOMP_ABI_CALL(0x0058D15Bu, sub_0058D15B); /* call 0x0058D15B */

loc_00588865: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x588053);
    PUSH32(esp, 0x588033);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588879u); RECOMP_ABI_CALL(0x0058D16Fu, sub_0058D16F); /* call 0x0058D16F */

loc_00588879: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 8) = eax;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00588892; /* jge: greater or equal (signed >=) */

loc_00588885: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058888Au); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058888A: ;
    eax = MEM32(ebx + 8);
    goto loc_005887C8;

loc_00588892: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005888A1; /* je: equal / zero */

loc_00588898: ;
    eax = MEM32(ebp + 0x1C);
    MEM8(ebx + 0x11) = 1;
    goto loc_005888CB;

loc_005888A1: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005888B2u); RECOMP_ABI_CALL(0x0059C5D4u, sub_0059C5D4); /* call 0x0059C5D4 */

loc_005888B2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005888C7; /* ja: above (unsigned >) */

loc_005888B9: ;
    PUSH32(esp, MEM32(ebx + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005888C1u); RECOMP_ABI_CALL(0x0058D675u, sub_0058D675); /* call 0x0058D675 */

loc_005888C1: ;
    POP32(esp, ecx);
    goto loc_005887BE;

loc_005888C7: ;
    MEM8(ebx + 0x11) = 0;

loc_005888CB: ;
    edx = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(0x7DADA4)); /* movss */
    MEM32(ebx) = eax;
    eax = MEM32(ebp + -16);
    MEM32(ebx + 0xC) = 0;
    PUSH32(esp, 6);
    MEM32(ebx + 4) = 0xFFFFFFFFu;
    edi = ebx + 0xEC;
    POP32(esp, ecx);
    esi = edx;
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
    MEM32(ebx + 0x104) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x8DE314)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8DE314), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058892B; /* jle: less or equal (signed <=) */

loc_00588908: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0xF1);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(ebx + 0x104);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + eax * 4) = xmm0.f[0]; /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DE314)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8DE314) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00588908; /* jl: less (signed <) */

loc_0058892B: ;
    eax = (uint32_t)(int32_t)SMEM8(edx);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx + 0x141;

loc_0058893E: ;
    xmm1 = XMM_SCALAR(MEMF(0x877EB4)); /* movss */
    MEM8(eax) = LO8(ecx);
    MEMF(eax + 3) = xmm0.f[0]; /* movss */
    MEM8(eax + -1) = 0;
    MEMF(eax + -5) = xmm1.f[0]; /* movss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058893E; /* jl: less (signed <) */

loc_0058895F: ;
    MEM8(ebx + 0x12) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588968u); RECOMP_ABI_CALL(0x0058824Fu, sub_0058824F); /* call 0x0058824F */

loc_00588968: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00588981; /* jne: not equal / not zero */

loc_0058896C: ;
    PUSH32(esp, 0x588625);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588976u); RECOMP_ABI_CALL(0x0058DE47u, sub_0058DE47); /* call 0x0058DE47 */

loc_00588976: ;
    POP32(esp, ecx);
    MEM32(0x919EEC) = 0x588771;

loc_00588981: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), edi (32-bit) */
    esi = MEM32(ebp + -20);
    MEM32(esi * 4 + 0x919B58) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_005889A7; /* jne: not equal / not zero */

loc_00588990: ;
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588997u); RECOMP_ABI_CALL(0x0059C61Eu, sub_0059C61E); /* call 0x0059C61E */

loc_00588997: ;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005889A4u); RECOMP_ABI_CALL(0x0058DECDu, sub_0058DECD); /* call 0x0058DECD */

loc_005889A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005889A7: ;
    PUSH32(esp, esi);
    MEM32(ebx + 0x9C) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005889B3u); RECOMP_ABI_CALL(0x00588356u, sub_00588356); /* call 0x00588356 */

loc_005889B3: ;
    POP32(esp, ecx);
    goto loc_005887C1;

}

/**
 * sub_005889B9
 * Original: 0x005889B9 - 0x005889D9 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005889B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005889B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005889D4u); RECOMP_ABI_CALL(0x00588794u, sub_00588794); /* call 0x00588794 */

loc_005889D4: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_005889D9
 * Original: 0x005889D9 - 0x00588A1C (67 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005889D9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005889D9: ;
    eax = MEM32(esp + 4);
    MEM16(eax + 0x14) = MEM16(eax + 0x14) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 0x14)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 2) = 0x3C;
    MEM16(eax + 0xC) = 0x1000;
    MEM16(eax + 0xE) = 0x1000;
    MEM16(eax + 0x10) = 0x1000;
    MEM16(eax + 0x16) = LO16(ecx);
    MEM8(eax + 3) = 0x7F;
    MEM8(eax) = 0x7F;
    MEM8(eax + 4) = 0x7F;
    MEM8(eax + 1) = 0x40;
    MEM8(eax + 5) = LO8(ecx);
    MEM16(eax + 8) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00588A30
 * Original: 0x00588A30 - 0x00588B2E (254 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00588A30(void)
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

loc_00588A30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00588A52; /* jge: greater or equal (signed >=) */

loc_00588A4A: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    goto loc_00588B2A;

loc_00588A52: ;
    eax = MEM32(ebp + 8);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588A61u); RECOMP_ABI_CALL(0x00587FCBu, sub_00587FCB); /* call 0x00587FCB */

loc_00588A61: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00588A70; /* jne: not equal / not zero */

loc_00588A68: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    goto loc_00588B29;

loc_00588A70: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588A78u); RECOMP_ABI_CALL(0x0058DA58u, sub_0058DA58); /* call 0x0058DA58 */

loc_00588A78: ;
    POP32(esp, ecx);
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00588B21; /* je: equal / zero */

loc_00588A83: ;
    _fa = (uint32_t)(MEM8(ecx + 0x24)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x24), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00588A8F; /* jne: not equal / not zero */

loc_00588A88: ;
    MEM32(esi) = ebx;
    goto loc_00588B27;

loc_00588A8F: ;
    _fa = (uint32_t)(MEM32(edi + 0x120)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x120), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00588AA3; /* jne: not equal / not zero */

loc_00588A97: ;
    MEM32(esi) = 2;
    eax = ZX16(MEM16(edi + 0x14));
    goto loc_00588AAD;

loc_00588AA3: ;
    MEM32(esi) = 1;
    eax = ZX16(MEM16(edi + 0x18));

loc_00588AAD: ;
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(MEMF(0x7C3A80) / fp_top()); /* fdivr dword ptr [0x7c3a80] */
    MEMF(ebp + 8) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(ecx + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00588ACC; /* jge: greater or equal (signed >=) */

loc_00588AC6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00588ACC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    eax = (int32_t)MEMF(ebp + 0xC); /* cvtss2si */
    MEM32(esi + 4) = eax;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00588AF3; /* jge: greater or equal (signed >=) */

loc_00588AED: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00588AF3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(ebp + 0xC); /* cvtss2si */
    MEM32(esi + 8) = eax;
    eax = MEM32(ecx + 0x1C);
    fp_push((double)SMEM32(ecx + 0x1C)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00588B11; /* jge: greater or equal (signed >=) */

loc_00588B0B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00588B11: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(ebp + 8); /* cvtss2si */
    MEM32(esi + 0xC) = eax;
    goto loc_00588B27;

loc_00588B21: ;
    MEM32(esi) = 3;

loc_00588B27: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00588B29: ;
    POP32(esp, edi);

loc_00588B2A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00588B2E
 * Original: 0x00588B2E - 0x00588BC7 (153 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588B2E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588B2E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi) = ebx;
    PUSH32(esp, 0x00588B48u); RECOMP_ABI_CALL(0x00587FCBu, sub_00587FCB); /* call 0x00587FCB */

loc_00588B48: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00588B54; /* jne: not equal / not zero */

loc_00588B4F: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    goto loc_00588BC3;

loc_00588B54: ;
    eax = MEM32(edi + 0x128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00588BC1; /* je: equal / zero */

loc_00588B60: ;
    eax = MEM32(edi + 0x120);
    eax = MEM32(eax + 0xC);
    MEM32(esi + 4) = eax;
    _fa = (uint32_t)(MEM16(edi + 0x14)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x14), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00588BC1; /* je: equal / zero */

loc_00588B72: ;
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, 0x00588B7Au); RECOMP_ABI_CALL(0x0058D64Eu, sub_0058D64E); /* call 0x0058D64E */

loc_00588B7A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    POP32(esp, ecx);
    ecx = ZX16(MEM16(edi + 0x14));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00588BC1; /* jne: not equal / not zero */

loc_00588B90: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x00588B98u); RECOMP_ABI_CALL(0x0058DA58u, sub_0058DA58); /* call 0x0058DA58 */

loc_00588B98: ;
    ebx = eax;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00588BC1; /* je: equal / zero */

loc_00588BA1: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x00588BA8u); RECOMP_ABI_CALL(0x0059C60Fu, sub_0059C60F); /* call 0x0059C60F */

loc_00588BA8: ;
    POP32(esp, ecx);
    ecx = 0x3D0900;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebx + 0x10));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebx + 0x10)); }
    MEM32(esi + 8) = eax;

loc_00588BC1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00588BC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00588BC7
 * Original: 0x00588BC7 - 0x00588BFC (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00588BC7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588BC7: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x00588BD0u); RECOMP_ABI_CALL(0x00587FCBu, sub_00587FCB); /* call 0x00587FCB */

loc_00588BD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00588BD9; /* jne: not equal / not zero */

loc_00588BD5: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_00588BD9: ;
    edx = MEM32(esp + 8);
    ecx = 0x4000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) edx = ecx; /* cmovg */
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + 4));
    MEM16(eax + 0xF8) = LO16(edx);
    PUSH32(esp, 0x00588BF7u); RECOMP_ABI_CALL(0x0058C1B9u, sub_0058C1B9); /* call 0x0058C1B9 */

loc_00588BF7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00588C10
 * Original: 0x00588C10 - 0x00588C53 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00588C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588C10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588C1Du); RECOMP_ABI_CALL(0x00587FCBu, sub_00587FCB); /* call 0x00587FCB */

loc_00588C1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00588C29; /* jne: not equal / not zero */

loc_00588C24: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    goto loc_00588C50;

loc_00588C29: ;
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588C31u); RECOMP_ABI_CALL(0x0058DF03u, sub_0058DF03); /* call 0x0058DF03 */

loc_00588C31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_00588C50; /* jge: greater or equal (signed >=) */

loc_00588C36: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x144)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DADA8); /* mulss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp + -4); /* cvtss2si */

loc_00588C50: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00588C53
 * Original: 0x00588C53 - 0x00588CEB (152 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00588C53(void)
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

loc_00588C53: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588C5Fu); RECOMP_ABI_CALL(0x00587FCBu, sub_00587FCB); /* call 0x00587FCB */

loc_00588C5F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00588C6B; /* jne: not equal / not zero */

loc_00588C66: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    goto loc_00588CE8;

loc_00588C6B: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + 0x10); /* cvtsi2ss */
    eax = MEM32(esi + 0x104);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DADA4); /* mulss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    MEMF(eax + ebx * 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588C8Fu); RECOMP_ABI_CALL(0x0058C60Au, sub_0058C60A); /* call 0x0058C60A */

loc_00588C8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00588CE5; /* jl: less (signed <) */

loc_00588C94: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x16)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x16), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00588CD5; /* jbe: below or equal (unsigned <=) */

loc_00588C9D: ;
    edx = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00588CA6: ;
    eax = MEM32(0x919EF4);
    ecx = (uint32_t)(int32_t)SMEM16(edx + eax);
    ebx = MEM32(esi + 0x104);
    ecx = ecx + ecx * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(ecx + eax + 0x64);
    ecx = MEM32(ebp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push(MEMF(ebx + ecx * 4)); /* fld float */
    ebx = ecx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(eax + ebx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ZX8(MEM8(esi + 0x16));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00588CA6; /* jl: less (signed <) */

loc_00588CD5: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588CE1u); RECOMP_ABI_CALL(0x0058DF3Fu, sub_0058DF3F); /* call 0x0058DF3F */

loc_00588CE1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_00588CE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_00588CE8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00588CEB
 * Original: 0x00588CEB - 0x00588D4B (96 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588CEB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588CEB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00588CF2u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_00588CF2: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0xC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DADA4); /* mulss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x919E8C)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x919E8C), LO16(edi) (16-bit) */
    MEMF(0x8DE310) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00588D41; /* jle: less or equal (signed <=) */

loc_00588D15: ;
    eax = MEM32(0x919EF4);
    _fa = (uint32_t)(MEM8(edi + eax + 0x6D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + eax + 0x6D), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00588D2F; /* jne: not equal / not zero */

loc_00588D21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00588D27u); RECOMP_ABI_CALL(0x0058C847u, sub_0058C847); /* call 0x0058C847 */

loc_00588D27: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00588D2Du); RECOMP_ABI_CALL(0x0058BD73u, sub_0058BD73); /* call 0x0058BD73 */

loc_00588D2D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00588D2F: ;
    eax = (uint32_t)(int32_t)SMEM16(0x919E8C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x90;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00588D15; /* jl: less (signed <) */

loc_00588D41: ;
    PUSH32(esp, 0x00588D46u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_00588D46: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00588D4B
 * Original: 0x00588D4B - 0x00588D5C (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00588D4B(void)
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

loc_00588D4B: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00588D58u); RECOMP_ABI_CALL(0x0058B8CDu, sub_0058B8CD); /* call 0x0058B8CD */

loc_00588D58: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00588D5C
 * Original: 0x00588D5C - 0x00588D69 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00588D5C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588D5C: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x00588D65u); RECOMP_ABI_CALL(0x0058B92Fu, sub_0058B92F); /* call 0x0058B92F */

loc_00588D65: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00588D69
 * Original: 0x00588D69 - 0x00588D76 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00588D69(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588D69: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x00588D72u); RECOMP_ABI_CALL(0x0058B93Cu, sub_0058B93C); /* call 0x0058B93C */

loc_00588D72: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00588DB7
 * Original: 0x00588DB7 - 0x00588DDA (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588DB7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00588DB7: ;
    eax = MEM32(esp + 4);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax + eax * 2;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919B30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(0x919B30))) >> 32) & 1);
    ecx = ecx + MEM32(0x919B30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 8)));
    eax = eax - MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00588DDA
 * Original: 0x00588DDA - 0x00588E6E (148 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588DDA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588DDA: ;
    eax = MEM32(0x919B38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00588DF7; /* je: equal / zero */

loc_00588DE8: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x919B38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00588DF7; /* je: equal / zero */

loc_00588DF3: ;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00588DF7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00588E0C; /* je: equal / zero */

loc_00588DFF: ;
    PUSH32(esp, esi);
    ecx = 0x919B34;
    PUSH32(esp, 0x00588E0Au); RECOMP_ABI_CALL(0x00585FBBu, sub_00585FBB); /* call 0x00585FBB */

loc_00588E0A: ;
    goto loc_00588E4E;

loc_00588E0C: ;
    eax = MEM32(0x919B34);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ebx + -1;
    if (CMP_EQ(_fa, _fb)) goto loc_00588E40; /* je: equal / zero */

loc_00588E1B: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00588E29; /* jge: greater or equal (signed >=) */

loc_00588E22: ;
    ecx = MEM32(eax + 0x10);
    edi = edx;
    goto loc_00588E34;

loc_00588E29: ;
    if (CMP_NE(_fa, _fb)) goto loc_00588E36; /* jne: not equal / not zero */

loc_00588E2B: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00588E36; /* jae: above or equal (unsigned >=) */

loc_00588E32: ;
    ecx = edx;

loc_00588E34: ;
    esi = eax;

loc_00588E36: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00588E1B; /* jne: not equal / not zero */

loc_00588E3C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00588E45; /* jne: not equal / not zero */

loc_00588E40: ;
    PUSH32(esp, 0xFFFFFFF7u);
    POP32(esp, eax);
    goto loc_00588E6A;

loc_00588E45: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x00588E4Du); RECOMP_ABI_CALL(0x00588356u, sub_00588356); /* call 0x00588356 */

loc_00588E4D: ;
    POP32(esp, ecx);

loc_00588E4E: ;
    eax = MEM32(esi + 8);
    eax = eax & 0x3FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    ecx = MEM32(0x919E90);
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0xC) = ebx;

loc_00588E6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00588E6E
 * Original: 0x00588E6E - 0x00588E92 (36 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588E6E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588E6E: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00588E7A; /* jge: greater or equal (signed >=) */

loc_00588E76: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00588E85;

loc_00588E7A: ;
    eax = 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00588E85; /* jle: less or equal (signed <=) */

loc_00588E83: ;
    ecx = eax;

loc_00588E85: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00588E8Fu); RECOMP_ABI_CALL(0x00588BC7u, sub_00588BC7); /* call 0x00588BC7 */

loc_00588E8F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00588E92
 * Original: 0x00588E92 - 0x00588EB7 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588E92(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588E92: ;
    ecx = MEM32(esp + 8);
    eax = 0x2000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00588EA8; /* jg: greater (signed >) */

loc_00588E9F: ;
    eax = 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00588EAA; /* jge: greater or equal (signed >=) */

loc_00588EA8: ;
    ecx = eax;

loc_00588EAA: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00588EB4u); RECOMP_ABI_CALL(0x0058DFFAu, sub_0058DFFA); /* call 0x0058DFFA */

loc_00588EB4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00588EB7
 * Original: 0x00588EB7 - 0x00588EEF (56 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588EB7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588EB7: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00588EC3; /* jge: greater or equal (signed >=) */

loc_00588EBF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00588ECE;

loc_00588EC3: ;
    eax = 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00588ECE; /* jle: less or equal (signed <=) */

loc_00588ECC: ;
    ecx = eax;

loc_00588ECE: ;
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7A9EC4); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00588EEBu); RECOMP_ABI_CALL(0x00589F82u, sub_00589F82); /* call 0x00589F82 */

loc_00588EEB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00588EEF
 * Original: 0x00588EEF - 0x00588F19 (42 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588EEF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588EEF: ;
    eax = MEM32(esp + 8);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x877EC0); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00588F15u); RECOMP_ABI_CALL(0x0058E050u, sub_0058E050); /* call 0x0058E050 */

loc_00588F15: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00588F19
 * Original: 0x00588F19 - 0x00588F43 (42 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588F19(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588F19: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00588F25; /* jge: greater or equal (signed >=) */

loc_00588F21: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00588F30;

loc_00588F25: ;
    ecx = 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00588F30; /* jle: less or equal (signed <=) */

loc_00588F2E: ;
    eax = ecx;

loc_00588F30: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00588F3Fu); RECOMP_ABI_CALL(0x00588C53u, sub_00588C53); /* call 0x00588C53 */

loc_00588F3F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00588F43
 * Original: 0x00588F43 - 0x00588F67 (36 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588F43(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588F43: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00588F4F; /* jge: greater or equal (signed >=) */

loc_00588F4B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00588F5A;

loc_00588F4F: ;
    eax = 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00588F5A; /* jle: less or equal (signed <=) */

loc_00588F58: ;
    ecx = eax;

loc_00588F5A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00588F64u); RECOMP_ABI_CALL(0x0058E251u, sub_0058E251); /* call 0x0058E251 */

loc_00588F64: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00588F67
 * Original: 0x00588F67 - 0x00588F8B (36 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588F67(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588F67: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00588F73; /* jge: greater or equal (signed >=) */

loc_00588F6F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00588F7E;

loc_00588F73: ;
    eax = 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00588F7E; /* jle: less or equal (signed <=) */

loc_00588F7C: ;
    ecx = eax;

loc_00588F7E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00588F88u); RECOMP_ABI_CALL(0x0058E27Cu, sub_0058E27C); /* call 0x0058E27C */

loc_00588F88: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00588F8B
 * Original: 0x00588F8B - 0x00588FB2 (39 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588F8B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588F8B: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00588F97; /* jge: greater or equal (signed >=) */

loc_00588F93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00588FA2;

loc_00588F97: ;
    ecx = 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00588FA2; /* jle: less or equal (signed <=) */

loc_00588FA0: ;
    eax = ecx;

loc_00588FA2: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00588FAFu); RECOMP_ABI_CALL(0x0058E2A7u, sub_0058E2A7); /* call 0x0058E2A7 */

loc_00588FAF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00588FB2
 * Original: 0x00588FB2 - 0x00588FB3 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00588FB2(void)
{

loc_00588FB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00588FB3
 * Original: 0x00588FB3 - 0x005890E4 (305 bytes, 103 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00588FB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00588FB3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(eax + 1));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588FC7u); RECOMP_ABI_CALL(0x00588DDAu, sub_00588DDA); /* call 0x00588DDA */

loc_00588FC7: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_005890E1; /* jl: less (signed <) */

loc_00588FD5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588FDDu); RECOMP_ABI_CALL(0x00588DB7u, sub_00588DB7); /* call 0x00588DB7 */

loc_00588FDD: ;
    esi = eax;
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588FE7u); RECOMP_ABI_CALL(0x00587FCBu, sub_00587FCB); /* call 0x00587FCB */

loc_00588FE7: ;
    PUSH32(esp, MEM32(esi + 0x18));
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00588FF1u); RECOMP_ABI_CALL(0x00588356u, sub_00588356); /* call 0x00588356 */

loc_00588FF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 6);
    MEM16(edi + 0xF4) = LO16(ebx);
    eax = edi + 0x13C;
    POP32(esp, ecx);

loc_00589004: ;
    xmm0 = XMM_SCALAR(MEMF(0x877EBC)); /* movss */
    MEM8(eax + 4) = LO8(ebx);
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00589004; /* jne: not equal / not zero */

loc_00589019: ;
    eax = MEM32(ebp + 0xC);
    MEM8(edi + 0x12) = 1;
    edi = MEM32(ebp + 8);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x3C) = ebx;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x48);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x4C);
    MEM32(esi + 0x2C) = eax;
    eax = 0x1000;
    MEM32(ebp + -60) = eax;
    MEM32(ebp + -56) = eax;
    eax = 0x7FFF;
    MEM8(esi + 0x14) = LO8(ebx);
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -28) = eax;
    eax = ZX8(MEM8(edi + 0xE));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = edi + 0x1C;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -48) = ebx;
    MEM32(ebp + -44) = ebx;
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -36) = 0xFFFF;
    MEM32(ebp + -32) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0058908B; /* jle: less or equal (signed <=) */

loc_00589073: ;
    MEM32(ebp + 0xC) = eax;

loc_00589076: ;
    eax = ZX8(MEM8(ecx));
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + eax * 4 + -60) = edx;
    if ((_fa != 0)) goto loc_00589076; /* jne: not equal / not zero */

loc_00589088: ;
    MEM32(ebp + -8) = ecx;

loc_0058908B: ;
    eax = esi + 0x30;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 0xC) = ebx;

loc_00589094: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + eax + -60);
    edx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005890C0; /* je: equal / zero */

loc_005890A2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    eax = MEM32(ebp + 0xC);
    { uint32_t _icall_target = MEM32(eax + 0x8DE2DC); PUSH32(esp, 0x005890AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005890A9u); } /* indirect call */
    }

loc_005890AF: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + eax + -60);
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + -4);
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + -8);

loc_005890C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x24 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00589094; /* jl: less (signed <) */

loc_005890CE: ;
    _fa = (uint32_t)(MEM8(edi + 0xF)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xF), LO8(ebx) (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_005890DE; /* je: equal / zero */

loc_005890D5: ;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx) = 0x7FFFFFFF;

loc_005890DE: ;
    eax = MEM32(ebp + -12);

loc_005890E1: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005890E4
 * Original: 0x005890E4 - 0x00589114 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005890E4(void)
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

loc_005890E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x005890EEu); RECOMP_ABI_CALL(0x00588DB7u, sub_00588DB7); /* call 0x00588DB7 */

loc_005890EE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00589112; /* je: equal / zero */

loc_005890F5: ;
    PUSH32(esp, ecx);
    fp_push(0.0); /* fldz */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x00589105u); RECOMP_ABI_CALL(0x00589F82u, sub_00589F82); /* call 0x00589F82 */

loc_00589105: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x0058910Fu); RECOMP_ABI_CALL(0x00588BC7u, sub_00588BC7); /* call 0x00588BC7 */

loc_0058910F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00589112: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00589114
 * Original: 0x00589114 - 0x00589172 (94 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00589114(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589114: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x00589122u); RECOMP_ABI_CALL(0x00588DB7u, sub_00588DB7); /* call 0x00588DB7 */

loc_00589122: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0058916F; /* je: equal / zero */

loc_00589129: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xE), LO8(edx) (8-bit) */
    eax = esi + 0x1C;
    if (CMP_BE(_fa, _fb)) goto loc_00589156; /* jbe: below or equal (unsigned <=) */

loc_00589133: ;
    PUSH32(esp, ebx);

loc_00589134: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058913F; /* je: equal / zero */

loc_0058913A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00589149; /* jne: not equal / not zero */

loc_0058913F: ;
    ebx = MEM32(eax + 8);
    ecx = ZX8(LO8(ecx));
    MEM32(edi + ecx * 4 + 0x30) = ebx;

loc_00589149: ;
    ecx = ZX8(MEM8(esi + 0xE));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00589134; /* jl: less (signed <) */

loc_00589155: ;
    POP32(esp, ebx);

loc_00589156: ;
    PUSH32(esp, MEM32(edi + 0x30));
    PUSH32(esp, MEM32(edi + 0x18));
    PUSH32(esp, 0x00589161u); RECOMP_ABI_CALL(0x00588E6Eu, sub_00588E6E); /* call 0x00588E6E */

loc_00589161: ;
    PUSH32(esp, MEM32(edi + 0x38));
    PUSH32(esp, MEM32(edi + 0x18));
    PUSH32(esp, 0x0058916Cu); RECOMP_ABI_CALL(0x00588EB7u, sub_00588EB7); /* call 0x00588EB7 */

loc_0058916C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0058916F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00589172
 * Original: 0x00589172 - 0x005892DE (364 bytes, 119 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589172(void)
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

loc_00589172: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589183u); RECOMP_ABI_CALL(0x00588DB7u, sub_00588DB7); /* call 0x00588DB7 */

loc_00589183: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_005891C5; /* je: equal / zero */

loc_0058918A: ;
    PUSH32(esp, MEM32(edi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589192u); RECOMP_ABI_CALL(0x00587FCBu, sub_00587FCB); /* call 0x00587FCB */

loc_00589192: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x14), 1 (8-bit) */
    edx = eax;
    POP32(esp, ecx);
    MEM32(ebp + -4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_005891D1; /* jne: not equal / not zero */

loc_0058919E: ;
    _fa = (uint32_t)(MEM32(edx + 0x128)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x128), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005891D1; /* jne: not equal / not zero */

loc_005891A7: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005891D1; /* jne: not equal / not zero */

loc_005891AF: ;
    PUSH32(esp, edi);
    ecx = 0x919B34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005891BAu); RECOMP_ABI_CALL(0x00585FD5u, sub_00585FD5); /* call 0x00585FD5 */

loc_005891BA: ;
    PUSH32(esp, edi);
    ecx = 0x919B38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005891C5u); RECOMP_ABI_CALL(0x00585FBBu, sub_00585FBB); /* call 0x00585FBB */

loc_005891C5: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005891CBu); RECOMP_ABI_CALL(0x00586DADu, sub_00586DAD); /* call 0x00586DAD */

loc_005891CB: ;
    POP32(esp, ecx);
    goto loc_005892DA;

loc_005891D1: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebx + 0xE)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0xE), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ebx + 0x1C;
    if (CMP_BE(_fa, _fb)) goto loc_00589214; /* jbe: below or equal (unsigned <=) */

loc_005891DF: ;
    eax = ZX8(MEM8(esi));
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4 + 0x30), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00589205; /* je: equal / zero */

loc_005891EB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edi + 0x18));
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8DE2DC); PUSH32(esp, 0x005891F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005891EFu); } /* indirect call */
    }

loc_005891F6: ;
    eax = ZX8(MEM8(esi));
    edx = MEM32(ebp + -4);
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(esi + 8);
    MEM32(edi + eax * 4 + 0x30) = ecx;

loc_00589205: ;
    eax = ZX8(MEM8(ebx + 0xE));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005891DF; /* jl: less (signed <) */

loc_00589214: ;
    _fa = (uint32_t)(MEM8(ebx + 0xF)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0xF), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005892D6; /* je: equal / zero */

loc_0058921E: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x14), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005892CC; /* jne: not equal / not zero */

loc_00589228: ;
    SET_LO16(eax, MEM16(edx + 0x14));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    ecx = MEM32(edx + 0x120);
    if (CMP_EQ(_fa, _fb)) goto loc_005892D6; /* je: equal / zero */

loc_0058923B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    eax = ZX16(LO16(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(ebp + 8) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_005892D6; /* je: equal / zero */

loc_00589257: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1C), eax (32-bit) */
    eax = MEM32(ecx + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_00589285; /* jne: not equal / not zero */

loc_00589262: ;
    MEM32(edi + 0x20) = eax;
    eax = MEM32(ecx + 0x14);
    fp_push((double)SMEM32(ecx + 0x14)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00589275; /* jge: greater or equal (signed >=) */

loc_0058926F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00589275: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(ebp + 8); /* cvtss2si */

loc_00589280: ;
    MEM32(esi + 4) = eax;
    goto loc_005892D6;

loc_00589285: ;
    edx = MEM32(ecx + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0058929A; /* jge: greater or equal (signed >=) */

loc_00589294: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0058929A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(ebp + -4); /* cvtss2si */
    MEM32(esi) = eax;
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_005892BF; /* jge: greater or equal (signed >=) */

loc_005892B9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_005892BF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(ebp + 8); /* cvtss2si */
    goto loc_00589280;

loc_005892CC: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x7FFFFFFF;

loc_005892D6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_005892DA: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005892DE
 * Original: 0x005892DE - 0x005893CE (240 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005892DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005892DE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(0x919B1E) = 1;
    PUSH32(esp, 0x005892ECu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_005892EC: ;
    esi = MEM32(0x919B34);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0058939C;

loc_005892F9: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00589358; /* jne: not equal / not zero */

loc_005892FE: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x20) = ebx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058932A; /* jne: not equal / not zero */

loc_0058930D: ;
    PUSH32(esp, 0x00589312u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_00589312: ;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x28));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x00589328u); RECOMP_ABI_CALL(0x0058833Bu, sub_0058833B); /* call 0x0058833B */

loc_00589328: ;
    goto loc_0058934C;

loc_0058932A: ;
    PUSH32(esp, 0x0058932Fu); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058932F: ;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x28));
    PUSH32(esp, 0x3E8);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x00589349u); RECOMP_ABI_CALL(0x0058833Bu, sub_0058833B); /* call 0x0058833B */

loc_00589349: ;
    MEM32(esi + 0x1C) = eax;

loc_0058934C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00589354u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_00589354: ;
    MEM8(esi + 0x14) = 1;

loc_00589358: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058939A; /* jne: not equal / not zero */

loc_0058935E: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058939A; /* jne: not equal / not zero */

loc_00589366: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x0058936Eu); RECOMP_ABI_CALL(0x00587FCBu, sub_00587FCB); /* call 0x00587FCB */

loc_0058936E: ;
    _fa = (uint32_t)(MEM32(eax + 0x134)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x134), ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0058939A; /* jle: less or equal (signed <=) */

loc_00589377: ;
    PUSH32(esp, 0x0058937Cu); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058937C: ;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x28));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x00589392u); RECOMP_ABI_CALL(0x0058833Bu, sub_0058833B); /* call 0x0058833B */

loc_00589392: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0058939Au); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058939A: ;
    esi = MEM32(esi);

loc_0058939C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005892F9; /* jne: not equal / not zero */

loc_005893A4: ;
    MEM8(0x919B1E) = LO8(ebx);
    goto loc_005893BF;

loc_005893AC: ;
    PUSH32(esp, MEM32(0x919B2C));
    PUSH32(esp, 0x005893B7u); RECOMP_ABI_CALL(0x0058C6EFu, sub_0058C6EF); /* call 0x0058C6EF */

loc_005893B7: ;
    _fb = (uint32_t)(1) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    MEM8(0x919B1D) = MEM8(0x919B1D) - 1;
    _fa = (uint32_t)(MEM8(0x919B1D)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    POP32(esp, ecx);

loc_005893BF: ;
    _fa = (uint32_t)(MEM8(0x919B1D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919B1D), LO8(ebx) (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005893AC; /* jg: greater (signed >) */

loc_005893C7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00587904(); return; /* tail jmp 0x00587904 */

}

/**
 * sub_005893CE
 * Original: 0x005893CE - 0x0058942E (96 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005893CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005893CE: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x919B30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x919B30), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058942A; /* je: equal / zero */

loc_005893D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5892DE);
    PUSH32(esp, 0x005893E4u); RECOMP_ABI_CALL(0x0058DE60u, sub_0058DE60); /* call 0x0058DE60 */

loc_005893E4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x919B1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919B1C), LO8(ebx) (8-bit) */
    POP32(esp, ecx);
    if (CMP_BE(_fa, _fb)) goto loc_00589411; /* jbe: below or equal (unsigned <=) */

loc_005893EF: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005893F2: ;
    eax = MEM32(0x919B30);
    PUSH32(esp, MEM32(esi + eax + 0x18));
    PUSH32(esp, 0x00589400u); RECOMP_ABI_CALL(0x005886F7u, sub_005886F7); /* call 0x005886F7 */

loc_00589400: ;
    eax = ZX8(MEM8(0x919B1C));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_005893F2; /* jl: less (signed <) */

loc_00589410: ;
    POP32(esp, esi);

loc_00589411: ;
    MEM32(0x919B38) = ebx;
    MEM32(0x919B34) = ebx;
    MEM8(0x919B1C) = LO8(ebx);
    MEM32(0x919B30) = ebx;
    POP32(esp, edi);

loc_0058942A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0058942E
 * Original: 0x0058942E - 0x00589469 (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0058942E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058942E: ;
    _fa = (uint32_t)(MEM32(0x919B30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x919B30), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00589466; /* je: equal / zero */

loc_00589437: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x919B1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919B1C), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00589465; /* jbe: below or equal (unsigned <=) */

loc_00589443: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00589446: ;
    eax = MEM32(0x919B30);
    PUSH32(esp, MEM32(esi + eax + 0x18));
    PUSH32(esp, 0x00589454u); RECOMP_ABI_CALL(0x00588356u, sub_00588356); /* call 0x00588356 */

loc_00589454: ;
    eax = ZX8(MEM8(0x919B1C));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00589446; /* jl: less (signed <) */

loc_00589464: ;
    POP32(esp, esi);

loc_00589465: ;
    POP32(esp, edi);

loc_00589466: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00589469
 * Original: 0x00589469 - 0x005894AD (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00589469(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589469: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, 0x00589477u); RECOMP_ABI_CALL(0x00588DB7u, sub_00588DB7); /* call 0x00588DB7 */

loc_00589477: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_005894AA; /* je: equal / zero */

loc_0058947E: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x00589486u); RECOMP_ABI_CALL(0x00588356u, sub_00588356); /* call 0x00588356 */

loc_00589486: ;
    POP32(esp, ecx);
    PUSH32(esp, esi);
    ecx = 0x919B34;
    PUSH32(esp, 0x00589492u); RECOMP_ABI_CALL(0x00585FD5u, sub_00585FD5); /* call 0x00585FD5 */

loc_00589492: ;
    PUSH32(esp, esi);
    ecx = 0x919B38;
    PUSH32(esp, 0x0058949Du); RECOMP_ABI_CALL(0x00585FBBu, sub_00585FBB); /* call 0x00585FBB */

loc_0058949D: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xC), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005894AA; /* jne: not equal / not zero */

loc_005894A3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x005894A9u); RECOMP_ABI_CALL(0x00589114u, sub_00589114); /* call 0x00589114 */

loc_005894A9: ;
    POP32(esp, ecx);

loc_005894AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005894AD
 * Original: 0x005894AD - 0x005895F4 (327 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005894AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005894AD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005894BBu); RECOMP_ABI_CALL(0x005893CEu, sub_005893CE); /* call 0x005893CE */

loc_005894BB: ;
    eax = 0x588FB3;
    MEM32(0x8DE1C4) = eax;
    MEM32(0x8DE1C8) = eax;
    eax = 0x589469;
    MEM32(0x8DE1D4) = eax;
    MEM32(0x8DE1D8) = eax;
    eax = 0x5890E4;
    MEM32(0x8DE1E4) = eax;
    MEM32(0x8DE1E8) = eax;
    eax = 0x589114;
    MEM32(0x8DE1F4) = eax;
    MEM32(0x8DE1F8) = eax;
    eax = 0x589172;
    MEM32(0x919EDC) = 0x5893CE;
    MEM32(0x919EF0) = 0x58942E;
    MEM32(0x8DE204) = eax;
    MEM32(0x8DE208) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058951Fu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058951F: ;
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0x10);
    MEM32(0x919B30) = eax;
    esi = ebx + ebx * 2;
    eax = ebp + -24;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + esi;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM8(0x919B1C) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589542u); RECOMP_ABI_CALL(0x005889D9u, sub_005889D9); /* call 0x005889D9 */

loc_00589542: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    MEM8(ebp + -19) = 0;
    edi = eax;
    edi = edi & 0x7FFFFFFC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005895D0; /* jle: less or equal (signed <=) */

loc_0058955F: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00589563: ;
    eax = MEM32(0x919B30);
    ecx = MEM32(ebp + 0xC);
    esi = ecx + eax;
    PUSH32(esp, esi);
    ecx = 0x919B38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589579u); RECOMP_ABI_CALL(0x00585FBBu, sub_00585FBB); /* call 0x00585FBB */

loc_00589579: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -24;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058958Au); RECOMP_ABI_CALL(0x005889B9u, sub_005889B9); /* call 0x005889B9 */

loc_0058958A: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + edi;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x60;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    eax = 0x1000;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    eax = 0x7FFF;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = ecx;
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 0x48) = 0xFFFF;
    MEM32(esi + 0x4C) = ecx;
    MEM32(esi + 0x50) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00589563; /* jl: less (signed <) */

loc_005895D0: ;
    PUSH32(esp, 0x5892DE);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005895DAu); RECOMP_ABI_CALL(0x0058DE47u, sub_0058DE47); /* call 0x0058DE47 */

loc_005895DA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005895DFu); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_005895DF: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005895E8u); RECOMP_ABI_CALL(0x00587B31u, sub_00587B31); /* call 0x00587B31 */

loc_005895E8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005895FB
 * Original: 0x005895FB - 0x00589659 (94 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005895FB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005895FB: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF7u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00589633; /* jg: greater (signed >) */

loc_00589604: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0058964D; /* je: equal / zero */

loc_00589606: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFEDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFEDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058962F; /* je: equal / zero */

loc_0058960B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFEEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFEEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058962B; /* je: equal / zero */

loc_00589610: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF1u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00589627; /* je: equal / zero */

loc_00589615: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF2u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00589623; /* je: equal / zero */

loc_0058961A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF6u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF6u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00589646; /* jne: not equal / not zero */

loc_0058961F: ;
    PUSH32(esp, 0xFFFFFFF7u);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_00589623: ;
    PUSH32(esp, 0xFFFFFFFCu);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_00589627: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_0058962B: ;
    PUSH32(esp, 0xFFFFFFF9u);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_0058962F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00589633: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF8u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00589655; /* je: equal / zero */

loc_00589638: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF9u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00589651; /* je: equal / zero */

loc_0058963D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058964D; /* je: equal / zero */

loc_00589642: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058964A; /* je: equal / zero */

loc_00589646: ;
    PUSH32(esp, 0xFFFFFFFAu);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_0058964A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0058964D: ;
    PUSH32(esp, 0xFFFFFFFEu);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_00589651: ;
    PUSH32(esp, 0xFFFFFFF5u);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_00589655: ;
    PUSH32(esp, 0xFFFFFFF6u);
    POP32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0058967D
 * Original: 0x0058967D - 0x005896AB (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058967D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058967D: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589691u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589691: ;
    SET_LO16(eax, MEM16(ebp + 0x7C));
    MEM16(ebp + -52) = LO16(eax);
    eax = ebp + -88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005896A2u); RECOMP_ABI_CALL(0x0058A441u, sub_0058A441); /* call 0x0058A441 */

loc_005896A2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005896AB
 * Original: 0x005896AB - 0x005896D1 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005896AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005896AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -204;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005896C0u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_005896C0: ;
    eax = ZX16(MEM16(ebp + -168));
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005896D1
 * Original: 0x005896D1 - 0x005896FD (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005896D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005896D1: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005896E5u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_005896E5: ;
    SET_LO8(eax, MEM8(ebp + 0x7C));
    MEM8(ebp + -26) = LO8(eax);
    eax = ebp + -88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005896F4u); RECOMP_ABI_CALL(0x0058A441u, sub_0058A441); /* call 0x0058A441 */

loc_005896F4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005896FD
 * Original: 0x005896FD - 0x00589729 (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005896FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005896FD: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589711u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589711: ;
    SET_LO8(eax, MEM8(ebp + 0x7C));
    MEM8(ebp + -36) = LO8(eax);
    eax = ebp + -88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589720u); RECOMP_ABI_CALL(0x0058A441u, sub_0058A441); /* call 0x0058A441 */

loc_00589720: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00589729
 * Original: 0x00589729 - 0x00589755 (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589729(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589729: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058973Du); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_0058973D: ;
    eax = MEM32(ebp + 0x7C);
    MEM32(ebp + -56) = eax;
    eax = ebp + -88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058974Cu); RECOMP_ABI_CALL(0x0058A441u, sub_0058A441); /* call 0x0058A441 */

loc_0058974C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00589755
 * Original: 0x00589755 - 0x005897A4 (79 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589755(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00589755: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x7C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0058977F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0058976E: ;
    xmm1 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(ebp + 0x7C) = xmm1.f[0]; /* movss */

loc_0058977F: ;
    eax = ebp + -88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589788u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589788: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x7C)); /* movss */
    eax = ebp + -88;
    PUSH32(esp, eax);
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0058979Bu); RECOMP_ABI_CALL(0x0058A441u, sub_0058A441); /* call 0x0058A441 */

loc_0058979B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005897A4
 * Original: 0x005897A4 - 0x005897E6 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005897A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_005897A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -204;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005897B9u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_005897B9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -156)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    eax = MEM32(ebp + 8);
    POP32(esp, ecx);
    MEMF(eax) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_005897E2; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_005897D2: ;
    xmm1 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(eax) = xmm1.f[0]; /* movss */

loc_005897E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005897E6
 * Original: 0x005897E6 - 0x00589811 (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005897E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005897E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = ebp + -204;
    PUSH32(esp, eax);
    MEM8(esi) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589802u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589802: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 3 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0058980C; /* jne: not equal / not zero */

loc_00589809: ;
    MEM8(esi) = 1;

loc_0058980C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00589811
 * Original: 0x00589811 - 0x0058988D (124 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589811(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589811: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00589888; /* ja: above (unsigned >) */

loc_0058981C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x58988D); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00589823u) goto loc_00589823;
    if (_jt == 0x0058982Eu) goto loc_0058982E;
    if (_jt == 0x00589839u) goto loc_00589839;
    if (_jt == 0x00589844u) goto loc_00589844;
    if (_jt == 0x0058984Fu) goto loc_0058984F;
    if (_jt == 0x0058985Au) goto loc_0058985A;
    if (_jt == 0x00589865u) goto loc_00589865;
    if (_jt == 0x00589870u) goto loc_00589870;
    if (_jt == 0x0058987Bu) goto loc_0058987B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00589823: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x877F1C;
    goto loc_00589884;

loc_0058982E: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x877F14;
    goto loc_00589884;

loc_00589839: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x877F10;
    goto loc_00589884;

loc_00589844: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x877F0C;
    goto loc_00589884;

loc_0058984F: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x877F04;
    goto loc_00589884;

loc_0058985A: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x877EFC;
    goto loc_00589884;

loc_00589865: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x877EE8;
    goto loc_00589884;

loc_00589870: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x877ED8;
    goto loc_00589884;

loc_0058987B: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x877EC4;

loc_00589884: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00589888: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_005898B1
 * Original: 0x005898B1 - 0x005898F6 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005898B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005898B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ebp + -1;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005898C3u); RECOMP_ABI_CALL(0x005897E6u, sub_005897E6); /* call 0x005897E6 */

loc_005898C3: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005898D0; /* jne: not equal / not zero */

loc_005898CB: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    goto loc_005898F3;

loc_005898D0: ;
    _fa = (uint32_t)(MEM8(0x919E88)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919E88), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005898E1; /* jne: not equal / not zero */

loc_005898D9: ;
    MEM32(0x8DE30C) = esi;
    goto loc_005898F1;

loc_005898E1: ;
    MEM32(0x919BFC) = esi;
    MEM32(0x919C00) = 1;

loc_005898F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005898F3: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058993C
 * Original: 0x0058993C - 0x00589982 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058993C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058993C: ;
    PUSH32(esp, ebp);
    ebp = esp + -108;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589950u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589950: ;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0058995C; /* je: equal / zero */

loc_00589957: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    goto loc_0058997D;

loc_0058995C: ;
    eax = ZX16(MEM16(ebp + -96));
    ecx = MEM32(ebp + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058996E; /* jge: greater or equal (signed >=) */

loc_00589967: ;
    ecx = MEM32(ebp + 0x7C);
    MEM32(ecx) = eax;
    goto loc_0058997B;

loc_0058996E: ;
    eax = ZX16(MEM16(ebp + -94));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00589967; /* jg: greater (signed >) */

loc_00589976: ;
    eax = MEM32(ebp + 0x7C);
    MEM32(eax) = ecx;

loc_0058997B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0058997D: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x6C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00589982
 * Original: 0x00589982 - 0x005899E0 (94 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589982(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589982: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589996u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589996: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0x7C);
    eax = 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) ecx = eax; /* cmovg */
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x78), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005899AF; /* je: equal / zero */

loc_005899AA: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    goto loc_005899C8;

loc_005899AF: ;
    _fa = (uint32_t)(MEM8(0x919E88)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919E88), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005899CD; /* jne: not equal / not zero */

loc_005899B8: ;
    eax = ebp + -92;
    PUSH32(esp, eax);
    MEM16(ebp + -54) = LO16(ecx);
    PUSH32(esp, 0x005899C5u); RECOMP_ABI_CALL(0x0058A441u, sub_0058A441); /* call 0x0058A441 */

loc_005899C5: ;
    POP32(esp, ecx);

loc_005899C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005899C8: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_005899CD: ;
    MEM16(0x919C04) = LO16(ecx);
    MEM32(0x919C08) = 1;
    goto loc_005899C6;

}

/**
 * sub_005899E0
 * Original: 0x005899E0 - 0x00589A16 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005899E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005899E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -204;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005899FCu); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_005899FC: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00589A08; /* je: equal / zero */

loc_00589A03: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    goto loc_00589A13;

loc_00589A08: ;
    eax = ZX16(MEM16(ebp + -166));
    MEM32(esi) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00589A13: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00589A16
 * Original: 0x00589A16 - 0x00589A57 (65 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589A16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589A16: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x7C);
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589A31u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589A31: ;
    eax = MEM32(ebp + 0x78);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ecx);
    if ((_fa == 0)) goto loc_00589A49; /* je: equal / zero */

loc_00589A3A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00589A43; /* je: equal / zero */

loc_00589A3E: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    goto loc_00589A51;

loc_00589A43: ;
    eax = ZX8(MEM8(ebp + -83));
    goto loc_00589A4D;

loc_00589A49: ;
    eax = ZX8(MEM8(ebp + -86));

loc_00589A4D: ;
    MEM32(esi) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00589A51: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00589A57
 * Original: 0x00589A57 - 0x00589ACF (120 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589A57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589A57: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589A6Bu); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589A6B: ;
    eax = MEM32(ebp + 0x78);
    POP32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00589AAE; /* je: equal / zero */

loc_00589A75: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00589A7E; /* je: equal / zero */

loc_00589A79: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    goto loc_00589A98;

loc_00589A7E: ;
    _fa = (uint32_t)(MEM8(0x919E88)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919E88), LO8(ecx) (8-bit) */
    SET_LO8(eax, MEM8(ebp + 0x7C));
    if (CMP_NE(_fa, _fb)) goto loc_00589A9D; /* jne: not equal / not zero */

loc_00589A89: ;
    MEM8(ebp + -47) = LO8(eax);

loc_00589A8C: ;
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589A95u); RECOMP_ABI_CALL(0x0058A441u, sub_0058A441); /* call 0x0058A441 */

loc_00589A95: ;
    POP32(esp, ecx);

loc_00589A96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00589A98: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00589A9D: ;
    MEM8(0x919BEC) = LO8(eax);
    MEM32(0x919BF0) = 1;
    goto loc_00589A96;

loc_00589AAE: ;
    _fa = (uint32_t)(MEM8(0x919E88)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919E88), LO8(ecx) (8-bit) */
    SET_LO8(eax, MEM8(ebp + 0x7C));
    if (CMP_NE(_fa, _fb)) goto loc_00589ABE; /* jne: not equal / not zero */

loc_00589AB9: ;
    MEM8(ebp + -50) = LO8(eax);
    goto loc_00589A8C;

loc_00589ABE: ;
    MEM8(0x919BDC) = LO8(eax);
    MEM32(0x919BE0) = 1;
    goto loc_00589A96;

}

/**
 * sub_00589B0E
 * Original: 0x00589B0E - 0x00589B50 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589B0E(void)
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

loc_00589B0E: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589B22u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589B22: ;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x78), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00589B2E; /* je: equal / zero */

loc_00589B29: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    goto loc_00589B4B;

loc_00589B2E: ;
    fp_push(MEMF(ebp + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB8B0)); /* fmul dword ptr [0x7ab8b0] */
    PUSH32(esp, 0x00589B3Cu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00589B3C: ;
    MEM8(ebp + -36) = LO8(eax);
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589B48u); RECOMP_ABI_CALL(0x0058A441u, sub_0058A441); /* call 0x0058A441 */

loc_00589B48: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00589B4B: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00589B50
 * Original: 0x00589B50 - 0x00589B8F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589B50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -204;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589B65u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589B65: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00589B71; /* je: equal / zero */

loc_00589B6C: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00589B71: ;
    eax = ZX8(MEM8(ebp + -148));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB2D0); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00589BAB
 * Original: 0x00589BAB - 0x00589BD7 (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589BAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589BAB: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589BBFu); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589BBF: ;
    eax = MEM32(ebp + 0x7C);
    MEM32(ebp + 0x68) = eax;
    eax = ebp + -88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589BCEu); RECOMP_ABI_CALL(0x0058A441u, sub_0058A441); /* call 0x0058A441 */

loc_00589BCE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00589BD7
 * Original: 0x00589BD7 - 0x00589C52 (123 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589BD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589BD7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -204;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589BECu); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589BEC: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589BF2u); RECOMP_ABI_CALL(0x005895FBu, sub_005895FB); /* call 0x005895FB */

loc_00589BF2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00589C03; /* jge: greater or equal (signed >=) */

loc_00589BFA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589C00u); RECOMP_ABI_CALL(0x005895FBu, sub_005895FB); /* call 0x005895FB */

loc_00589C00: ;
    POP32(esp, ecx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00589C03: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00589C05: ;
    MEM32(eax + 0x919BE0) = ecx;
    MEM32(eax + 0x919C08) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00589C05; /* jl: less (signed <) */

loc_00589C19: ;
    eax = ebp + -204;
    PUSH32(esp, eax);
    MEM32(0x919C00) = ecx;
    MEM8(0x919F51) = LO8(ecx);
    MEM32(0x919F54) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589C37u); RECOMP_ABI_CALL(0x0058A441u, sub_0058A441); /* call 0x0058A441 */

loc_00589C37: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(0x919BD8));
    PUSH32(esp, MEM32(0x919C24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589C4Bu); RECOMP_ABI_CALL(0x0058A635u, sub_0058A635); /* call 0x0058A635 */

loc_00589C4B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00589C52
 * Original: 0x00589C52 - 0x00589D40 (238 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589C52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589C52: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(0x919E88)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919E88), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00589D3B; /* jne: not equal / not zero */

loc_00589C6A: ;
    eax = MEM32(0x919ED8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00589C75; /* je: equal / zero */

loc_00589C73: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00589C75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00589C73u); } /* indirect call */
    }

loc_00589C75: ;
    eax = MEM32(0x919EF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00589C80; /* je: equal / zero */

loc_00589C7E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00589C80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00589C7Eu); } /* indirect call */
    }

loc_00589C80: ;
    eax = ebp + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589C89u); RECOMP_ABI_CALL(0x0058771Fu, sub_0058771F); /* call 0x0058771F */

loc_00589C89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_G(_fas, _fbs)) goto loc_00589D3B; /* jg: greater (signed >) */

loc_00589C92: ;
    eax = MEM32(0x8DE314);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00589CB2; /* jle: less or equal (signed <=) */

loc_00589C9D: ;
    edx = MEM32(0x91A318);
    _fa = (uint32_t)(MEM32(edx + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ecx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00589D3B; /* jne: not equal / not zero */

loc_00589CAD: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00589C9D; /* jl: less (signed <) */

loc_00589CB2: ;
    PUSH32(esp, 0x00589CB7u); RECOMP_ABI_CALL(0x0058E6A2u, sub_0058E6A2); /* call 0x0058E6A2 */

loc_00589CB7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00589CBEu); RECOMP_ABI_CALL(0x0058BC18u, sub_0058BC18); /* call 0x0058BC18 */

loc_00589CBE: ;
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589CC7u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589CC7: ;
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589CD0u); RECOMP_ABI_CALL(0x0058A5B1u, sub_0058A5B1); /* call 0x0058A5B1 */

loc_00589CD0: ;
    PUSH32(esp, MEM32(0x8DE30C));
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589CDFu); RECOMP_ABI_CALL(0x0058B8CAu, sub_0058B8CA); /* call 0x0058B8CA */

loc_00589CDF: ;
    eax = ebp + -96;
    PUSH32(esp, eax);
    MEM8(0x919E88) = 0;
    PUSH32(esp, 0x00589CEFu); RECOMP_ABI_CALL(0x0058A441u, sub_0058A441); /* call 0x0058A441 */

loc_00589CEF: ;
    MEM8(0x919E88) = 1;
    PUSH32(esp, 0x00589CFBu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_00589CFB: ;
    PUSH32(esp, MEM32(0x919EF4));
    PUSH32(esp, 0x00589D06u); RECOMP_ABI_CALL(0x0058A8B2u, sub_0058A8B2); /* call 0x0058A8B2 */

loc_00589D06: ;
    PUSH32(esp, 0x00589D0Bu); RECOMP_ABI_CALL(0x0058A517u, sub_0058A517); /* call 0x0058A517 */

loc_00589D0B: ;
    PUSH32(esp, 0x00589D10u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_00589D10: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00589D17u); RECOMP_ABI_CALL(0x0058B9ABu, sub_0058B9AB); /* call 0x0058B9AB */

loc_00589D17: ;
    SET_LO8(eax, MEM8(0x919D60));
    _fb = (uint32_t)(MEM8(0x919D5F)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(0x919D5F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x919C40) = LO8(eax);
    PUSH32(esp, 0x00589D2Fu); RECOMP_ABI_CALL(0x0058E6B8u, sub_0058E6B8); /* call 0x0058E6B8 */

loc_00589D2F: ;
    PUSH32(esp, 0x00589D34u); RECOMP_ABI_CALL(0x0058E350u, sub_0058E350); /* call 0x0058E350 */

loc_00589D34: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00589D36: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00589D3B: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    goto loc_00589D36;

}

/**
 * sub_00589D40
 * Original: 0x00589D40 - 0x00589D4D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00589D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589D40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x919E88)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919E88), 1 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00589D4D
 * Original: 0x00589D4D - 0x00589D5C (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00589D4D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589D4D: ;
    PUSH32(esp, 0x00589D52u); RECOMP_ABI_CALL(0x0058A47Eu, sub_0058A47E); /* call 0x0058A47E */

loc_00589D52: ;
    MEM32(0x919C24) = MEM32(0x919C24) & 0;
    _fa = (uint32_t)(MEM32(0x919C24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00589D5C
 * Original: 0x00589D5C - 0x00589D7C (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00589D5C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589D5C: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00589D67; /* je: equal / zero */

loc_00589D63: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_00589D67: ;
    eax = MEM32(esp + 8);
    MEM32(0x919C24) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x919BD8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00589DB7
 * Original: 0x00589DB7 - 0x00589DF9 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589DB7(void)
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

loc_00589DB7: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x78), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00589DCD; /* je: equal / zero */

loc_00589DC8: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    goto loc_00589DF4;

loc_00589DCD: ;
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589DD6u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589DD6: ;
    fp_push(MEMF(ebp + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AB8B0)); /* fmul dword ptr [0x7ab8b0] */
    PUSH32(esp, 0x00589DE4u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00589DE4: ;
    MEM8(ebp + -25) = LO8(eax);
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589DF0u); RECOMP_ABI_CALL(0x0058A441u, sub_0058A441); /* call 0x0058A441 */

loc_00589DF0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00589DF4: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00589DF9
 * Original: 0x00589DF9 - 0x00589E41 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589DF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589DF9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEMF(esi) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00589E18; /* je: equal / zero */

loc_00589E13: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    goto loc_00589E3E;

loc_00589E18: ;
    eax = ebp + -204;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589E24u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589E24: ;
    eax = ZX8(MEM8(ebp + -137));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB2D0); /* mulss */
    POP32(esp, ecx);
    MEMF(esi) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00589E3E: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00589E41
 * Original: 0x00589E41 - 0x00589E73 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589E41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589E41: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xCC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589E55u); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_00589E55: ;
    eax = MEM32(ebp + 0x78);
    MEM32(ebp + 0x68) = eax;
    eax = MEM32(ebp + 0x7C);
    MEM32(ebp + 0x6C) = eax;
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00589E6Au); RECOMP_ABI_CALL(0x0058A441u, sub_0058A441); /* call 0x0058A441 */

loc_00589E6A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00589E78
 * Original: 0x00589E78 - 0x00589E7D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00589E78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00589E78: ;
    g_seh_ebp = ebp; sub_00596648(); return; /* tail jmp 0x00596648 */

}

/**
 * sub_00589E7D
 * Original: 0x00589E7D - 0x00589E9C (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00589E7D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589E7D: ;
    eax = 0x589E73;
    _fa = (uint32_t)(MEM32(0x8DE2B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8DE2B0), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00589E99; /* je: equal / zero */

loc_00589E8A: ;
    MEM32(0x8DE2B0) = eax;
    MEM32(0x8DE2B4) = 0x589E78;

loc_00589E99: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00589E9C
 * Original: 0x00589E9C - 0x00589EA1 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00589E9C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00589E9C: ;
    g_seh_ebp = ebp; sub_0058DEA3(); return; /* tail jmp 0x0058DEA3 */

}

/**
 * sub_00589EA1
 * Original: 0x00589EA1 - 0x00589EA2 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00589EA1(void)
{

loc_00589EA1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00589EA2
 * Original: 0x00589EA2 - 0x00589EDF (61 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00589EA2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589EA2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x919C28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x919C28), eax (32-bit) */
    MEM32(0x919DE0) = 0x589EA1;
    if (CMP_NE(_fa, _fb)) goto loc_00589ED1; /* jne: not equal / not zero */

loc_00589EB6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x589E9C);
    PUSH32(esp, 0x00589EC4u); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_00589EC4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x919C28) = 1;

loc_00589ED1: ;
    PUSH32(esp, 0x58F365);
    PUSH32(esp, 0x00589EDBu); RECOMP_ABI_CALL(0x0059E8D5u, sub_0059E8D5); /* call 0x0059E8D5 */

loc_00589EDB: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00589EDF
 * Original: 0x00589EDF - 0x00589EF0 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00589EDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00589EDF: ;
    _fa = (uint32_t)(MEM8(0x919E88)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919E88), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00589EEB; /* jne: not equal / not zero */

loc_00589EE8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00589EEB: ;
    g_seh_ebp = ebp; sub_0058F36A(); return; /* tail jmp 0x0058F36A */

}

/**
 * sub_00589EF0
 * Original: 0x00589EF0 - 0x00589F09 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00589EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589EF0: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x00589F05u); RECOMP_ABI_CALL(0x0058826Fu, sub_0058826F); /* call 0x0058826F */

loc_00589F05: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00589F09
 * Original: 0x00589F09 - 0x00589F2A (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589F09(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589F09: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589F25u); RECOMP_ABI_CALL(0x00588794u, sub_00588794); /* call 0x00588794 */

loc_00589F25: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00589F2A
 * Original: 0x00589F2A - 0x00589F54 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00589F2A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00589F2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, esi);
    PUSH32(esp, 0x00589F33u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_00589F33: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00589F3Cu); RECOMP_ABI_CALL(0x0058DA58u, sub_0058DA58); /* call 0x0058DA58 */

loc_00589F3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00589F4B; /* je: equal / zero */

loc_00589F41: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0xC);
    MEM32(eax + 0x20) = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00589F4B: ;
    PUSH32(esp, 0x00589F50u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_00589F50: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00589F82
 * Original: 0x00589F82 - 0x0058A115 (403 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00589F82(void)
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

loc_00589F82: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589F8Fu); RECOMP_ABI_CALL(0x00587FCBu, sub_00587FCB); /* call 0x00587FCB */

loc_00589F8F: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00589F9E; /* jne: not equal / not zero */

loc_00589F96: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    goto loc_0058A112;

loc_00589F9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00589FEF; /* jne: not equal / not zero */

loc_00589FA8: ;
    esi = ebx + 0x15C;
    MEM32(ebp + -4) = 6;

loc_00589FB5: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    ecx = esi + -20;
    MEMF(ecx + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00589FE5; /* jnp: not parity */

loc_00589FD3: ;
    PUSH32(esp, ecx);
    ecx = 0x919B50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00589FDEu); RECOMP_ABI_CALL(0x00585FD5u, sub_00585FD5); /* call 0x00585FD5 */

loc_00589FDE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_00589FE5: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x24)) >> 32) & 1);
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00589FB5; /* jne: not equal / not zero */

loc_00589FED: ;
    goto loc_0058A02B;

loc_00589FEF: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = edi + edi * 8;
    esi = ebx + eax * 4 + 0x13C;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0058A02B; /* jnp: not parity */

loc_0058A015: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = 0x919B50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A023u); RECOMP_ABI_CALL(0x00585FD5u, sub_00585FD5); /* call 0x00585FD5 */

loc_0058A023: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */

loc_0058A02B: ;
    PUSH32(esp, MEM32(ebx + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A033u); RECOMP_ABI_CALL(0x0058C60Au, sub_0058C60A); /* call 0x0058C60A */

loc_0058A033: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058A10E; /* jl: less (signed <) */

loc_0058A03C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0058A0A7; /* jne: not equal / not zero */

loc_0058A041: ;
    esi = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(MEM32(0x919EF4))) >> 32) & 1);
    esi = esi + MEM32(0x919EF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0058A10E; /* jbe: below or equal (unsigned <=) */

loc_0058A058: ;
    edi = esi + 4;

loc_0058A05B: ;
    edx = (uint32_t)(int32_t)SMEM16(edi);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    ecx = edx + edx * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(0x919EF4))) >> 32) & 1);
    ecx = ecx + MEM32(0x919EF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0058A09A; /* jnp: not parity */

loc_0058A07D: ;
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8DE310)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    MEMF(ecx + 0x48) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A099u); RECOMP_ABI_CALL(0x0058BD73u, sub_0058BD73); /* call 0x0058BD73 */

loc_0058A099: ;
    POP32(esp, ecx);

loc_0058A09A: ;
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0058A05B; /* jl: less (signed <) */

loc_0058A0A5: ;
    goto loc_0058A10E;

loc_0058A0A7: ;
    esi = MEM32(0x919EF4);
    eax = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(eax + 0x23));
    ecx = ecx + ecx * 2;
    ecx = (uint32_t)(int32_t)SMEM8(edi + ecx * 2 + 0x877F1E);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF80u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFF80u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0058A10E; /* je: equal / zero */

loc_0058A0C9: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = edx + edx * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0058A10E; /* jnp: not parity */

loc_0058A0F1: ;
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8DE310)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    MEMF(ecx + 0x48) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A10Du); RECOMP_ABI_CALL(0x0058BD73u, sub_0058BD73); /* call 0x0058BD73 */

loc_0058A10D: ;
    POP32(esp, ecx);

loc_0058A10E: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

loc_0058A112: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058A115
 * Original: 0x0058A115 - 0x0058A16E (89 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A115(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A115: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0058A11Fu); RECOMP_ABI_CALL(0x0058FA4Eu, sub_0058FA4E); /* call 0x0058FA4E */

loc_0058A11F: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0058A129u); RECOMP_ABI_CALL(0x0058FA1Eu, sub_0058FA1E); /* call 0x0058FA1E */

loc_0058A129: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_0058A134; /* jge: greater or equal (signed >=) */

loc_0058A12F: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0058A134: ;
    eax = MEM32(0x919EF8);
    PUSH32(esp, esi);
    esi = MEM32(eax + edi * 8);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058A168; /* jl: less (signed <) */

loc_0058A145: ;
    ecx = ZX16(MEM16(esi + 6));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058A168; /* jge: greater or equal (signed >=) */

loc_0058A14D: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058A15Au); RECOMP_ABI_CALL(0x0058F9F8u, sub_0058F9F8); /* call 0x0058F9F8 */

loc_0058A15A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058A163u); RECOMP_ABI_CALL(0x0058F809u, sub_0058F809); /* call 0x0058F809 */

loc_0058A163: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0058A16B;

loc_0058A168: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);

loc_0058A16B: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058A16E
 * Original: 0x0058A16E - 0x0058A27F (273 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058A16E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A16E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0058A1A8; /* jne: not equal / not zero */

loc_0058A181: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x919D44)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x919D44), LO16(esi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058A279; /* jbe: below or equal (unsigned <=) */

loc_0058A190: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A196u); RECOMP_ABI_CALL(0x0058A16Eu, sub_0058A16E); /* call 0x0058A16E */

loc_0058A196: ;
    eax = ZX16(MEM16(0x919D44));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058A190; /* jl: less (signed <) */

loc_0058A1A3: ;
    goto loc_0058A279;

loc_0058A1A8: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A1AEu); RECOMP_ABI_CALL(0x0058FA1Eu, sub_0058FA1E); /* call 0x0058FA1E */

loc_0058A1AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0058A1BB; /* je: equal / zero */

loc_0058A1B3: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);
    goto loc_0058A27B;

loc_0058A1BB: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A1C1u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058A1C1: ;
    eax = MEM32(0x919EF8);
    esi = ebx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = MEM32(esi + eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x919E8C)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x919E8C), LO16(eax) (16-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0058A20F; /* jle: less or equal (signed <=) */

loc_0058A1DC: ;
    MEM32(ebp + 8) = eax;

loc_0058A1DF: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(0x919EF4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058A1F9; /* jne: not equal / not zero */

loc_0058A1F1: ;
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A1F8u); RECOMP_ABI_CALL(0x0058C175u, sub_0058C175); /* call 0x0058C175 */

loc_0058A1F8: ;
    POP32(esp, ecx);

loc_0058A1F9: ;
    eax = (uint32_t)(int32_t)SMEM16(0x919E8C);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x90;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058A1DF; /* jl: less (signed <) */

loc_0058A20F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058A260; /* jbe: below or equal (unsigned <=) */

loc_0058A217: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A21Eu); RECOMP_ABI_CALL(0x0058F9F8u, sub_0058F9F8); /* call 0x0058F9F8 */

loc_0058A21E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0058A257; /* je: equal / zero */

loc_0058A227: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0058A22B: ;
    eax = ebp + -212;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A23Bu); RECOMP_ABI_CALL(0x0058FA72u, sub_0058FA72); /* call 0x0058FA72 */

loc_0058A23B: ;
    PUSH32(esp, 2);
    MEM32(ebp + 8) = eax;
    eax = ebp + -212;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A24Eu); RECOMP_ABI_CALL(0x0058A2D2u, sub_0058A2D2); /* call 0x0058A2D2 */

loc_0058A24E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058A22B; /* jne: not equal / not zero */

loc_0058A257: ;
    eax = ZX16(MEM16(edi + 6));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058A217; /* jl: less (signed <) */

loc_0058A260: ;
    eax = MEM32(0x919EF8);
    MEM32(esi + eax) = MEM32(esi + eax) & 0;
    _fa = (uint32_t)(MEM32(esi + eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x919EF8);
    MEM8(esi + eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A278u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058A278: ;
    POP32(esp, edi);

loc_0058A279: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0058A27B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058A27F
 * Original: 0x0058A27F - 0x0058A2BE (63 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A27F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A27F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0058A28Du); RECOMP_ABI_CALL(0x0058A2BEu, sub_0058A2BE); /* call 0x0058A2BE */

loc_0058A28D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_0058A296; /* jge: greater or equal (signed >=) */

loc_0058A292: ;
    ebx = eax;
    goto loc_0058A2B9;

loc_0058A296: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(0x919EF8);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, MEM32(esi + eax));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0058A2ADu); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_0058A2AD: ;
    eax = MEM32(0x919EF8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + eax) = edi;
    POP32(esp, edi);

loc_0058A2B9: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0058A2BE
 * Original: 0x0058A2BE - 0x0058A2D2 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A2BE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A2BE: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x919EF8);
    ecx = MEM32(ecx + eax * 8);
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0058A2D2
 * Original: 0x0058A2D2 - 0x0058A333 (97 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058A2D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A2D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x17), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058A330; /* jle: less or equal (signed <=) */

loc_0058A2E2: ;
    PUSH32(esp, edi);

loc_0058A2E3: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x17));
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = SX8(LO8(eax));
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(esi + eax * 4 + 0x34);
    MEM32(ebp + -16) = ecx;
    eax = MEM32(esi + eax * 4 + 0x44);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x919E8E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919E8E), 0 (8-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0058A329; /* jle: less or equal (signed <=) */

loc_0058A311: ;
    eax = ebp + -20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi * 4 + 0x919EC4); PUSH32(esp, 0x0058A31Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0058A315u); } /* indirect call */
    }

loc_0058A31C: ;
    eax = (uint32_t)(int32_t)SMEM8(0x919E8E);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058A311; /* jl: less (signed <) */

loc_0058A329: ;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x17), 0 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0058A2E3; /* jg: greater (signed >) */

loc_0058A32F: ;
    POP32(esp, edi);

loc_0058A330: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058A333
 * Original: 0x0058A333 - 0x0058A3CF (156 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058A333(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A333: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x919EE4) = 0x58A16E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A34Eu); RECOMP_ABI_CALL(0x0058F9D6u, sub_0058F9D6); /* call 0x0058F9D6 */

loc_0058A34E: ;
    ecx = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    ecx = MEM32(0x919EF8);
    esi = ecx + eax * 8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = edi;
    MEM8(esi + 4) = 1;
    _fa = (uint32_t)(MEM8(0x919E8E)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919E8E), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058A3C4; /* jle: less or equal (signed <=) */

loc_0058A36F: ;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), LO16(ebx) (16-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0058A3C4; /* jbe: below or equal (unsigned <=) */

loc_0058A378: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A381u); RECOMP_ABI_CALL(0x0058F9F8u, sub_0058F9F8); /* call 0x0058F9F8 */

loc_0058A381: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0058A3B8; /* je: equal / zero */

loc_0058A38A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0058A38E: ;
    eax = ebp + -208;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A39Eu); RECOMP_ABI_CALL(0x0058FA72u, sub_0058FA72); /* call 0x0058FA72 */

loc_0058A39E: ;
    PUSH32(esp, ebx);
    MEM32(ebp + 0xC) = eax;
    eax = ebp + -208;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A3B0u); RECOMP_ABI_CALL(0x0058A2D2u, sub_0058A2D2); /* call 0x0058A2D2 */

loc_0058A3B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058A38E; /* jne: not equal / not zero */

loc_0058A3B8: ;
    eax = ZX16(MEM16(edi + 6));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058A378; /* jl: less (signed <) */

loc_0058A3C4: ;
    PUSH32(esp, 8);
    POP32(esp, eax);
    POP32(esp, edi);
    MEM8(esi + 4) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058A3CF
 * Original: 0x0058A3CF - 0x0058A441 (114 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A3CF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A3CF: ;
    _fa = (uint32_t)(MEM32(0x919C48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x919C48), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0058A42B; /* jne: not equal / not zero */

loc_0058A3DA: ;
    xmm0 = XMM_SCALAR(MEMF(0x877F48)); /* movss */
    PUSH32(esp, 0x27);
    POP32(esp, ecx);
    MEM16(0x919D44) = 0x10;
    MEM8(0x919D63) = 0x5A;
    MEM8(0x919D54) = 1;
    MEM8(0x919D4F) = 0;
    MEMF(0x919D50) = xmm0.f[0]; /* movss */
    esi = 0x919D3C;
    edi = 0x919DEC;
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
    PUSH32(esp, 0x0058A41Cu); RECOMP_ABI_CALL(0x0058B0ECu, sub_0058B0EC); /* call 0x0058B0EC */

loc_0058A41C: ;
    MEM32(0x919C4C) = eax;
    MEM32(0x919C48) = 1;

loc_0058A42B: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(0x919C4C);
    PUSH32(esp, 0x33);
    POP32(esp, ecx);
    esi = 0x919D20;
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
    esp += 4; return; /* ret */

}

/**
 * sub_0058A441
 * Original: 0x0058A441 - 0x0058A47E (61 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A441(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A441: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x27);
    POP32(esp, ecx);
    ebx = 0x919D3C;
    esi = eax + 0x1C;
    edi = ebx;
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
    PUSH32(esp, 5);
    esi = eax + 0xB8;
    POP32(esp, ecx);
    edi = 0x919DD8;
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
    PUSH32(esp, 0x0058A46Cu); RECOMP_ABI_CALL(0x0058B195u, sub_0058B195); /* call 0x0058B195 */

loc_0058A46C: ;
    PUSH32(esp, 0x27);
    POP32(esp, ecx);
    esi = ebx;
    edi = 0x919DEC;
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0058A47E
 * Original: 0x0058A47E - 0x0058A517 (153 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A47E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A47E: ;
    PUSH32(esp, 0x0058A483u); RECOMP_ABI_CALL(0x00589D40u, sub_00589D40); /* call 0x00589D40 */

loc_0058A483: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058A48B; /* jne: not equal / not zero */

loc_0058A487: ;
    PUSH32(esp, 0xFFFFFFF2u);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_0058A48B: ;
    eax = MEM32(0x919ED4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058A496; /* je: equal / zero */

loc_0058A494: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0058A496u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0058A494u); } /* indirect call */
    }

loc_0058A496: ;
    eax = MEM32(0x919EDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058A4A1; /* je: equal / zero */

loc_0058A49F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0058A4A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0058A49Fu); } /* indirect call */
    }

loc_0058A4A1: ;
    eax = MEM32(0x919EE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058A4AC; /* je: equal / zero */

loc_0058A4AA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0058A4ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0058A4AAu); } /* indirect call */
    }

loc_0058A4AC: ;
    eax = MEM32(0x919EEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058A4B7; /* je: equal / zero */

loc_0058A4B5: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0058A4B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0058A4B5u); } /* indirect call */
    }

loc_0058A4B7: ;
    eax = MEM32(0x919EE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058A4C2; /* je: equal / zero */

loc_0058A4C0: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0058A4C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0058A4C0u); } /* indirect call */
    }

loc_0058A4C2: ;
    PUSH32(esp, 0x0058A4C7u); RECOMP_ABI_CALL(0x0058E6A2u, sub_0058E6A2); /* call 0x0058E6A2 */

loc_0058A4C7: ;
    eax = MEM32(0x919EE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058A4D5; /* je: equal / zero */

loc_0058A4D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0058A4D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0058A4D2u); } /* indirect call */
    }

loc_0058A4D4: ;
    POP32(esp, ecx);

loc_0058A4D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0058A4DDu); RECOMP_ABI_CALL(0x0058BC18u, sub_0058BC18); /* call 0x0058BC18 */

loc_0058A4DD: ;
    PUSH32(esp, 0x0058A4E2u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058A4E2: ;
    PUSH32(esp, MEM32(0x919EF4));
    PUSH32(esp, 0x0058A4EDu); RECOMP_ABI_CALL(0x0058A8B2u, sub_0058A8B2); /* call 0x0058A8B2 */

loc_0058A4ED: ;
    PUSH32(esp, MEM32(0x919EF8));
    PUSH32(esp, 0x0058A4F8u); RECOMP_ABI_CALL(0x0058A8B2u, sub_0058A8B2); /* call 0x0058A8B2 */

loc_0058A4F8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0058A500u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058A500: ;
    PUSH32(esp, 0x0058A505u); RECOMP_ABI_CALL(0x0058A7ABu, sub_0058A7AB); /* call 0x0058A7AB */

loc_0058A505: ;
    esi = eax;
    MEM8(0x919E88) = 0;
    PUSH32(esp, 0x0058A513u); RECOMP_ABI_CALL(0x0058CA22u, sub_0058CA22); /* call 0x0058CA22 */

loc_0058A513: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058A517
 * Original: 0x0058A517 - 0x0058A5B1 (154 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A517(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A517: ;
    eax = (uint32_t)(int32_t)SMEM16(0x919E8C);
    PUSH32(esp, esi);
    esi = MEM32(0x8DE314);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058A535u); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_0058A535: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x919EF4) = eax;
    PUSH32(esp, 0x0058A541u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058A541: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x919E8C);
    eax = ecx + ecx * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x919EF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058A5AC; /* jle: less or equal (signed <=) */

loc_0058A55D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0058A55F: ;
    ecx = MEM32(0x919EF4);
    MEM32(edx + ecx + 0x64) = eax;
    ecx = MEM32(0x8DE314);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058A597; /* jle: less or equal (signed <=) */

loc_0058A575: ;
    ecx = MEM32(0x919EF4);
    ecx = MEM32(edx + ecx + 0x64);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(ecx + esi * 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x8DE314);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058A575; /* jl: less (signed <) */

loc_0058A597: ;
    eax = eax + ecx * 4;
    ecx = (uint32_t)(int32_t)SMEM16(0x919E8C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058A55F; /* jl: less (signed <) */

loc_0058A5AC: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058A5B1
 * Original: 0x0058A5B1 - 0x0058A635 (132 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A5B1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A5B1: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x919C00)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x919C00), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058A5CD; /* jne: not equal / not zero */

loc_0058A5BD: ;
    eax = MEM32(0x919BFC);
    MEM32(0x8DE30C) = eax;
    MEM32(0x919C00) = esi;

loc_0058A5CD: ;
    eax = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0058A5D3: ;
    ecx = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058A5F6; /* je: equal / zero */

loc_0058A5D9: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0058A630; /* jne: not equal / not zero */

loc_0058A5DD: ;
    _fa = (uint32_t)(MEM32(0x919BF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x919BF0), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058A626; /* je: equal / zero */

loc_0058A5E5: ;
    SET_LO8(ecx, MEM8(0x919BEC));
    MEM8(eax + 0x2D) = LO8(ecx);
    MEM32(0x919BF0) = esi;
    goto loc_0058A626;

loc_0058A5F6: ;
    _fa = (uint32_t)(MEM32(0x919BE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x919BE0), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058A60D; /* je: equal / zero */

loc_0058A5FE: ;
    SET_LO8(ecx, MEM8(0x919BDC));
    MEM8(eax + 0x2A) = LO8(ecx);
    MEM32(0x919BE0) = esi;

loc_0058A60D: ;
    _fa = (uint32_t)(MEM32(0x919C08)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x919C08), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058A626; /* je: equal / zero */

loc_0058A615: ;
    SET_LO16(ecx, MEM16(0x919C04));
    MEM16(eax + 0x26) = LO16(ecx);
    MEM32(0x919C08) = esi;

loc_0058A626: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058A5D3; /* jl: less (signed <) */

loc_0058A62C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0058A630: ;
    PUSH32(esp, 0xFFFFFFFBu);
    POP32(esp, eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058A635
 * Original: 0x0058A635 - 0x0058A734 (255 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A635(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A635: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x919E88)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919E88), LO8(ebx) (8-bit) */
    MEM8(0x8DF208) = 0x53;
    if (CMP_EQ(_fa, _fb)) goto loc_0058A64B; /* je: equal / zero */

loc_0058A647: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0058A64B: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0058A659u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058A659: ;
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x0058A666u); RECOMP_ABI_CALL(0x0058A755u, sub_0058A755); /* call 0x0058A755 */

loc_0058A666: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x919E8C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x919E8C), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058A68D; /* jne: not equal / not zero */

loc_0058A672: ;
    esi = 0x919D20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058A67Du); RECOMP_ABI_CALL(0x0058A3CFu, sub_0058A3CF); /* call 0x0058A3CF */

loc_0058A67D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058A731; /* jl: less (signed <) */

loc_0058A686: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058A68Cu); RECOMP_ABI_CALL(0x0058A441u, sub_0058A441); /* call 0x0058A441 */

loc_0058A68C: ;
    POP32(esp, ecx);

loc_0058A68D: ;
    PUSH32(esp, MEM32(0x919D40));
    PUSH32(esp, 0x0058A698u); RECOMP_ABI_CALL(0x0058A906u, sub_0058A906); /* call 0x0058A906 */

loc_0058A698: ;
    PUSH32(esp, 0x0058A69Du); RECOMP_ABI_CALL(0x0058CA12u, sub_0058CA12); /* call 0x0058CA12 */

loc_0058A69D: ;
    MEM8(0x919E88) = 1;
    PUSH32(esp, 0x0058A6A9u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058A6A9: ;
    PUSH32(esp, 0x0058A6AEu); RECOMP_ABI_CALL(0x0058A517u, sub_0058A517); /* call 0x0058A517 */

loc_0058A6AE: ;
    eax = ZX16(MEM16(0x919D44));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058A6BEu); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_0058A6BE: ;
    MEM32(0x919EF8) = eax;
    PUSH32(esp, 0x0058A6C8u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058A6C8: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    MEM32(0x919E90) = ebx;
    MEMF(0x8DE310) = xmm0.f[0]; /* movss */
    MEM8(0x919E8E) = LO8(ebx);
    MEM8(0x919E8A) = LO8(ebx);
    MEM8(0x919E8B) = LO8(ebx);
    PUSH32(esp, 0x0058A6F6u); RECOMP_ABI_CALL(0x0058B9ABu, sub_0058B9AB); /* call 0x0058B9AB */

loc_0058A6F6: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058A715; /* jge: greater or equal (signed >=) */

loc_0058A6FF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0058A705u); RECOMP_ABI_CALL(0x0058BC18u, sub_0058BC18); /* call 0x0058BC18 */

loc_0058A705: ;
    POP32(esp, ecx);
    PUSH32(esp, 0x0058A70Bu); RECOMP_ABI_CALL(0x0058CA22u, sub_0058CA22); /* call 0x0058CA22 */

loc_0058A70B: ;
    MEM8(0x919E88) = LO8(ebx);
    eax = esi;
    goto loc_0058A731;

loc_0058A715: ;
    SET_LO8(eax, MEM8(0x919D60));
    _fb = (uint32_t)(MEM8(0x919D5F)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(0x919D5F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(0x919C40) = LO8(eax);
    PUSH32(esp, 0x0058A72Au); RECOMP_ABI_CALL(0x0058E6B8u, sub_0058E6B8); /* call 0x0058E6B8 */

loc_0058A72A: ;
    PUSH32(esp, 0x0058A72Fu); RECOMP_ABI_CALL(0x0058E350u, sub_0058E350); /* call 0x0058E350 */

loc_0058A72F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0058A731: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0058A734
 * Original: 0x0058A734 - 0x0058A755 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A734(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A734: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    eax = MEM32(0x919EFC);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_0058A754; /* jbe: below or equal (unsigned <=) */

loc_0058A750: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = eax;

loc_0058A754: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0058A755
 * Original: 0x0058A755 - 0x0058A7AB (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A755(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A755: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    MEM32(0x919EFC) = ecx;
    MEM32(ecx + 8) = eax;
    edx = ecx + eax + -8;
    PUSH32(esp, esi);
    esi = MEM32(0x919EFC);
    MEM32(esi + 4) = edx;
    edx = MEM32(0x919EFC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    ecx = MEM32(0x919EFC);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + 0xF;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x919EFC);
    MEM32(ecx) = MEM32(ecx) & 0xFFFFFFF0u;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(0x919EFC);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + -32;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(0x919EFC);
    MEM32(ecx + 0x10) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058A7AB
 * Original: 0x0058A7AB - 0x0058A7B0 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A7AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0058A7AB: ;
    g_seh_ebp = ebp; sub_0058FF3C(); return; /* tail jmp 0x0058FF3C */

}

/**
 * sub_0058A7B0
 * Original: 0x0058A7B0 - 0x0058A8B2 (258 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058A7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A7B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x919EFC);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0058A7D8; /* jne: not equal / not zero */

loc_0058A7D3: ;
    eax = MEM32(esi + 0xC);
    goto loc_0058A835;

loc_0058A7D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0058A821; /* jge: greater or equal (signed >=) */

loc_0058A7DF: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esi + 4);
    eax = eax + ecx * 8;
    if (CMP_NE(_fa, _fb)) goto loc_0058A7F2; /* jne: not equal / not zero */

loc_0058A7EC: ;
    eax = MEM32(eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0058A7FC;

loc_0058A7F2: ;
    edi = MEM32(eax + 0xC);
    _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(eax + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0058A7FC: ;
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A80Fu); RECOMP_ABI_CALL(0x0058A734u, sub_0058A734); /* call 0x0058A734 */

loc_0058A80F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 8) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0058A853; /* jle: less or equal (signed <=) */

loc_0058A816: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0058A7DF; /* jg: greater (signed >) */

loc_0058A821: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + -4);
    eax = eax + ecx * 8 + 8;
    edi = MEM32(eax + 4);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0058A835: ;
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058A848u); RECOMP_ABI_CALL(0x0058A734u, sub_0058A734); /* call 0x0058A734 */

loc_0058A848: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 8) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_0058A875; /* jle: less or equal (signed <=) */

loc_0058A84F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0058A8AD;

loc_0058A853: ;
    ecx = MEM32(esi + 0x14);
    goto loc_0058A870;

loc_0058A858: ;
    eax = MEM32(esi + 4);
    eax = eax + ecx * 8;
    edx = MEM32(eax + 8);
    MEM32(eax) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(eax + 4) = edx;
    esi = MEM32(0x919EFC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0058A870: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058A858; /* jl: less (signed <) */

loc_0058A875: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + -4);
    eax = eax + ecx * 8;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebx;
    eax = MEM32(0x919EFC);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(0x919EFC);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 0xFFFFFFF8u;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x919EFC);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058A8AD; /* jge: greater or equal (signed >=) */

loc_0058A8AA: ;
    MEM32(ecx + 0x10) = edx;

loc_0058A8AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058A8B2
 * Original: 0x0058A8B2 - 0x0058A906 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A8B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A8B2: ;
    eax = MEM32(0x919EFC);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058A904; /* jge: greater or equal (signed >=) */

loc_0058A8C7: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);

loc_0058A8CB: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058A8D9; /* je: equal / zero */

loc_0058A8CF: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0058A8CB; /* jg: greater (signed >) */

loc_0058A8D7: ;
    goto loc_0058A903;

loc_0058A8D9: ;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x919EFC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 8;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0058A8F9;

loc_0058A8E7: ;
    eax = MEM32(eax + 4);
    eax = eax + ecx * 8;
    edx = MEM32(eax + -8);
    MEM32(eax) = edx;
    edx = MEM32(eax + -4);
    MEM32(eax + 4) = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0058A8F9: ;
    eax = MEM32(0x919EFC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0058A8E7; /* jg: greater (signed >) */

loc_0058A903: ;
    POP32(esp, edi);

loc_0058A904: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058A906
 * Original: 0x0058A906 - 0x0058A921 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A906(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A906: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0058A908: ;
    ecx = MEM32(eax + 0x8DE318);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    MEM32(eax + 0x919C4C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0058A908; /* jl: less (signed <) */

loc_0058A920: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0058A921
 * Original: 0x0058A921 - 0x0058A9C2 (161 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058A921(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0058A921: ;
    ecx = MEM32(0x919C60);
    PUSH32(esp, esi);
    esi = MEM32(0x919C64);
    eax = ecx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0058A93D; /* jb: below (unsigned <) */

loc_0058A935: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0058A93D; /* jb: below (unsigned <) */

loc_0058A939: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0058A940;

loc_0058A93D: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0058A940: ;
    ecx = MEM32(0x919C5C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x919C60) = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x919C58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x919C5C) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(0x919C54);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x919C58) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(0x919C54) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(0x919C50)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(0x919C50) = MEM32(0x919C50) + eax;
    _fa = (uint32_t)(MEM32(0x919C50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x919C50);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x919C64) = esi;
    POP32(esp, esi);
    if ((_fa != 0)) goto loc_0058A9C1; /* jne: not equal / not zero */

loc_0058A99B: ;
    MEM32(0x919C60) = MEM32(0x919C60) + 1;
    _fa = (uint32_t)(MEM32(0x919C60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0058A9C1; /* jne: not equal / not zero */

loc_0058A9A3: ;
    MEM32(0x919C5C) = MEM32(0x919C5C) + 1;
    _fa = (uint32_t)(MEM32(0x919C5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0058A9C1; /* jne: not equal / not zero */

loc_0058A9AB: ;
    MEM32(0x919C58) = MEM32(0x919C58) + 1;
    _fa = (uint32_t)(MEM32(0x919C58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0058A9C1; /* jne: not equal / not zero */

loc_0058A9B3: ;
    MEM32(0x919C54) = MEM32(0x919C54) + 1;
    _fa = (uint32_t)(MEM32(0x919C54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0058A9C1; /* jne: not equal / not zero */

loc_0058A9BB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x919C50) = eax;

loc_0058A9C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0058A9E0
 * Original: 0x0058A9E0 - 0x0058AA24 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058A9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058A9E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x180;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    MEM8(ebp + -384) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0058AA0E; /* je: equal / zero */

loc_0058A9F6: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -384;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AA09u); RECOMP_ABI_CALL(0x005CC6CDu, sub_005CC6CD); /* call 0x005CC6CD */

loc_0058AA09: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0058AA14;

loc_0058AA0E: ;
    MEM8(ebp + -384) = LO8(eax);

loc_0058AA14: ;
    eax = ebp + -384;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AA20u); RECOMP_ABI_CALL(0x005D9B7Fu, sub_005D9B7F); /* call 0x005D9B7F */

loc_0058AA20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058AA24
 * Original: 0x0058AA24 - 0x0058AB2F (267 bytes, 73 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058AA24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058AA24: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + 0x5C;
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058AA3Au); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058AA3A: ;
    eax = ebp + 0x3C;
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058AA45u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058AA45: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058AA6E; /* jne: not equal / not zero */

loc_0058AA4E: ;
    MEM16(ebp + 0x5C) = 0x69;
    MEM16(ebp + 0x6C) = 2;
    MEM16(ebp + 0x6A) = 4;
    MEM16(ebp + 0x6E) = 0x40;
    MEM16(ebp + 0x68) = 0x24;
    goto loc_0058AA80;

loc_0058AA6E: ;
    MEM16(ebp + 0x5C) = 1;
    MEM16(ebp + 0x6A) = 0x10;
    MEM16(ebp + 0x68) = 2;

loc_0058AA80: ;
    eax = ebp + 0x5C;
    MEM32(ebp + 0x48) = eax;
    eax = ZX16(MEM16(ebp + 0x68));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xBB80);
    MEM32(ebp + 0x64) = eax;
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    MEM16(ebp + 0x5E) = 1;
    MEM32(ebp + 0x60) = 0xBB80;
    PUSH32(esp, 0x0058AAADu); RECOMP_ABI_CALL(0x006BE9F5u, sub_006BE9F5); /* call 0x006BE9F5 */

loc_0058AAAD: ;
    ecx = ebp + -44;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x58) = ecx;

loc_0058AAB5: ;
    ecx = MEM32(eax * 4 + 0x87CF88);
    MEM32(ebp + eax * 8 + -44) = ecx;
    MEM32(ebp + eax * 8 + -40) = MEM32(ebp + eax * 8 + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + eax * 8 + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058AAB5; /* jl: less (signed <) */

loc_0058AACB: ;
    MEM32(ebp + eax * 8 + -44) = 0xB;
    ecx = 0xFFFFD8F0u;
    MEM32(ebp + eax * 8 + -40) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + eax * 8 + -44) = 0xC;
    MEM32(ebp + eax * 8 + -40) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x54) = eax;
    eax = ebp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, 0x0058AAF9u); RECOMP_ABI_CALL(0x006BD19Du, sub_006BD19D); /* call 0x006BD19D */

loc_0058AAF9: ;
    eax = ebp + 0x14;
    PUSH32(esp, 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058AB04u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058AB04: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    MEM32(ebp + 0x14) = 1;
    MEM32(ebp + 0x18) = 2;
    MEM32(ebp + 0x30) = 0xFF;
    PUSH32(esp, 0x0058AB27u); RECOMP_ABI_CALL(0x006BB2F3u, sub_006BB2F3); /* call 0x006BB2F3 */

loc_0058AB27: ;
    eax = MEM32(ebp + 0x70);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058AB2F
 * Original: 0x0058AB2F - 0x0058AB98 (105 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058AB2F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058AB2F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x919C98;

loc_0058AB42: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058AB50; /* je: equal / zero */

loc_0058AB46: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058AB50; /* jle: less or equal (signed <=) */

loc_0058AB4C: ;
    ebx = ecx;
    eax = esi;

loc_0058AB50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x919CB0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x919CB0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058AB42; /* jl: less (signed <) */

loc_0058AB5C: ;
    eax = eax + eax * 2;
    eax = eax * 4 + 0x919C90;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058AB6Cu); RECOMP_ABI_CALL(0x0058D9FDu, sub_0058D9FD); /* call 0x0058D9FD */

loc_0058AB6C: ;
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x0058AB77u); RECOMP_ABI_CALL(0x006B8ED7u, sub_006B8ED7); /* call 0x006B8ED7 */

loc_0058AB77: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0058AB7Du); RECOMP_ABI_CALL(0x0058AA24u, sub_0058AA24); /* call 0x0058AA24 */

loc_0058AB7D: ;
    MEM32(esi + 8) = eax;
    eax = edi + edi * 2;
    eax = eax * 4 + 0x919C90;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058AB91u); RECOMP_ABI_CALL(0x0058D9B4u, sub_0058D9B4); /* call 0x0058D9B4 */

loc_0058AB91: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0058AB98
 * Original: 0x0058AB98 - 0x0058ABAB (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058AB98(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058AB98: ;
    eax = ZX8(MEM8(0x919D4D));
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058ABA9u); RECOMP_ABI_CALL(0x0058C502u, sub_0058C502); /* call 0x0058C502 */

loc_0058ABA9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0058ABAB
 * Original: 0x0058ABAB - 0x0058AD48 (413 bytes, 116 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058ABAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058ABAB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebp + -128) = esi;
    MEM32(ebp + -124) = esi;
    MEM32(ebp + -120) = 1;
    MEM32(ebp + -116) = esi;
    MEM32(ebp + -112) = 2;
    MEM32(ebp + -108) = esi;
    MEM32(ebp + -104) = 3;
    MEM32(ebp + -100) = esi;
    MEM32(ebp + -96) = 4;
    MEM32(ebp + -92) = esi;
    MEM32(ebp + -88) = 5;
    MEM32(ebp + -84) = esi;
    edi = ebp + -80;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    SET_LO8(eax, MEM8(0x919D4A));
    MEM8(ebp + -12) = LO8(eax);
    eax = ZX16(MEM16(0x919D46));
    MEM32(ebp + -20) = eax;
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM8(ebp + -11) = 6;
    MEM32(ebp + -16) = 0x58AB98;
    MEM8(ebp + -10) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AC23u); RECOMP_ABI_CALL(0x005908B9u, sub_005908B9); /* call 0x005908B9 */

loc_0058AC23: ;
    eax = ZX16(MEM16(0x919D46));
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x3E8;
    ecx = edi;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0x18);
    MEM32(0x919CF0) = esi;
    MEM32(0x919CF8) = esi;
    MEM32(0x919CFC) = esi;
    MEM32(0x919CF4) = esi;
    MEM32(0x919CEC) = eax;
    eax = ebp + -64;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AC62u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058AC62: ;
    ecx = ZX16(MEM16(0x919D46));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x32);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x919CB8);
    MEM32(ebp + -64) = 0x18;
    MEM32(ebp + -60) = esi;
    MEM32(ebp + -56) = esi;
    MEM16(ebp + -40) = 1;
    MEM32(ebp + -36) = ecx;
    MEM16(ebp + -26) = 0x10;
    MEM16(ebp + -24) = LO16(esi);
    MEM32(ebp + -8) = 6;
    eax = eax & 0xFFFF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax + eax * 2;
    MEM32(0x919CE8) = eax;
    SET_LO16(eax, ZX8(MEM8(ebp + -11)));
    MEM16(ebp + -38) = LO16(eax);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebp + -28) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(ebp + -32) = eax;
    eax = ebp + -40;
    MEM32(ebp + -52) = eax;
    eax = ebp + -128;
    MEM32(ebp + -4) = eax;
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x919CB4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058ACE4u); RECOMP_ABI_CALL(0x006BE660u, sub_006BE660); /* call 0x006BE660 */

loc_0058ACE4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058ACE9u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058ACE9: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058ACEFu); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_0058ACEF: ;
    POP32(esp, ecx);
    MEM32(0x919CD0) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058ACFAu); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058ACFA: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x919CD0));
    PUSH32(esp, MEM32(0x919CB8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AD0Cu); RECOMP_ABI_CALL(0x006BDB7Du, sub_006BDB7D); /* call 0x006BDB7D */

loc_0058AD0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x919CB8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AD18u); RECOMP_ABI_CALL(0x006BB483u, sub_006BB483); /* call 0x006BB483 */

loc_0058AD18: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x919CD0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AD24u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058AD24: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x919CB8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AD35u); RECOMP_ABI_CALL(0x006BD19Du, sub_006BD19D); /* call 0x006BD19D */

loc_0058AD35: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x919CB8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AD44u); RECOMP_ABI_CALL(0x006BB363u, sub_006BB363); /* call 0x006BB363 */

loc_0058AD44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058AD48
 * Original: 0x0058AD48 - 0x0058ADA4 (92 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058AD48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058AD48: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x919CB8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AD5Du); RECOMP_ABI_CALL(0x006BB3C3u, sub_006BB3C3); /* call 0x006BB3C3 */

loc_0058AD5D: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x919CB8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AD6Cu); RECOMP_ABI_CALL(0x006BB447u, sub_006BB447); /* call 0x006BB447 */

loc_0058AD6C: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0058AD5D; /* jne: not equal / not zero */

loc_0058AD72: ;
    PUSH32(esp, MEM32(0x919CB8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AD7Du); RECOMP_ABI_CALL(0x006B8ED7u, sub_006B8ED7); /* call 0x006B8ED7 */

loc_0058AD7D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AD82u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058AD82: ;
    PUSH32(esp, MEM32(0x919CD0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AD8Du); RECOMP_ABI_CALL(0x0058A8B2u, sub_0058A8B2); /* call 0x0058A8B2 */

loc_0058AD8D: ;
    POP32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AD93u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058AD93: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AD98u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058AD98: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AD9Du); RECOMP_ABI_CALL(0x0059051Eu, sub_0059051E); /* call 0x0059051E */

loc_0058AD9D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058ADA2u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058ADA2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058ADA4
 * Original: 0x0058ADA4 - 0x0058AEAC (264 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058ADA4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0058ADA4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0058AEA8; /* jle: less or equal (signed <=) */

loc_0058ADBE: ;
    PUSH32(esp, esi);

loc_0058ADBF: ;
    eax = MEM32(0x919CF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0058AE5C; /* jg: greater (signed >) */

loc_0058ADCC: ;
    MEM32(0x919CF8) = MEM32(0x919CF8) + 1;
    _fa = (uint32_t)(MEM32(0x919CF8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058ADD7u); RECOMP_ABI_CALL(0x00587780u, sub_00587780); /* call 0x00587780 */

loc_0058ADD7: ;
    xmm0 = XMM_SCALAR(MEMF(0x919C70)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8DE430); /* addss */
    MEMF(0x8DE430) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp + 0xC); /* cvtss2si */
    xmm1 = XMM_SCALAR(MEMF(0x7B8E28)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(0x919B4C) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0058AE17; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0058AE0B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x8DE430) = xmm0.f[0]; /* movss */

loc_0058AE17: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AE1Cu); RECOMP_ABI_CALL(0x00587753u, sub_00587753); /* call 0x00587753 */

loc_0058AE1C: ;
    eax = ZX16(MEM16(0x919D46));
    ecx = MEM32(0x919CF8);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x64);
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fb = (uint32_t)(MEM32(0x919CFC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x919CFC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x919CFC) = MEM32(0x919CFC) + eax;
    _fa = (uint32_t)(MEM32(0x919CFC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7530) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7530 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058AE59; /* jle: less or equal (signed <=) */

loc_0058AE4B: ;
    MEM32(0x919CF8) = MEM32(0x919CF8) & 0;
    _fa = (uint32_t)(MEM32(0x919CF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x919CFC) = MEM32(0x919CFC) & 0;
    _fa = (uint32_t)(MEM32(0x919CFC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0058AE59: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0058AE5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = eax;
    if (CMP_GE(_fas, _fbs)) esi = edi; /* cmovge */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x919CF4) = eax;
    eax = ebp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AE76u); RECOMP_ABI_CALL(0x00590D60u, sub_00590D60); /* call 0x00590D60 */

loc_0058AE76: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0058AE83; /* je: equal / zero */

loc_0058AE7C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AE83u); RECOMP_ABI_CALL(0x0058D82Du, sub_0058D82D); /* call 0x0058D82D */

loc_0058AE83: ;
    ecx = ZX8(MEM8(0x919D5F));
    eax = ZX8(MEM8(0x919D60));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = ecx + eax * 2;
    MEM32(ebp + 8) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0058ADBF; /* jg: greater (signed >) */

loc_0058AEA7: ;
    POP32(esp, esi);

loc_0058AEA8: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0058AEAC
 * Original: 0x0058AEAC - 0x0058AF44 (152 bytes, 57 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058AEAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058AEAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x919CB8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AEC5u); RECOMP_ABI_CALL(0x006BB463u, sub_006BB463); /* call 0x006BB463 */

loc_0058AEC5: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(0x919CEC);
    esi = ecx + eax;
    ecx = MEM32(0x919CE8);
    esi = esi & 0xFFFFFF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0058AEED; /* jl: less (signed <) */

loc_0058AEEB: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0058AEED: ;
    eax = MEM32(0x919CF0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058AF00; /* jl: less (signed <) */

loc_0058AEF6: ;
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0058AF05;

loc_0058AF00: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = esi;

loc_0058AF05: ;
    MEM32(ebp + -16) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0058AF0A: ;
    ecx = MEM32(ebp + edi * 4 + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058AF34; /* jle: less or equal (signed <=) */

loc_0058AF12: ;
    edx = MEM32(0x919CD0);
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058AF2Bu); RECOMP_ABI_CALL(0x0058ADA4u, sub_0058ADA4); /* call 0x0058ADA4 */

loc_0058AF2B: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    MEM32(0x919CF0) = eax;

loc_0058AF34: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058AF0A; /* jl: less (signed <) */

loc_0058AF3A: ;
    POP32(esp, edi);
    MEM32(0x919CF0) = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058AF44
 * Original: 0x0058AF44 - 0x0058AFF8 (180 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058AF44(void)
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

loc_0058AF44: ;
    xmm0 = XMM_SCALAR(MEMF(0x919D04)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x919D00)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0058AFF7; /* jnp: not parity */

loc_0058AF68: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(0x7DA860)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0058AF83; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0058AF75: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0058AF7D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0058AF7A: ;
    xmm0 = xmm2; /* movaps */

loc_0058AF7D: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    goto loc_0058AF97;

loc_0058AF83: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AACB4); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0058AF93; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0058AF90: ;
    xmm0 = xmm2; /* movaps */

loc_0058AF93: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_0058AF97: ;
    PUSH32(esp, 0);
    MEMF(0x919D00) = xmm1.f[0]; /* movss */
    fp_push(MEMF(0x919D00)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 1);
    PUSH32(esp, 0x0058AFB2u); RECOMP_ABI_CALL(0x0058BEB4u, sub_0058BEB4); /* call 0x0058BEB4 */

loc_0058AFB2: ;
    fp_push(MEMF(0x919D00)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 2);
    PUSH32(esp, 0x0058AFC8u); RECOMP_ABI_CALL(0x0058BEB4u, sub_0058BEB4); /* call 0x0058BEB4 */

loc_0058AFC8: ;
    fp_push(MEMF(0x919D00)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 3);
    PUSH32(esp, 0x0058AFDEu); RECOMP_ABI_CALL(0x0058BEB4u, sub_0058BEB4); /* call 0x0058BEB4 */

loc_0058AFDE: ;
    fp_push(MEMF(0x919D00)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 4);
    PUSH32(esp, 0x0058AFF4u); RECOMP_ABI_CALL(0x0058BEB4u, sub_0058BEB4); /* call 0x0058BEB4 */

loc_0058AFF4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0058AFF7: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0058AFF8
 * Original: 0x0058AFF8 - 0x0058B030 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058AFF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058AFF8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM8(ebp + 9)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 9), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058B010; /* je: equal / zero */

loc_0058B001: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ZX8(MEM8(0x919D4D));
    goto loc_0058B029;

loc_0058B010: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058B02E; /* je: equal / zero */

loc_0058B016: ;
    eax = ZX8(MEM8(0x919D4D));
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    eax = (uint32_t)(int32_t)SMEM16(0x919E8C);

loc_0058B029: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;

loc_0058B02E: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0058B030
 * Original: 0x0058B030 - 0x0058B092 (98 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0058B030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058B030: ;
    goto loc_0058B07D;

loc_0058B032: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8DE2B0); PUSH32(esp, 0x0058B038u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0058B032u); } /* indirect call */
    }

loc_0058B038: ;
    eax = MEM32(0x919F48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058B043; /* je: equal / zero */

loc_0058B041: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0058B043u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0058B041u); } /* indirect call */
    }

loc_0058B043: ;
    PUSH32(esp, 0x0058B048u); RECOMP_ABI_CALL(0x0058AEACu, sub_0058AEAC); /* call 0x0058AEAC */

loc_0058B048: ;
    PUSH32(esp, 0x0058B04Du); RECOMP_ABI_CALL(0x0058AF44u, sub_0058AF44); /* call 0x0058AF44 */

loc_0058B04D: ;
    eax = MEM32(0x919F4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058B058; /* je: equal / zero */

loc_0058B056: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0058B058u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0058B056u); } /* indirect call */
    }

loc_0058B058: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8DE2B4); PUSH32(esp, 0x0058B05Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0058B058u); } /* indirect call */
    }

loc_0058B05E: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x919C68) = MEM32(0x919C68) + 0xA;
    _fa = (uint32_t)(MEM32(0x919C68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0058B06Au); RECOMP_ABI_CALL(0x00448938u, sub_00448938); /* call 0x00448938 */

loc_0058B06A: ;
    ecx = MEM32(0x919C68);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0058B077; /* jns: not sign (positive) */

loc_0058B074: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0058B077: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0058B07Du); RECOMP_ABI_CALL(0x004497D6u, sub_004497D6); /* call 0x004497D6 */

loc_0058B07D: ;
    _fa = (uint32_t)(MEM8(0x919C6D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919C6D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058B032; /* jne: not equal / not zero */

loc_0058B086: ;
    MEM8(0x919C6C) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0058B092
 * Original: 0x0058B092 - 0x0058B0D2 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058B092(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058B092: ;
    PUSH32(esp, ecx);
    MEM8(0x919C6C) = 1;
    MEM8(0x919C6D) = 1;
    PUSH32(esp, 0x0058B0A6u); RECOMP_ABI_CALL(0x00448938u, sub_00448938); /* call 0x00448938 */

loc_0058B0A6: ;
    MEM32(0x919C68) = eax;
    eax = esp;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x58B030);
    PUSH32(esp, 0x8000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058B0C3u); RECOMP_ABI_CALL(0x0044B4B5u, sub_0044B4B5); /* call 0x0044B4B5 */

loc_0058B0C3: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    MEM32(0x919D14) = eax;
    PUSH32(esp, 0x0058B0D0u); RECOMP_ABI_CALL(0x0044B016u, sub_0044B016); /* call 0x0044B016 */

loc_0058B0D0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0058B0D2
 * Original: 0x0058B0D2 - 0x0058B0EC (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058B0D2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058B0D2: ;
    MEM8(0x919C6D) = 0;
    goto loc_0058B0E2;

loc_0058B0DB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0058B0E2u); RECOMP_ABI_CALL(0x004497D6u, sub_004497D6); /* call 0x004497D6 */

loc_0058B0E2: ;
    _fa = (uint32_t)(MEM8(0x919C6C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919C6C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058B0DB; /* jne: not equal / not zero */

loc_0058B0EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0058B0EC
 * Original: 0x0058B0EC - 0x0058B195 (169 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058B0EC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058B0EC: ;
    SET_LO8(eax, 0xB0);
    _fb = (uint32_t)(MEM8(0x919D10)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - MEM8(0x919D10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(0x919D26) = 0x40;
    MEM8(0x919D29) = LO8(eax);
    MEM8(0x919D4D) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(0x919D20) = 0x1F40;
    MEM16(0x919D22) = 0xBB80;
    MEM8(0x919D24) = 5;
    MEM8(0x919D25) = 5;
    MEM8(0x919D2C) = 2;
    MEM16(0x919D2E) = 0x420;
    MEM16(0x919D30) = 0x24;
    MEM8(0x919D64) = 2;
    MEM16(0x919D66) = 0x420;
    MEM16(0x919D68) = 0x24;
    MEM8(0x919D4A) = 0x20;
    MEM8(0x919D5E) = 0x10;
    MEM16(0x919D46) = 0xBB80;
    MEM8(0x919D5F) = 5;
    MEM8(0x919D60) = 1;
    MEM8(0x919D58) = LO8(eax);
    MEM32(0x919D74) = eax;
    MEM32(0x919D78) = eax;
    MEM8(0x919E8F) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0058B195
 * Original: 0x0058B195 - 0x0058B2A9 (276 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0058B195(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0058B195: ;
    _fa = (uint32_t)(MEM8(0x919E88)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919E88), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0058B1B6; /* je: equal / zero */

loc_0058B19E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x27);
    POP32(esp, ecx);
    esi = 0x919DEC;
    edi = 0x919D3C;
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
    goto loc_0058B2A6;

loc_0058B1B6: ;
    SET_LO16(eax, MEM16(0x919D20));
    _fa = (uint32_t)(MEM16(0x919D46)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x919D46), LO16(eax) (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(0x919D64) = 2;
    MEM16(0x919D66) = 0x420;
    MEM16(0x919D68) = 0x24;
    MEM8(0x919D5F) = 5;
    MEM8(0x919D60) = 1;
    if (CMP_AE(_fa, _fb)) goto loc_0058B1F2; /* jae: above or equal (unsigned >=) */

loc_0058B1EC: ;
    MEM16(0x919D46) = LO16(eax);

loc_0058B1F2: ;
    SET_LO16(eax, MEM16(0x919D22));
    _fa = (uint32_t)(MEM16(0x919D46)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x919D46), LO16(eax) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0058B207; /* jbe: below or equal (unsigned <=) */

loc_0058B201: ;
    MEM16(0x919D46) = LO16(eax);

loc_0058B207: ;
    SET_LO8(eax, MEM8(0x919D29));
    _fa = (uint32_t)(MEM8(0x919D4D)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919D4D), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0058B219; /* jbe: below or equal (unsigned <=) */

loc_0058B214: ;
    MEM8(0x919D4D) = LO8(eax);

loc_0058B219: ;
    SET_LO8(eax, MEM8(0x919D26));
    _fa = (uint32_t)(MEM8(0x919D4A)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919D4A), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0058B22B; /* jbe: below or equal (unsigned <=) */

loc_0058B226: ;
    MEM8(0x919D4A) = LO8(eax);

loc_0058B22B: ;
    _fa = (uint32_t)(MEM8(0x919D5E)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919D5E), 0x20 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0058B23B; /* jbe: below or equal (unsigned <=) */

loc_0058B234: ;
    MEM8(0x919D5E) = 0x20;

loc_0058B23B: ;
    SET_LO16(eax, ZX8(MEM8(0x919D4A)));
    SET_LO16(ecx, ZX8(MEM8(0x919D4D)));
    xmm1 = XMM_SCALAR(MEMF(0x919D50)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AACB4); /* ucomiss */
    MEM16(0x919E8C) = LO16(eax);
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0058B270; /* jp: parity */

loc_0058B268: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AD318)); /* movss */

loc_0058B270: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0058B282; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0058B27D: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0058B292;

loc_0058B282: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AB8B0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0058B292; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0058B28F: ;
    xmm1 = xmm2; /* movaps */

loc_0058B292: ;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(0x919B48) = xmm1.f[0]; /* movss */
    MEMF(0x919C70) = xmm0.f[0]; /* movss */

loc_0058B2A6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0058B2A9
 * Original: 0x0058B2A9 - 0x0058B3AB (258 bytes, 92 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058B2A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058B2A9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x919EF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x25), 4 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0058B35E; /* je: equal / zero */

loc_0058B2CA: ;
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058B385; /* jbe: below or equal (unsigned <=) */

loc_0058B2D3: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + ebx * 2 + 4);
    ecx = MEM32(0x919CB0);
    eax = eax + eax * 8;
    edi = MEM32(ecx + eax * 4 + 0x18);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B2F1u); RECOMP_ABI_CALL(0x006BB447u, sub_006BB447); /* call 0x006BB447 */

loc_0058B2F1: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058B301; /* je: equal / zero */

loc_0058B2F7: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(edi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B301u); RECOMP_ABI_CALL(0x006BB3E7u, sub_006BB3E7); /* call 0x006BB3E7 */

loc_0058B301: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(edi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B30Fu); RECOMP_ABI_CALL(0x006BB3C3u, sub_006BB3C3); /* call 0x006BB3C3 */

loc_0058B30F: ;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058B322; /* jl: less (signed <) */

loc_0058B315: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058B322; /* jne: not equal / not zero */

loc_0058B319: ;
    PUSH32(esp, MEM32(edi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B321u); RECOMP_ABI_CALL(0x0058A8B2u, sub_0058A8B2); /* call 0x0058A8B2 */

loc_0058B321: ;
    POP32(esp, ecx);

loc_0058B322: ;
    eax = ZX8(MEM8(edi + 0xE));
    eax = eax + eax * 2;
    eax = eax * 4 + 0x919C78;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B337u); RECOMP_ABI_CALL(0x0058DA1Cu, sub_0058DA1C); /* call 0x0058DA1C */

loc_0058B337: ;
    eax = ZX8(MEM8(edi + 0xE));
    eax = eax + eax * 2;
    eax = eax * 4 + 0x919C90;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B34Cu); RECOMP_ABI_CALL(0x0058D9D8u, sub_0058D9D8); /* call 0x0058D9D8 */

loc_0058B34C: ;
    eax = ZX8(MEM8(esi + 0x23));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058B2D3; /* jl: less (signed <) */

loc_0058B35C: ;
    goto loc_0058B385;

loc_0058B35E: ;
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058B385; /* jbe: below or equal (unsigned <=) */

loc_0058B364: ;
    edi = esi + 4;

loc_0058B367: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = ZX8(MEM8(0x919D4D));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B379u); RECOMP_ABI_CALL(0x005907C4u, sub_005907C4); /* call 0x005907C4 */

loc_0058B379: ;
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058B367; /* jl: less (signed <) */

loc_0058B385: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058B3A4; /* jbe: below or equal (unsigned <=) */

loc_0058B38C: ;
    edi = esi + 4;

loc_0058B38F: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B398u); RECOMP_ABI_CALL(0x0058C502u, sub_0058C502); /* call 0x0058C502 */

loc_0058B398: ;
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058B38F; /* jl: less (signed <) */

loc_0058B3A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0058B3AB
 * Original: 0x0058B3AB - 0x0058B53B (400 bytes, 99 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058B3AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058B3AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x919CB0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi + edi * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x919EF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi + edi * 8;
    _fa = (uint32_t)(MEM8(eax + 0x25)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x25), 4 (8-bit) */
    esi = edx + ecx * 4;
    if (TEST_Z(_fa, _fb)) goto loc_0058B4DA; /* je: equal / zero */

loc_0058B3D8: ;
    MEM32(ebp + -8) = 8;
    ecx = ebp + -72;
    MEM32(ebp + -4) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x5F);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AA820); /* addss */
    MEM32(ebp + -72) = 2;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8DE330);
    MEM32(ebp + -68) = eax;
    MEM32(ebp + -64) = 1;
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8DE330);
    MEM32(ebp + -60) = eax;
    MEM32(ebp + -56) = 5;
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8DE330);
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -48) = 4;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8DE330);
    MEM32(ebp + -44) = eax;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8DE330);
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = 3;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8DE330);
    MEM32(ebp + -28) = eax;
    eax = 0xFFFFD8F0u;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -12) = eax;
    eax = ebp + -8;
    MEM32(ebp + -24) = 0xB;
    MEM32(ebp + -16) = 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B4D8u); RECOMP_ABI_CALL(0x006BB347u, sub_006BB347); /* call 0x006BB347 */

loc_0058B4D8: ;
    goto loc_0058B537;

loc_0058B4DA: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x5F);
    PUSH32(esp, ebx);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x48); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DADA4); /* mulss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x919C40)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919C40), LO8(ebx) (8-bit) */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    if (CMP_BE(_fa, _fb)) goto loc_0058B536; /* jbe: below or equal (unsigned <=) */

loc_0058B4FF: ;
    goto loc_0058B506;

loc_0058B501: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */

loc_0058B506: ;
    eax = ZX8(MEM8(0x919D4D));
    xmm1 = XMM_SCALAR(MEMF(esi + ebx * 4)); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B527u); RECOMP_ABI_CALL(0x0059085Fu, sub_0059085F); /* call 0x0059085F */

loc_0058B527: ;
    eax = ZX8(MEM8(0x919C40));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058B501; /* jl: less (signed <) */

loc_0058B536: ;
    POP32(esp, ebx);

loc_0058B537: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058B53B
 * Original: 0x0058B53B - 0x0058B560 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058B53B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058B53B: ;
    ecx = MEM32(esp + 4);
    eax = ecx + ecx * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x919EF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(eax + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0058B558; /* jne: not equal / not zero */

loc_0058B553: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058B55F; /* je: equal / zero */

loc_0058B558: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0058B55Eu); RECOMP_ABI_CALL(0x0058BD73u, sub_0058BD73); /* call 0x0058BD73 */

loc_0058B55E: ;
    POP32(esp, ecx);

loc_0058B55F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0058B560
 * Original: 0x0058B560 - 0x0058B6D5 (373 bytes, 98 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058B560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058B560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x919CB0);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ebx + ebx * 8;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x919EF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + ebx * 8;
    _fa = (uint32_t)(MEM8(esi + 0x4E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x4E), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx + eax * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0058B5B7; /* je: equal / zero */

loc_0058B58A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x919C40)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919C40), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058B5A8; /* jbe: below or equal (unsigned <=) */

loc_0058B594: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + eax * 4) = xmm0.f[0]; /* movss */
    ecx = ZX8(MEM8(0x919C40));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058B594; /* jl: less (signed <) */

loc_0058B5A8: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0058B5C4;

loc_0058B5B7: ;
    eax = ZX16(MEM16(esi + 0x1C));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B5C2u); RECOMP_ABI_CALL(0x0058E647u, sub_0058E647); /* call 0x0058E647 */

loc_0058B5C2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0058B5C4: ;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x25), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058B6C9; /* je: equal / zero */

loc_0058B5CE: ;
    MEM32(ebp + -8) = 6;
    eax = ebp + -72;
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x5F);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AA820); /* addss */
    MEM32(ebp + -72) = 2;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8DE330);
    MEM32(ebp + -68) = eax;
    MEM32(ebp + -64) = 1;
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8DE330);
    MEM32(ebp + -60) = eax;
    MEM32(ebp + -56) = 5;
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8DE330);
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -48) = 4;
    xmm1 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8DE330);
    MEM32(ebp + -44) = eax;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8DE330);
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = 3;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x8DE330);
    MEM32(ebp + -28) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x18);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B6C7u); RECOMP_ABI_CALL(0x006BB347u, sub_006BB347); /* call 0x006BB347 */

loc_0058B6C7: ;
    goto loc_0058B6D0;

loc_0058B6C9: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B6CFu); RECOMP_ABI_CALL(0x0058BD73u, sub_0058BD73); /* call 0x0058BD73 */

loc_0058B6CF: ;
    POP32(esp, ecx);

loc_0058B6D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058B6D5
 * Original: 0x0058B6D5 - 0x0058B8B9 (484 bytes, 155 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058B6D5(void)
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

loc_0058B6D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x919EF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x25), 4 (8-bit) */
    MEM8(ebp + -1) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0058B861; /* je: equal / zero */

loc_0058B6F9: ;
    ecx = MEM32(0x919CB0);
    eax = eax + eax * 8;
    ebx = ecx + eax * 4;
    SET_LO16(eax, MEM16(esi + 0x8E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058B771; /* jne: not equal / not zero */

loc_0058B711: ;
    SET_LO8(eax, MEM8(ebx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058B768; /* jne: not equal / not zero */

loc_0058B718: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058B762; /* jbe: below or equal (unsigned <=) */

loc_0058B722: ;
    MEM8(ebp + -1) = 0;
    edi = esi + 4;

loc_0058B729: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(0x919CB0);
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 4 + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B743u); RECOMP_ABI_CALL(0x006BB3E7u, sub_006BB3E7); /* call 0x006BB3E7 */

loc_0058B743: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(0x919CB0);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 8;
    MEM8(ecx + eax * 4 + 0x1C) = 0;
    eax = ZX8(MEM8(esi + 0x23));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058B729; /* jl: less (signed <) */

loc_0058B762: ;
    MEM8(ebx + 0x1C) = 0;
    goto loc_0058B7CC;

loc_0058B768: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058B7D6; /* jne: not equal / not zero */

loc_0058B76C: ;
    MEM8(ebp + -1) = LO8(eax);
    goto loc_0058B7CC;

loc_0058B771: ;
    if (CMP_BE(_fa, _fb)) goto loc_0058B7D6; /* jbe: below or equal (unsigned <=) */

loc_0058B773: ;
    SET_LO8(eax, MEM8(ebx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058B7C5; /* jne: not equal / not zero */

loc_0058B77A: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058B7BF; /* jbe: below or equal (unsigned <=) */

loc_0058B783: ;
    edi = esi + 4;

loc_0058B786: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(0x919CB0);
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 4 + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B7A0u); RECOMP_ABI_CALL(0x006BB3E7u, sub_006BB3E7); /* call 0x006BB3E7 */

loc_0058B7A0: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(0x919CB0);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + eax * 8;
    MEM8(ecx + eax * 4 + 0x1C) = 1;
    eax = ZX8(MEM8(esi + 0x23));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058B786; /* jl: less (signed <) */

loc_0058B7BF: ;
    MEM8(ebx + 0x1C) = 1;
    goto loc_0058B7D6;

loc_0058B7C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058B7D6; /* jne: not equal / not zero */

loc_0058B7C9: ;
    MEM8(ebp + -1) = LO8(eax);

loc_0058B7CC: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058B8B2; /* je: equal / zero */

loc_0058B7D6: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058B7F3; /* jl: less (signed <) */

loc_0058B7DF: ;
    _fa = (uint32_t)(MEM16(esi + 0x8E)) & 0xFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x8E), 0x2000 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058B7F3; /* jbe: below or equal (unsigned <=) */

loc_0058B7EA: ;
    MEM16(esi + 0x8E) = 0x2000;

loc_0058B7F3: ;
    eax = ZX16(MEM16(esi + 0x20));
    MEM32(ebp + 8) = eax;
    eax = ZX16(MEM16(esi + 0x8E));
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEM32(ebp + 8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(ebp + 8)); /* fimul dword ptr [ebp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x877724)); /* fmul dword ptr [0x877724] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B815u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0058B815: ;
    MEM32(ebp + 8) = eax;
    eax = 0xBC;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0058B82C; /* jb: below (unsigned <) */

loc_0058B822: ;
    eax = 0x2EDEF;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058B82F; /* jbe: below or equal (unsigned <=) */

loc_0058B82C: ;
    MEM32(ebp + 8) = eax;

loc_0058B82F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058B8B2; /* jbe: below or equal (unsigned <=) */

loc_0058B836: ;
    edi = esi + 4;

loc_0058B839: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = MEM32(0x919CB0);
    PUSH32(esp, MEM32(ebp + 8));
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 4 + 0x18);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B854u); RECOMP_ABI_CALL(0x006BD165u, sub_006BD165); /* call 0x006BD165 */

loc_0058B854: ;
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058B839; /* jl: less (signed <) */

loc_0058B85F: ;
    goto loc_0058B8B2;

loc_0058B861: ;
    eax = ZX16(MEM16(esi + 0x20));
    ecx = ZX16(MEM16(0x919D46));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax;
    eax = ZX16(MEM16(esi + 0x8E));
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058B8B2; /* jbe: below or equal (unsigned <=) */

loc_0058B88C: ;
    ebx = esi + 4;

loc_0058B88F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx);
    ecx = ZX8(MEM8(0x919D4D));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B8A2u); RECOMP_ABI_CALL(0x00590EA7u, sub_00590EA7); /* call 0x00590EA7 */

loc_0058B8A2: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058B88F; /* jl: less (signed <) */

loc_0058B8B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0058B8CA
 * Original: 0x0058B8CA - 0x0058B8CD (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0058B8CA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058B8CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0058B8CD
 * Original: 0x0058B8CD - 0x0058B92F (98 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058B8CD(void)
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

loc_0058B8CD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0058B8DF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 8)) */

loc_0058B8DA: ;
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */

loc_0058B8DF: ;
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0058B8F6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0058B8F1: ;
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */

loc_0058B8F6: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x87CFA0)); /* fmul dword ptr [0x87cfa0] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B904u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0058B904: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, 7);
    PUSH32(esp, MEM32(0x919CB4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B91Eu); RECOMP_ABI_CALL(0x006BB15Fu, sub_006BB15F); /* call 0x006BB15F */

loc_0058B91E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    MEMF(0x919D08) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0058B92F
 * Original: 0x0058B92F - 0x0058B93C (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0058B92F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058B92F: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 9;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0058B93C
 * Original: 0x0058B93C - 0x0058B94B (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0058B93C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058B93C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x919D0C);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0058B94B
 * Original: 0x0058B94B - 0x0058B97D (50 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058B94B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058B94B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x919D0C);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5030);
    PUSH32(esp, 0x877F58);
    PUSH32(esp, MEM32(0x919CB4));
    MEM32(ebp + -4) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B979u); RECOMP_ABI_CALL(0x006BB111u, sub_006BB111); /* call 0x006BB111 */

loc_0058B979: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058B97D
 * Original: 0x0058B97D - 0x0058B989 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0058B97D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058B97D: ;
    eax = MEM32(esp + 4);
    MEM32(0x919D10) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0058B989
 * Original: 0x0058B989 - 0x0058B9AB (34 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058B989(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058B989: ;
    PUSH32(esp, 0x0058B98Eu); RECOMP_ABI_CALL(0x006BB5D9u, sub_006BB5D9); /* call 0x006BB5D9 */

loc_0058B98E: ;
    eax = MEM32(0x6E9D5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x919D18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x919D18) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058B9AA; /* jbe: below or equal (unsigned <=) */

loc_0058B99B: ;
    PUSH32(esp, 0x0058B9A0u); RECOMP_ABI_CALL(0x0058B94Bu, sub_0058B94B); /* call 0x0058B94B */

loc_0058B9A0: ;
    eax = MEM32(0x6E9D5C);
    MEM32(0x919D18) = eax;

loc_0058B9AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0058B9AB
 * Original: 0x0058B9AB - 0x0058BC18 (621 bytes, 183 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058B9AB(void)
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

loc_0058B9AB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x919CB4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B9C2u); RECOMP_ABI_CALL(0x006BE9AEu, sub_006BE9AE); /* call 0x006BE9AE */

loc_0058B9C2: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x919CB4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B9CFu); RECOMP_ABI_CALL(0x006BB1BDu, sub_006BB1BD); /* call 0x006BB1BD */

loc_0058B9CF: ;
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x919CB4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B9DFu); RECOMP_ABI_CALL(0x006BB1BDu, sub_006BB1BD); /* call 0x006BB1BD */

loc_0058B9DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(0x919CB4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B9EDu); RECOMP_ABI_CALL(0x006BB1BDu, sub_006BB1BD); /* call 0x006BB1BD */

loc_0058B9ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, MEM32(0x919CB4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058B9FBu); RECOMP_ABI_CALL(0x006BB1BDu, sub_006BB1BD); /* call 0x006BB1BD */

loc_0058B9FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(0x919CB4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BA09u); RECOMP_ABI_CALL(0x006BB1BDu, sub_006BB1BD); /* call 0x006BB1BD */

loc_0058BA09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(0x919CB4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BA17u); RECOMP_ABI_CALL(0x006BB1BDu, sub_006BB1BD); /* call 0x006BB1BD */

loc_0058BA17: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    PUSH32(esp, MEM32(0x919CB4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BA25u); RECOMP_ABI_CALL(0x006BB1BDu, sub_006BB1BD); /* call 0x006BB1BD */

loc_0058BA25: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xC);
    PUSH32(esp, MEM32(0x919CB4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BA33u); RECOMP_ABI_CALL(0x006BB1BDu, sub_006BB1BD); /* call 0x006BB1BD */

loc_0058BA33: ;
    PUSH32(esp, 0x919D0C);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5030);
    PUSH32(esp, 0x877F58);
    PUSH32(esp, MEM32(0x919CB4));
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -24) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BA5Bu); RECOMP_ABI_CALL(0x006BB111u, sub_006BB111); /* call 0x006BB111 */

loc_0058BA5B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = 0xFFFFD8F0u;
    MEM32(ebp + -76) = eax;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -56) = eax;
    MEM32(ebp + -48) = eax;
    PUSH32(esp, esi);
    eax = ebp + -76;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x919CB4));
    MEMF(ebp + -68) = xmm0.f[0]; /* movss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x87CFA4)); /* movss */
    MEMF(ebp + -64) = xmm1.f[0]; /* movss */
    MEMF(ebp + -60) = xmm1.f[0]; /* movss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BAB7u); RECOMP_ABI_CALL(0x006BE7E8u, sub_006BE7E8); /* call 0x006BE7E8 */

loc_0058BAB7: ;
    fp_push(1.0); /* fld1 */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    MEMF(0x919D00) = xmm0.f[0]; /* movss */
    MEMF(0x919D04) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BADCu); RECOMP_ABI_CALL(0x0058BEB4u, sub_0058BEB4); /* call 0x0058BEB4 */

loc_0058BADC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(1.0); /* fld1 */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BAEDu); RECOMP_ABI_CALL(0x0058BEB4u, sub_0058BEB4); /* call 0x0058BEB4 */

loc_0058BAED: ;
    fp_push(1.0); /* fld1 */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BAFEu); RECOMP_ABI_CALL(0x0058BEB4u, sub_0058BEB4); /* call 0x0058BEB4 */

loc_0058BAFE: ;
    fp_push(1.0); /* fld1 */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BB0Fu); RECOMP_ABI_CALL(0x0058BEB4u, sub_0058BEB4); /* call 0x0058BEB4 */

loc_0058BB0F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BB14u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058BB14: ;
    eax = (uint32_t)(int32_t)SMEM16(0x919E8C);
    eax = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BB27u); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_0058BB27: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x919E8C);
    ecx = ecx + ecx * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(0x919CB0) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BB40u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058BB40: ;
    eax = 0x94;
    _fb = (uint32_t)(MEM32(0x919D10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x919D10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x919CAC) = 0x1C;
    MEM32(0x919CA8) = eax;
    eax = eax + eax * 2 + 0x54;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BB67u); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_0058BB67: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x919C74) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BB74u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058BB74: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x919CA8;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = 0x919C90;

loc_0058BB8B: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BB97u); RECOMP_ABI_CALL(0x0058D9A5u, sub_0058D9A5); /* call 0x0058D9A5 */

loc_0058BB97: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BB9Fu); RECOMP_ABI_CALL(0x0058D9A5u, sub_0058D9A5); /* call 0x0058D9A5 */

loc_0058BB9F: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -12) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0058BBEC; /* jle: less or equal (signed <=) */

loc_0058BBAB: ;
    ebx = ebx + ebx * 2;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }

loc_0058BBB1: ;
    PUSH32(esp, MEM32(ebp + -20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BBB9u); RECOMP_ABI_CALL(0x0058AA24u, sub_0058AA24); /* call 0x0058AA24 */

loc_0058BBB9: ;
    ecx = MEM32(0x919C74);
    MEM32(ebx + ecx + 8) = eax;
    eax = MEM32(0x919C74);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BBD3u); RECOMP_ABI_CALL(0x0058D9B4u, sub_0058D9B4); /* call 0x0058D9B4 */

loc_0058BBD3: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058BBB1; /* jl: less (signed <) */

loc_0058BBE9: ;
    ebx = MEM32(ebp + -16);

loc_0058BBEC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 4;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058BB8B; /* jl: less (signed <) */

loc_0058BBFC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BC01u); RECOMP_ABI_CALL(0x0058ABABu, sub_0058ABAB); /* call 0x0058ABAB */

loc_0058BC01: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BC06u); RECOMP_ABI_CALL(0x0058B092u, sub_0058B092); /* call 0x0058B092 */

loc_0058BC06: ;
    PUSH32(esp, 0x58B989);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BC10u); RECOMP_ABI_CALL(0x0058DE47u, sub_0058DE47); /* call 0x0058DE47 */

loc_0058BC10: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0058BC18
 * Original: 0x0058BC18 - 0x0058BC84 (108 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058BC18(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058BC18: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x58B989);
    PUSH32(esp, 0x0058BC23u); RECOMP_ABI_CALL(0x0058DE60u, sub_0058DE60); /* call 0x0058DE60 */

loc_0058BC23: ;
    POP32(esp, ecx);
    PUSH32(esp, 0x0058BC29u); RECOMP_ABI_CALL(0x0058B0D2u, sub_0058B0D2); /* call 0x0058B0D2 */

loc_0058BC29: ;
    esi = 0x919C90;

loc_0058BC2E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058BC34u); RECOMP_ABI_CALL(0x0058D9FDu, sub_0058D9FD); /* call 0x0058D9FD */

loc_0058BC34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0058BC43; /* je: equal / zero */

loc_0058BC39: ;
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x0058BC41u); RECOMP_ABI_CALL(0x006B8ED7u, sub_006B8ED7); /* call 0x006B8ED7 */

loc_0058BC41: ;
    goto loc_0058BC2E;

loc_0058BC43: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x919CA8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x919CA8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058BC2E; /* jl: less (signed <) */

loc_0058BC4E: ;
    PUSH32(esp, 0x0058BC53u); RECOMP_ABI_CALL(0x0058AD48u, sub_0058AD48); /* call 0x0058AD48 */

loc_0058BC53: ;
    PUSH32(esp, 0x0058BC58u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058BC58: ;
    PUSH32(esp, MEM32(0x919C74));
    PUSH32(esp, 0x0058BC63u); RECOMP_ABI_CALL(0x0058A8B2u, sub_0058A8B2); /* call 0x0058A8B2 */

loc_0058BC63: ;
    PUSH32(esp, MEM32(0x919CB0));
    PUSH32(esp, 0x0058BC6Eu); RECOMP_ABI_CALL(0x0058A8B2u, sub_0058A8B2); /* call 0x0058A8B2 */

loc_0058BC6E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, 0x0058BC75u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058BC75: ;
    PUSH32(esp, MEM32(0x919CB4));
    PUSH32(esp, 0x0058BC80u); RECOMP_ABI_CALL(0x006B8EA1u, sub_006B8EA1); /* call 0x006B8EA1 */

loc_0058BC80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058BC84
 * Original: 0x0058BC84 - 0x0058BD27 (163 bytes, 55 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058BC84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058BC84: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x208;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = 0x919C78;

loc_0058BC98: ;
    eax = MEM32(ebp + -4);
    esi = MEM32(eax);
    goto loc_0058BCFA;

loc_0058BC9F: ;
    eax = ZX16(MEM16(esi + 0xC));
    ecx = MEM32(0x919EF4);
    eax = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(MEM16(eax + ecx + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + ecx + 0x28), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058BCF8; /* jge: greater or equal (signed >=) */

loc_0058BCB7: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058BCF1; /* jge: greater or equal (signed >=) */

loc_0058BCBD: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BCC9u); RECOMP_ABI_CALL(0x006BB447u, sub_006BB447); /* call 0x006BB447 */

loc_0058BCC9: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0058BCF8; /* jne: not equal / not zero */

loc_0058BCCF: ;
    SET_LO16(ecx, MEM16(esi + 0xC));
    edx = MEM32(0x919CB0);
    eax = ZX16(LO16(ecx));
    eax = eax + eax * 8;
    _fa = (uint32_t)(MEM8(edx + eax * 4 + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + eax * 4 + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058BCF8; /* je: equal / zero */

loc_0058BCE6: ;
    MEM16(ebp + edi * 2 + -520) = LO16(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0058BCF8;

loc_0058BCF1: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BCF7u); RECOMP_ABI_CALL(0x00590F29u, sub_00590F29); /* call 0x00590F29 */

loc_0058BCF7: ;
    POP32(esp, ecx);

loc_0058BCF8: ;
    esi = MEM32(esi);

loc_0058BCFA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058BC9F; /* jne: not equal / not zero */

loc_0058BCFE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x919C90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x919C90 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058BC98; /* jl: less (signed <) */

loc_0058BD0B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058BD23; /* jle: less or equal (signed <=) */

loc_0058BD0F: ;
    eax = ZX16(MEM16(ebp + esi * 2 + -520));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BD1Du); RECOMP_ABI_CALL(0x0058B2A9u, sub_0058B2A9); /* call 0x0058B2A9 */

loc_0058BD1D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058BD0F; /* jl: less (signed <) */

loc_0058BD23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058BD27
 * Original: 0x0058BD27 - 0x0058BD73 (76 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058BD27(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058BD27: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x919EF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058BD6F; /* je: equal / zero */

loc_0058BD3E: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058BD6E; /* jbe: below or equal (unsigned <=) */

loc_0058BD46: ;
    PUSH32(esp, edi);
    edi = esi + 4;

loc_0058BD4A: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = ZX8(MEM8(0x919D4D));
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058BD60u); RECOMP_ABI_CALL(0x00591498u, sub_00591498); /* call 0x00591498 */

loc_0058BD60: ;
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058BD4A; /* jl: less (signed <) */

loc_0058BD6D: ;
    POP32(esp, edi);

loc_0058BD6E: ;
    POP32(esp, ebx);

loc_0058BD6F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058BD73
 * Original: 0x0058BD73 - 0x0058BDBE (75 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058BD73(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058BD73: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0058BD7Fu); RECOMP_ABI_CALL(0x0058B3ABu, sub_0058B3AB); /* call 0x0058B3AB */

loc_0058BD7F: ;
    eax = edi + edi * 8;
    POP32(esp, ecx);
    ecx = MEM32(0x919EF4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(MEM8(eax + ecx + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + ecx + 0x24), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058BDB1; /* je: equal / zero */

loc_0058BD93: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x8DE314)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8DE314), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058BDBB; /* jle: less or equal (signed <=) */

loc_0058BD9D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0058BDA4u); RECOMP_ABI_CALL(0x0058BF20u, sub_0058BF20); /* call 0x0058BF20 */

loc_0058BDA4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DE314)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x8DE314) (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058BD9D; /* jl: less (signed <) */

loc_0058BDAF: ;
    goto loc_0058BDBB;

loc_0058BDB1: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0058BDB9u); RECOMP_ABI_CALL(0x0058BF20u, sub_0058BF20); /* call 0x0058BF20 */

loc_0058BDB9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0058BDBB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058BDBE
 * Original: 0x0058BDBE - 0x0058BE84 (198 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058BDBE(void)
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

loc_0058BDBE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BDCCu); RECOMP_ABI_CALL(0x0058C60Au, sub_0058C60A); /* call 0x0058C60A */

loc_0058BDCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0058BE7F; /* jl: less (signed <) */

loc_0058BDD8: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + 0xC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DADA4); /* mulss */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BDFAu); RECOMP_ABI_CALL(0x005914B9u, sub_005914B9); /* call 0x005914B9 */

loc_0058BDFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0058BE7F; /* je: equal / zero */

loc_0058BE00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0058BE03: ;
    eax = MEM32(ebp + -8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(MEM32(0x919EF4))) >> 32) & 1);
    esi = esi + MEM32(0x919EF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0058BE6A; /* jbe: below or equal (unsigned <=) */

loc_0058BE1C: ;
    ebx = esi + 4;

loc_0058BE1F: ;
    edi = (uint32_t)(int32_t)SMEM16(ebx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = edi + edi * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(0x919EF4))) >> 32) & 1);
    ecx = ecx + MEM32(0x919EF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0058BE5C; /* jnp: not parity */

loc_0058BE49: ;
    PUSH32(esp, edi);
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BE54u); RECOMP_ABI_CALL(0x0058C847u, sub_0058C847); /* call 0x0058C847 */

loc_0058BE54: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BE5Au); RECOMP_ABI_CALL(0x0058BD73u, sub_0058BD73); /* call 0x0058BD73 */

loc_0058BE5A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0058BE5C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0058BE1F; /* jl: less (signed <) */

loc_0058BE6A: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BE76u); RECOMP_ABI_CALL(0x005914B9u, sub_005914B9); /* call 0x005914B9 */

loc_0058BE76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0058BE03; /* jne: not equal / not zero */

loc_0058BE7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0058BE7F: ;
    eax = MEM32(ebp + -12);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058BEB4
 * Original: 0x0058BEB4 - 0x0058BF20 (108 bytes, 44 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058BEB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058BEB4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x826F40); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_0058BEE4; /* je: equal / zero */

loc_0058BED2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0058BEE0; /* je: equal / zero */

loc_0058BED5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0058BEDC; /* je: equal / zero */

loc_0058BED8: ;
    PUSH32(esp, 5);
    goto loc_0058BEE6;

loc_0058BEDC: ;
    PUSH32(esp, 4);
    goto loc_0058BEE6;

loc_0058BEE0: ;
    PUSH32(esp, 3);
    goto loc_0058BEE6;

loc_0058BEE4: ;
    PUSH32(esp, 2);

loc_0058BEE6: ;
    POP32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x919CB4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BEFDu); RECOMP_ABI_CALL(0x006BB15Fu, sub_006BB15F); /* call 0x006BB15F */

loc_0058BEFD: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058BF1D; /* je: equal / zero */

loc_0058BF03: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x919CB4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BF1Du); RECOMP_ABI_CALL(0x006BB15Fu, sub_006BB15F); /* call 0x006BB15F */

loc_0058BF1D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0058BF20
 * Original: 0x0058BF20 - 0x0058BFC4 (164 bytes, 49 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058BF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058BF20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    eax = ecx + ecx * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x919EF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _fa = (uint32_t)(MEM8(eax + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x24), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058BF67; /* je: equal / zero */

loc_0058BF3C: ;
    esi = MEM32(eax + 0x64);
    edx = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esi + edx * 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x48); /* mulss */
    eax = ZX8(MEM8(0x919D4D));
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BF62u); RECOMP_ABI_CALL(0x0059088Du, sub_0059088D); /* call 0x0059088D */

loc_0058BF62: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0058BFBF;

loc_0058BF67: ;
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = 1;
    edx = ebp + -72;
    MEM32(ebp + -4) = edx;
    edx = MEM32(eax + 0x64);
    xmm0 = XMM_SCALAR(MEMF(edx + esi * 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x48); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x87CFA8); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8DE330;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM16(edx);
    MEM32(ebp + -68) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ecx + ecx * 8;
    ecx = MEM32(0x919CB0);
    MEM32(ebp + -72) = 0xB;
    eax = MEM32(ecx + eax * 4 + 0x18);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058BFBFu); RECOMP_ABI_CALL(0x006BB347u, sub_006BB347); /* call 0x006BB347 */

loc_0058BFBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058BFC4
 * Original: 0x0058BFC4 - 0x0058C037 (115 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058BFC4(void)
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

loc_0058BFC4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0058C018; /* jne: not equal / not zero */

loc_0058BFD2: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058BFF8; /* je: equal / zero */

loc_0058BFDB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0058BFE1u); RECOMP_ABI_CALL(0x00591516u, sub_00591516); /* call 0x00591516 */

loc_0058BFE1: ;
    fp_push(MEMF(esi + edi * 4 + 8)); /* fld float */
    POP32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x28));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058BFF3u); RECOMP_ABI_CALL(0x0058F346u, sub_0058F346); /* call 0x0058F346 */

loc_0058BFF3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0058C031;

loc_0058BFF8: ;
    edi = esi + 8;

loc_0058BFFB: ;
    PUSH32(esp, MEM32(esi + 0x28));
    fp_push(MEMF(edi)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0058C00Au); RECOMP_ABI_CALL(0x0058F346u, sub_0058F346); /* call 0x0058F346 */

loc_0058C00A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058BFFB; /* jl: less (signed <) */

loc_0058C016: ;
    goto loc_0058C031;

loc_0058C018: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C024; /* je: equal / zero */

loc_0058C01F: ;
    PUSH32(esp, 0xFFFFFFF1u);
    POP32(esp, eax);
    goto loc_0058C033;

loc_0058C024: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(0x919D04) = xmm0.f[0]; /* movss */

loc_0058C031: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0058C033: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0058C037
 * Original: 0x0058C037 - 0x0058C12B (244 bytes, 81 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058C037(void)
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

loc_0058C037: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x919EF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    SET_LO16(eax, MEM16(esi + 0x24));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058C0C3; /* je: equal / zero */

loc_0058C058: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0x1FE0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) eax = ecx; /* cmovg */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = ZX16(MEM16(eax * 2 + 0x87CFB0));
    MEM32(ebp + -16) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -24) = 1;
    MEM32(ebp + -12) = 0xFFFF;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -20) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058C126; /* jbe: below or equal (unsigned <=) */

loc_0058C097: ;
    edi = esi + 4;

loc_0058C09A: ;
    ecx = MEM32(0x919CB0);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(edi);
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 4 + 0x18);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C0B6u); RECOMP_ABI_CALL(0x006BB30Fu, sub_006BB30F); /* call 0x006BB30F */

loc_0058C0B6: ;
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058C09A; /* jl: less (signed <) */

loc_0058C0C1: ;
    goto loc_0058C126;

loc_0058C0C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058C126; /* je: equal / zero */

loc_0058C0C7: ;
    eax = ZX16(MEM16(0x919D46));
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + 0xC); /* cvtsi2ss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), LO8(eax) (8-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm1.f[0]; /* movss */
    if (CMP_BE(_fa, _fb)) goto loc_0058C126; /* jbe: below or equal (unsigned <=) */

loc_0058C0FD: ;
    edi = esi + 4;

loc_0058C100: ;
    eax = ZX8(MEM8(0x919D4D));
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C119u); RECOMP_ABI_CALL(0x00591541u, sub_00591541); /* call 0x00591541 */

loc_0058C119: ;
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058C100; /* jl: less (signed <) */

loc_0058C126: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0058C12B
 * Original: 0x0058C12B - 0x0058C175 (74 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058C12B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058C12B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x919EF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058C173; /* je: equal / zero */

loc_0058C142: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x23), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058C172; /* jbe: below or equal (unsigned <=) */

loc_0058C14A: ;
    PUSH32(esp, edi);
    edi = esi + 4;

loc_0058C14E: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = ZX8(MEM8(0x919D4D));
    PUSH32(esp, MEM32(esp + 0x14));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058C164u); RECOMP_ABI_CALL(0x005915FFu, sub_005915FF); /* call 0x005915FF */

loc_0058C164: ;
    eax = ZX8(MEM8(esi + 0x23));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058C14E; /* jl: less (signed <) */

loc_0058C171: ;
    POP32(esp, edi);

loc_0058C172: ;
    POP32(esp, ebx);

loc_0058C173: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058C175
 * Original: 0x0058C175 - 0x0058C1B9 (68 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058C175(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058C175: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C182u); RECOMP_ABI_CALL(0x0058C60Au, sub_0058C60A); /* call 0x0058C60A */

loc_0058C182: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058C1B4; /* jl: less (signed <) */

loc_0058C189: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C197u); RECOMP_ABI_CALL(0x005914B9u, sub_005914B9); /* call 0x005914B9 */

loc_0058C197: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0058C1B0;

loc_0058C19B: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C1A3u); RECOMP_ABI_CALL(0x0058B2A9u, sub_0058B2A9); /* call 0x0058B2A9 */

loc_0058C1A3: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C1ADu); RECOMP_ABI_CALL(0x005914B9u, sub_005914B9); /* call 0x005914B9 */

loc_0058C1AD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0058C1B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058C19B; /* jne: not equal / not zero */

loc_0058C1B4: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058C1B9
 * Original: 0x0058C1B9 - 0x0058C22E (117 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058C1B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058C1B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C1C7u); RECOMP_ABI_CALL(0x0058C60Au, sub_0058C60A); /* call 0x0058C60A */

loc_0058C1C7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058C224; /* jl: less (signed <) */

loc_0058C1CE: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C1DCu); RECOMP_ABI_CALL(0x005914B9u, sub_005914B9); /* call 0x005914B9 */

loc_0058C1DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0058C224; /* je: equal / zero */

loc_0058C1E2: ;
    esi = MEM32(ebp + 0xC);

loc_0058C1E5: ;
    eax = MEM32(ebp + -4);
    eax = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x919EF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(MEM16(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C22A; /* je: equal / zero */

loc_0058C200: ;
    MEM16(eax) = LO16(esi);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C20Bu); RECOMP_ABI_CALL(0x0058C970u, sub_0058C970); /* call 0x0058C970 */

loc_0058C20B: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C213u); RECOMP_ABI_CALL(0x0058B6D5u, sub_0058B6D5); /* call 0x0058B6D5 */

loc_0058C213: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C21Du); RECOMP_ABI_CALL(0x005914B9u, sub_005914B9); /* call 0x005914B9 */

loc_0058C21D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058C1E5; /* jne: not equal / not zero */

loc_0058C224: ;
    eax = edi;

loc_0058C226: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0058C22A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0058C226;

}

/**
 * sub_0058C22E
 * Original: 0x0058C22E - 0x0058C252 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058C22E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058C22E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058C24B; /* jle: less or equal (signed <=) */

loc_0058C236: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x919F5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C24E; /* je: equal / zero */

loc_0058C244: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058C236; /* jl: less (signed <) */

loc_0058C24B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0058C24E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0058C252
 * Original: 0x0058C252 - 0x0058C502 (688 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058C252(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0058C252: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = 0xFFFFFFF7u;
    if (CMP_LE(_fas, _fbs)) goto loc_0058C280; /* jle: less or equal (signed <=) */

loc_0058C26D: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = 0x919F5C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(2); for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*_st) = LO16(eax); edi += ecx * _st; }
    ecx = 0; /* rep stosw */

loc_0058C280: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(0x919F68)) + (uint64_t)(0x100)) >> 32) & 1);
    MEM32(0x919F68) = MEM32(0x919F68) + 0x100;
    _fa = (uint32_t)(MEM32(0x919F68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_0058C293; /* jns: not sign (positive) */

loc_0058C28C: ;
    _cf = 0; /* logical op clears CF */
    MEM32(0x919F68) = MEM32(0x919F68) & 0;
    _fa = (uint32_t)(MEM32(0x919F68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0058C293: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0058C2F9; /* jle: less or equal (signed <=) */

loc_0058C297: ;
    MEM32(ebp + -12) = edx;

loc_0058C29A: ;
    esi = MEM32(ebp + 0x14);
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_0058C2F4; /* jge: greater or equal (signed >=) */

loc_0058C2A7: ;
    ecx = MEM32(0x919EF4);
    eax = esi + esi * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = eax + ecx + 0x2C;

loc_0058C2B7: ;
    _fa = (uint32_t)(MEM8(edx + 0x41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0058C2D6; /* jne: not equal / not zero */

loc_0058C2BD: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C2C6u); RECOMP_ABI_CALL(0x0058C22Eu, sub_0058C22E); /* call 0x0058C22E */

loc_0058C2C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0058C2D6; /* jne: not equal / not zero */

loc_0058C2CC: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0058C2D6; /* jae: above or equal (unsigned >=) */

loc_0058C2D2: ;
    ebx = eax;
    edi = esi;

loc_0058C2D6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x90)) >> 32) & 1);
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0058C2B7; /* jl: less (signed <) */

loc_0058C2E2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0058C2F4; /* jl: less (signed <) */

loc_0058C2E6: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax * 2 + 0x919F5C) = LO16(edi);

loc_0058C2F4: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0058C29A; /* jne: not equal / not zero */

loc_0058C2F9: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -12) = eax;
    goto loc_0058C390;

loc_0058C304: ;
    _fa = (uint32_t)(MEM8(0x919D54)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919D54), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0058C311; /* jne: not equal / not zero */

loc_0058C310: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0058C311: ;
    edi = MEM32(ebp + 0x14);
    MEM32(ebp + -8) = eax;
    eax = edi;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0058C38A; /* jge: greater or equal (signed >=) */

loc_0058C324: ;
    ecx = MEM32(0x919EF4);
    eax = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = eax + ecx + 0x2A;

loc_0058C334: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C33Du); RECOMP_ABI_CALL(0x0058C22Eu, sub_0058C22E); /* call 0x0058C22E */

loc_0058C33D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0058C366; /* jne: not equal / not zero */

loc_0058C343: ;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x65) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x65 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0058C366; /* jae: above or equal (unsigned >=) */

loc_0058C349: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0058C359; /* jge: greater or equal (signed >=) */

loc_0058C351: ;
    esi = MEM32(edx + 2);
    MEM32(ebp + -8) = eax;
    goto loc_0058C364;

loc_0058C359: ;
    if (CMP_NE(_fa, _fb)) goto loc_0058C366; /* jne: not equal / not zero */

loc_0058C35B: ;
    eax = MEM32(edx + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0058C366; /* jae: above or equal (unsigned >=) */

loc_0058C362: ;
    esi = eax;

loc_0058C364: ;
    ebx = edi;

loc_0058C366: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x90)) >> 32) & 1);
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0058C334; /* jl: less (signed <) */

loc_0058C372: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0058C38A; /* jl: less (signed <) */

loc_0058C376: ;
    eax = MEM32(ebp + -4);
    MEM16(eax * 2 + 0x919F5C) = LO16(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0058C399; /* jge: greater or equal (signed >=) */

loc_0058C38A: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);

loc_0058C390: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0058C304; /* jl: less (signed <) */

loc_0058C399: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0058C4FA; /* jne: not equal / not zero */

loc_0058C3A5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = eax;

loc_0058C3A9: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0058C3E1; /* jle: less or equal (signed <=) */

loc_0058C3B3: ;
    eax = edi * 2 + 0x919F5C;
    SET_LO16(esi, MEM16(eax));
    ecx = edi * 2 + 0x919F5E;
    SET_LO16(edx, MEM16(ecx));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0058C3D7; /* jle: less or equal (signed <=) */

loc_0058C3CC: ;
    esi = SX16(LO16(esi));
    MEM16(eax) = LO16(edx);
    MEM16(ecx) = LO16(esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0058C3D7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0058C3B3; /* jl: less (signed <) */

loc_0058C3DD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C3A9; /* je: equal / zero */

loc_0058C3E1: ;
    eax = (uint32_t)(int32_t)SMEM16(0x919F5C);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(0x919F68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = MEM32(ebp + 0x10);
    MEM32(edi) = eax;
    eax = (uint32_t)(int32_t)SMEM16(0x919F5C);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -16) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0058C451; /* jle: less or equal (signed <=) */

loc_0058C404: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx * 2 + 0x919F5C);
    esi = eax + eax * 8;
    eax = MEM32(0x919EF4);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 0x6D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x6D), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0058C439; /* je: equal / zero */

loc_0058C421: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0058C432; /* jge: greater or equal (signed >=) */

loc_0058C425: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = ecx + ecx * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(ecx + eax);

loc_0058C432: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C438u); RECOMP_ABI_CALL(0x0058C175u, sub_0058C175); /* call 0x0058C175 */

loc_0058C438: ;
    POP32(esp, ecx);

loc_0058C439: ;
    MEM8(esi + 0x6D) = 1;
    eax = MEM32(0x919E90);
    MEM32(esi + 0x2C) = eax;
    SET_LO8(eax, MEM8(ebp + 0xC));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -4) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esi + 0x2A) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_0058C404; /* jl: less (signed <) */

loc_0058C451: ;
    eax = (uint32_t)(int32_t)SMEM16(0x919F5C);
    ecx = MEM32(edi);
    edx = MEM32(0x919EF4);
    eax = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + edx) = ecx;
    SET_LO16(eax, MEM16(0x919F5C));
    edx = MEM32(0x919EF4);
    ecx = SX16(LO16(eax));
    ecx = ecx + ecx * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM16(ecx + edx + 4) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(0x919F5C);
    ecx = MEM32(0x919EF4);
    eax = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    MEM16(eax + ecx + 0x28) = MEM16(eax + ecx + 0x28) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + ecx + 0x28)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0058C4FA; /* jle: less or equal (signed <=) */

loc_0058C4A4: ;
    edx = (uint32_t)(int32_t)SMEM16(0x919F5C);
    edi = MEM32(0x919EF4);
    edx = edx + edx * 8;
    eax = ecx * 2 + 0x919F5C;
    SET_LO16(esi, MEM16(eax));
    edx = ecx + edx * 8;
    MEM16(edi + edx * 2 + 4) = LO16(esi);
    edx = (uint32_t)(int32_t)SMEM16(eax);
    esi = MEM32(0x919EF4);
    edx = edx + edx * 8;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    MEM32(edx + esi) = MEM32(edx + esi) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edx + esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = (uint32_t)(int32_t)SMEM16(eax);
    SET_LO16(edx, MEM16(0x919F5C));
    esi = MEM32(0x919EF4);
    eax = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -4) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM16(eax + esi + 0x28) = LO16(edx);
    if (CMP_L(_fas, _fbs)) goto loc_0058C4A4; /* jl: less (signed <) */

loc_0058C4FA: ;
    eax = MEM32(ebp + -16);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058C502
 * Original: 0x0058C502 - 0x0058C60A (264 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058C502(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058C502: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x919EF4);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = ebx + ebx * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + 0x26));
    PUSH32(esp, esi);
    esi = ZX8(LO8(ecx));
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(ebp + -12) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0058C5F0; /* je: equal / zero */

loc_0058C534: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x919E8C);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058C57D; /* jle: less or equal (signed <=) */

loc_0058C543: ;
    ecx = edx + 0x6D;

loc_0058C546: ;
    esi = ZX8(MEM8(ecx + -71));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058C565; /* jne: not equal / not zero */

loc_0058C54F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + -109)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -109), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058C565; /* jl: less (signed <) */

loc_0058C556: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C565; /* je: equal / zero */

loc_0058C55A: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ecx + -70)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + -70), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C565; /* je: equal / zero */

loc_0058C562: ;
    edi = MEM32(ebp + -4);

loc_0058C565: ;
    esi = (uint32_t)(int32_t)SMEM16(0x919E8C);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058C546; /* jl: less (signed <) */

loc_0058C57A: ;
    ebx = MEM32(ebp + 8);

loc_0058C57D: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C5F0; /* je: equal / zero */

loc_0058C583: ;
    ecx = edi + edi * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = ecx + edx + 0x6D;
    SET_LO8(edx, MEM8(esi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058C5E2; /* jne: not equal / not zero */

loc_0058C594: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C5E2; /* je: equal / zero */

loc_0058C598: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058C5E2; /* jne: not equal / not zero */

loc_0058C59E: ;
    MEM8(eax + 0x6D) = 0;
    MEM8(eax + 0x26) = 0;
    MEM8(eax + 0x27) = 0;
    edx = MEM32(0x919E90);
    MEM32(eax + 0x2C) = edx;
    eax = MEM32(0x919EF4);
    MEM8(ecx + eax + 0x6D) = 0;
    eax = MEM32(0x919EF4);
    MEM8(ecx + eax + 0x26) = 0;
    eax = MEM32(0x919EF4);
    MEM8(ecx + eax + 0x27) = 0;
    eax = MEM32(0x919E90);
    edx = MEM32(0x919EF4);
    MEM32(ecx + edx + 0x2C) = eax;
    goto loc_0058C605;

loc_0058C5E2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058C5F0; /* jne: not equal / not zero */

loc_0058C5E7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058C5F0; /* jne: not equal / not zero */

loc_0058C5EB: ;
    MEM8(esi) = 2;
    goto loc_0058C605;

loc_0058C5F0: ;
    MEM8(eax + 0x27) = 0;
    MEM8(eax + 0x26) = 0;
    MEM8(eax + 0x6D) = 0;
    ecx = MEM32(0x919E90);
    MEM32(eax + 0x2C) = ecx;

loc_0058C605: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058C60A
 * Original: 0x0058C60A - 0x0058C63E (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058C60A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058C60A: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058C63A; /* jl: less (signed <) */

loc_0058C612: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x919E8C);
    eax = edx;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058C63A; /* jge: greater or equal (signed >=) */

loc_0058C624: ;
    ecx = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(0x919EF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ecx + 0x6D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x6D), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C63A; /* je: equal / zero */

loc_0058C636: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C63D; /* je: equal / zero */

loc_0058C63A: ;
    PUSH32(esp, 0xFFFFFFF8u);
    POP32(esp, eax);

loc_0058C63D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0058C63E
 * Original: 0x0058C63E - 0x0058C69E (96 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058C63E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058C63E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x919EF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x25), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058C68B; /* je: equal / zero */

loc_0058C657: ;
    PUSH32(esp, 0);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(0x919CB0);
    eax = eax + eax * 8;
    eax = MEM32(ecx + eax * 4 + 0x18);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C672u); RECOMP_ABI_CALL(0x006BB463u, sub_006BB463); /* call 0x006BB463 */

loc_0058C672: ;
    _fa = (uint32_t)(MEM8(esi + 0x22)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x22), 0x14 (8-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0058C687; /* jne: not equal / not zero */

loc_0058C67B: ;
    PUSH32(esp, 0x24);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    goto loc_0058C69B;

loc_0058C687: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    goto loc_0058C69B;

loc_0058C68B: ;
    ecx = ZX8(MEM8(0x919D4D));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058C69Au); RECOMP_ABI_CALL(0x0059169Bu, sub_0059169B); /* call 0x0059169B */

loc_0058C69A: ;
    POP32(esp, ecx);

loc_0058C69B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0058C69E
 * Original: 0x0058C69E - 0x0058C6EF (81 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058C69E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058C69E: ;
    ecx = MEM32(esp + 4);
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058C6BD; /* jne: not equal / not zero */

loc_0058C6B4: ;
    eax = ZX16(MEM16(ecx * 2 + 0x8DE438));
    esp += 4; return; /* ret */

loc_0058C6BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058C6D0; /* jne: not equal / not zero */

loc_0058C6C2: ;
    eax = ecx + ecx;
    ecx = 0x8DE638;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX16(MEM16(ecx));
    esp += 4; return; /* ret */

loc_0058C6D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058C6DF; /* jne: not equal / not zero */

loc_0058C6D5: ;
    eax = ZX16(MEM16(ecx * 2 + 0x8DE438));
    goto loc_0058C6EC;

loc_0058C6DF: ;
    eax = ecx + ecx;
    ecx = 0x8DE638;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX16(MEM16(ecx));

loc_0058C6EC: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_0058C6EF
 * Original: 0x0058C6EF - 0x0058C721 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058C6EF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058C6EF: ;
    _fa = (uint32_t)(MEM8(0x919B1E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x919B1E), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C700; /* je: equal / zero */

loc_0058C6F8: ;
    _fb = (uint32_t)(1) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(0x919B1D) = MEM8(0x919B1D) + 1;
    _fa = (uint32_t)(MEM8(0x919B1D)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0058C700: ;
    eax = MEM32(0x919B14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C720; /* je: equal / zero */

loc_0058C709: ;
    PUSH32(esp, esi);

loc_0058C70A: ;
    PUSH32(esp, MEM32(eax + 0xC));
    esi = MEM32(eax);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x0058C717u); RECOMP_ABI_CALL(0x00587499u, sub_00587499); /* call 0x00587499 */

loc_0058C717: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0058C70A; /* jne: not equal / not zero */

loc_0058C71F: ;
    POP32(esp, esi);

loc_0058C720: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0058C730
 * Original: 0x0058C730 - 0x0058C833 (259 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058C730(void)
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

loc_0058C730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 7 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0058C7F3; /* jne: not equal / not zero */

loc_0058C749: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058C784; /* jl: less (signed <) */

loc_0058C74E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    fp_push(MEMD(esp)); /* fld double */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_0058C76B; /* js: sign (negative) */

loc_0058C758: ;
    MEMD(eax) = fp_top(); /* fst */
    MEMD(eax + 8) = fp_top(); /* fst */
    MEMD(eax + 0x10) = fp_top(); /* fst */
    MEMD(eax + 0x18) = fp_top(); /* fst */
    eax = eax + 0x20;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0058C758; /* jns: not sign (positive) */

loc_0058C76B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_0058C77A; /* js: sign (negative) */

loc_0058C770: ;
    MEMD(eax) = fp_top(); /* fst */
    eax = eax + 8;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0058C770; /* jns: not sign (positive) */

loc_0058C77A: ;
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0058C7C9; /* jne: not equal / not zero */

loc_0058C784: ;
    POP32(esp, edx);
    POP32(esp, ebx);
    POP32(esp, eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0058C78E: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    eax = eax + 0x20;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0058C78E; /* jns: not sign (positive) */

loc_0058C7AD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_0058C7BF; /* js: sign (negative) */

loc_0058C7B2: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    eax = eax + 8;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0058C7B2; /* jns: not sign (positive) */

loc_0058C7BF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0058C7C9; /* jne: not equal / not zero */

loc_0058C7C4: ;
    POP32(esp, edx);
    POP32(esp, ebx);
    POP32(esp, eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0058C7C9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 4 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058C7D6; /* je: equal / zero */

loc_0058C7D1: ;
    MEM32(eax) = ebx;
    eax = eax + 4;

loc_0058C7D6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 2 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058C7E4; /* je: equal / zero */

loc_0058C7DE: ;
    MEM16(eax) = LO16(ebx);
    eax = eax + 2;

loc_0058C7E4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 1 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058C7EE; /* je: equal / zero */

loc_0058C7EC: ;
    MEM8(eax) = LO8(ebx);

loc_0058C7EE: ;
    POP32(esp, edx);
    POP32(esp, ebx);
    POP32(esp, eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0058C7F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 1 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058C805; /* je: equal / zero */

loc_0058C7FA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058C805; /* jl: less (signed <) */

loc_0058C7FF: ;
    MEM8(eax) = LO8(ebx);
    eax = eax + 1;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0058C805: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 2 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058C81A; /* je: equal / zero */

loc_0058C80C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058C81A; /* jl: less (signed <) */

loc_0058C811: ;
    MEM16(eax) = LO16(ebx);
    eax = eax + 2;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0058C81A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 4 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058C82E; /* je: equal / zero */

loc_0058C821: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058C82E; /* jl: less (signed <) */

loc_0058C826: ;
    MEM32(eax) = ebx;
    eax = eax + 4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0058C82E: ;
    goto loc_0058C749;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0058C847
 * Original: 0x0058C847 - 0x0058C8E4 (157 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058C847(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058C847: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(0x919EF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x42);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x2B);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ecx + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x87D1B0); /* mulss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C8A3; /* je: equal / zero */

loc_0058C886: ;
    edx = ZX8(MEM8(ecx + 0x6B));
    eax = (uint32_t)(int32_t)SMEM8(edx + eax);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7DADA4); /* mulss */
    MEMF(ecx + 0x48) = xmm1.f[0]; /* movss */

loc_0058C8A3: ;
    _fa = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x74), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C8D0; /* je: equal / zero */

loc_0058C8A9: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DADA8); /* mulss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(ebp + 8); /* cvtss2si */
    edx = MEM32(ecx + 0x74);
    eax = (uint32_t)(int32_t)SMEM8(edx + eax);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */

loc_0058C8D0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8DE310); /* mulss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0058C8E4
 * Original: 0x0058C8E4 - 0x0058C970 (140 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058C8E4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058C8E4: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0x4B0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    PUSH32(esp, edi);
    edi = 0x1000;
    if (CMP_L(_fas, _fbs)) goto loc_0058C911; /* jl: less (signed <) */

loc_0058C8F8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    eax = ecx;
    ebx = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    POP32(esp, ebx);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xFFFFFB50u);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0058C90C: ;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0058C90C; /* jne: not equal / not zero */

loc_0058C911: ;
    eax = 0xFFFFFB50u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0058C930; /* jg: greater (signed >) */

loc_0058C91A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4B0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0058C92B: ;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0058C92B; /* jne: not equal / not zero */

loc_0058C930: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x369D);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = 0xFFFFFF01u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) ecx = eax; /* cmovl */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058C95B; /* jge: greater or equal (signed >=) */

loc_0058C947: ;
    eax = ZX8(MEM8(ecx + 0x8DE740));
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((9) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_0058C96D;

loc_0058C95B: ;
    eax = ZX8(MEM8(ecx + 0x8DE640));
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0058C96D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058C970
 * Original: 0x0058C970 - 0x0058CA12 (162 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058C970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058C970: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(0x919EF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi + 0x8A)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x8A), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058C9F5; /* jne: not equal / not zero */

loc_0058C98B: ;
    SET_LO16(ecx, MEM16(esi + 0x86));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x88);
    if (CMP_EQ(_fa, _fb)) goto loc_0058C9C3; /* je: equal / zero */

loc_0058C99E: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C9B1; /* je: equal / zero */

loc_0058C9A5: ;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x68);
    eax = (uint32_t)(int32_t)SMEM8(edi + eax);
    POP32(esp, edi);
    goto loc_0058C9B5;

loc_0058C9B1: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x68);

loc_0058C9B5: ;
    _fb = (uint32_t)(0xFFFFFFC0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = SX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0058C9C3: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058C9E7; /* je: equal / zero */

loc_0058C9CD: ;
    ecx = ZX8(MEM8(esi + 0x6C));
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x84);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0058C9E7: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0058C9EDu); RECOMP_ABI_CALL(0x0058C8E4u, sub_0058C8E4); /* call 0x0058C8E4 */

loc_0058C9ED: ;
    POP32(esp, ecx);
    MEM16(esi + 0x8A) = LO16(eax);

loc_0058C9F5: ;
    eax = ZX16(MEM16(esi + 0x8C));
    ecx = ZX16(MEM16(esi + 0x8A));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xC) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(esi + 0x8E) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058CA12
 * Original: 0x0058CA12 - 0x0058CA22 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058CA12(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058CA12: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058CA1Cu); RECOMP_ABI_CALL(0x00449459u, sub_00449459); /* call 0x00449459 */

loc_0058CA1C: ;
    MEM32(0x919F6C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0058CA22
 * Original: 0x0058CA22 - 0x0058CA2E (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058CA22(void)
{

loc_0058CA22: ;
    PUSH32(esp, MEM32(0x919F6C));
    PUSH32(esp, 0x0058CA2Du); RECOMP_ABI_CALL(0x0044AF9Au, sub_0044AF9A); /* call 0x0044AF9A */

loc_0058CA2D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0058CA4B
 * Original: 0x0058CA4B - 0x0058CA78 (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058CA4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0058CA4B: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058CA76; /* je: equal / zero */

loc_0058CA52: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46585052) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x46585052 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058CA76; /* jne: not equal / not zero */

loc_0058CA5A: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058CA62u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058CA62: ;
    PUSH32(esp, 0x0058CA67u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058CA67: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058CA6Du); RECOMP_ABI_CALL(0x0058A8B2u, sub_0058A8B2); /* call 0x0058A8B2 */

loc_0058CA6D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00587904(); return; /* tail jmp 0x00587904 */

loc_0058CA76: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058CA78
 * Original: 0x0058CA78 - 0x0058CB46 (206 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058CA78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058CA78: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058CA84u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058CA84: ;
    PUSH32(esp, 0x38);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058CA8Bu); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_0058CA8B: ;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058CA92u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058CA92: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058CA9Au); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058CA9A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058CAA9; /* jne: not equal / not zero */

loc_0058CAA1: ;
    PUSH32(esp, 0xFFFFFFFEu);
    POP32(esp, eax);
    goto loc_0058CB43;

loc_0058CAA9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ebp + 8);
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x87D1BC)); /* movss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x87D1B8)); /* movss */
    PUSH32(esp, esi);
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD3C0)); /* movss */
    PUSH32(esp, edi);
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x87D1B4)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB8B0)); /* movss */
    PUSH32(esp, 0xC);
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x87CFA4)); /* movss */
    POP32(esp, ecx);
    MEM32(ebx + 4) = 1;
    MEM32(ebx) = 0x46585052;
    esi = ebp + -48;
    edi = ebx + 8;
    MEM32(ebp + -48) = 0xFFFFFC18u;
    MEM32(ebp + -44) = 0xFFFFFED4u;
    MEM32(ebp + -28) = 0xFFFFFB3Du;
    MEM32(ebp + -20) = 0x1B9;
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
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
    MEM32(eax) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

loc_0058CB43: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058CB46
 * Original: 0x0058CB46 - 0x0058CB62 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058CB46(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058CB46: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0058CB4Eu); RECOMP_ABI_CALL(0x0058CA4Bu, sub_0058CA4B); /* call 0x0058CA4B */

loc_0058CB4E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0058CB5C; /* je: equal / zero */

loc_0058CB55: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058CB5Bu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0058CB5B: ;
    POP32(esp, ecx);

loc_0058CB5C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0058CB62
 * Original: 0x0058CB62 - 0x0058CB9A (56 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058CB62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058CB62: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058CB94; /* je: equal / zero */

loc_0058CB6E: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    esi = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x8DE740) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x8DE740;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xC);
    edi = ebp + -48;
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
    POP32(esp, ecx);
    esi = ebp + -48;
    edi = edx + 8;
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

loc_0058CB94: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0058CEAB
 * Original: 0x0058CEAB - 0x0058D003 (344 bytes, 140 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058CEAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058CEAB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(0x8DEBC0) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = 0xD2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0058CF5A; /* jg: greater (signed >) */

loc_0058CECC: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0058CF56; /* je: equal / zero */

loc_0058CED2: ;
    _fb = (uint32_t)(0xFFFFFFC4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFC4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0058CF21; /* jg: greater (signed >) */

loc_0058CED9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0058CF1A; /* je: equal / zero */

loc_0058CEDB: ;
    ecx = eax;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CFB7; /* je: equal / zero */

loc_0058CEE6: ;
    PUSH32(esp, 0xA);
    POP32(esp, eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CF12; /* je: equal / zero */

loc_0058CEED: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CF0B; /* je: equal / zero */

loc_0058CEF1: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CF04; /* je: equal / zero */

loc_0058CEF5: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0058CFB7; /* jne: not equal / not zero */

loc_0058CEFD: ;
    PUSH32(esp, 4);
    goto loc_0058CFCD;

loc_0058CF04: ;
    PUSH32(esp, 3);
    goto loc_0058CFCD;

loc_0058CF0B: ;
    PUSH32(esp, 2);
    goto loc_0058CFCD;

loc_0058CF12: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0058CFCE;

loc_0058CF1A: ;
    PUSH32(esp, 5);
    goto loc_0058CFCD;

loc_0058CF21: ;
    ecx = eax;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CF52; /* je: equal / zero */

loc_0058CF2B: ;
    PUSH32(esp, 0xA);
    POP32(esp, eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CF4E; /* je: equal / zero */

loc_0058CF32: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CF4A; /* je: equal / zero */

loc_0058CF36: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CF43; /* je: equal / zero */

loc_0058CF3A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0058CFB7; /* jne: not equal / not zero */

loc_0058CF3E: ;
    goto loc_0058CFCE;

loc_0058CF43: ;
    PUSH32(esp, 9);
    goto loc_0058CFCD;

loc_0058CF4A: ;
    PUSH32(esp, 8);
    goto loc_0058CFCD;

loc_0058CF4E: ;
    PUSH32(esp, 7);
    goto loc_0058CFCD;

loc_0058CF52: ;
    PUSH32(esp, 6);
    goto loc_0058CFCD;

loc_0058CF56: ;
    PUSH32(esp, 0xB);
    goto loc_0058CFCD;

loc_0058CF5A: ;
    ecx = 0x10E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0058CF9A; /* jg: greater (signed >) */

loc_0058CF63: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0058CF96; /* je: equal / zero */

loc_0058CF65: ;
    ecx = eax;
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xDC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CF92; /* je: equal / zero */

loc_0058CF6F: ;
    PUSH32(esp, 0xA);
    POP32(esp, eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CF8E; /* je: equal / zero */

loc_0058CF76: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CF8A; /* je: equal / zero */

loc_0058CF7A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CF86; /* je: equal / zero */

loc_0058CF7E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0058CFB7; /* jne: not equal / not zero */

loc_0058CF82: ;
    PUSH32(esp, 0x10);
    goto loc_0058CFCD;

loc_0058CF86: ;
    PUSH32(esp, 0xF);
    goto loc_0058CFCD;

loc_0058CF8A: ;
    PUSH32(esp, 0xE);
    goto loc_0058CFCD;

loc_0058CF8E: ;
    PUSH32(esp, 0xD);
    goto loc_0058CFCD;

loc_0058CF92: ;
    PUSH32(esp, 0xC);
    goto loc_0058CFCD;

loc_0058CF96: ;
    PUSH32(esp, 0x11);
    goto loc_0058CFCD;

loc_0058CF9A: ;
    ecx = eax;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x118;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CFCB; /* je: equal / zero */

loc_0058CFA4: ;
    PUSH32(esp, 0xA);
    POP32(esp, eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CFC7; /* je: equal / zero */

loc_0058CFAB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CFC3; /* je: equal / zero */

loc_0058CFAF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CFBF; /* je: equal / zero */

loc_0058CFB3: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0058CFBB; /* je: equal / zero */

loc_0058CFB7: ;
    PUSH32(esp, 0x17);
    goto loc_0058CFCD;

loc_0058CFBB: ;
    PUSH32(esp, 0x16);
    goto loc_0058CFCD;

loc_0058CFBF: ;
    PUSH32(esp, 0x15);
    goto loc_0058CFCD;

loc_0058CFC3: ;
    PUSH32(esp, 0x14);
    goto loc_0058CFCD;

loc_0058CFC7: ;
    PUSH32(esp, 0x13);
    goto loc_0058CFCD;

loc_0058CFCB: ;
    PUSH32(esp, 0x12);

loc_0058CFCD: ;
    POP32(esp, eax);

loc_0058CFCE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    esi = eax + eax * 2;
    PUSH32(esp, 0);
    eax = ebp + -48;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x919CB4));
    _fb = (uint32_t)(0x8DE740) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x8DE740;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebp + -48;
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
    PUSH32(esp, 0x0058CFF5u); RECOMP_ABI_CALL(0x006BE7E8u, sub_006BE7E8); /* call 0x006BE7E8 */

loc_0058CFF5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058D003
 * Original: 0x0058D003 - 0x0058D02F (44 bytes, 15 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D003(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D003: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 4);
    MEM32(0x8DEBC0) = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x919CB4));
    PUSH32(esp, 0x0058D024u); RECOMP_ABI_CALL(0x006BE7E8u, sub_006BE7E8); /* call 0x006BE7E8 */

loc_0058D024: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0058D02F
 * Original: 0x0058D02F - 0x0058D05B (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D02F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D02F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058D035u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058D035: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(eax + 4));
    eax = ZX16(MEM16(0x919D46));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058D04Du); RECOMP_ABI_CALL(0x0058F141u, sub_0058F141); /* call 0x0058F141 */

loc_0058D04D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x0058D057u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058D057: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058D05B
 * Original: 0x0058D05B - 0x0058D0D4 (121 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058D05B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D05B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 4);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0058D072; /* jne: not equal / not zero */

loc_0058D06F: ;
    MEM32(ebp + 8) = ecx;

loc_0058D072: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058D07E; /* jne: not equal / not zero */

loc_0058D077: ;
    MEM32(ebp + 8) = 0x400;

loc_0058D07E: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058D09E; /* jne: not equal / not zero */

loc_0058D083: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D088u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058D088: ;
    PUSH32(esp, MEM32(esi + 0x28));
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D093u); RECOMP_ABI_CALL(0x0058F2A4u, sub_0058F2A4); /* call 0x0058F2A4 */

loc_0058D093: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D09Cu); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058D09C: ;
    goto loc_0058D0CF;

loc_0058D09E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    PUSH32(esp, 0);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x919CB4));
    esi = 0x8DE740;
    edi = ebp + -48;
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
    PUSH32(esp, 0x0058D0BDu); RECOMP_ABI_CALL(0x006BE7E8u, sub_006BE7E8); /* call 0x006BE7E8 */

loc_0058D0BD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x8DEBC0) = MEM32(0x8DEBC0) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(0x8DEBC0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ecx;

loc_0058D0CF: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058D0D4
 * Original: 0x0058D0D4 - 0x0058D114 (64 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058D0D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D0D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    ebx = ecx;
    POP32(esp, ecx);
    PUSH32(esp, 0);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x919CB4));
    esi = 0x8DE740;
    edi = ebp + -48;
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
    PUSH32(esp, 0x0058D0FDu); RECOMP_ABI_CALL(0x006BE7E8u, sub_006BE7E8); /* call 0x006BE7E8 */

loc_0058D0FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058D106; /* jge: greater or equal (signed >=) */

loc_0058D101: ;
    PUSH32(esp, 0xFFFFFFF7u);
    POP32(esp, eax);
    goto loc_0058D10F;

loc_0058D106: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D10Du); RECOMP_ABI_CALL(0x0058CA4Bu, sub_0058CA4B); /* call 0x0058CA4B */

loc_0058D10D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0058D10F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058D114
 * Original: 0x0058D114 - 0x0058D14E (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D114(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D114: ;
    PUSH32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0058D14B; /* jle: less or equal (signed <=) */

loc_0058D123: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(0x919EF4);
    ecx = ecx + ecx * 8;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx + edx + 4;

loc_0058D137: ;
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) edi = edx; /* cmovg */
    if (CMP_G(_fas, _fbs)) eax = esi; /* cmovg */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D137; /* jl: less (signed <) */

loc_0058D14B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058D15B
 * Original: 0x0058D15B - 0x0058D16F (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D15B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D15B: ;
    PUSH32(esp, 0x0058D160u); RECOMP_ABI_CALL(0x005911C7u, sub_005911C7); /* call 0x005911C7 */

loc_0058D160: ;
    ecx = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x9C;
    esp += 4; return; /* ret */

}

/**
 * sub_0058D16F
 * Original: 0x0058D16F - 0x0058D1FD (142 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058D16F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D16F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D179u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058D179: ;
    eax = ZX8(MEM8(0x919D5E));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058D195; /* jle: less or equal (signed <=) */

loc_0058D186: ;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x91A274)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi * 4 + 0x91A274), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058D1A3; /* je: equal / zero */

loc_0058D190: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D186; /* jl: less (signed <) */

loc_0058D195: ;
    PUSH32(esp, 0xFFFFFFF7u);

loc_0058D197: ;
    POP32(esp, edi);

loc_0058D198: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D19Du); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058D19D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0058D1A3: ;
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D1ADu); RECOMP_ABI_CALL(0x005911CAu, sub_005911CA); /* call 0x005911CA */

loc_0058D1AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_0058D1B7; /* jge: greater or equal (signed >=) */

loc_0058D1B3: ;
    PUSH32(esp, 0xFFFFFFFAu);
    goto loc_0058D197;

loc_0058D1B7: ;
    PUSH32(esp, ebx);
    ebx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D1BFu); RECOMP_ABI_CALL(0x005911C7u, sub_005911C7); /* call 0x005911C7 */

loc_0058D1BF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D1C6u); RECOMP_ABI_CALL(0x005911C7u, sub_005911C7); /* call 0x005911C7 */

loc_0058D1C6: ;
    ecx = MEM32(ebp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x54) = eax;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x9C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x58) = eax;
    eax = MEM32(ebp + 0x10);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM16(esi + 0x40) = LO16(ecx);
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi) = 0xFFFFFFFFu;
    MEM32(edi * 4 + 0x91A274) = esi;
    POP32(esp, ebx);
    goto loc_0058D198;

}

/**
 * sub_0058D1FD
 * Original: 0x0058D1FD - 0x0058D536 (825 bytes, 258 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058D1FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D1FD: ;
    PUSH32(esp, ebp);
    ebp = esp + -104;
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x7C));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x58) = esi;
    PUSH32(esp, 0x0058D218u); RECOMP_ABI_CALL(0x0058FA4Eu, sub_0058FA4E); /* call 0x0058FA4E */

loc_0058D218: ;
    ebx = MEM32(ebp + 0x74);
    SET_LO8(eax, MEM8(ebx + 2));
    MEM8(ebp + -125) = LO8(eax);
    POP32(esp, ecx);
    ecx = ZX8(LO8(eax));
    eax = MEM32(ebp + 0x78);
    MEM32(ebp + 0x5C) = ecx;
    ecx = MEM32(ebp + 0x70);
    edi = MEM32(ecx * 4 + 0x91A274);
    SET_LO16(ecx, MEM16(eax + 8));
    MEM16(ebp + -104) = LO16(ecx);
    ecx = MEM32(ebx);
    MEM32(ebp + 0x58) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi + 0x48) = esi;
    MEM32(edi + 0x4C) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 0x60) = ecx;
    _fa = (uint32_t)(MEM8(edi + 0x62)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x62), 0 (8-bit) */
    MEM32(edi + 8) = esi;
    MEM16(edi + 0x46) = LO16(esi);
    MEM16(edi + 0x44) = LO16(esi);
    MEM32(ebp + 0x74) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_0058D29F; /* jbe: below or equal (unsigned <=) */

loc_0058D265: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x64) = eax;
    ecx = edi + 0x64;
    eax = edi + 0x28;
    goto loc_0058D276;

loc_0058D273: ;
    ecx = MEM32(ebp + 0x60);

loc_0058D276: ;
    edx = MEM32(ebp + 0x64);
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + -84) = esi;
    MEM16(eax + 0xC) = LO16(esi);
    MEM16(eax) = LO16(esi);
    edx = MEM32(edx);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x60) = ecx;
    ecx = ZX8(MEM8(edi + 0x62));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D273; /* jl: less (signed <) */

loc_0058D29F: ;
    eax = ebp + -128;
    PUSH32(esp, eax);
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058D2ACu); RECOMP_ABI_CALL(0x005916BAu, sub_005916BA); /* call 0x005916BA */

loc_0058D2AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + 0x74) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0058D52C; /* je: equal / zero */

loc_0058D2B9: ;
    ecx = ebp + 0x54;
    PUSH32(esp, ecx);
    ecx = ebp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058D2C7u); RECOMP_ABI_CALL(0x0058AFF8u, sub_0058AFF8); /* call 0x0058AFF8 */

loc_0058D2C7: ;
    PUSH32(esp, MEM32(ebp + 0x54));
    eax = ebp + 0x50;
    PUSH32(esp, MEM32(ebp + 0x4C));
    PUSH32(esp, eax);
    PUSH32(esp, 0x65);
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, 0x0058D2DBu); RECOMP_ABI_CALL(0x0058C252u, sub_0058C252); /* call 0x0058C252 */

loc_0058D2DB: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebp + 0x64) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0058D2ED; /* jge: greater or equal (signed >=) */

loc_0058D2E5: ;
    MEM32(edi) = 0xFFFFFFF7u;
    goto loc_0058D29F;

loc_0058D2ED: ;
    ecx = MEM32(ebp + 0x50);
    MEM32(edi) = ecx;
    ecx = ZX8(MEM8(ebx + 2));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058D2FDu); RECOMP_ABI_CALL(0x0058D114u, sub_0058D114); /* call 0x0058D114 */

loc_0058D2FD: ;
    esi = MEM32(ebp + 0x64);
    MEM8(edi + 0x42) = LO8(eax);
    eax = MEM32(0x919EF4);
    esi = esi + esi * 8;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ebp + 0x60) = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(eax, MEM16(ebx));
    MEM16(esi + 0x20) = LO16(eax);
    SET_LO8(eax, MEM8(ebx + 3));
    MEM8(esi + 0x22) = LO8(eax);
    SET_LO8(eax, MEM8(ebx + 2));
    POP32(esp, ecx);
    MEM8(esi + 0x23) = LO8(eax);
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 1 (8-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0058D343; /* jne: not equal / not zero */

loc_0058D336: ;
    edx = MEM32(ebp + 0x7C);
    SET_LO16(eax, MEM16(edx + 8));
    MEM16(esi + 0x1C) = LO16(eax);
    goto loc_0058D34D;

loc_0058D343: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058D349u); RECOMP_ABI_CALL(0x0058D951u, sub_0058D951); /* call 0x0058D951 */

loc_0058D349: ;
    edx = MEM32(ebp + 0x7C);
    POP32(esp, ecx);

loc_0058D34D: ;
    MEM16(esi + 0x4C) = MEM16(esi + 0x4C) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x4C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(esi + 0x12) = MEM16(esi + 0x12) | 0xFFFF;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    eax = MEM32(ebp + 0x78);
    SET_LO16(ecx, MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x7DADA4)); /* movss */
    MEM16(esi + 0x88) = LO16(ecx);
    SET_LO16(ecx, MEM16(edx + 0xC));
    MEM16(esi + 0x8C) = LO16(ecx);
    SET_LO8(ecx, MEM8(edx + 1));
    MEM8(esi + 0x68) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 5));
    MEM8(esi + 0x60) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 5);
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esi + 0x64);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(eax + 6));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x26) = 0;
    MEM8(esi + 0x27) = 0;
    MEM32(esi + 0x78) = ecx;
    MEM32(esi + 0x80) = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    MEM16(esi + 0x86) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM8(edx);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x38) = xmm1.f[0]; /* movss */
    eax = ZX8(MEM8(ebx + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058D47E; /* jle: less or equal (signed <=) */

loc_0058D3D4: ;
    edx = MEM32(ebp + 0x78);
    SET_LO16(edx, MEM16(edx + ecx * 2 + 0xC));
    eax = eax + eax * 2;
    eax = ecx + eax * 2;
    _fb = (uint32_t)(MEM16(eax * 2 + 0x919EF4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - MEM16(eax * 2 + 0x919EF4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM16(esi + ecx * 2 + 4);
    MEM16(esi + ecx * 2 + 0x50) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + 0x74));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x919EF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x24) = LO16(edx);
    edx = MEM32(ebp + 0x7C);
    SET_LO8(edx, MEM8(edx + 4));
    MEM8(eax + 0x5F) = LO8(edx);
    edx = MEM32(ebp + 0x78);
    SET_LO8(edx, MEM8(edx + 3));
    MEM8(eax + 0x2B) = LO8(edx);
    edx = MEM32(esi + 0x38);
    MEM32(eax + 0x38) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    MEM32(eax + 0x74) = edx;
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEM8(eax + 0x5E) = LO8(edx);
    MEM8(eax + 0x5D) = LO8(edx);
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x70) = edx;
    MEM32(eax + 0x7C) = edx;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax + 0x5C) = 1;
    MEM32(eax + 0x40) = 0x7F0000;
    MEM32(eax + 0x44) = 0x7FFFFFFF;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8DE310); /* mulss */
    MEM16(eax + 0x1E) = MEM16(eax + 0x1E) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x1E)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x4E) = LO8(edx);
    eax = ZX8(MEM8(ebx + 2));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D3D4; /* jl: less (signed <) */

loc_0058D47B: ;
    edx = MEM32(ebp + 0x7C);

loc_0058D47E: ;
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058D48C; /* jne: not equal / not zero */

loc_0058D484: ;
    SET_LO16(eax, MEM16(edx + 0xA));
    MEM16(esi + 0x1E) = LO16(eax);

loc_0058D48C: ;
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058D4BE; /* jbe: below or equal (unsigned <=) */

loc_0058D496: ;
    ecx = esi + 0x50;

loc_0058D499: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + -76);
    SET_LO16(edx, MEM16(ecx));
    eax = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x919EF4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x919EF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 0x1C) = MEM16(eax + 0x1C) + LO16(edx);
    _fa = (uint32_t)(MEM16(eax + 0x1C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(ebx + 2));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D499; /* jl: less (signed <) */

loc_0058D4BE: ;
    PUSH32(esp, MEM32(ebp + 0x64));
    MEM16(esi + 0x8A) = MEM16(esi + 0x8A) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x8A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x0058D4CEu); RECOMP_ABI_CALL(0x0058C970u, sub_0058C970); /* call 0x0058C970 */

loc_0058D4CE: ;
    PUSH32(esp, MEM32(ebp + 0x78));
    eax = MEM32(ebp + 0x7C);
    ecx = ZX16(MEM16(eax + 0x16));
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(eax + 0x14));
    eax = ZX16(MEM16(eax + 0xE));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x64));
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, 0x0058D4EFu); RECOMP_ABI_CALL(0x005911D0u, sub_005911D0); /* call 0x005911D0 */

loc_0058D4EF: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x64) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0058D52C; /* jge: greater or equal (signed >=) */

loc_0058D4F9: ;
    eax = MEM32(ebp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058D520; /* jle: less or equal (signed <=) */

loc_0058D500: ;
    esi = MEM32(ebp + 0x60);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x74) = eax;

loc_0058D509: ;
    eax = MEM32(0x919EF4);
    eax = (uint32_t)(int32_t)SMEM16(esi + eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058D518u); RECOMP_ABI_CALL(0x0058C502u, sub_0058C502); /* call 0x0058C502 */

loc_0058D518: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_0058D509; /* jne: not equal / not zero */

loc_0058D520: ;
    eax = MEM32(ebp + 0x64);
    MEM32(edi) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0058D29F;

loc_0058D52C: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x68;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058D536
 * Original: 0x0058D536 - 0x0058D61B (229 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058D536(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D536: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax * 4 + 0x91A274);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0x62)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x62), LO8(edx) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0058D568; /* jbe: below or equal (unsigned <=) */

loc_0058D54E: ;
    eax = ecx + 0x34;

loc_0058D551: ;
    esi = (uint32_t)(int32_t)SMEM16(ecx + 0x40);
    edi = (uint32_t)(int32_t)SMEM16(eax);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058D5B7; /* jge: greater or equal (signed >=) */

loc_0058D55D: ;
    esi = ZX8(MEM8(ecx + 0x62));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D551; /* jl: less (signed <) */

loc_0058D568: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x46);
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x7C;
    edx = MEM32(eax + 4);
    edx = edx ^ MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x7FFFFFFF;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = MEM32(eax + 4) ^ edx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 4);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ebx;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    _fa = (uint32_t)(MEM8(ecx + 0x62)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x62), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0058D5E7; /* jbe: below or equal (unsigned <=) */

loc_0058D5A9: ;
    ebx = esi + 0xC;
    edx = ecx + 0x34;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = ebx;
    goto loc_0058D5BF;

loc_0058D5B7: ;
    PUSH32(esp, 0xFFFFFFF3u);
    POP32(esp, eax);
    goto loc_0058D617;

loc_0058D5BC: ;
    eax = MEM32(ebp + -8);

loc_0058D5BF: ;
    ebx = MEM32(ebp + 8);
    ebx = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 4;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(edx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(edx) = LO16(ebx);
    eax = ZX8(MEM8(ecx + 0x62));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D5BC; /* jl: less (signed <) */

loc_0058D5E7: ;
    eax = MEM32(esi + 4);
    edx = MEM32(ecx + 0x48);
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x48) = eax;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, MEM16(ecx + 0x46));
    POP32(esp, ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ecx + 0x46) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 0x40));
    _fa = (uint32_t)(MEM16(ecx + 0x46)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x46), LO16(edx) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D617; /* jl: less (signed <) */

loc_0058D611: ;
    MEM16(ecx + 0x46) = 0;

loc_0058D617: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058D61B
 * Original: 0x0058D61B - 0x0058D64E (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D61B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D61B: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x91A274);
    edx = ZX8(MEM8(eax + 0x62));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058D645; /* jle: less or equal (signed <=) */

loc_0058D631: ;
    ecx = eax + 0x34;
    PUSH32(esp, edi);

loc_0058D635: ;
    edi = (uint32_t)(int32_t)SMEM16(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D63F; /* jl: less (signed <) */

loc_0058D63C: ;
    esi = (uint32_t)(int32_t)SMEM16(ecx);

loc_0058D63F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0058D635; /* jne: not equal / not zero */

loc_0058D644: ;
    POP32(esp, edi);

loc_0058D645: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x40);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058D64E
 * Original: 0x0058D64E - 0x0058D662 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D64E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D64E: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax * 4 + 0x91A274);
    eax = MEM32(ecx + 0x4C);
    ecx = MEM32(ecx + 0x48);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0058D675
 * Original: 0x0058D675 - 0x0058D697 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D675(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D675: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058D67Bu); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_0058D67B: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0058D685u); RECOMP_ABI_CALL(0x005911CDu, sub_005911CD); /* call 0x005911CD */

loc_0058D685: ;
    MEM32(esi * 4 + 0x91A274) = MEM32(esi * 4 + 0x91A274) & 0;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x91A274)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    PUSH32(esp, 0x0058D693u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_0058D693: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058D697
 * Original: 0x0058D697 - 0x0058D7ED (342 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058D697(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D697: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi * 4 + 0x91A274);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 0x62)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x62), LO8(ebx) (8-bit) */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0058D6D8; /* jbe: below or equal (unsigned <=) */

loc_0058D6B9: ;
    edx = ZX8(MEM8(eax + 0x62));
    ecx = eax + 0x10;

loc_0058D6C0: ;
    ebx = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0058D6CB; /* ja: above (unsigned >) */

loc_0058D6C7: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0058D6CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0058D6C0; /* jne: not equal / not zero */

loc_0058D6D1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058D724; /* je: equal / zero */

loc_0058D6D8: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x44);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(MEM32(eax + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x54), ebx (32-bit) */
    edx = ecx + eax + 0x7C;
    if (CMP_EQ(_fa, _fb)) goto loc_0058D708; /* je: equal / zero */

loc_0058D6E8: ;
    ecx = MEM32(0x919F70);
    ecx = ecx * 8 + 0x919F74;
    MEM16(ecx) = LO16(edi);
    MEM16(ecx + 2) = LO16(esi);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = edx;
    MEM32(0x919F70) = MEM32(0x919F70) + 1;
    _fa = (uint32_t)(MEM32(0x919F70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0058D708: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x44));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + 0x44) = LO16(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 8) = MEM32(eax + 8) + edi;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(ecx, MEM16(eax + 0x40));
    _fa = (uint32_t)(MEM16(eax + 0x44)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x44), LO16(ecx) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D724; /* jl: less (signed <) */

loc_0058D720: ;
    MEM16(eax + 0x44) = LO16(ebx);

loc_0058D724: ;
    esi = MEM32(ebp + 0xC);
    ecx = eax + esi * 2 + 0x34;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), LO16(ebx) (16-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0058D73A; /* jne: not equal / not zero */

loc_0058D733: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0058D7E8;

loc_0058D73A: ;
    ebx = MEM32(ebp + 0x10);
    ecx = eax + esi * 2 + 0x28;
    edx = (uint32_t)(int32_t)SMEM16(ecx);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx + eax + 0x7C;
    edi = MEM32(edx + 4);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebx) = edi;
    edi = MEM32(edx + 4);
    ebx = MEM32(ebp + 0x14);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebx) = edi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(ecx));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ecx) = LO16(edi);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + esi * 4 + 0x10) = MEM32(eax + esi * 4 + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + esi * 4 + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax + 0x10;
    goto loc_0058D779;

loc_0058D776: ;
    edi = MEM32(ebp + 0xC);

loc_0058D779: ;
    ebx = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0058D784; /* ja: above (unsigned >) */

loc_0058D780: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0058D784: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 1 (32-bit) */
    MEM32(ebp + 0xC) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0058D79C; /* jne: not equal / not zero */

loc_0058D793: ;
    edi = ZX8(MEM8(eax + 0x62));
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D776; /* jl: less (signed <) */

loc_0058D79C: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058D7BF; /* je: equal / zero */

loc_0058D7A2: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(edx + 4);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 0x48) = MEM32(eax + 0x48) - edi;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(edx + 4);
    ebx = MEM32(eax + 0x4C);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x4C) = edi;

loc_0058D7BF: ;
    SET_LO16(eax, MEM16(eax + 0x40));
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), LO16(eax) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D7CD; /* jl: less (signed <) */

loc_0058D7C8: ;
    MEM16(ecx) = 0;

loc_0058D7CD: ;
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(eax) = LO16(ecx);
    edx = MEM32(edx + esi * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058D7E6; /* jne: not equal / not zero */

loc_0058D7E1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0058D7E8;

loc_0058D7E6: ;
    eax = edx;

loc_0058D7E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058D7ED
 * Original: 0x0058D7ED - 0x0058D82D (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D7ED(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D7ED: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx * 4 + 0x91A274);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x42);
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058D82C; /* jne: not equal / not zero */

loc_0058D802: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 0x4C) = MEM32(eax + 0x4C) - ecx;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058D82C; /* je: equal / zero */

loc_0058D80F: ;
    eax = MEM32(0x919F70);
    eax = eax * 8 + 0x919F74;
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = ecx;
    MEM32(0x919F70) = MEM32(0x919F70) + 1;
    _fa = (uint32_t)(MEM32(0x919F70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0058D82C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0058D82D
 * Original: 0x0058D82D - 0x0058D879 (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D82D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D82D: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x919F70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x919F70), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0058D870; /* jle: less or equal (signed <=) */

loc_0058D838: ;
    PUSH32(esp, esi);
    esi = 0x919F78;

loc_0058D83E: ;
    _fa = (uint32_t)(MEM16(esi + -4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + -4), 0 (16-bit) */
    ecx = ZX16(MEM16(esi + -2));
    eax = MEM32(ecx * 4 + 0x91A274);
    PUSH32(esp, MEM32(eax + 0x5C));
    PUSH32(esp, MEM32(esi));
    if (CMP_NE(_fa, _fb)) goto loc_0058D85E; /* jne: not equal / not zero */

loc_0058D855: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0058D859u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0058D856u); } /* indirect call */
    }

loc_0058D859: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0058D863;

loc_0058D85E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0058D861u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0058D85Eu); } /* indirect call */
    }

loc_0058D861: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0058D863: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x919F70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x919F70) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D83E; /* jl: less (signed <) */

loc_0058D86F: ;
    POP32(esp, esi);

loc_0058D870: ;
    MEM32(0x919F70) = MEM32(0x919F70) & 0;
    _fa = (uint32_t)(MEM32(0x919F70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058D879
 * Original: 0x0058D879 - 0x0058D8C3 (74 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D879(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D879: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x91A274);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0058D88Du); RECOMP_ABI_CALL(0x0058C175u, sub_0058C175); /* call 0x0058C175 */

loc_0058D88D: ;
    POP32(esp, ecx);
    PUSH32(esp, 0x0058D893u); RECOMP_ABI_CALL(0x0058D82Du, sub_0058D82D); /* call 0x0058D82D */

loc_0058D893: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x62)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x62), LO8(ebx) (8-bit) */
    MEM32(esi) = 0xFFFFFFFFu;
    if (CMP_BE(_fa, _fb)) goto loc_0058D8BE; /* jbe: below or equal (unsigned <=) */

loc_0058D8A0: ;
    PUSH32(esp, edi);
    edi = esi + 0x64;

loc_0058D8A4: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058D8B1; /* je: equal / zero */

loc_0058D8AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058D8B0u); RECOMP_ABI_CALL(0x0058A8B2u, sub_0058A8B2); /* call 0x0058A8B2 */

loc_0058D8B0: ;
    POP32(esp, ecx);

loc_0058D8B1: ;
    eax = ZX8(MEM8(esi + 0x62));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D8A4; /* jl: less (signed <) */

loc_0058D8BD: ;
    POP32(esp, edi);

loc_0058D8BE: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0058D8C3
 * Original: 0x0058D8C3 - 0x0058D90A (71 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058D8C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D8C3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D8D0u); RECOMP_ABI_CALL(0x0058C60Au, sub_0058C60A); /* call 0x0058C60A */

loc_0058D8D0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058D905; /* jl: less (signed <) */

loc_0058D8D7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D8E5u); RECOMP_ABI_CALL(0x005914B9u, sub_005914B9); /* call 0x005914B9 */

loc_0058D8E5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0058D901;

loc_0058D8E9: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D8F4u); RECOMP_ABI_CALL(0x0059172Fu, sub_0059172F); /* call 0x0059172F */

loc_0058D8F4: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D8FEu); RECOMP_ABI_CALL(0x005914B9u, sub_005914B9); /* call 0x005914B9 */

loc_0058D8FE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0058D901: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058D8E9; /* jne: not equal / not zero */

loc_0058D905: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058D90A
 * Original: 0x0058D90A - 0x0058D951 (71 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058D90A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D90A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D917u); RECOMP_ABI_CALL(0x0058C60Au, sub_0058C60A); /* call 0x0058C60A */

loc_0058D917: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0058D94C; /* jl: less (signed <) */

loc_0058D91E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D92Cu); RECOMP_ABI_CALL(0x005914B9u, sub_005914B9); /* call 0x005914B9 */

loc_0058D92C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0058D948;

loc_0058D930: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D93Bu); RECOMP_ABI_CALL(0x00591782u, sub_00591782); /* call 0x00591782 */

loc_0058D93B: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058D945u); RECOMP_ABI_CALL(0x005914B9u, sub_005914B9); /* call 0x005914B9 */

loc_0058D945: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0058D948: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058D930; /* jne: not equal / not zero */

loc_0058D94C: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0058D951
 * Original: 0x0058D951 - 0x0058D9A5 (84 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D951(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0058D951: ;
    edx = MEM32(esp + 4);
    ecx = ZX8(MEM8(edx + 0x23));
    eax = MEM32(0x919C44);
    PUSH32(esp, esi);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    eax = ecx + eax * 2;
    edi = eax + eax * 2;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = edi * 2 + 0x87D1BA;
    if (CMP_LE(_fas, _fbs)) goto loc_0058D9A2; /* jle: less or equal (signed <=) */

loc_0058D976: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = edx + 4;

loc_0058D97B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp);
    ebx = MEM32(0x919EF4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esi + edi));
    eax = eax + eax * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + ebx + 0x1C) = LO16(ecx);
    eax = ZX8(MEM8(edx + 0x23));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058D97B; /* jl: less (signed <) */

loc_0058D9A0: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0058D9A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058D9A5
 * Original: 0x0058D9A5 - 0x0058D9B4 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D9A5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D9A5: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0058D9B4
 * Original: 0x0058D9B4 - 0x0058D9D8 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D9B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D9B4: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058D9CF; /* je: equal / zero */

loc_0058D9CA: ;
    MEM32(edx + 4) = ecx;
    goto loc_0058D9D2;

loc_0058D9CF: ;
    MEM32(eax + 4) = ecx;

loc_0058D9D2: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0058D9D8
 * Original: 0x0058D9D8 - 0x0058D9FD (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D9D8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D9D8: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058D9F4; /* je: equal / zero */

loc_0058D9F0: ;
    MEM32(edx) = ecx;
    goto loc_0058D9F6;

loc_0058D9F4: ;
    MEM32(eax) = ecx;

loc_0058D9F6: ;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0058D9FD
 * Original: 0x0058D9FD - 0x0058DA1C (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058D9FD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058D9FD: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058DA1B; /* je: equal / zero */

loc_0058DA07: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edx) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0058DA14; /* jne: not equal / not zero */

loc_0058DA0F: ;
    MEM32(edx + 4) = MEM32(edx + 4) & ecx;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0058DA18;

loc_0058DA14: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0058DA18: ;
    MEM32(edx + 8) = MEM32(edx + 8) - 1;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0058DA1B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0058DA1C
 * Original: 0x0058DA1C - 0x0058DA58 (60 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058DA1C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058DA1C: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DA2E; /* jne: not equal / not zero */

loc_0058DA2A: ;
    edx = MEM32(edx);
    MEM32(ecx) = edx;

loc_0058DA2E: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DA3B; /* jne: not equal / not zero */

loc_0058DA35: ;
    edx = MEM32(edx + 4);
    MEM32(ecx + 4) = edx;

loc_0058DA3B: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058DA48; /* je: equal / zero */

loc_0058DA42: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(edx) = esi;
    POP32(esp, esi);

loc_0058DA48: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058DA54; /* je: equal / zero */

loc_0058DA4E: ;
    eax = MEM32(eax + 4);
    MEM32(edx + 4) = eax;

loc_0058DA54: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0058DA58
 * Original: 0x0058DA58 - 0x0058DA8C (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0058DA58(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058DA58: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0058DA73; /* jl: less (signed <) */

loc_0058DA61: ;
    eax = esi;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0058DA6Eu); RECOMP_ABI_CALL(0x00587FCBu, sub_00587FCB); /* call 0x00587FCB */

loc_0058DA6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0058DA77; /* jne: not equal / not zero */

loc_0058DA73: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0058DA77: ;
    eax = MEM32(eax + 0x120);
    goto loc_0058DA86;

loc_0058DA7F: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058DA8A; /* je: equal / zero */

loc_0058DA84: ;
    eax = MEM32(eax);

loc_0058DA86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DA7F; /* jne: not equal / not zero */

loc_0058DA8A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0058DA8C
 * Original: 0x0058DA8C - 0x0058DE47 (955 bytes, 302 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0058DA8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0058DA8C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DAA4u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058DAA4: ;
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, 0x68);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DAAFu); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058DAAF: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DAB9u); RECOMP_ABI_CALL(0x0058C730u, sub_0058C730); /* call 0x0058C730 */

loc_0058DAB9: ;
    edi = MEM32(ebp + 0xC);
    SET_LO8(eax, MEM8(edi));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x50) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x50 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DACB; /* jne: not equal / not zero */

loc_0058DAC5: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(0x54) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 0x54 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058DB04; /* je: equal / zero */

loc_0058DACB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x47) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x47 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DB04; /* jne: not equal / not zero */

loc_0058DACF: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(0x53) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 0x53 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DB04; /* jne: not equal / not zero */

loc_0058DAD5: ;
    _fa = (uint32_t)(MEM8(edi + 2)) & 0xFFu; _fb = (uint32_t)(0x54) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 2), 0x54 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DB04; /* jne: not equal / not zero */

loc_0058DADB: ;
    _fa = (uint32_t)(MEM8(edi + 3)) & 0xFFu; _fb = (uint32_t)(0x52) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 3), 0x52 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DB04; /* jne: not equal / not zero */

loc_0058DAE1: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DAEEu); RECOMP_ABI_CALL(0x00591895u, sub_00591895); /* call 0x00591895 */

loc_0058DAEE: ;
    eax = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058DE42; /* je: equal / zero */

loc_0058DAFC: ;
    MEM8(eax) = 1;
    goto loc_0058DE42;

loc_0058DB04: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0058DB0E; /* je: equal / zero */

loc_0058DB0B: ;
    MEM8(eax) = 0;

loc_0058DB0E: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DB14u); RECOMP_ABI_CALL(0x00591847u, sub_00591847); /* call 0x00591847 */

loc_0058DB14: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = edi;
    edi = MEM32(ebp + 0x18);
    eax = ebp + -24;
    MEM16(ebx) = 0x5DC0;
    MEM8(ebx + 2) = 1;
    MEM8(ebx + 3) = 8;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DB36u); RECOMP_ABI_CALL(0x005917CEu, sub_005917CE); /* call 0x005917CE */

loc_0058DB36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0058DDE6; /* je: equal / zero */

loc_0058DB40: ;
    ecx = esi + 0x58;
    MEM32(ebp + 0xC) = ecx;
    goto loc_0058DB4B;

loc_0058DB48: ;
    ecx = MEM32(ebp + 0xC);

loc_0058DB4B: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DB60; /* jne: not equal / not zero */

loc_0058DB55: ;
    SET_LO8(eax, MEM8(ebp + -16));
    MEM8(ebx + 3) = LO8(eax);
    goto loc_0058DDD4;

loc_0058DB60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DB74; /* jne: not equal / not zero */

loc_0058DB67: ;
    SET_LO16(eax, MEM16(ebp + -16));
    MEM16(esi + 0xC) = LO16(eax);
    goto loc_0058DDD4;

loc_0058DB74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DB88; /* jne: not equal / not zero */

loc_0058DB7B: ;
    SET_LO16(eax, MEM16(ebp + -16));
    MEM16(esi + 0xE) = LO16(eax);
    goto loc_0058DDD4;

loc_0058DB88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DB9C; /* jne: not equal / not zero */

loc_0058DB8F: ;
    SET_LO16(eax, MEM16(ebp + -16));
    MEM16(esi + 0x10) = LO16(eax);
    goto loc_0058DDD4;

loc_0058DB9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DBB0; /* jne: not equal / not zero */

loc_0058DBA3: ;
    SET_LO16(eax, MEM16(ebp + -16));
    MEM16(esi + 0x12) = LO16(eax);
    goto loc_0058DDD4;

loc_0058DBB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DBC4; /* jne: not equal / not zero */

loc_0058DBB7: ;
    SET_LO16(eax, MEM16(ebp + -16));
    MEM16(esi + 0x14) = LO16(eax);
    goto loc_0058DDD4;

loc_0058DBC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DBD8; /* jne: not equal / not zero */

loc_0058DBCB: ;
    SET_LO16(eax, MEM16(ebp + -16));
    MEM16(esi + 0x16) = LO16(eax);
    goto loc_0058DDD4;

loc_0058DBD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DC04; /* jne: not equal / not zero */

loc_0058DBDF: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DBE7u); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_0058DBE7: ;
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DBF6u); RECOMP_ABI_CALL(0x00585DDEu, sub_00585DDE); /* call 0x00585DDE */

loc_0058DBF6: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = eax;
    goto loc_0058DDD4;

loc_0058DC04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DC30; /* jne: not equal / not zero */

loc_0058DC0B: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DC13u); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_0058DC13: ;
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DC22u); RECOMP_ABI_CALL(0x00585DDEu, sub_00585DDE); /* call 0x00585DDE */

loc_0058DC22: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = eax;
    goto loc_0058DDD4;

loc_0058DC30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DC5C; /* jne: not equal / not zero */

loc_0058DC37: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DC3Fu); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_0058DC3F: ;
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DC4Eu); RECOMP_ABI_CALL(0x00585DDEu, sub_00585DDE); /* call 0x00585DDE */

loc_0058DC4E: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x38) = eax;
    goto loc_0058DDD4;

loc_0058DC5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DC88; /* jne: not equal / not zero */

loc_0058DC63: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DC6Bu); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_0058DC6B: ;
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DC7Au); RECOMP_ABI_CALL(0x00585DDEu, sub_00585DDE); /* call 0x00585DDE */

loc_0058DC7A: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = eax;
    goto loc_0058DDD4;

loc_0058DC88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DCB4; /* jne: not equal / not zero */

loc_0058DC8F: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DC97u); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_0058DC97: ;
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DCA6u); RECOMP_ABI_CALL(0x00585DDEu, sub_00585DDE); /* call 0x00585DDE */

loc_0058DCA6: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40) = eax;
    goto loc_0058DDD4;

loc_0058DCB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DCE0; /* jne: not equal / not zero */

loc_0058DCBB: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DCC3u); RECOMP_ABI_CALL(0x0058A7B0u, sub_0058A7B0); /* call 0x0058A7B0 */

loc_0058DCC3: ;
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DCD2u); RECOMP_ABI_CALL(0x00585DDEu, sub_00585DDE); /* call 0x00585DDE */

loc_0058DCD2: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x44) = eax;
    goto loc_0058DDD4;

loc_0058DCE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DCF2; /* jne: not equal / not zero */

loc_0058DCE7: ;
    SET_LO8(eax, MEM8(ebp + -16));
    MEM8(esi + 7) = LO8(eax);
    goto loc_0058DDD4;

loc_0058DCF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DD04; /* jne: not equal / not zero */

loc_0058DCF9: ;
    SET_LO8(eax, MEM8(ebp + -16));
    MEM8(ebx + 2) = LO8(eax);
    goto loc_0058DDD4;

loc_0058DD04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x84 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DD17; /* jne: not equal / not zero */

loc_0058DD0B: ;
    SET_LO16(eax, MEM16(ebp + -16));
    MEM16(ebx) = LO16(eax);
    goto loc_0058DDD4;

loc_0058DD17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x85) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x85 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DD28; /* jne: not equal / not zero */

loc_0058DD1E: ;
    eax = MEM32(ebp + -16);
    MEM32(edi) = eax;
    goto loc_0058DDD4;

loc_0058DD28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DD38; /* jne: not equal / not zero */

loc_0058DD2D: ;
    SET_LO8(eax, MEM8(ebp + -16));
    MEM8(esi + 5) = LO8(eax);
    goto loc_0058DDD4;

loc_0058DD38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DD48; /* jne: not equal / not zero */

loc_0058DD3D: ;
    SET_LO8(eax, MEM8(ebp + -16));
    MEM8(esi + 6) = LO8(eax);
    goto loc_0058DDD4;

loc_0058DD48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DD55; /* jne: not equal / not zero */

loc_0058DD4D: ;
    SET_LO8(eax, MEM8(ebp + -16));
    MEM8(esi + 2) = LO8(eax);
    goto loc_0058DDD4;

loc_0058DD55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DD64; /* jne: not equal / not zero */

loc_0058DD5C: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;
    goto loc_0058DDD4;

loc_0058DD64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DD73; /* jne: not equal / not zero */

loc_0058DD6B: ;
    eax = MEM32(ebp + -16);
    MEM32(edi + 4) = eax;
    goto loc_0058DDD4;

loc_0058DD73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DD82; /* jne: not equal / not zero */

loc_0058DD7A: ;
    eax = MEM32(ebp + -16);
    MEM32(edi + 8) = eax;
    goto loc_0058DDD4;

loc_0058DD82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DD91; /* jne: not equal / not zero */

loc_0058DD89: ;
    eax = MEM32(ebp + -16);
    MEM32(edi + 0xC) = eax;
    goto loc_0058DDD4;

loc_0058DD91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DDA0; /* jne: not equal / not zero */

loc_0058DD98: ;
    eax = MEM32(ebp + -16);
    MEM32(edi + 0x10) = eax;
    goto loc_0058DDD4;

loc_0058DDA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DDAF; /* jne: not equal / not zero */

loc_0058DDA7: ;
    eax = MEM32(ebp + -16);
    MEM32(edi + 0x14) = eax;
    goto loc_0058DDD4;

loc_0058DDAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DDBE; /* jne: not equal / not zero */

loc_0058DDB6: ;
    eax = MEM32(ebp + -16);
    MEM32(edi + 0x18) = eax;
    goto loc_0058DDD4;

loc_0058DDBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DDD4; /* jne: not equal / not zero */

loc_0058DDC3: ;
    eax = MEM32(ebp + -12);
    MEM32(ecx + -16) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = ecx;

loc_0058DDD4: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0058DDDDu); RECOMP_ABI_CALL(0x005917CEu, sub_005917CE); /* call 0x005917CE */

loc_0058DDDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0058DB48; /* jne: not equal / not zero */

loc_0058DDE6: ;
    SET_LO16(eax, MEM16(ebp + -4));
    MEM16(esi + 8) = LO16(eax);
    eax = ZX8(MEM8(ebx + 2));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0058DE42; /* js: sign (negative) */

loc_0058DDF5: ;
    edi = edi + eax * 4 + 4;
    edx = esi + eax * 2 + 0xC;

loc_0058DDFD: ;
    _fa = (uint32_t)(MEM32(0x919C44)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x919C44), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DE10; /* jne: not equal / not zero */

loc_0058DE06: ;
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 2), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DE10; /* jne: not equal / not zero */

loc_0058DE0C: ;
    MEM16(edx) = MEM16(edx) & 0;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_0058DE10: ;
    ecx = ZX8(MEM8(ebx + 2));
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 2;
    SET_LO16(ecx, MEM16(ecx * 2 + 0x919EF4));
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edx) = MEM16(edx) + LO16(ecx);
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    SET_LO16(ecx, MEM16(esi + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0058DE33; /* jne: not equal / not zero */

loc_0058DE2E: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0058DE38; /* jne: not equal / not zero */

loc_0058DE33: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0058DE38: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0058DDFD; /* jge: greater or equal (signed >=) */

loc_0058DE42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
