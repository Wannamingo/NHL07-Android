/**
 * nhl_07_recomp - Recompiled code chunk 264
 * Functions: 250 (0x0069A280 - 0x006A17F0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0069A280
 * Original: 0x0069A280 - 0x0069A2C4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A280: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A295; /* jne: not equal / not zero */

loc_0069A28A: ;
    PUSH32(esp, 0x0069A28Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A28F: ;
    ecx = MEM32(0x8E8E94);

loc_0069A295: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896A54);
    esi = ecx;
    PUSH32(esp, 0x0069A2A2u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A2A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A2BB; /* je: equal / zero */

loc_0069A2A6: ;
    PUSH32(esp, 0x896A4C);
    ecx = esi;
    PUSH32(esp, 0x0069A2B2u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A2B2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA011) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A2BB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA011) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A2E0
 * Original: 0x0069A2E0 - 0x0069A324 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A2E0: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A2F5; /* jne: not equal / not zero */

loc_0069A2EA: ;
    PUSH32(esp, 0x0069A2EFu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A2EF: ;
    ecx = MEM32(0x8E8E94);

loc_0069A2F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896A64);
    esi = ecx;
    PUSH32(esp, 0x0069A302u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A302: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A31B; /* je: equal / zero */

loc_0069A306: ;
    PUSH32(esp, 0x896A5C);
    ecx = esi;
    PUSH32(esp, 0x0069A312u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A312: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA01A) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A31B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA01A) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A340
 * Original: 0x0069A340 - 0x0069A384 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A340: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A355; /* jne: not equal / not zero */

loc_0069A34A: ;
    PUSH32(esp, 0x0069A34Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A34F: ;
    ecx = MEM32(0x8E8E94);

loc_0069A355: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896A74);
    esi = ecx;
    PUSH32(esp, 0x0069A362u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A362: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A37B; /* je: equal / zero */

loc_0069A366: ;
    PUSH32(esp, 0x896A6C);
    ecx = esi;
    PUSH32(esp, 0x0069A372u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A372: ;
    SET_LO8(eax, 1);
    MEM8(0x8E9FFD) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A37B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8E9FFD) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A3A0
 * Original: 0x0069A3A0 - 0x0069A3E4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A3A0: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A3B5; /* jne: not equal / not zero */

loc_0069A3AA: ;
    PUSH32(esp, 0x0069A3AFu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A3AF: ;
    ecx = MEM32(0x8E8E94);

loc_0069A3B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896A84);
    esi = ecx;
    PUSH32(esp, 0x0069A3C2u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A3C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A3DB; /* je: equal / zero */

loc_0069A3C6: ;
    PUSH32(esp, 0x896A7C);
    ecx = esi;
    PUSH32(esp, 0x0069A3D2u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A3D2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA003) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A3DB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA003) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A400
 * Original: 0x0069A400 - 0x0069A444 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A400: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A415; /* jne: not equal / not zero */

loc_0069A40A: ;
    PUSH32(esp, 0x0069A40Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A40F: ;
    ecx = MEM32(0x8E8E94);

loc_0069A415: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896A94);
    esi = ecx;
    PUSH32(esp, 0x0069A422u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A422: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A43B; /* je: equal / zero */

loc_0069A426: ;
    PUSH32(esp, 0x896A8C);
    ecx = esi;
    PUSH32(esp, 0x0069A432u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A432: ;
    SET_LO8(eax, 1);
    MEM8(0x8E9FF4) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A43B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8E9FF4) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A460
 * Original: 0x0069A460 - 0x0069A4A4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A460: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A475; /* jne: not equal / not zero */

loc_0069A46A: ;
    PUSH32(esp, 0x0069A46Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A46F: ;
    ecx = MEM32(0x8E8E94);

loc_0069A475: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896AA4);
    esi = ecx;
    PUSH32(esp, 0x0069A482u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A482: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A49B; /* je: equal / zero */

loc_0069A486: ;
    PUSH32(esp, 0x896A9C);
    ecx = esi;
    PUSH32(esp, 0x0069A492u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A492: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA00A) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A49B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA00A) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A4C0
 * Original: 0x0069A4C0 - 0x0069A504 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A4C0: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A4D5; /* jne: not equal / not zero */

loc_0069A4CA: ;
    PUSH32(esp, 0x0069A4CFu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A4CF: ;
    ecx = MEM32(0x8E8E94);

loc_0069A4D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896AB4);
    esi = ecx;
    PUSH32(esp, 0x0069A4E2u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A4E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A4FB; /* je: equal / zero */

loc_0069A4E6: ;
    PUSH32(esp, 0x896AAC);
    ecx = esi;
    PUSH32(esp, 0x0069A4F2u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A4F2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA005) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A4FB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA005) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A520
 * Original: 0x0069A520 - 0x0069A564 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A520: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A535; /* jne: not equal / not zero */

loc_0069A52A: ;
    PUSH32(esp, 0x0069A52Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A52F: ;
    ecx = MEM32(0x8E8E94);

loc_0069A535: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896AC4);
    esi = ecx;
    PUSH32(esp, 0x0069A542u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A542: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A55B; /* je: equal / zero */

loc_0069A546: ;
    PUSH32(esp, 0x896ABC);
    ecx = esi;
    PUSH32(esp, 0x0069A552u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A552: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA010) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A55B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA010) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A580
 * Original: 0x0069A580 - 0x0069A5C4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A580: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A595; /* jne: not equal / not zero */

loc_0069A58A: ;
    PUSH32(esp, 0x0069A58Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A58F: ;
    ecx = MEM32(0x8E8E94);

loc_0069A595: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896AD4);
    esi = ecx;
    PUSH32(esp, 0x0069A5A2u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A5A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A5BB; /* je: equal / zero */

loc_0069A5A6: ;
    PUSH32(esp, 0x896ACC);
    ecx = esi;
    PUSH32(esp, 0x0069A5B2u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A5B2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA015) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A5BB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA015) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A5E0
 * Original: 0x0069A5E0 - 0x0069A624 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A5E0: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A5F5; /* jne: not equal / not zero */

loc_0069A5EA: ;
    PUSH32(esp, 0x0069A5EFu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A5EF: ;
    ecx = MEM32(0x8E8E94);

loc_0069A5F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896AE4);
    esi = ecx;
    PUSH32(esp, 0x0069A602u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A602: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A61B; /* je: equal / zero */

loc_0069A606: ;
    PUSH32(esp, 0x896ADC);
    ecx = esi;
    PUSH32(esp, 0x0069A612u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A612: ;
    SET_LO8(eax, 1);
    MEM8(0x8E9FF7) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A61B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8E9FF7) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A640
 * Original: 0x0069A640 - 0x0069A684 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A640: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A655; /* jne: not equal / not zero */

loc_0069A64A: ;
    PUSH32(esp, 0x0069A64Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A64F: ;
    ecx = MEM32(0x8E8E94);

loc_0069A655: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896AF4);
    esi = ecx;
    PUSH32(esp, 0x0069A662u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A662: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A67B; /* je: equal / zero */

loc_0069A666: ;
    PUSH32(esp, 0x896AEC);
    ecx = esi;
    PUSH32(esp, 0x0069A672u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A672: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA020) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A67B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA020) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A66D
 * Original: 0x0069A66D - 0x0069A684 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A66D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A66D: ;
    PUSH32(esp, 0x0069A672u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A672: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA020) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A6A0
 * Original: 0x0069A6A0 - 0x0069A6E4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A6A0: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A6B5; /* jne: not equal / not zero */

loc_0069A6AA: ;
    PUSH32(esp, 0x0069A6AFu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A6AF: ;
    ecx = MEM32(0x8E8E94);

loc_0069A6B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896B04);
    esi = ecx;
    PUSH32(esp, 0x0069A6C2u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A6C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A6DB; /* je: equal / zero */

loc_0069A6C6: ;
    PUSH32(esp, 0x896AFC);
    ecx = esi;
    PUSH32(esp, 0x0069A6D2u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A6D2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA00D) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A6DB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA00D) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A700
 * Original: 0x0069A700 - 0x0069A744 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A700: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A715; /* jne: not equal / not zero */

loc_0069A70A: ;
    PUSH32(esp, 0x0069A70Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A70F: ;
    ecx = MEM32(0x8E8E94);

loc_0069A715: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896B14);
    esi = ecx;
    PUSH32(esp, 0x0069A722u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A722: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A73B; /* je: equal / zero */

loc_0069A726: ;
    PUSH32(esp, 0x896B0C);
    ecx = esi;
    PUSH32(esp, 0x0069A732u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A732: ;
    SET_LO8(eax, 1);
    MEM8(0x8E9FF3) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A73B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8E9FF3) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A760
 * Original: 0x0069A760 - 0x0069A7A4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A760: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A775; /* jne: not equal / not zero */

loc_0069A76A: ;
    PUSH32(esp, 0x0069A76Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A76F: ;
    ecx = MEM32(0x8E8E94);

loc_0069A775: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896B24);
    esi = ecx;
    PUSH32(esp, 0x0069A782u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A782: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A79B; /* je: equal / zero */

loc_0069A786: ;
    PUSH32(esp, 0x896B1C);
    ecx = esi;
    PUSH32(esp, 0x0069A792u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A792: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA009) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A79B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA009) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A7C0
 * Original: 0x0069A7C0 - 0x0069A804 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A7C0: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A7D5; /* jne: not equal / not zero */

loc_0069A7CA: ;
    PUSH32(esp, 0x0069A7CFu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A7CF: ;
    ecx = MEM32(0x8E8E94);

loc_0069A7D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896B34);
    esi = ecx;
    PUSH32(esp, 0x0069A7E2u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A7E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A7FB; /* je: equal / zero */

loc_0069A7E6: ;
    PUSH32(esp, 0x896B2C);
    ecx = esi;
    PUSH32(esp, 0x0069A7F2u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A7F2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA018) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A7FB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA018) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A820
 * Original: 0x0069A820 - 0x0069A864 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A820: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A835; /* jne: not equal / not zero */

loc_0069A82A: ;
    PUSH32(esp, 0x0069A82Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A82F: ;
    ecx = MEM32(0x8E8E94);

loc_0069A835: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896B44);
    esi = ecx;
    PUSH32(esp, 0x0069A842u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A842: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A85B; /* je: equal / zero */

loc_0069A846: ;
    PUSH32(esp, 0x896B3C);
    ecx = esi;
    PUSH32(esp, 0x0069A852u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A852: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA022) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A85B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA022) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A880
 * Original: 0x0069A880 - 0x0069A8C4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A880: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A895; /* jne: not equal / not zero */

loc_0069A88A: ;
    PUSH32(esp, 0x0069A88Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A88F: ;
    ecx = MEM32(0x8E8E94);

loc_0069A895: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896B54);
    esi = ecx;
    PUSH32(esp, 0x0069A8A2u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A8A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A8BB; /* je: equal / zero */

loc_0069A8A6: ;
    PUSH32(esp, 0x896B4C);
    ecx = esi;
    PUSH32(esp, 0x0069A8B2u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A8B2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA017) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A8BB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA017) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A8E0
 * Original: 0x0069A8E0 - 0x0069A924 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A8E0: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A8F5; /* jne: not equal / not zero */

loc_0069A8EA: ;
    PUSH32(esp, 0x0069A8EFu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A8EF: ;
    ecx = MEM32(0x8E8E94);

loc_0069A8F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896B64);
    esi = ecx;
    PUSH32(esp, 0x0069A902u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A902: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A91B; /* je: equal / zero */

loc_0069A906: ;
    PUSH32(esp, 0x896B5C);
    ecx = esi;
    PUSH32(esp, 0x0069A912u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A912: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA001) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A91B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA001) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A940
 * Original: 0x0069A940 - 0x0069A984 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A940: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A955; /* jne: not equal / not zero */

loc_0069A94A: ;
    PUSH32(esp, 0x0069A94Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A94F: ;
    ecx = MEM32(0x8E8E94);

loc_0069A955: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896B74);
    esi = ecx;
    PUSH32(esp, 0x0069A962u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A962: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A97B; /* je: equal / zero */

loc_0069A966: ;
    PUSH32(esp, 0x896B6C);
    ecx = esi;
    PUSH32(esp, 0x0069A972u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A972: ;
    SET_LO8(eax, 1);
    MEM8(0x8E9FF8) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A97B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8E9FF8) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069A9A0
 * Original: 0x0069A9A0 - 0x0069A9E4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069A9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069A9A0: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069A9B5; /* jne: not equal / not zero */

loc_0069A9AA: ;
    PUSH32(esp, 0x0069A9AFu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069A9AF: ;
    ecx = MEM32(0x8E8E94);

loc_0069A9B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896B84);
    esi = ecx;
    PUSH32(esp, 0x0069A9C2u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069A9C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069A9DB; /* je: equal / zero */

loc_0069A9C6: ;
    PUSH32(esp, 0x896B7C);
    ecx = esi;
    PUSH32(esp, 0x0069A9D2u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069A9D2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA021) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069A9DB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA021) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069AA00
 * Original: 0x0069AA00 - 0x0069AA44 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069AA00: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069AA15; /* jne: not equal / not zero */

loc_0069AA0A: ;
    PUSH32(esp, 0x0069AA0Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069AA0F: ;
    ecx = MEM32(0x8E8E94);

loc_0069AA15: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896B94);
    esi = ecx;
    PUSH32(esp, 0x0069AA22u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069AA22: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069AA3B; /* je: equal / zero */

loc_0069AA26: ;
    PUSH32(esp, 0x896B8C);
    ecx = esi;
    PUSH32(esp, 0x0069AA32u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069AA32: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA00E) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069AA3B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA00E) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069AA60
 * Original: 0x0069AA60 - 0x0069AAA4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069AA60: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069AA75; /* jne: not equal / not zero */

loc_0069AA6A: ;
    PUSH32(esp, 0x0069AA6Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069AA6F: ;
    ecx = MEM32(0x8E8E94);

loc_0069AA75: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896BA4);
    esi = ecx;
    PUSH32(esp, 0x0069AA82u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069AA82: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069AA9B; /* je: equal / zero */

loc_0069AA86: ;
    PUSH32(esp, 0x896B9C);
    ecx = esi;
    PUSH32(esp, 0x0069AA92u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069AA92: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA013) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069AA9B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA013) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069AAC0
 * Original: 0x0069AAC0 - 0x0069AB04 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069AAC0: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069AAD5; /* jne: not equal / not zero */

loc_0069AACA: ;
    PUSH32(esp, 0x0069AACFu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069AACF: ;
    ecx = MEM32(0x8E8E94);

loc_0069AAD5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896BB4);
    esi = ecx;
    PUSH32(esp, 0x0069AAE2u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069AAE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069AAFB; /* je: equal / zero */

loc_0069AAE6: ;
    PUSH32(esp, 0x896BAC);
    ecx = esi;
    PUSH32(esp, 0x0069AAF2u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069AAF2: ;
    SET_LO8(eax, 1);
    MEM8(0x8E9FF6) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069AAFB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8E9FF6) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069AB20
 * Original: 0x0069AB20 - 0x0069AB64 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069AB20: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069AB35; /* jne: not equal / not zero */

loc_0069AB2A: ;
    PUSH32(esp, 0x0069AB2Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069AB2F: ;
    ecx = MEM32(0x8E8E94);

loc_0069AB35: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896BC4);
    esi = ecx;
    PUSH32(esp, 0x0069AB42u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069AB42: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069AB5B; /* je: equal / zero */

loc_0069AB46: ;
    PUSH32(esp, 0x896BBC);
    ecx = esi;
    PUSH32(esp, 0x0069AB52u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069AB52: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA008) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069AB5B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA008) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069AB80
 * Original: 0x0069AB80 - 0x0069ABC4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069AB80: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069AB95; /* jne: not equal / not zero */

loc_0069AB8A: ;
    PUSH32(esp, 0x0069AB8Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069AB8F: ;
    ecx = MEM32(0x8E8E94);

loc_0069AB95: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896BD4);
    esi = ecx;
    PUSH32(esp, 0x0069ABA2u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069ABA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069ABBB; /* je: equal / zero */

loc_0069ABA6: ;
    PUSH32(esp, 0x896BCC);
    ecx = esi;
    PUSH32(esp, 0x0069ABB2u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069ABB2: ;
    SET_LO8(eax, 1);
    MEM8(0x8E9FF9) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069ABBB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8E9FF9) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069ABE0
 * Original: 0x0069ABE0 - 0x0069AC24 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069ABE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069ABE0: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069ABF5; /* jne: not equal / not zero */

loc_0069ABEA: ;
    PUSH32(esp, 0x0069ABEFu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069ABEF: ;
    ecx = MEM32(0x8E8E94);

loc_0069ABF5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896BE4);
    esi = ecx;
    PUSH32(esp, 0x0069AC02u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069AC02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069AC1B; /* je: equal / zero */

loc_0069AC06: ;
    PUSH32(esp, 0x896BDC);
    ecx = esi;
    PUSH32(esp, 0x0069AC12u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069AC12: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA024) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069AC1B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA024) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069AC40
 * Original: 0x0069AC40 - 0x0069AC84 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069AC40: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069AC55; /* jne: not equal / not zero */

loc_0069AC4A: ;
    PUSH32(esp, 0x0069AC4Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069AC4F: ;
    ecx = MEM32(0x8E8E94);

loc_0069AC55: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896BF4);
    esi = ecx;
    PUSH32(esp, 0x0069AC62u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069AC62: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069AC7B; /* je: equal / zero */

loc_0069AC66: ;
    PUSH32(esp, 0x896BEC);
    ecx = esi;
    PUSH32(esp, 0x0069AC72u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069AC72: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA00C) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069AC7B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA00C) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069ACA0
 * Original: 0x0069ACA0 - 0x0069ACE4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069ACA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069ACA0: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069ACB5; /* jne: not equal / not zero */

loc_0069ACAA: ;
    PUSH32(esp, 0x0069ACAFu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069ACAF: ;
    ecx = MEM32(0x8E8E94);

loc_0069ACB5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896C04);
    esi = ecx;
    PUSH32(esp, 0x0069ACC2u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069ACC2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069ACDB; /* je: equal / zero */

loc_0069ACC6: ;
    PUSH32(esp, 0x896BFC);
    ecx = esi;
    PUSH32(esp, 0x0069ACD2u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069ACD2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EA004) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069ACDB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EA004) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069AD00
 * Original: 0x0069AD00 - 0x0069AD44 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069AD00: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069AD15; /* jne: not equal / not zero */

loc_0069AD0A: ;
    PUSH32(esp, 0x0069AD0Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069AD0F: ;
    ecx = MEM32(0x8E8E94);

loc_0069AD15: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896C14);
    esi = ecx;
    PUSH32(esp, 0x0069AD22u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069AD22: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069AD3B; /* je: equal / zero */

loc_0069AD26: ;
    PUSH32(esp, 0x896C0C);
    ecx = esi;
    PUSH32(esp, 0x0069AD32u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069AD32: ;
    SET_LO8(eax, 1);
    MEM8(0x8E9FFE) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069AD3B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8E9FFE) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069AD60
 * Original: 0x0069AD60 - 0x0069ADA4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069AD60: ;
    ecx = MEM32(0x8E8E94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069AD75; /* jne: not equal / not zero */

loc_0069AD6A: ;
    PUSH32(esp, 0x0069AD6Fu); RECOMP_ABI_CALL(0x0002F3E3u, sub_0002F3E3); /* call 0x0002F3E3 */

loc_0069AD6F: ;
    ecx = MEM32(0x8E8E94);

loc_0069AD75: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x896C24);
    esi = ecx;
    PUSH32(esp, 0x0069AD82u); RECOMP_ABI_CALL(0x000265E5u, sub_000265E5); /* call 0x000265E5 */

loc_0069AD82: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069AD9B; /* je: equal / zero */

loc_0069AD86: ;
    PUSH32(esp, 0x896C1C);
    ecx = esi;
    PUSH32(esp, 0x0069AD92u); RECOMP_ABI_CALL(0x0002BBD5u, sub_0002BBD5); /* call 0x0002BBD5 */

loc_0069AD92: ;
    SET_LO8(eax, 1);
    MEM8(0x8E9FFF) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069AD9B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8E9FFF) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069ADC0
 * Original: 0x0069ADC0 - 0x0069ADE6 (38 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069ADC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069ADC0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0x8EA048;
    ecx = 0x33;
    /* nop */

loc_0069ADD0: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0069ADD0; /* jne: not equal / not zero */

loc_0069ADDA: ;
    PUSH32(esp, 0x6B6310);
    PUSH32(esp, 0x0069ADE4u); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069ADE4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069ADF0
 * Original: 0x0069ADF0 - 0x0069AE06 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069ADF0(void)
{

loc_0069ADF0: ;
    ecx = 0x8EACF8;
    PUSH32(esp, 0x0069ADFAu); RECOMP_ABI_CALL(0x0001614Fu, sub_0001614F); /* call 0x0001614F */

loc_0069ADFA: ;
    PUSH32(esp, 0x6B6320);
    PUSH32(esp, 0x0069AE04u); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069AE04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069AE10
 * Original: 0x0069AE10 - 0x0069AE1C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AE10(void)
{

loc_0069AE10: ;
    PUSH32(esp, 0x6B6390);
    PUSH32(esp, 0x0069AE1Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069AE1A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069AE20
 * Original: 0x0069AE20 - 0x0069AE2C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AE20(void)
{

loc_0069AE20: ;
    PUSH32(esp, 0x6B63A0);
    PUSH32(esp, 0x0069AE2Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069AE2A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069AE30
 * Original: 0x0069AE30 - 0x0069AE65 (53 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069AE30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x8EADA8;
    edi = 5;
    /* nop */

loc_0069AE40: ;
    PUSH32(esp, 0x20AD2);
    PUSH32(esp, 3);
    PUSH32(esp, 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0069AE4Fu); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_0069AE4F: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0069AE40; /* jne: not equal / not zero */

loc_0069AE55: ;
    PUSH32(esp, 0x6B63B0);
    PUSH32(esp, 0x0069AE5Fu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069AE5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069AE80
 * Original: 0x0069AE80 - 0x0069AEAC (44 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AE80(void)
{

loc_0069AE80: ;
    xmm0 = XMM_SCALAR(MEMF(0x7BDFAC)); /* movss */
    MEMF(0x8EAFD8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x8EAFDC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BDE54)); /* movss */
    MEMF(0x8EAFE0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0069AEC0
 * Original: 0x0069AEC0 - 0x0069AF0C (76 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AEC0(void)
{

loc_0069AEC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7BDFB0)); /* movss */
    MEMF(0x8EAFC4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BDFAC)); /* movss */
    MEMF(0x8EAFC8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x8EAFCC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BDE54)); /* movss */
    MEMF(0x8EAFD0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BDE58)); /* movss */
    MEMF(0x8EAFD4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0069AF20
 * Original: 0x0069AF20 - 0x0069AF2C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AF20(void)
{

loc_0069AF20: ;
    PUSH32(esp, 0x6B63F0);
    PUSH32(esp, 0x0069AF2Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069AF2A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069AF30
 * Original: 0x0069AF30 - 0x0069AF5D (45 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AF30(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0069AF30: ;
    xmm1 = XMM_SCALAR(MEMF(0x897AD0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BF5AC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0069AF49; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0069AF45: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0069AF49: ;
    PUSH32(esp, 0x6B6400);
    MEMF(0x8EB09C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0069AF5Bu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069AF5B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069AF70
 * Original: 0x0069AF70 - 0x0069AFDC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069AF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069AF70: ;
    ecx = MEM32(0x8E8E14);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069AFAD; /* jne: not equal / not zero */

loc_0069AF7E: ;
    ecx = 0x8E8DF8;
    MEM32(0x8E8DF8) = ebx;
    MEM32(0x8E8E00) = ebx;
    MEM32(0x8E8DFC) = ebx;
    MEM32(0x8E8E04) = ebx;
    MEM32(0x8E8E0C) = ebx;
    MEM32(0x8E8E08) = ebx;
    MEM32(0x8E8E14) = ecx;

loc_0069AFAD: ;
    PUSH32(esp, 0x897B14);
    esi = ecx;
    PUSH32(esp, 0x0069AFB9u); RECOMP_ABI_CALL(0x0001F28Bu, sub_0001F28B); /* call 0x0001F28B */

loc_0069AFB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069AFD3; /* je: equal / zero */

loc_0069AFBD: ;
    PUSH32(esp, 0x897B0C);
    ecx = esi;
    PUSH32(esp, 0x0069AFC9u); RECOMP_ABI_CALL(0x0001BF91u, sub_0001BF91); /* call 0x0001BF91 */

loc_0069AFC9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB0A0) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069AFD3: ;
    POP32(esp, esi);
    MEM8(0x8EB0A0) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B000
 * Original: 0x0069B000 - 0x0069B06C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B000: ;
    ecx = MEM32(0x8E8DF4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069B03D; /* jne: not equal / not zero */

loc_0069B00E: ;
    ecx = 0x8E8DD8;
    MEM32(0x8E8DD8) = ebx;
    MEM32(0x8E8DE0) = ebx;
    MEM32(0x8E8DDC) = ebx;
    MEM32(0x8E8DE4) = ebx;
    MEM32(0x8E8DEC) = ebx;
    MEM32(0x8E8DE8) = ebx;
    MEM32(0x8E8DF4) = ecx;

loc_0069B03D: ;
    PUSH32(esp, 0x897B24);
    esi = ecx;
    PUSH32(esp, 0x0069B049u); RECOMP_ABI_CALL(0x0002067Cu, sub_0002067C); /* call 0x0002067C */

loc_0069B049: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B063; /* je: equal / zero */

loc_0069B04D: ;
    PUSH32(esp, 0x897B1C);
    ecx = esi;
    PUSH32(esp, 0x0069B059u); RECOMP_ABI_CALL(0x00021469u, sub_00021469); /* call 0x00021469 */

loc_0069B059: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB0A8) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069B063: ;
    POP32(esp, esi);
    MEM8(0x8EB0A8) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B090
 * Original: 0x0069B090 - 0x0069B0FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B090: ;
    ecx = MEM32(0x8E8DF4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069B0CD; /* jne: not equal / not zero */

loc_0069B09E: ;
    ecx = 0x8E8DD8;
    MEM32(0x8E8DD8) = ebx;
    MEM32(0x8E8DE0) = ebx;
    MEM32(0x8E8DDC) = ebx;
    MEM32(0x8E8DE4) = ebx;
    MEM32(0x8E8DEC) = ebx;
    MEM32(0x8E8DE8) = ebx;
    MEM32(0x8E8DF4) = ecx;

loc_0069B0CD: ;
    PUSH32(esp, 0x897B34);
    esi = ecx;
    PUSH32(esp, 0x0069B0D9u); RECOMP_ABI_CALL(0x0002067Cu, sub_0002067C); /* call 0x0002067C */

loc_0069B0D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B0F3; /* je: equal / zero */

loc_0069B0DD: ;
    PUSH32(esp, 0x897B2C);
    ecx = esi;
    PUSH32(esp, 0x0069B0E9u); RECOMP_ABI_CALL(0x00021469u, sub_00021469); /* call 0x00021469 */

loc_0069B0E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB0A7) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069B0F3: ;
    POP32(esp, esi);
    MEM8(0x8EB0A7) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B120
 * Original: 0x0069B120 - 0x0069B18C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B120: ;
    ecx = MEM32(0x8E8DF4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069B15D; /* jne: not equal / not zero */

loc_0069B12E: ;
    ecx = 0x8E8DD8;
    MEM32(0x8E8DD8) = ebx;
    MEM32(0x8E8DE0) = ebx;
    MEM32(0x8E8DDC) = ebx;
    MEM32(0x8E8DE4) = ebx;
    MEM32(0x8E8DEC) = ebx;
    MEM32(0x8E8DE8) = ebx;
    MEM32(0x8E8DF4) = ecx;

loc_0069B15D: ;
    PUSH32(esp, 0x897B44);
    esi = ecx;
    PUSH32(esp, 0x0069B169u); RECOMP_ABI_CALL(0x0002067Cu, sub_0002067C); /* call 0x0002067C */

loc_0069B169: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B183; /* je: equal / zero */

loc_0069B16D: ;
    PUSH32(esp, 0x897B3C);
    ecx = esi;
    PUSH32(esp, 0x0069B179u); RECOMP_ABI_CALL(0x00021469u, sub_00021469); /* call 0x00021469 */

loc_0069B179: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB0A9) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069B183: ;
    POP32(esp, esi);
    MEM8(0x8EB0A9) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B1B0
 * Original: 0x0069B1B0 - 0x0069B21C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B1B0: ;
    ecx = MEM32(0x8E8DF4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069B1ED; /* jne: not equal / not zero */

loc_0069B1BE: ;
    ecx = 0x8E8DD8;
    MEM32(0x8E8DD8) = ebx;
    MEM32(0x8E8DE0) = ebx;
    MEM32(0x8E8DDC) = ebx;
    MEM32(0x8E8DE4) = ebx;
    MEM32(0x8E8DEC) = ebx;
    MEM32(0x8E8DE8) = ebx;
    MEM32(0x8E8DF4) = ecx;

loc_0069B1ED: ;
    PUSH32(esp, 0x897B54);
    esi = ecx;
    PUSH32(esp, 0x0069B1F9u); RECOMP_ABI_CALL(0x0002067Cu, sub_0002067C); /* call 0x0002067C */

loc_0069B1F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B213; /* je: equal / zero */

loc_0069B1FD: ;
    PUSH32(esp, 0x897B4C);
    ecx = esi;
    PUSH32(esp, 0x0069B209u); RECOMP_ABI_CALL(0x00021469u, sub_00021469); /* call 0x00021469 */

loc_0069B209: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB0AA) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069B213: ;
    POP32(esp, esi);
    MEM8(0x8EB0AA) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B240
 * Original: 0x0069B240 - 0x0069B2AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B240: ;
    ecx = MEM32(0x8E8DF4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069B27D; /* jne: not equal / not zero */

loc_0069B24E: ;
    ecx = 0x8E8DD8;
    MEM32(0x8E8DD8) = ebx;
    MEM32(0x8E8DE0) = ebx;
    MEM32(0x8E8DDC) = ebx;
    MEM32(0x8E8DE4) = ebx;
    MEM32(0x8E8DEC) = ebx;
    MEM32(0x8E8DE8) = ebx;
    MEM32(0x8E8DF4) = ecx;

loc_0069B27D: ;
    PUSH32(esp, 0x897B64);
    esi = ecx;
    PUSH32(esp, 0x0069B289u); RECOMP_ABI_CALL(0x0002067Cu, sub_0002067C); /* call 0x0002067C */

loc_0069B289: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B2A3; /* je: equal / zero */

loc_0069B28D: ;
    PUSH32(esp, 0x897B5C);
    ecx = esi;
    PUSH32(esp, 0x0069B299u); RECOMP_ABI_CALL(0x00021469u, sub_00021469); /* call 0x00021469 */

loc_0069B299: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB0AB) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069B2A3: ;
    POP32(esp, esi);
    MEM8(0x8EB0AB) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B2D0
 * Original: 0x0069B2D0 - 0x0069B33C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B2D0: ;
    ecx = MEM32(0x8E8DF4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069B30D; /* jne: not equal / not zero */

loc_0069B2DE: ;
    ecx = 0x8E8DD8;
    MEM32(0x8E8DD8) = ebx;
    MEM32(0x8E8DE0) = ebx;
    MEM32(0x8E8DDC) = ebx;
    MEM32(0x8E8DE4) = ebx;
    MEM32(0x8E8DEC) = ebx;
    MEM32(0x8E8DE8) = ebx;
    MEM32(0x8E8DF4) = ecx;

loc_0069B30D: ;
    PUSH32(esp, 0x897B74);
    esi = ecx;
    PUSH32(esp, 0x0069B319u); RECOMP_ABI_CALL(0x0002067Cu, sub_0002067C); /* call 0x0002067C */

loc_0069B319: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B333; /* je: equal / zero */

loc_0069B31D: ;
    PUSH32(esp, 0x897B6C);
    ecx = esi;
    PUSH32(esp, 0x0069B329u); RECOMP_ABI_CALL(0x00021469u, sub_00021469); /* call 0x00021469 */

loc_0069B329: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB0A6) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069B333: ;
    POP32(esp, esi);
    MEM8(0x8EB0A6) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B360
 * Original: 0x0069B360 - 0x0069B3CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B360: ;
    ecx = MEM32(0x8E8DF4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069B39D; /* jne: not equal / not zero */

loc_0069B36E: ;
    ecx = 0x8E8DD8;
    MEM32(0x8E8DD8) = ebx;
    MEM32(0x8E8DE0) = ebx;
    MEM32(0x8E8DDC) = ebx;
    MEM32(0x8E8DE4) = ebx;
    MEM32(0x8E8DEC) = ebx;
    MEM32(0x8E8DE8) = ebx;
    MEM32(0x8E8DF4) = ecx;

loc_0069B39D: ;
    PUSH32(esp, 0x897B84);
    esi = ecx;
    PUSH32(esp, 0x0069B3A9u); RECOMP_ABI_CALL(0x0002067Cu, sub_0002067C); /* call 0x0002067C */

loc_0069B3A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B3C3; /* je: equal / zero */

loc_0069B3AD: ;
    PUSH32(esp, 0x897B7C);
    ecx = esi;
    PUSH32(esp, 0x0069B3B9u); RECOMP_ABI_CALL(0x00021469u, sub_00021469); /* call 0x00021469 */

loc_0069B3B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB0A5) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069B3C3: ;
    POP32(esp, esi);
    MEM8(0x8EB0A5) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B3F0
 * Original: 0x0069B3F0 - 0x0069B45C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B3F0: ;
    ecx = MEM32(0x8E8DF4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069B42D; /* jne: not equal / not zero */

loc_0069B3FE: ;
    ecx = 0x8E8DD8;
    MEM32(0x8E8DD8) = ebx;
    MEM32(0x8E8DE0) = ebx;
    MEM32(0x8E8DDC) = ebx;
    MEM32(0x8E8DE4) = ebx;
    MEM32(0x8E8DEC) = ebx;
    MEM32(0x8E8DE8) = ebx;
    MEM32(0x8E8DF4) = ecx;

loc_0069B42D: ;
    PUSH32(esp, 0x897B94);
    esi = ecx;
    PUSH32(esp, 0x0069B439u); RECOMP_ABI_CALL(0x0002067Cu, sub_0002067C); /* call 0x0002067C */

loc_0069B439: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B453; /* je: equal / zero */

loc_0069B43D: ;
    PUSH32(esp, 0x897B8C);
    ecx = esi;
    PUSH32(esp, 0x0069B449u); RECOMP_ABI_CALL(0x00021469u, sub_00021469); /* call 0x00021469 */

loc_0069B449: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB0A3) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069B453: ;
    POP32(esp, esi);
    MEM8(0x8EB0A3) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B480
 * Original: 0x0069B480 - 0x0069B4EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B480: ;
    ecx = MEM32(0x8E8DF4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069B4BD; /* jne: not equal / not zero */

loc_0069B48E: ;
    ecx = 0x8E8DD8;
    MEM32(0x8E8DD8) = ebx;
    MEM32(0x8E8DE0) = ebx;
    MEM32(0x8E8DDC) = ebx;
    MEM32(0x8E8DE4) = ebx;
    MEM32(0x8E8DEC) = ebx;
    MEM32(0x8E8DE8) = ebx;
    MEM32(0x8E8DF4) = ecx;

loc_0069B4BD: ;
    PUSH32(esp, 0x897BA4);
    esi = ecx;
    PUSH32(esp, 0x0069B4C9u); RECOMP_ABI_CALL(0x0002067Cu, sub_0002067C); /* call 0x0002067C */

loc_0069B4C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B4E3; /* je: equal / zero */

loc_0069B4CD: ;
    PUSH32(esp, 0x897B9C);
    ecx = esi;
    PUSH32(esp, 0x0069B4D9u); RECOMP_ABI_CALL(0x00021469u, sub_00021469); /* call 0x00021469 */

loc_0069B4D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB0A4) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069B4E3: ;
    POP32(esp, esi);
    MEM8(0x8EB0A4) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B510
 * Original: 0x0069B510 - 0x0069B57C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B510: ;
    ecx = MEM32(0x8E8DF4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069B54D; /* jne: not equal / not zero */

loc_0069B51E: ;
    ecx = 0x8E8DD8;
    MEM32(0x8E8DD8) = ebx;
    MEM32(0x8E8DE0) = ebx;
    MEM32(0x8E8DDC) = ebx;
    MEM32(0x8E8DE4) = ebx;
    MEM32(0x8E8DEC) = ebx;
    MEM32(0x8E8DE8) = ebx;
    MEM32(0x8E8DF4) = ecx;

loc_0069B54D: ;
    PUSH32(esp, 0x897BB4);
    esi = ecx;
    PUSH32(esp, 0x0069B559u); RECOMP_ABI_CALL(0x0002067Cu, sub_0002067C); /* call 0x0002067C */

loc_0069B559: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B573; /* je: equal / zero */

loc_0069B55D: ;
    PUSH32(esp, 0x897BAC);
    ecx = esi;
    PUSH32(esp, 0x0069B569u); RECOMP_ABI_CALL(0x00021469u, sub_00021469); /* call 0x00021469 */

loc_0069B569: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB0A2) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069B573: ;
    POP32(esp, esi);
    MEM8(0x8EB0A2) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B5A0
 * Original: 0x0069B5A0 - 0x0069B60C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B5A0: ;
    ecx = MEM32(0x8E8DF4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069B5DD; /* jne: not equal / not zero */

loc_0069B5AE: ;
    ecx = 0x8E8DD8;
    MEM32(0x8E8DD8) = ebx;
    MEM32(0x8E8DE0) = ebx;
    MEM32(0x8E8DDC) = ebx;
    MEM32(0x8E8DE4) = ebx;
    MEM32(0x8E8DEC) = ebx;
    MEM32(0x8E8DE8) = ebx;
    MEM32(0x8E8DF4) = ecx;

loc_0069B5DD: ;
    PUSH32(esp, 0x897BC4);
    esi = ecx;
    PUSH32(esp, 0x0069B5E9u); RECOMP_ABI_CALL(0x0002067Cu, sub_0002067C); /* call 0x0002067C */

loc_0069B5E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B603; /* je: equal / zero */

loc_0069B5ED: ;
    PUSH32(esp, 0x897BBC);
    ecx = esi;
    PUSH32(esp, 0x0069B5F9u); RECOMP_ABI_CALL(0x00021469u, sub_00021469); /* call 0x00021469 */

loc_0069B5F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB0A1) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069B603: ;
    POP32(esp, esi);
    MEM8(0x8EB0A1) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B630
 * Original: 0x0069B630 - 0x0069B674 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B630: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069B645; /* jne: not equal / not zero */

loc_0069B63A: ;
    PUSH32(esp, 0x0069B63Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069B63F: ;
    ecx = MEM32(0x8E8E54);

loc_0069B645: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x897D10);
    esi = ecx;
    PUSH32(esp, 0x0069B652u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069B652: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B66B; /* je: equal / zero */

loc_0069B656: ;
    PUSH32(esp, 0x897D08);
    ecx = esi;
    PUSH32(esp, 0x0069B662u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069B662: ;
    SET_LO8(eax, 1);
    MEM8(0x8EB0B5) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069B66B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EB0B5) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B690
 * Original: 0x0069B690 - 0x0069B6D4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B690: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069B6A5; /* jne: not equal / not zero */

loc_0069B69A: ;
    PUSH32(esp, 0x0069B69Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069B69F: ;
    ecx = MEM32(0x8E8E54);

loc_0069B6A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x897D20);
    esi = ecx;
    PUSH32(esp, 0x0069B6B2u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069B6B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B6CB; /* je: equal / zero */

loc_0069B6B6: ;
    PUSH32(esp, 0x897D18);
    ecx = esi;
    PUSH32(esp, 0x0069B6C2u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069B6C2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EB0B9) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069B6CB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EB0B9) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B6F0
 * Original: 0x0069B6F0 - 0x0069B734 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B6F0: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069B705; /* jne: not equal / not zero */

loc_0069B6FA: ;
    PUSH32(esp, 0x0069B6FFu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069B6FF: ;
    ecx = MEM32(0x8E8E54);

loc_0069B705: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x897D30);
    esi = ecx;
    PUSH32(esp, 0x0069B712u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069B712: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B72B; /* je: equal / zero */

loc_0069B716: ;
    PUSH32(esp, 0x897D28);
    ecx = esi;
    PUSH32(esp, 0x0069B722u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069B722: ;
    SET_LO8(eax, 1);
    MEM8(0x8EB0B7) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069B72B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EB0B7) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B750
 * Original: 0x0069B750 - 0x0069B794 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B750: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069B765; /* jne: not equal / not zero */

loc_0069B75A: ;
    PUSH32(esp, 0x0069B75Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069B75F: ;
    ecx = MEM32(0x8E8E54);

loc_0069B765: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x897D40);
    esi = ecx;
    PUSH32(esp, 0x0069B772u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069B772: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B78B; /* je: equal / zero */

loc_0069B776: ;
    PUSH32(esp, 0x897D38);
    ecx = esi;
    PUSH32(esp, 0x0069B782u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069B782: ;
    SET_LO8(eax, 1);
    MEM8(0x8EB0B1) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069B78B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EB0B1) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B7B0
 * Original: 0x0069B7B0 - 0x0069B7F4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B7B0: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069B7C5; /* jne: not equal / not zero */

loc_0069B7BA: ;
    PUSH32(esp, 0x0069B7BFu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069B7BF: ;
    ecx = MEM32(0x8E8E54);

loc_0069B7C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x897D50);
    esi = ecx;
    PUSH32(esp, 0x0069B7D2u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069B7D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B7EB; /* je: equal / zero */

loc_0069B7D6: ;
    PUSH32(esp, 0x897D48);
    ecx = esi;
    PUSH32(esp, 0x0069B7E2u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069B7E2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EB0BA) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069B7EB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EB0BA) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B810
 * Original: 0x0069B810 - 0x0069B854 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B810: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069B825; /* jne: not equal / not zero */

loc_0069B81A: ;
    PUSH32(esp, 0x0069B81Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069B81F: ;
    ecx = MEM32(0x8E8E54);

loc_0069B825: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x897D60);
    esi = ecx;
    PUSH32(esp, 0x0069B832u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069B832: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B84B; /* je: equal / zero */

loc_0069B836: ;
    PUSH32(esp, 0x897D58);
    ecx = esi;
    PUSH32(esp, 0x0069B842u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069B842: ;
    SET_LO8(eax, 1);
    MEM8(0x8EB0B0) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069B84B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EB0B0) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B870
 * Original: 0x0069B870 - 0x0069B8B4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B870: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069B885; /* jne: not equal / not zero */

loc_0069B87A: ;
    PUSH32(esp, 0x0069B87Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069B87F: ;
    ecx = MEM32(0x8E8E54);

loc_0069B885: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x897D70);
    esi = ecx;
    PUSH32(esp, 0x0069B892u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069B892: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B8AB; /* je: equal / zero */

loc_0069B896: ;
    PUSH32(esp, 0x897D68);
    ecx = esi;
    PUSH32(esp, 0x0069B8A2u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069B8A2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EB0B6) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069B8AB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EB0B6) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B8D0
 * Original: 0x0069B8D0 - 0x0069B914 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B8D0: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069B8E5; /* jne: not equal / not zero */

loc_0069B8DA: ;
    PUSH32(esp, 0x0069B8DFu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069B8DF: ;
    ecx = MEM32(0x8E8E54);

loc_0069B8E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x897D80);
    esi = ecx;
    PUSH32(esp, 0x0069B8F2u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069B8F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B90B; /* je: equal / zero */

loc_0069B8F6: ;
    PUSH32(esp, 0x897D78);
    ecx = esi;
    PUSH32(esp, 0x0069B902u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069B902: ;
    SET_LO8(eax, 1);
    MEM8(0x8EB0B8) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069B90B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EB0B8) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B930
 * Original: 0x0069B930 - 0x0069B974 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B930: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069B945; /* jne: not equal / not zero */

loc_0069B93A: ;
    PUSH32(esp, 0x0069B93Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069B93F: ;
    ecx = MEM32(0x8E8E54);

loc_0069B945: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x897D90);
    esi = ecx;
    PUSH32(esp, 0x0069B952u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069B952: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B96B; /* je: equal / zero */

loc_0069B956: ;
    PUSH32(esp, 0x897D88);
    ecx = esi;
    PUSH32(esp, 0x0069B962u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069B962: ;
    SET_LO8(eax, 1);
    MEM8(0x8EB0B4) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069B96B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EB0B4) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B990
 * Original: 0x0069B990 - 0x0069B9D4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B990: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069B9A5; /* jne: not equal / not zero */

loc_0069B99A: ;
    PUSH32(esp, 0x0069B99Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069B99F: ;
    ecx = MEM32(0x8E8E54);

loc_0069B9A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x897DA0);
    esi = ecx;
    PUSH32(esp, 0x0069B9B2u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069B9B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069B9CB; /* je: equal / zero */

loc_0069B9B6: ;
    PUSH32(esp, 0x897D98);
    ecx = esi;
    PUSH32(esp, 0x0069B9C2u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069B9C2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EB0B3) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069B9CB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EB0B3) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069B9F0
 * Original: 0x0069B9F0 - 0x0069BA34 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069B9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069B9F0: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069BA05; /* jne: not equal / not zero */

loc_0069B9FA: ;
    PUSH32(esp, 0x0069B9FFu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069B9FF: ;
    ecx = MEM32(0x8E8E54);

loc_0069BA05: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x897DB0);
    esi = ecx;
    PUSH32(esp, 0x0069BA12u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069BA12: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069BA2B; /* je: equal / zero */

loc_0069BA16: ;
    PUSH32(esp, 0x897DA8);
    ecx = esi;
    PUSH32(esp, 0x0069BA22u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069BA22: ;
    SET_LO8(eax, 1);
    MEM8(0x8EB0AF) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069BA2B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EB0AF) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069BA50
 * Original: 0x0069BA50 - 0x0069BA94 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069BA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069BA50: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069BA65; /* jne: not equal / not zero */

loc_0069BA5A: ;
    PUSH32(esp, 0x0069BA5Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069BA5F: ;
    ecx = MEM32(0x8E8E54);

loc_0069BA65: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x897DC0);
    esi = ecx;
    PUSH32(esp, 0x0069BA72u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069BA72: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069BA8B; /* je: equal / zero */

loc_0069BA76: ;
    PUSH32(esp, 0x897DB8);
    ecx = esi;
    PUSH32(esp, 0x0069BA82u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069BA82: ;
    SET_LO8(eax, 1);
    MEM8(0x8EB0B2) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069BA8B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EB0B2) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069BAB0
 * Original: 0x0069BAB0 - 0x0069BB1C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069BAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069BAB0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069BAED; /* jne: not equal / not zero */

loc_0069BABE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069BAED: ;
    PUSH32(esp, 0x898E7C);
    esi = ecx;
    PUSH32(esp, 0x0069BAF9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069BAF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069BB13; /* je: equal / zero */

loc_0069BAFD: ;
    PUSH32(esp, 0x898E74);
    ecx = esi;
    PUSH32(esp, 0x0069BB09u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069BB09: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB11D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069BB13: ;
    POP32(esp, esi);
    MEM8(0x8EB11D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069BB40
 * Original: 0x0069BB40 - 0x0069BBAC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069BB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069BB40: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069BB7D; /* jne: not equal / not zero */

loc_0069BB4E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069BB7D: ;
    PUSH32(esp, 0x898E8C);
    esi = ecx;
    PUSH32(esp, 0x0069BB89u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069BB89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069BBA3; /* je: equal / zero */

loc_0069BB8D: ;
    PUSH32(esp, 0x898E84);
    ecx = esi;
    PUSH32(esp, 0x0069BB99u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069BB99: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB117) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069BBA3: ;
    POP32(esp, esi);
    MEM8(0x8EB117) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069BBD0
 * Original: 0x0069BBD0 - 0x0069BC3C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069BBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069BBD0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069BC0D; /* jne: not equal / not zero */

loc_0069BBDE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069BC0D: ;
    PUSH32(esp, 0x898E9C);
    esi = ecx;
    PUSH32(esp, 0x0069BC19u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069BC19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069BC33; /* je: equal / zero */

loc_0069BC1D: ;
    PUSH32(esp, 0x898E94);
    ecx = esi;
    PUSH32(esp, 0x0069BC29u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069BC29: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB119) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069BC33: ;
    POP32(esp, esi);
    MEM8(0x8EB119) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069BC60
 * Original: 0x0069BC60 - 0x0069BCCC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069BC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069BC60: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069BC9D; /* jne: not equal / not zero */

loc_0069BC6E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069BC9D: ;
    PUSH32(esp, 0x898EAC);
    esi = ecx;
    PUSH32(esp, 0x0069BCA9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069BCA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069BCC3; /* je: equal / zero */

loc_0069BCAD: ;
    PUSH32(esp, 0x898EA4);
    ecx = esi;
    PUSH32(esp, 0x0069BCB9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069BCB9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB126) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069BCC3: ;
    POP32(esp, esi);
    MEM8(0x8EB126) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069BCF0
 * Original: 0x0069BCF0 - 0x0069BD5C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069BCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069BCF0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069BD2D; /* jne: not equal / not zero */

loc_0069BCFE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069BD2D: ;
    PUSH32(esp, 0x898EBC);
    esi = ecx;
    PUSH32(esp, 0x0069BD39u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069BD39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069BD53; /* je: equal / zero */

loc_0069BD3D: ;
    PUSH32(esp, 0x898EB4);
    ecx = esi;
    PUSH32(esp, 0x0069BD49u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069BD49: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB12A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069BD53: ;
    POP32(esp, esi);
    MEM8(0x8EB12A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069BD80
 * Original: 0x0069BD80 - 0x0069BDEC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069BD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069BD80: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069BDBD; /* jne: not equal / not zero */

loc_0069BD8E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069BDBD: ;
    PUSH32(esp, 0x898ECC);
    esi = ecx;
    PUSH32(esp, 0x0069BDC9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069BDC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069BDE3; /* je: equal / zero */

loc_0069BDCD: ;
    PUSH32(esp, 0x898EC4);
    ecx = esi;
    PUSH32(esp, 0x0069BDD9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069BDD9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB118) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069BDE3: ;
    POP32(esp, esi);
    MEM8(0x8EB118) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069BE10
 * Original: 0x0069BE10 - 0x0069BE7C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069BE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069BE10: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069BE4D; /* jne: not equal / not zero */

loc_0069BE1E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069BE4D: ;
    PUSH32(esp, 0x898EDC);
    esi = ecx;
    PUSH32(esp, 0x0069BE59u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069BE59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069BE73; /* je: equal / zero */

loc_0069BE5D: ;
    PUSH32(esp, 0x898ED4);
    ecx = esi;
    PUSH32(esp, 0x0069BE69u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069BE69: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB122) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069BE73: ;
    POP32(esp, esi);
    MEM8(0x8EB122) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069BEA0
 * Original: 0x0069BEA0 - 0x0069BF0C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069BEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069BEA0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069BEDD; /* jne: not equal / not zero */

loc_0069BEAE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069BEDD: ;
    PUSH32(esp, 0x898EEC);
    esi = ecx;
    PUSH32(esp, 0x0069BEE9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069BEE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069BF03; /* je: equal / zero */

loc_0069BEED: ;
    PUSH32(esp, 0x898EE4);
    ecx = esi;
    PUSH32(esp, 0x0069BEF9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069BEF9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB129) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069BF03: ;
    POP32(esp, esi);
    MEM8(0x8EB129) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069BF30
 * Original: 0x0069BF30 - 0x0069BF9C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069BF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069BF30: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069BF6D; /* jne: not equal / not zero */

loc_0069BF3E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069BF6D: ;
    PUSH32(esp, 0x898EFC);
    esi = ecx;
    PUSH32(esp, 0x0069BF79u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069BF79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069BF93; /* je: equal / zero */

loc_0069BF7D: ;
    PUSH32(esp, 0x898EF4);
    ecx = esi;
    PUSH32(esp, 0x0069BF89u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069BF89: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB11F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069BF93: ;
    POP32(esp, esi);
    MEM8(0x8EB11F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069BFC0
 * Original: 0x0069BFC0 - 0x0069C02C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069BFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069BFC0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069BFFD; /* jne: not equal / not zero */

loc_0069BFCE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069BFFD: ;
    PUSH32(esp, 0x898F0C);
    esi = ecx;
    PUSH32(esp, 0x0069C009u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069C009: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C023; /* je: equal / zero */

loc_0069C00D: ;
    PUSH32(esp, 0x898F04);
    ecx = esi;
    PUSH32(esp, 0x0069C019u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069C019: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB123) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C023: ;
    POP32(esp, esi);
    MEM8(0x8EB123) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C050
 * Original: 0x0069C050 - 0x0069C0BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C050: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C08D; /* jne: not equal / not zero */

loc_0069C05E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069C08D: ;
    PUSH32(esp, 0x898F1C);
    esi = ecx;
    PUSH32(esp, 0x0069C099u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069C099: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C0B3; /* je: equal / zero */

loc_0069C09D: ;
    PUSH32(esp, 0x898F14);
    ecx = esi;
    PUSH32(esp, 0x0069C0A9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069C0A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB11A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C0B3: ;
    POP32(esp, esi);
    MEM8(0x8EB11A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C0E0
 * Original: 0x0069C0E0 - 0x0069C14C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C0E0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C11D; /* jne: not equal / not zero */

loc_0069C0EE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069C11D: ;
    PUSH32(esp, 0x898F2C);
    esi = ecx;
    PUSH32(esp, 0x0069C129u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069C129: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C143; /* je: equal / zero */

loc_0069C12D: ;
    PUSH32(esp, 0x898F24);
    ecx = esi;
    PUSH32(esp, 0x0069C139u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069C139: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB124) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C143: ;
    POP32(esp, esi);
    MEM8(0x8EB124) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C170
 * Original: 0x0069C170 - 0x0069C1DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C170: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C1AD; /* jne: not equal / not zero */

loc_0069C17E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069C1AD: ;
    PUSH32(esp, 0x898F3C);
    esi = ecx;
    PUSH32(esp, 0x0069C1B9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069C1B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C1D3; /* je: equal / zero */

loc_0069C1BD: ;
    PUSH32(esp, 0x898F34);
    ecx = esi;
    PUSH32(esp, 0x0069C1C9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069C1C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB120) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C1D3: ;
    POP32(esp, esi);
    MEM8(0x8EB120) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C200
 * Original: 0x0069C200 - 0x0069C26C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C200: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C23D; /* jne: not equal / not zero */

loc_0069C20E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069C23D: ;
    PUSH32(esp, 0x898F4C);
    esi = ecx;
    PUSH32(esp, 0x0069C249u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069C249: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C263; /* je: equal / zero */

loc_0069C24D: ;
    PUSH32(esp, 0x898F44);
    ecx = esi;
    PUSH32(esp, 0x0069C259u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069C259: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB128) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C263: ;
    POP32(esp, esi);
    MEM8(0x8EB128) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C290
 * Original: 0x0069C290 - 0x0069C2FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C290: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C2CD; /* jne: not equal / not zero */

loc_0069C29E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069C2CD: ;
    PUSH32(esp, 0x898F5C);
    esi = ecx;
    PUSH32(esp, 0x0069C2D9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069C2D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C2F3; /* je: equal / zero */

loc_0069C2DD: ;
    PUSH32(esp, 0x898F54);
    ecx = esi;
    PUSH32(esp, 0x0069C2E9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069C2E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB11E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C2F3: ;
    POP32(esp, esi);
    MEM8(0x8EB11E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C320
 * Original: 0x0069C320 - 0x0069C38C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C320: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C35D; /* jne: not equal / not zero */

loc_0069C32E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069C35D: ;
    PUSH32(esp, 0x898F6C);
    esi = ecx;
    PUSH32(esp, 0x0069C369u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069C369: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C383; /* je: equal / zero */

loc_0069C36D: ;
    PUSH32(esp, 0x898F64);
    ecx = esi;
    PUSH32(esp, 0x0069C379u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069C379: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB121) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C383: ;
    POP32(esp, esi);
    MEM8(0x8EB121) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C3B0
 * Original: 0x0069C3B0 - 0x0069C41C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C3B0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C3ED; /* jne: not equal / not zero */

loc_0069C3BE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069C3ED: ;
    PUSH32(esp, 0x898F7C);
    esi = ecx;
    PUSH32(esp, 0x0069C3F9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069C3F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C413; /* je: equal / zero */

loc_0069C3FD: ;
    PUSH32(esp, 0x898F74);
    ecx = esi;
    PUSH32(esp, 0x0069C409u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069C409: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB11B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C413: ;
    POP32(esp, esi);
    MEM8(0x8EB11B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C440
 * Original: 0x0069C440 - 0x0069C4AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C440: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C47D; /* jne: not equal / not zero */

loc_0069C44E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069C47D: ;
    PUSH32(esp, 0x898F8C);
    esi = ecx;
    PUSH32(esp, 0x0069C489u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069C489: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C4A3; /* je: equal / zero */

loc_0069C48D: ;
    PUSH32(esp, 0x898F84);
    ecx = esi;
    PUSH32(esp, 0x0069C499u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069C499: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB11C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C4A3: ;
    POP32(esp, esi);
    MEM8(0x8EB11C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C4D0
 * Original: 0x0069C4D0 - 0x0069C53C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C4D0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C50D; /* jne: not equal / not zero */

loc_0069C4DE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069C50D: ;
    PUSH32(esp, 0x898F9C);
    esi = ecx;
    PUSH32(esp, 0x0069C519u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069C519: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C533; /* je: equal / zero */

loc_0069C51D: ;
    PUSH32(esp, 0x898F94);
    ecx = esi;
    PUSH32(esp, 0x0069C529u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069C529: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB125) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C533: ;
    POP32(esp, esi);
    MEM8(0x8EB125) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C560
 * Original: 0x0069C560 - 0x0069C5CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C560: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C59D; /* jne: not equal / not zero */

loc_0069C56E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069C59D: ;
    PUSH32(esp, 0x898FAC);
    esi = ecx;
    PUSH32(esp, 0x0069C5A9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069C5A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C5C3; /* je: equal / zero */

loc_0069C5AD: ;
    PUSH32(esp, 0x898FA4);
    ecx = esi;
    PUSH32(esp, 0x0069C5B9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069C5B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB127) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C5C3: ;
    POP32(esp, esi);
    MEM8(0x8EB127) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C5F0
 * Original: 0x0069C5F0 - 0x0069C65C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C5F0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C62D; /* jne: not equal / not zero */

loc_0069C5FE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069C62D: ;
    PUSH32(esp, 0x8991E8);
    esi = ecx;
    PUSH32(esp, 0x0069C639u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069C639: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C653; /* je: equal / zero */

loc_0069C63D: ;
    PUSH32(esp, 0x8991E0);
    ecx = esi;
    PUSH32(esp, 0x0069C649u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069C649: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB308) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C653: ;
    POP32(esp, esi);
    MEM8(0x8EB308) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C680
 * Original: 0x0069C680 - 0x0069C6EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C680: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C6BD; /* jne: not equal / not zero */

loc_0069C68E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069C6BD: ;
    PUSH32(esp, 0x8991F8);
    esi = ecx;
    PUSH32(esp, 0x0069C6C9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069C6C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C6E3; /* je: equal / zero */

loc_0069C6CD: ;
    PUSH32(esp, 0x8991F0);
    ecx = esi;
    PUSH32(esp, 0x0069C6D9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069C6D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB309) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C6E3: ;
    POP32(esp, esi);
    MEM8(0x8EB309) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C710
 * Original: 0x0069C710 - 0x0069C77C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C710: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C74D; /* jne: not equal / not zero */

loc_0069C71E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069C74D: ;
    PUSH32(esp, 0x899208);
    esi = ecx;
    PUSH32(esp, 0x0069C759u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069C759: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C773; /* je: equal / zero */

loc_0069C75D: ;
    PUSH32(esp, 0x899200);
    ecx = esi;
    PUSH32(esp, 0x0069C769u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069C769: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EB30A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C773: ;
    POP32(esp, esi);
    MEM8(0x8EB30A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C7A0
 * Original: 0x0069C7A0 - 0x0069C7B2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C7A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C7A0: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x899BDC);
    PUSH32(esp, 0x0069C7AEu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0069C7AE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0069C7C0
 * Original: 0x0069C7C0 - 0x0069C7D2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C7C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C7C0: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x899C38);
    PUSH32(esp, 0x0069C7CEu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0069C7CE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0069C7E0
 * Original: 0x0069C7E0 - 0x0069C81A (58 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C7E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x8EEA38;
    edi = 8;
    /* nop */

loc_0069C7F0: ;
    ecx = esi;
    PUSH32(esp, 0x0069C7F7u); RECOMP_ABI_CALL(0x0001A0CEu, sub_0001A0CE); /* call 0x0001A0CE */

loc_0069C7F7: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0069C7F0; /* jne: not equal / not zero */

loc_0069C800: ;
    PUSH32(esp, 0x6B64D0);
    MEM32(0x8EF038) = 0;
    PUSH32(esp, 0x0069C814u); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069C814: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C830
 * Original: 0x0069C830 - 0x0069C86A (58 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C830: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x8EE428;
    edi = 8;
    /* nop */

loc_0069C840: ;
    ecx = esi;
    PUSH32(esp, 0x0069C847u); RECOMP_ABI_CALL(0x0001A0CEu, sub_0001A0CE); /* call 0x0001A0CE */

loc_0069C847: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0069C840; /* jne: not equal / not zero */

loc_0069C850: ;
    PUSH32(esp, 0x6B6490);
    MEM32(0x8EEA28) = 0;
    PUSH32(esp, 0x0069C864u); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069C864: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C880
 * Original: 0x0069C880 - 0x0069C8A0 (32 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C880(void)
{

loc_0069C880: ;
    ecx = 0x8EB420;
    PUSH32(esp, 0x0069C88Au); RECOMP_ABI_CALL(0x0001BB81u, sub_0001BB81); /* call 0x0001BB81 */

loc_0069C88A: ;
    PUSH32(esp, 0x6B6510);
    MEM32(0x8EE420) = 0;
    PUSH32(esp, 0x0069C89Eu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069C89E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C8B0
 * Original: 0x0069C8B0 - 0x0069C8BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C8B0(void)
{

loc_0069C8B0: ;
    PUSH32(esp, 0x6B6410);
    PUSH32(esp, 0x0069C8BAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069C8BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C8C0
 * Original: 0x0069C8C0 - 0x0069C8CC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C8C0(void)
{

loc_0069C8C0: ;
    PUSH32(esp, 0x6B6450);
    PUSH32(esp, 0x0069C8CAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069C8CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C8D0
 * Original: 0x0069C8D0 - 0x0069C93C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C8D0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C90D; /* jne: not equal / not zero */

loc_0069C8DE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069C90D: ;
    PUSH32(esp, 0x89A118);
    esi = ecx;
    PUSH32(esp, 0x0069C919u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069C919: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C933; /* je: equal / zero */

loc_0069C91D: ;
    PUSH32(esp, 0x89A110);
    ecx = esi;
    PUSH32(esp, 0x0069C929u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069C929: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC5A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C933: ;
    POP32(esp, esi);
    MEM8(0x8EFC5A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C960
 * Original: 0x0069C960 - 0x0069C9CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C960: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069C99D; /* jne: not equal / not zero */

loc_0069C96E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069C99D: ;
    PUSH32(esp, 0x89A128);
    esi = ecx;
    PUSH32(esp, 0x0069C9A9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069C9A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069C9C3; /* je: equal / zero */

loc_0069C9AD: ;
    PUSH32(esp, 0x89A120);
    ecx = esi;
    PUSH32(esp, 0x0069C9B9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069C9B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC51) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069C9C3: ;
    POP32(esp, esi);
    MEM8(0x8EFC51) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069C9F0
 * Original: 0x0069C9F0 - 0x0069CA5C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069C9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069C9F0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069CA2D; /* jne: not equal / not zero */

loc_0069C9FE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069CA2D: ;
    PUSH32(esp, 0x89A138);
    esi = ecx;
    PUSH32(esp, 0x0069CA39u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069CA39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069CA53; /* je: equal / zero */

loc_0069CA3D: ;
    PUSH32(esp, 0x89A130);
    ecx = esi;
    PUSH32(esp, 0x0069CA49u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069CA49: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC56) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069CA53: ;
    POP32(esp, esi);
    MEM8(0x8EFC56) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069CA80
 * Original: 0x0069CA80 - 0x0069CAEC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069CA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069CA80: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069CABD; /* jne: not equal / not zero */

loc_0069CA8E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069CABD: ;
    PUSH32(esp, 0x89A148);
    esi = ecx;
    PUSH32(esp, 0x0069CAC9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069CAC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069CAE3; /* je: equal / zero */

loc_0069CACD: ;
    PUSH32(esp, 0x89A140);
    ecx = esi;
    PUSH32(esp, 0x0069CAD9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069CAD9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC74) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069CAE3: ;
    POP32(esp, esi);
    MEM8(0x8EFC74) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069CB10
 * Original: 0x0069CB10 - 0x0069CB7C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069CB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069CB10: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069CB4D; /* jne: not equal / not zero */

loc_0069CB1E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069CB4D: ;
    PUSH32(esp, 0x89A158);
    esi = ecx;
    PUSH32(esp, 0x0069CB59u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069CB59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069CB73; /* je: equal / zero */

loc_0069CB5D: ;
    PUSH32(esp, 0x89A150);
    ecx = esi;
    PUSH32(esp, 0x0069CB69u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069CB69: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC7D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069CB73: ;
    POP32(esp, esi);
    MEM8(0x8EFC7D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069CBA0
 * Original: 0x0069CBA0 - 0x0069CC0C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069CBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069CBA0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069CBDD; /* jne: not equal / not zero */

loc_0069CBAE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069CBDD: ;
    PUSH32(esp, 0x89A168);
    esi = ecx;
    PUSH32(esp, 0x0069CBE9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069CBE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069CC03; /* je: equal / zero */

loc_0069CBED: ;
    PUSH32(esp, 0x89A160);
    ecx = esi;
    PUSH32(esp, 0x0069CBF9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069CBF9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC43) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069CC03: ;
    POP32(esp, esi);
    MEM8(0x8EFC43) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069CC30
 * Original: 0x0069CC30 - 0x0069CC9C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069CC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069CC30: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069CC6D; /* jne: not equal / not zero */

loc_0069CC3E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069CC6D: ;
    PUSH32(esp, 0x89A178);
    esi = ecx;
    PUSH32(esp, 0x0069CC79u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069CC79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069CC93; /* je: equal / zero */

loc_0069CC7D: ;
    PUSH32(esp, 0x89A170);
    ecx = esi;
    PUSH32(esp, 0x0069CC89u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069CC89: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC6A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069CC93: ;
    POP32(esp, esi);
    MEM8(0x8EFC6A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069CCC0
 * Original: 0x0069CCC0 - 0x0069CD2C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069CCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069CCC0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069CCFD; /* jne: not equal / not zero */

loc_0069CCCE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069CCFD: ;
    PUSH32(esp, 0x89A188);
    esi = ecx;
    PUSH32(esp, 0x0069CD09u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069CD09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069CD23; /* je: equal / zero */

loc_0069CD0D: ;
    PUSH32(esp, 0x89A180);
    ecx = esi;
    PUSH32(esp, 0x0069CD19u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069CD19: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC79) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069CD23: ;
    POP32(esp, esi);
    MEM8(0x8EFC79) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069CD50
 * Original: 0x0069CD50 - 0x0069CDBC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069CD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069CD50: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069CD8D; /* jne: not equal / not zero */

loc_0069CD5E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069CD8D: ;
    PUSH32(esp, 0x89A198);
    esi = ecx;
    PUSH32(esp, 0x0069CD99u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069CD99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069CDB3; /* je: equal / zero */

loc_0069CD9D: ;
    PUSH32(esp, 0x89A190);
    ecx = esi;
    PUSH32(esp, 0x0069CDA9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069CDA9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC60) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069CDB3: ;
    POP32(esp, esi);
    MEM8(0x8EFC60) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069CDE0
 * Original: 0x0069CDE0 - 0x0069CE4C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069CDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069CDE0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069CE1D; /* jne: not equal / not zero */

loc_0069CDEE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069CE1D: ;
    PUSH32(esp, 0x89A1A8);
    esi = ecx;
    PUSH32(esp, 0x0069CE29u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069CE29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069CE43; /* je: equal / zero */

loc_0069CE2D: ;
    PUSH32(esp, 0x89A1A0);
    ecx = esi;
    PUSH32(esp, 0x0069CE39u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069CE39: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC6C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069CE43: ;
    POP32(esp, esi);
    MEM8(0x8EFC6C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069CE70
 * Original: 0x0069CE70 - 0x0069CEDC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069CE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069CE70: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069CEAD; /* jne: not equal / not zero */

loc_0069CE7E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069CEAD: ;
    PUSH32(esp, 0x89A1B8);
    esi = ecx;
    PUSH32(esp, 0x0069CEB9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069CEB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069CED3; /* je: equal / zero */

loc_0069CEBD: ;
    PUSH32(esp, 0x89A1B0);
    ecx = esi;
    PUSH32(esp, 0x0069CEC9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069CEC9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC46) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069CED3: ;
    POP32(esp, esi);
    MEM8(0x8EFC46) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069CF00
 * Original: 0x0069CF00 - 0x0069CF6C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069CF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069CF00: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069CF3D; /* jne: not equal / not zero */

loc_0069CF0E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069CF3D: ;
    PUSH32(esp, 0x89A1C8);
    esi = ecx;
    PUSH32(esp, 0x0069CF49u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069CF49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069CF63; /* je: equal / zero */

loc_0069CF4D: ;
    PUSH32(esp, 0x89A1C0);
    ecx = esi;
    PUSH32(esp, 0x0069CF59u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069CF59: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC71) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069CF63: ;
    POP32(esp, esi);
    MEM8(0x8EFC71) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069CF90
 * Original: 0x0069CF90 - 0x0069CFFC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069CF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069CF90: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069CFCD; /* jne: not equal / not zero */

loc_0069CF9E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069CFCD: ;
    PUSH32(esp, 0x89A1D8);
    esi = ecx;
    PUSH32(esp, 0x0069CFD9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069CFD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069CFF3; /* je: equal / zero */

loc_0069CFDD: ;
    PUSH32(esp, 0x89A1D0);
    ecx = esi;
    PUSH32(esp, 0x0069CFE9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069CFE9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC65) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069CFF3: ;
    POP32(esp, esi);
    MEM8(0x8EFC65) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D020
 * Original: 0x0069D020 - 0x0069D08C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D020: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D05D; /* jne: not equal / not zero */

loc_0069D02E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D05D: ;
    PUSH32(esp, 0x89A1E8);
    esi = ecx;
    PUSH32(esp, 0x0069D069u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D069: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D083; /* je: equal / zero */

loc_0069D06D: ;
    PUSH32(esp, 0x89A1E0);
    ecx = esi;
    PUSH32(esp, 0x0069D079u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D079: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC77) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D083: ;
    POP32(esp, esi);
    MEM8(0x8EFC77) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D0B0
 * Original: 0x0069D0B0 - 0x0069D11C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D0B0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D0ED; /* jne: not equal / not zero */

loc_0069D0BE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D0ED: ;
    PUSH32(esp, 0x89A1F8);
    esi = ecx;
    PUSH32(esp, 0x0069D0F9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D0F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D113; /* je: equal / zero */

loc_0069D0FD: ;
    PUSH32(esp, 0x89A1F0);
    ecx = esi;
    PUSH32(esp, 0x0069D109u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D109: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC5B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D113: ;
    POP32(esp, esi);
    MEM8(0x8EFC5B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D140
 * Original: 0x0069D140 - 0x0069D1AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D140: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D17D; /* jne: not equal / not zero */

loc_0069D14E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D17D: ;
    PUSH32(esp, 0x89A208);
    esi = ecx;
    PUSH32(esp, 0x0069D189u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D189: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D1A3; /* je: equal / zero */

loc_0069D18D: ;
    PUSH32(esp, 0x89A200);
    ecx = esi;
    PUSH32(esp, 0x0069D199u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D199: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC68) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D1A3: ;
    POP32(esp, esi);
    MEM8(0x8EFC68) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D1D0
 * Original: 0x0069D1D0 - 0x0069D23C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D1D0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D20D; /* jne: not equal / not zero */

loc_0069D1DE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D20D: ;
    PUSH32(esp, 0x89A218);
    esi = ecx;
    PUSH32(esp, 0x0069D219u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D219: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D233; /* je: equal / zero */

loc_0069D21D: ;
    PUSH32(esp, 0x89A210);
    ecx = esi;
    PUSH32(esp, 0x0069D229u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D229: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC49) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D233: ;
    POP32(esp, esi);
    MEM8(0x8EFC49) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D260
 * Original: 0x0069D260 - 0x0069D2CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D260: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D29D; /* jne: not equal / not zero */

loc_0069D26E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D29D: ;
    PUSH32(esp, 0x89A228);
    esi = ecx;
    PUSH32(esp, 0x0069D2A9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D2A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D2C3; /* je: equal / zero */

loc_0069D2AD: ;
    PUSH32(esp, 0x89A220);
    ecx = esi;
    PUSH32(esp, 0x0069D2B9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D2B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC54) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D2C3: ;
    POP32(esp, esi);
    MEM8(0x8EFC54) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D2F0
 * Original: 0x0069D2F0 - 0x0069D35C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D2F0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D32D; /* jne: not equal / not zero */

loc_0069D2FE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D32D: ;
    PUSH32(esp, 0x89A238);
    esi = ecx;
    PUSH32(esp, 0x0069D339u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D339: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D353; /* je: equal / zero */

loc_0069D33D: ;
    PUSH32(esp, 0x89A230);
    ecx = esi;
    PUSH32(esp, 0x0069D349u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D349: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC73) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D353: ;
    POP32(esp, esi);
    MEM8(0x8EFC73) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D380
 * Original: 0x0069D380 - 0x0069D3EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D380: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D3BD; /* jne: not equal / not zero */

loc_0069D38E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D3BD: ;
    PUSH32(esp, 0x89A248);
    esi = ecx;
    PUSH32(esp, 0x0069D3C9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D3C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D3E3; /* je: equal / zero */

loc_0069D3CD: ;
    PUSH32(esp, 0x89A240);
    ecx = esi;
    PUSH32(esp, 0x0069D3D9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D3D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC75) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D3E3: ;
    POP32(esp, esi);
    MEM8(0x8EFC75) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D410
 * Original: 0x0069D410 - 0x0069D47C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D410: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D44D; /* jne: not equal / not zero */

loc_0069D41E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D44D: ;
    PUSH32(esp, 0x89A258);
    esi = ecx;
    PUSH32(esp, 0x0069D459u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D459: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D473; /* je: equal / zero */

loc_0069D45D: ;
    PUSH32(esp, 0x89A250);
    ecx = esi;
    PUSH32(esp, 0x0069D469u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D469: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC67) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D473: ;
    POP32(esp, esi);
    MEM8(0x8EFC67) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D4A0
 * Original: 0x0069D4A0 - 0x0069D50C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D4A0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D4DD; /* jne: not equal / not zero */

loc_0069D4AE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D4DD: ;
    PUSH32(esp, 0x89A268);
    esi = ecx;
    PUSH32(esp, 0x0069D4E9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D4E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D503; /* je: equal / zero */

loc_0069D4ED: ;
    PUSH32(esp, 0x89A260);
    ecx = esi;
    PUSH32(esp, 0x0069D4F9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D4F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC72) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D503: ;
    POP32(esp, esi);
    MEM8(0x8EFC72) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D530
 * Original: 0x0069D530 - 0x0069D59C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D530: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D56D; /* jne: not equal / not zero */

loc_0069D53E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D56D: ;
    PUSH32(esp, 0x89A278);
    esi = ecx;
    PUSH32(esp, 0x0069D579u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D579: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D593; /* je: equal / zero */

loc_0069D57D: ;
    PUSH32(esp, 0x89A270);
    ecx = esi;
    PUSH32(esp, 0x0069D589u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D589: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC47) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D593: ;
    POP32(esp, esi);
    MEM8(0x8EFC47) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D5C0
 * Original: 0x0069D5C0 - 0x0069D62C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D5C0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D5FD; /* jne: not equal / not zero */

loc_0069D5CE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D5FD: ;
    PUSH32(esp, 0x89A288);
    esi = ecx;
    PUSH32(esp, 0x0069D609u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D609: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D623; /* je: equal / zero */

loc_0069D60D: ;
    PUSH32(esp, 0x89A280);
    ecx = esi;
    PUSH32(esp, 0x0069D619u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D619: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC44) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D623: ;
    POP32(esp, esi);
    MEM8(0x8EFC44) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D650
 * Original: 0x0069D650 - 0x0069D6BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D650: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D68D; /* jne: not equal / not zero */

loc_0069D65E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D68D: ;
    PUSH32(esp, 0x89A298);
    esi = ecx;
    PUSH32(esp, 0x0069D699u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D699: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D6B3; /* je: equal / zero */

loc_0069D69D: ;
    PUSH32(esp, 0x89A290);
    ecx = esi;
    PUSH32(esp, 0x0069D6A9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D6A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC4C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D6B3: ;
    POP32(esp, esi);
    MEM8(0x8EFC4C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D6E0
 * Original: 0x0069D6E0 - 0x0069D74C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D6E0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D71D; /* jne: not equal / not zero */

loc_0069D6EE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D71D: ;
    PUSH32(esp, 0x89A2A8);
    esi = ecx;
    PUSH32(esp, 0x0069D729u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D729: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D743; /* je: equal / zero */

loc_0069D72D: ;
    PUSH32(esp, 0x89A2A0);
    ecx = esi;
    PUSH32(esp, 0x0069D739u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D739: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC5F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D743: ;
    POP32(esp, esi);
    MEM8(0x8EFC5F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D770
 * Original: 0x0069D770 - 0x0069D7DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D770: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D7AD; /* jne: not equal / not zero */

loc_0069D77E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D7AD: ;
    PUSH32(esp, 0x89A2B8);
    esi = ecx;
    PUSH32(esp, 0x0069D7B9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D7B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D7D3; /* je: equal / zero */

loc_0069D7BD: ;
    PUSH32(esp, 0x89A2B0);
    ecx = esi;
    PUSH32(esp, 0x0069D7C9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D7C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC59) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D7D3: ;
    POP32(esp, esi);
    MEM8(0x8EFC59) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D800
 * Original: 0x0069D800 - 0x0069D86C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D800: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D83D; /* jne: not equal / not zero */

loc_0069D80E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D83D: ;
    PUSH32(esp, 0x89A2C8);
    esi = ecx;
    PUSH32(esp, 0x0069D849u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D849: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D863; /* je: equal / zero */

loc_0069D84D: ;
    PUSH32(esp, 0x89A2C0);
    ecx = esi;
    PUSH32(esp, 0x0069D859u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D859: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC66) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D863: ;
    POP32(esp, esi);
    MEM8(0x8EFC66) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D890
 * Original: 0x0069D890 - 0x0069D8FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D890: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D8CD; /* jne: not equal / not zero */

loc_0069D89E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D8CD: ;
    PUSH32(esp, 0x89A2D8);
    esi = ecx;
    PUSH32(esp, 0x0069D8D9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D8D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D8F3; /* je: equal / zero */

loc_0069D8DD: ;
    PUSH32(esp, 0x89A2D0);
    ecx = esi;
    PUSH32(esp, 0x0069D8E9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D8E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC6B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D8F3: ;
    POP32(esp, esi);
    MEM8(0x8EFC6B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D920
 * Original: 0x0069D920 - 0x0069D98C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D920: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D95D; /* jne: not equal / not zero */

loc_0069D92E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D95D: ;
    PUSH32(esp, 0x89A2E8);
    esi = ecx;
    PUSH32(esp, 0x0069D969u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D969: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069D983; /* je: equal / zero */

loc_0069D96D: ;
    PUSH32(esp, 0x89A2E0);
    ecx = esi;
    PUSH32(esp, 0x0069D979u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069D979: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC55) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069D983: ;
    POP32(esp, esi);
    MEM8(0x8EFC55) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069D9B0
 * Original: 0x0069D9B0 - 0x0069DA1C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069D9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069D9B0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069D9ED; /* jne: not equal / not zero */

loc_0069D9BE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069D9ED: ;
    PUSH32(esp, 0x89A2F8);
    esi = ecx;
    PUSH32(esp, 0x0069D9F9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069D9F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069DA13; /* je: equal / zero */

loc_0069D9FD: ;
    PUSH32(esp, 0x89A2F0);
    ecx = esi;
    PUSH32(esp, 0x0069DA09u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069DA09: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC7A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069DA13: ;
    POP32(esp, esi);
    MEM8(0x8EFC7A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069DA40
 * Original: 0x0069DA40 - 0x0069DAAC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069DA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069DA40: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069DA7D; /* jne: not equal / not zero */

loc_0069DA4E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069DA7D: ;
    PUSH32(esp, 0x89A308);
    esi = ecx;
    PUSH32(esp, 0x0069DA89u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069DA89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069DAA3; /* je: equal / zero */

loc_0069DA8D: ;
    PUSH32(esp, 0x89A300);
    ecx = esi;
    PUSH32(esp, 0x0069DA99u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069DA99: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC62) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069DAA3: ;
    POP32(esp, esi);
    MEM8(0x8EFC62) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069DAD0
 * Original: 0x0069DAD0 - 0x0069DB3C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069DAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069DAD0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069DB0D; /* jne: not equal / not zero */

loc_0069DADE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069DB0D: ;
    PUSH32(esp, 0x89A318);
    esi = ecx;
    PUSH32(esp, 0x0069DB19u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069DB19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069DB33; /* je: equal / zero */

loc_0069DB1D: ;
    PUSH32(esp, 0x89A310);
    ecx = esi;
    PUSH32(esp, 0x0069DB29u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069DB29: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC4D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069DB33: ;
    POP32(esp, esi);
    MEM8(0x8EFC4D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069DB60
 * Original: 0x0069DB60 - 0x0069DBCC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069DB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069DB60: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069DB9D; /* jne: not equal / not zero */

loc_0069DB6E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069DB9D: ;
    PUSH32(esp, 0x89A328);
    esi = ecx;
    PUSH32(esp, 0x0069DBA9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069DBA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069DBC3; /* je: equal / zero */

loc_0069DBAD: ;
    PUSH32(esp, 0x89A320);
    ecx = esi;
    PUSH32(esp, 0x0069DBB9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069DBB9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC5D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069DBC3: ;
    POP32(esp, esi);
    MEM8(0x8EFC5D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069DBF0
 * Original: 0x0069DBF0 - 0x0069DC5C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069DBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069DBF0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069DC2D; /* jne: not equal / not zero */

loc_0069DBFE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069DC2D: ;
    PUSH32(esp, 0x89A338);
    esi = ecx;
    PUSH32(esp, 0x0069DC39u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069DC39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069DC53; /* je: equal / zero */

loc_0069DC3D: ;
    PUSH32(esp, 0x89A330);
    ecx = esi;
    PUSH32(esp, 0x0069DC49u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069DC49: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC70) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069DC53: ;
    POP32(esp, esi);
    MEM8(0x8EFC70) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069DC80
 * Original: 0x0069DC80 - 0x0069DCEC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069DC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069DC80: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069DCBD; /* jne: not equal / not zero */

loc_0069DC8E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069DCBD: ;
    PUSH32(esp, 0x89A348);
    esi = ecx;
    PUSH32(esp, 0x0069DCC9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069DCC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069DCE3; /* je: equal / zero */

loc_0069DCCD: ;
    PUSH32(esp, 0x89A340);
    ecx = esi;
    PUSH32(esp, 0x0069DCD9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069DCD9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC7C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069DCE3: ;
    POP32(esp, esi);
    MEM8(0x8EFC7C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069DD10
 * Original: 0x0069DD10 - 0x0069DD7C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069DD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069DD10: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069DD4D; /* jne: not equal / not zero */

loc_0069DD1E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069DD4D: ;
    PUSH32(esp, 0x89A358);
    esi = ecx;
    PUSH32(esp, 0x0069DD59u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069DD59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069DD73; /* je: equal / zero */

loc_0069DD5D: ;
    PUSH32(esp, 0x89A350);
    ecx = esi;
    PUSH32(esp, 0x0069DD69u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069DD69: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC6E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069DD73: ;
    POP32(esp, esi);
    MEM8(0x8EFC6E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069DDA0
 * Original: 0x0069DDA0 - 0x0069DE0C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069DDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069DDA0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069DDDD; /* jne: not equal / not zero */

loc_0069DDAE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069DDDD: ;
    PUSH32(esp, 0x89A368);
    esi = ecx;
    PUSH32(esp, 0x0069DDE9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069DDE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069DE03; /* je: equal / zero */

loc_0069DDED: ;
    PUSH32(esp, 0x89A360);
    ecx = esi;
    PUSH32(esp, 0x0069DDF9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069DDF9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC45) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069DE03: ;
    POP32(esp, esi);
    MEM8(0x8EFC45) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069DE30
 * Original: 0x0069DE30 - 0x0069DE9C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069DE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069DE30: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069DE6D; /* jne: not equal / not zero */

loc_0069DE3E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069DE6D: ;
    PUSH32(esp, 0x89A378);
    esi = ecx;
    PUSH32(esp, 0x0069DE79u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069DE79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069DE93; /* je: equal / zero */

loc_0069DE7D: ;
    PUSH32(esp, 0x89A370);
    ecx = esi;
    PUSH32(esp, 0x0069DE89u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069DE89: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC48) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069DE93: ;
    POP32(esp, esi);
    MEM8(0x8EFC48) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069DEC0
 * Original: 0x0069DEC0 - 0x0069DF2C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069DEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069DEC0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069DEFD; /* jne: not equal / not zero */

loc_0069DECE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069DEFD: ;
    PUSH32(esp, 0x89A388);
    esi = ecx;
    PUSH32(esp, 0x0069DF09u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069DF09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069DF23; /* je: equal / zero */

loc_0069DF0D: ;
    PUSH32(esp, 0x89A380);
    ecx = esi;
    PUSH32(esp, 0x0069DF19u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069DF19: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC7B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069DF23: ;
    POP32(esp, esi);
    MEM8(0x8EFC7B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069DF50
 * Original: 0x0069DF50 - 0x0069DFBC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069DF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069DF50: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069DF8D; /* jne: not equal / not zero */

loc_0069DF5E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069DF8D: ;
    PUSH32(esp, 0x89A398);
    esi = ecx;
    PUSH32(esp, 0x0069DF99u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069DF99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069DFB3; /* je: equal / zero */

loc_0069DF9D: ;
    PUSH32(esp, 0x89A390);
    ecx = esi;
    PUSH32(esp, 0x0069DFA9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069DFA9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC63) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069DFB3: ;
    POP32(esp, esi);
    MEM8(0x8EFC63) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069DFE0
 * Original: 0x0069DFE0 - 0x0069E04C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069DFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069DFE0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E01D; /* jne: not equal / not zero */

loc_0069DFEE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E01D: ;
    PUSH32(esp, 0x89A3A8);
    esi = ecx;
    PUSH32(esp, 0x0069E029u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E029: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E043; /* je: equal / zero */

loc_0069E02D: ;
    PUSH32(esp, 0x89A3A0);
    ecx = esi;
    PUSH32(esp, 0x0069E039u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E039: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC69) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E043: ;
    POP32(esp, esi);
    MEM8(0x8EFC69) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E070
 * Original: 0x0069E070 - 0x0069E0DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E070: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E0AD; /* jne: not equal / not zero */

loc_0069E07E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E0AD: ;
    PUSH32(esp, 0x89A3B8);
    esi = ecx;
    PUSH32(esp, 0x0069E0B9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E0B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E0D3; /* je: equal / zero */

loc_0069E0BD: ;
    PUSH32(esp, 0x89A3B0);
    ecx = esi;
    PUSH32(esp, 0x0069E0C9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E0C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC4F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E0D3: ;
    POP32(esp, esi);
    MEM8(0x8EFC4F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E100
 * Original: 0x0069E100 - 0x0069E16C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E100: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E13D; /* jne: not equal / not zero */

loc_0069E10E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E13D: ;
    PUSH32(esp, 0x89A3C8);
    esi = ecx;
    PUSH32(esp, 0x0069E149u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E149: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E163; /* je: equal / zero */

loc_0069E14D: ;
    PUSH32(esp, 0x89A3C0);
    ecx = esi;
    PUSH32(esp, 0x0069E159u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E159: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC5C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E163: ;
    POP32(esp, esi);
    MEM8(0x8EFC5C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E190
 * Original: 0x0069E190 - 0x0069E1FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E190: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E1CD; /* jne: not equal / not zero */

loc_0069E19E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E1CD: ;
    PUSH32(esp, 0x89A3D8);
    esi = ecx;
    PUSH32(esp, 0x0069E1D9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E1D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E1F3; /* je: equal / zero */

loc_0069E1DD: ;
    PUSH32(esp, 0x89A3D0);
    ecx = esi;
    PUSH32(esp, 0x0069E1E9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E1E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC53) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E1F3: ;
    POP32(esp, esi);
    MEM8(0x8EFC53) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E220
 * Original: 0x0069E220 - 0x0069E28C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E220: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E25D; /* jne: not equal / not zero */

loc_0069E22E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E25D: ;
    PUSH32(esp, 0x89A3E8);
    esi = ecx;
    PUSH32(esp, 0x0069E269u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E269: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E283; /* je: equal / zero */

loc_0069E26D: ;
    PUSH32(esp, 0x89A3E0);
    ecx = esi;
    PUSH32(esp, 0x0069E279u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E279: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC81) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E283: ;
    POP32(esp, esi);
    MEM8(0x8EFC81) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E2B0
 * Original: 0x0069E2B0 - 0x0069E31C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E2B0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E2ED; /* jne: not equal / not zero */

loc_0069E2BE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E2ED: ;
    PUSH32(esp, 0x89A3F8);
    esi = ecx;
    PUSH32(esp, 0x0069E2F9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E2F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E313; /* je: equal / zero */

loc_0069E2FD: ;
    PUSH32(esp, 0x89A3F0);
    ecx = esi;
    PUSH32(esp, 0x0069E309u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E309: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC61) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E313: ;
    POP32(esp, esi);
    MEM8(0x8EFC61) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E340
 * Original: 0x0069E340 - 0x0069E3AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E340: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E37D; /* jne: not equal / not zero */

loc_0069E34E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E37D: ;
    PUSH32(esp, 0x89A408);
    esi = ecx;
    PUSH32(esp, 0x0069E389u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E389: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E3A3; /* je: equal / zero */

loc_0069E38D: ;
    PUSH32(esp, 0x89A400);
    ecx = esi;
    PUSH32(esp, 0x0069E399u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E399: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC58) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E3A3: ;
    POP32(esp, esi);
    MEM8(0x8EFC58) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E3D0
 * Original: 0x0069E3D0 - 0x0069E43C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E3D0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E40D; /* jne: not equal / not zero */

loc_0069E3DE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E40D: ;
    PUSH32(esp, 0x89A418);
    esi = ecx;
    PUSH32(esp, 0x0069E419u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E419: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E433; /* je: equal / zero */

loc_0069E41D: ;
    PUSH32(esp, 0x89A410);
    ecx = esi;
    PUSH32(esp, 0x0069E429u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E429: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC4B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E433: ;
    POP32(esp, esi);
    MEM8(0x8EFC4B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E460
 * Original: 0x0069E460 - 0x0069E4CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E460: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E49D; /* jne: not equal / not zero */

loc_0069E46E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E49D: ;
    PUSH32(esp, 0x89A428);
    esi = ecx;
    PUSH32(esp, 0x0069E4A9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E4A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E4C3; /* je: equal / zero */

loc_0069E4AD: ;
    PUSH32(esp, 0x89A420);
    ecx = esi;
    PUSH32(esp, 0x0069E4B9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E4B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC52) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E4C3: ;
    POP32(esp, esi);
    MEM8(0x8EFC52) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E4F0
 * Original: 0x0069E4F0 - 0x0069E55C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E4F0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E52D; /* jne: not equal / not zero */

loc_0069E4FE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E52D: ;
    PUSH32(esp, 0x89A438);
    esi = ecx;
    PUSH32(esp, 0x0069E539u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E539: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E553; /* je: equal / zero */

loc_0069E53D: ;
    PUSH32(esp, 0x89A430);
    ecx = esi;
    PUSH32(esp, 0x0069E549u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E549: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC6F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E553: ;
    POP32(esp, esi);
    MEM8(0x8EFC6F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E580
 * Original: 0x0069E580 - 0x0069E5EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E580: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E5BD; /* jne: not equal / not zero */

loc_0069E58E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E5BD: ;
    PUSH32(esp, 0x89A448);
    esi = ecx;
    PUSH32(esp, 0x0069E5C9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E5C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E5E3; /* je: equal / zero */

loc_0069E5CD: ;
    PUSH32(esp, 0x89A440);
    ecx = esi;
    PUSH32(esp, 0x0069E5D9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E5D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC76) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E5E3: ;
    POP32(esp, esi);
    MEM8(0x8EFC76) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E610
 * Original: 0x0069E610 - 0x0069E67C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E610: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E64D; /* jne: not equal / not zero */

loc_0069E61E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E64D: ;
    PUSH32(esp, 0x89A458);
    esi = ecx;
    PUSH32(esp, 0x0069E659u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E659: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E673; /* je: equal / zero */

loc_0069E65D: ;
    PUSH32(esp, 0x89A450);
    ecx = esi;
    PUSH32(esp, 0x0069E669u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E669: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC64) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E673: ;
    POP32(esp, esi);
    MEM8(0x8EFC64) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E6A0
 * Original: 0x0069E6A0 - 0x0069E70C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E6A0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E6DD; /* jne: not equal / not zero */

loc_0069E6AE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E6DD: ;
    PUSH32(esp, 0x89A468);
    esi = ecx;
    PUSH32(esp, 0x0069E6E9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E6E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E703; /* je: equal / zero */

loc_0069E6ED: ;
    PUSH32(esp, 0x89A460);
    ecx = esi;
    PUSH32(esp, 0x0069E6F9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E6F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC7F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E703: ;
    POP32(esp, esi);
    MEM8(0x8EFC7F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E730
 * Original: 0x0069E730 - 0x0069E79C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E730: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E76D; /* jne: not equal / not zero */

loc_0069E73E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E76D: ;
    PUSH32(esp, 0x89A478);
    esi = ecx;
    PUSH32(esp, 0x0069E779u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E779: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E793; /* je: equal / zero */

loc_0069E77D: ;
    PUSH32(esp, 0x89A470);
    ecx = esi;
    PUSH32(esp, 0x0069E789u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E789: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC7E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E793: ;
    POP32(esp, esi);
    MEM8(0x8EFC7E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E7C0
 * Original: 0x0069E7C0 - 0x0069E82C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E7C0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E7FD; /* jne: not equal / not zero */

loc_0069E7CE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E7FD: ;
    PUSH32(esp, 0x89A488);
    esi = ecx;
    PUSH32(esp, 0x0069E809u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E809: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E823; /* je: equal / zero */

loc_0069E80D: ;
    PUSH32(esp, 0x89A480);
    ecx = esi;
    PUSH32(esp, 0x0069E819u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E819: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC4E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E823: ;
    POP32(esp, esi);
    MEM8(0x8EFC4E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E850
 * Original: 0x0069E850 - 0x0069E8BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E850: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E88D; /* jne: not equal / not zero */

loc_0069E85E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E88D: ;
    PUSH32(esp, 0x89A498);
    esi = ecx;
    PUSH32(esp, 0x0069E899u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E899: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E8B3; /* je: equal / zero */

loc_0069E89D: ;
    PUSH32(esp, 0x89A490);
    ecx = esi;
    PUSH32(esp, 0x0069E8A9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E8A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC4A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E8B3: ;
    POP32(esp, esi);
    MEM8(0x8EFC4A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E8E0
 * Original: 0x0069E8E0 - 0x0069E94C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E8E0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E91D; /* jne: not equal / not zero */

loc_0069E8EE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E91D: ;
    PUSH32(esp, 0x89A4A8);
    esi = ecx;
    PUSH32(esp, 0x0069E929u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E929: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E943; /* je: equal / zero */

loc_0069E92D: ;
    PUSH32(esp, 0x89A4A0);
    ecx = esi;
    PUSH32(esp, 0x0069E939u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E939: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC5E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E943: ;
    POP32(esp, esi);
    MEM8(0x8EFC5E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069E970
 * Original: 0x0069E970 - 0x0069E9DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069E970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069E970: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069E9AD; /* jne: not equal / not zero */

loc_0069E97E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069E9AD: ;
    PUSH32(esp, 0x89A4B8);
    esi = ecx;
    PUSH32(esp, 0x0069E9B9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069E9B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069E9D3; /* je: equal / zero */

loc_0069E9BD: ;
    PUSH32(esp, 0x89A4B0);
    ecx = esi;
    PUSH32(esp, 0x0069E9C9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069E9C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC78) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069E9D3: ;
    POP32(esp, esi);
    MEM8(0x8EFC78) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069EA00
 * Original: 0x0069EA00 - 0x0069EA6C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069EA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069EA00: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069EA3D; /* jne: not equal / not zero */

loc_0069EA0E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069EA3D: ;
    PUSH32(esp, 0x89A4C8);
    esi = ecx;
    PUSH32(esp, 0x0069EA49u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069EA49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069EA63; /* je: equal / zero */

loc_0069EA4D: ;
    PUSH32(esp, 0x89A4C0);
    ecx = esi;
    PUSH32(esp, 0x0069EA59u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069EA59: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC80) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069EA63: ;
    POP32(esp, esi);
    MEM8(0x8EFC80) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069EA90
 * Original: 0x0069EA90 - 0x0069EAFC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069EA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069EA90: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069EACD; /* jne: not equal / not zero */

loc_0069EA9E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069EACD: ;
    PUSH32(esp, 0x89A4D8);
    esi = ecx;
    PUSH32(esp, 0x0069EAD9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069EAD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069EAF3; /* je: equal / zero */

loc_0069EADD: ;
    PUSH32(esp, 0x89A4D0);
    ecx = esi;
    PUSH32(esp, 0x0069EAE9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069EAE9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC57) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069EAF3: ;
    POP32(esp, esi);
    MEM8(0x8EFC57) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069EB20
 * Original: 0x0069EB20 - 0x0069EB8C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069EB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069EB20: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069EB5D; /* jne: not equal / not zero */

loc_0069EB2E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069EB5D: ;
    PUSH32(esp, 0x89A4E8);
    esi = ecx;
    PUSH32(esp, 0x0069EB69u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069EB69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069EB83; /* je: equal / zero */

loc_0069EB6D: ;
    PUSH32(esp, 0x89A4E0);
    ecx = esi;
    PUSH32(esp, 0x0069EB79u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069EB79: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC50) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069EB83: ;
    POP32(esp, esi);
    MEM8(0x8EFC50) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069EBB0
 * Original: 0x0069EBB0 - 0x0069EC1C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069EBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069EBB0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069EBED; /* jne: not equal / not zero */

loc_0069EBBE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_0069EBED: ;
    PUSH32(esp, 0x89A4F8);
    esi = ecx;
    PUSH32(esp, 0x0069EBF9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_0069EBF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069EC13; /* je: equal / zero */

loc_0069EBFD: ;
    PUSH32(esp, 0x89A4F0);
    ecx = esi;
    PUSH32(esp, 0x0069EC09u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_0069EC09: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC6D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069EC13: ;
    POP32(esp, esi);
    MEM8(0x8EFC6D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069EC40
 * Original: 0x0069EC40 - 0x0069ECAC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069EC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069EC40: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069EC7D; /* jne: not equal / not zero */

loc_0069EC4E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069EC7D: ;
    PUSH32(esp, 0x89ACAC);
    esi = ecx;
    PUSH32(esp, 0x0069EC89u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069EC89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069ECA3; /* je: equal / zero */

loc_0069EC8D: ;
    PUSH32(esp, 0x89ACA4);
    ecx = esi;
    PUSH32(esp, 0x0069EC99u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069EC99: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC99) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069ECA3: ;
    POP32(esp, esi);
    MEM8(0x8EFC99) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069ECD0
 * Original: 0x0069ECD0 - 0x0069ED3C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069ECD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069ECD0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069ED0D; /* jne: not equal / not zero */

loc_0069ECDE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069ED0D: ;
    PUSH32(esp, 0x89ACBC);
    esi = ecx;
    PUSH32(esp, 0x0069ED19u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069ED19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069ED33; /* je: equal / zero */

loc_0069ED1D: ;
    PUSH32(esp, 0x89ACB4);
    ecx = esi;
    PUSH32(esp, 0x0069ED29u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069ED29: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC95) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069ED33: ;
    POP32(esp, esi);
    MEM8(0x8EFC95) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069ED60
 * Original: 0x0069ED60 - 0x0069EDCC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069ED60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069ED60: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069ED9D; /* jne: not equal / not zero */

loc_0069ED6E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069ED9D: ;
    PUSH32(esp, 0x89ACCC);
    esi = ecx;
    PUSH32(esp, 0x0069EDA9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069EDA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069EDC3; /* je: equal / zero */

loc_0069EDAD: ;
    PUSH32(esp, 0x89ACC4);
    ecx = esi;
    PUSH32(esp, 0x0069EDB9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069EDB9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC90) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069EDC3: ;
    POP32(esp, esi);
    MEM8(0x8EFC90) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069EDF0
 * Original: 0x0069EDF0 - 0x0069EE5C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069EDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069EDF0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069EE2D; /* jne: not equal / not zero */

loc_0069EDFE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069EE2D: ;
    PUSH32(esp, 0x89ACDC);
    esi = ecx;
    PUSH32(esp, 0x0069EE39u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069EE39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069EE53; /* je: equal / zero */

loc_0069EE3D: ;
    PUSH32(esp, 0x89ACD4);
    ecx = esi;
    PUSH32(esp, 0x0069EE49u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069EE49: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFCA7) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069EE53: ;
    POP32(esp, esi);
    MEM8(0x8EFCA7) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069EE80
 * Original: 0x0069EE80 - 0x0069EEEC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069EE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069EE80: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069EEBD; /* jne: not equal / not zero */

loc_0069EE8E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069EEBD: ;
    PUSH32(esp, 0x89ACEC);
    esi = ecx;
    PUSH32(esp, 0x0069EEC9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069EEC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069EEE3; /* je: equal / zero */

loc_0069EECD: ;
    PUSH32(esp, 0x89ACE4);
    ecx = esi;
    PUSH32(esp, 0x0069EED9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069EED9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFCAC) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069EEE3: ;
    POP32(esp, esi);
    MEM8(0x8EFCAC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069EF10
 * Original: 0x0069EF10 - 0x0069EF7C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069EF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069EF10: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069EF4D; /* jne: not equal / not zero */

loc_0069EF1E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069EF4D: ;
    PUSH32(esp, 0x89ACFC);
    esi = ecx;
    PUSH32(esp, 0x0069EF59u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069EF59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069EF73; /* je: equal / zero */

loc_0069EF5D: ;
    PUSH32(esp, 0x89ACF4);
    ecx = esi;
    PUSH32(esp, 0x0069EF69u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069EF69: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC8F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069EF73: ;
    POP32(esp, esi);
    MEM8(0x8EFC8F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069EFA0
 * Original: 0x0069EFA0 - 0x0069F00C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069EFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069EFA0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069EFDD; /* jne: not equal / not zero */

loc_0069EFAE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069EFDD: ;
    PUSH32(esp, 0x89AD0C);
    esi = ecx;
    PUSH32(esp, 0x0069EFE9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069EFE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F003; /* je: equal / zero */

loc_0069EFED: ;
    PUSH32(esp, 0x89AD04);
    ecx = esi;
    PUSH32(esp, 0x0069EFF9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069EFF9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFCA1) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F003: ;
    POP32(esp, esi);
    MEM8(0x8EFCA1) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F030
 * Original: 0x0069F030 - 0x0069F09C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F030: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F06D; /* jne: not equal / not zero */

loc_0069F03E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F06D: ;
    PUSH32(esp, 0x89AD1C);
    esi = ecx;
    PUSH32(esp, 0x0069F079u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F079: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F093; /* je: equal / zero */

loc_0069F07D: ;
    PUSH32(esp, 0x89AD14);
    ecx = esi;
    PUSH32(esp, 0x0069F089u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F089: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFCAA) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F093: ;
    POP32(esp, esi);
    MEM8(0x8EFCAA) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F0C0
 * Original: 0x0069F0C0 - 0x0069F12C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F0C0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F0FD; /* jne: not equal / not zero */

loc_0069F0CE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F0FD: ;
    PUSH32(esp, 0x89AD2C);
    esi = ecx;
    PUSH32(esp, 0x0069F109u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F109: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F123; /* je: equal / zero */

loc_0069F10D: ;
    PUSH32(esp, 0x89AD24);
    ecx = esi;
    PUSH32(esp, 0x0069F119u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F119: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC9C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F123: ;
    POP32(esp, esi);
    MEM8(0x8EFC9C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F150
 * Original: 0x0069F150 - 0x0069F1BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F150: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F18D; /* jne: not equal / not zero */

loc_0069F15E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F18D: ;
    PUSH32(esp, 0x89AD3C);
    esi = ecx;
    PUSH32(esp, 0x0069F199u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F199: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F1B3; /* je: equal / zero */

loc_0069F19D: ;
    PUSH32(esp, 0x89AD34);
    ecx = esi;
    PUSH32(esp, 0x0069F1A9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F1A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFCA3) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F1B3: ;
    POP32(esp, esi);
    MEM8(0x8EFCA3) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F1E0
 * Original: 0x0069F1E0 - 0x0069F24C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F1E0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F21D; /* jne: not equal / not zero */

loc_0069F1EE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F21D: ;
    PUSH32(esp, 0x89AD4C);
    esi = ecx;
    PUSH32(esp, 0x0069F229u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F229: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F243; /* je: equal / zero */

loc_0069F22D: ;
    PUSH32(esp, 0x89AD44);
    ecx = esi;
    PUSH32(esp, 0x0069F239u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F239: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC8E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F243: ;
    POP32(esp, esi);
    MEM8(0x8EFC8E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F270
 * Original: 0x0069F270 - 0x0069F2DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F270: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F2AD; /* jne: not equal / not zero */

loc_0069F27E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F2AD: ;
    PUSH32(esp, 0x89AD5C);
    esi = ecx;
    PUSH32(esp, 0x0069F2B9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F2B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F2D3; /* je: equal / zero */

loc_0069F2BD: ;
    PUSH32(esp, 0x89AD54);
    ecx = esi;
    PUSH32(esp, 0x0069F2C9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F2C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFCA4) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F2D3: ;
    POP32(esp, esi);
    MEM8(0x8EFCA4) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F300
 * Original: 0x0069F300 - 0x0069F36C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F300: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F33D; /* jne: not equal / not zero */

loc_0069F30E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F33D: ;
    PUSH32(esp, 0x89AD6C);
    esi = ecx;
    PUSH32(esp, 0x0069F349u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F349: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F363; /* je: equal / zero */

loc_0069F34D: ;
    PUSH32(esp, 0x89AD64);
    ecx = esi;
    PUSH32(esp, 0x0069F359u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F359: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC9D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F363: ;
    POP32(esp, esi);
    MEM8(0x8EFC9D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F390
 * Original: 0x0069F390 - 0x0069F3FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F390: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F3CD; /* jne: not equal / not zero */

loc_0069F39E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F3CD: ;
    PUSH32(esp, 0x89AD7C);
    esi = ecx;
    PUSH32(esp, 0x0069F3D9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F3D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F3F3; /* je: equal / zero */

loc_0069F3DD: ;
    PUSH32(esp, 0x89AD74);
    ecx = esi;
    PUSH32(esp, 0x0069F3E9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F3E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFCA9) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F3F3: ;
    POP32(esp, esi);
    MEM8(0x8EFCA9) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F420
 * Original: 0x0069F420 - 0x0069F48C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F420: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F45D; /* jne: not equal / not zero */

loc_0069F42E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F45D: ;
    PUSH32(esp, 0x89AD8C);
    esi = ecx;
    PUSH32(esp, 0x0069F469u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F469: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F483; /* je: equal / zero */

loc_0069F46D: ;
    PUSH32(esp, 0x89AD84);
    ecx = esi;
    PUSH32(esp, 0x0069F479u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F479: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC9A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F483: ;
    POP32(esp, esi);
    MEM8(0x8EFC9A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F4B0
 * Original: 0x0069F4B0 - 0x0069F51C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F4B0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F4ED; /* jne: not equal / not zero */

loc_0069F4BE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F4ED: ;
    PUSH32(esp, 0x89AD9C);
    esi = ecx;
    PUSH32(esp, 0x0069F4F9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F4F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F513; /* je: equal / zero */

loc_0069F4FD: ;
    PUSH32(esp, 0x89AD94);
    ecx = esi;
    PUSH32(esp, 0x0069F509u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F509: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFCA0) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F513: ;
    POP32(esp, esi);
    MEM8(0x8EFCA0) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F540
 * Original: 0x0069F540 - 0x0069F5AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F540: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F57D; /* jne: not equal / not zero */

loc_0069F54E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F57D: ;
    PUSH32(esp, 0x89ADAC);
    esi = ecx;
    PUSH32(esp, 0x0069F589u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F589: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F5A3; /* je: equal / zero */

loc_0069F58D: ;
    PUSH32(esp, 0x89ADA4);
    ecx = esi;
    PUSH32(esp, 0x0069F599u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F599: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC91) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F5A3: ;
    POP32(esp, esi);
    MEM8(0x8EFC91) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F5D0
 * Original: 0x0069F5D0 - 0x0069F63C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F5D0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F60D; /* jne: not equal / not zero */

loc_0069F5DE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F60D: ;
    PUSH32(esp, 0x89ADBC);
    esi = ecx;
    PUSH32(esp, 0x0069F619u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F619: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F633; /* je: equal / zero */

loc_0069F61D: ;
    PUSH32(esp, 0x89ADB4);
    ecx = esi;
    PUSH32(esp, 0x0069F629u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F629: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC96) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F633: ;
    POP32(esp, esi);
    MEM8(0x8EFC96) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F660
 * Original: 0x0069F660 - 0x0069F6CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F660: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F69D; /* jne: not equal / not zero */

loc_0069F66E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F69D: ;
    PUSH32(esp, 0x89ADCC);
    esi = ecx;
    PUSH32(esp, 0x0069F6A9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F6A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F6C3; /* je: equal / zero */

loc_0069F6AD: ;
    PUSH32(esp, 0x89ADC4);
    ecx = esi;
    PUSH32(esp, 0x0069F6B9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F6B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFCA6) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F6C3: ;
    POP32(esp, esi);
    MEM8(0x8EFCA6) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F6F0
 * Original: 0x0069F6F0 - 0x0069F75C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F6F0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F72D; /* jne: not equal / not zero */

loc_0069F6FE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F72D: ;
    PUSH32(esp, 0x89ADDC);
    esi = ecx;
    PUSH32(esp, 0x0069F739u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F739: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F753; /* je: equal / zero */

loc_0069F73D: ;
    PUSH32(esp, 0x89ADD4);
    ecx = esi;
    PUSH32(esp, 0x0069F749u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F749: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFCA8) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F753: ;
    POP32(esp, esi);
    MEM8(0x8EFCA8) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F780
 * Original: 0x0069F780 - 0x0069F7EC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F780: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F7BD; /* jne: not equal / not zero */

loc_0069F78E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F7BD: ;
    PUSH32(esp, 0x89ADEC);
    esi = ecx;
    PUSH32(esp, 0x0069F7C9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F7C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F7E3; /* je: equal / zero */

loc_0069F7CD: ;
    PUSH32(esp, 0x89ADE4);
    ecx = esi;
    PUSH32(esp, 0x0069F7D9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F7D9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC9F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F7E3: ;
    POP32(esp, esi);
    MEM8(0x8EFC9F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F810
 * Original: 0x0069F810 - 0x0069F87C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F810: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F84D; /* jne: not equal / not zero */

loc_0069F81E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F84D: ;
    PUSH32(esp, 0x89ADFC);
    esi = ecx;
    PUSH32(esp, 0x0069F859u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F859: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F873; /* je: equal / zero */

loc_0069F85D: ;
    PUSH32(esp, 0x89ADF4);
    ecx = esi;
    PUSH32(esp, 0x0069F869u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F869: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFCA5) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F873: ;
    POP32(esp, esi);
    MEM8(0x8EFCA5) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F8A0
 * Original: 0x0069F8A0 - 0x0069F90C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F8A0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F8DD; /* jne: not equal / not zero */

loc_0069F8AE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F8DD: ;
    PUSH32(esp, 0x89AE0C);
    esi = ecx;
    PUSH32(esp, 0x0069F8E9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F8E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F903; /* je: equal / zero */

loc_0069F8ED: ;
    PUSH32(esp, 0x89AE04);
    ecx = esi;
    PUSH32(esp, 0x0069F8F9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F8F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC92) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F903: ;
    POP32(esp, esi);
    MEM8(0x8EFC92) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F930
 * Original: 0x0069F930 - 0x0069F99C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F930: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F96D; /* jne: not equal / not zero */

loc_0069F93E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F96D: ;
    PUSH32(esp, 0x89AE1C);
    esi = ecx;
    PUSH32(esp, 0x0069F979u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069F979: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069F993; /* je: equal / zero */

loc_0069F97D: ;
    PUSH32(esp, 0x89AE14);
    ecx = esi;
    PUSH32(esp, 0x0069F989u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069F989: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC97) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069F993: ;
    POP32(esp, esi);
    MEM8(0x8EFC97) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069F9C0
 * Original: 0x0069F9C0 - 0x0069FA2C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069F9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069F9C0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069F9FD; /* jne: not equal / not zero */

loc_0069F9CE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069F9FD: ;
    PUSH32(esp, 0x89AE2C);
    esi = ecx;
    PUSH32(esp, 0x0069FA09u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069FA09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069FA23; /* je: equal / zero */

loc_0069FA0D: ;
    PUSH32(esp, 0x89AE24);
    ecx = esi;
    PUSH32(esp, 0x0069FA19u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069FA19: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC93) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069FA23: ;
    POP32(esp, esi);
    MEM8(0x8EFC93) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FA50
 * Original: 0x0069FA50 - 0x0069FABC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069FA50: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069FA8D; /* jne: not equal / not zero */

loc_0069FA5E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069FA8D: ;
    PUSH32(esp, 0x89AE3C);
    esi = ecx;
    PUSH32(esp, 0x0069FA99u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069FA99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069FAB3; /* je: equal / zero */

loc_0069FA9D: ;
    PUSH32(esp, 0x89AE34);
    ecx = esi;
    PUSH32(esp, 0x0069FAA9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069FAA9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC9B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069FAB3: ;
    POP32(esp, esi);
    MEM8(0x8EFC9B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FAE0
 * Original: 0x0069FAE0 - 0x0069FB4C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069FAE0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069FB1D; /* jne: not equal / not zero */

loc_0069FAEE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069FB1D: ;
    PUSH32(esp, 0x89AE4C);
    esi = ecx;
    PUSH32(esp, 0x0069FB29u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069FB29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069FB43; /* je: equal / zero */

loc_0069FB2D: ;
    PUSH32(esp, 0x89AE44);
    ecx = esi;
    PUSH32(esp, 0x0069FB39u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069FB39: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC98) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069FB43: ;
    POP32(esp, esi);
    MEM8(0x8EFC98) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FB70
 * Original: 0x0069FB70 - 0x0069FBDC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069FB70: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069FBAD; /* jne: not equal / not zero */

loc_0069FB7E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069FBAD: ;
    PUSH32(esp, 0x89AE5C);
    esi = ecx;
    PUSH32(esp, 0x0069FBB9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069FBB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069FBD3; /* je: equal / zero */

loc_0069FBBD: ;
    PUSH32(esp, 0x89AE54);
    ecx = esi;
    PUSH32(esp, 0x0069FBC9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069FBC9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC9E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069FBD3: ;
    POP32(esp, esi);
    MEM8(0x8EFC9E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FC00
 * Original: 0x0069FC00 - 0x0069FC6C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069FC00: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069FC3D; /* jne: not equal / not zero */

loc_0069FC0E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069FC3D: ;
    PUSH32(esp, 0x89AE6C);
    esi = ecx;
    PUSH32(esp, 0x0069FC49u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069FC49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069FC63; /* je: equal / zero */

loc_0069FC4D: ;
    PUSH32(esp, 0x89AE64);
    ecx = esi;
    PUSH32(esp, 0x0069FC59u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069FC59: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFCA2) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069FC63: ;
    POP32(esp, esi);
    MEM8(0x8EFCA2) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FC90
 * Original: 0x0069FC90 - 0x0069FCFC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069FC90: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069FCCD; /* jne: not equal / not zero */

loc_0069FC9E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069FCCD: ;
    PUSH32(esp, 0x89AE7C);
    esi = ecx;
    PUSH32(esp, 0x0069FCD9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069FCD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069FCF3; /* je: equal / zero */

loc_0069FCDD: ;
    PUSH32(esp, 0x89AE74);
    ecx = esi;
    PUSH32(esp, 0x0069FCE9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069FCE9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFC94) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069FCF3: ;
    POP32(esp, esi);
    MEM8(0x8EFC94) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FD20
 * Original: 0x0069FD20 - 0x0069FD8C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069FD20: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0069FD5D; /* jne: not equal / not zero */

loc_0069FD2E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_0069FD5D: ;
    PUSH32(esp, 0x89AE8C);
    esi = ecx;
    PUSH32(esp, 0x0069FD69u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_0069FD69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069FD83; /* je: equal / zero */

loc_0069FD6D: ;
    PUSH32(esp, 0x89AE84);
    ecx = esi;
    PUSH32(esp, 0x0069FD79u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_0069FD79: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8EFCAB) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0069FD83: ;
    POP32(esp, esi);
    MEM8(0x8EFCAB) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FDB0
 * Original: 0x0069FDB0 - 0x0069FDBC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FDB0(void)
{

loc_0069FDB0: ;
    PUSH32(esp, 0x6B6520);
    PUSH32(esp, 0x0069FDBAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069FDBA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FDC0
 * Original: 0x0069FDC0 - 0x0069FDCC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FDC0(void)
{

loc_0069FDC0: ;
    PUSH32(esp, 0x6B6530);
    PUSH32(esp, 0x0069FDCAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069FDCA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FDD0
 * Original: 0x0069FDD0 - 0x0069FDDC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FDD0(void)
{

loc_0069FDD0: ;
    PUSH32(esp, 0x6B6540);
    PUSH32(esp, 0x0069FDDAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069FDDA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FDE0
 * Original: 0x0069FDE0 - 0x0069FDEC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FDE0(void)
{

loc_0069FDE0: ;
    PUSH32(esp, 0x6B6550);
    PUSH32(esp, 0x0069FDEAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069FDEA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FDF0
 * Original: 0x0069FDF0 - 0x0069FDFC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FDF0(void)
{

loc_0069FDF0: ;
    PUSH32(esp, 0x6B6560);
    PUSH32(esp, 0x0069FDFAu); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069FDFA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FE00
 * Original: 0x0069FE00 - 0x0069FE0C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FE00(void)
{

loc_0069FE00: ;
    PUSH32(esp, 0x6B6570);
    PUSH32(esp, 0x0069FE0Au); RECOMP_ABI_CALL(0x005CBF31u, sub_005CBF31); /* call 0x005CBF31 */

loc_0069FE0A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FE10
 * Original: 0x0069FE10 - 0x0069FE54 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069FE10: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069FE25; /* jne: not equal / not zero */

loc_0069FE1A: ;
    PUSH32(esp, 0x0069FE1Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069FE1F: ;
    ecx = MEM32(0x8E8E54);

loc_0069FE25: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC284);
    esi = ecx;
    PUSH32(esp, 0x0069FE32u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069FE32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069FE4B; /* je: equal / zero */

loc_0069FE36: ;
    PUSH32(esp, 0x8AC27C);
    ecx = esi;
    PUSH32(esp, 0x0069FE42u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069FE42: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFFD) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069FE4B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFFD) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FE70
 * Original: 0x0069FE70 - 0x0069FEB4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069FE70: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069FE85; /* jne: not equal / not zero */

loc_0069FE7A: ;
    PUSH32(esp, 0x0069FE7Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069FE7F: ;
    ecx = MEM32(0x8E8E54);

loc_0069FE85: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC294);
    esi = ecx;
    PUSH32(esp, 0x0069FE92u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069FE92: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069FEAB; /* je: equal / zero */

loc_0069FE96: ;
    PUSH32(esp, 0x8AC28C);
    ecx = esi;
    PUSH32(esp, 0x0069FEA2u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069FEA2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFF4) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069FEAB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFF4) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FED0
 * Original: 0x0069FED0 - 0x0069FF14 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069FED0: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069FEE5; /* jne: not equal / not zero */

loc_0069FEDA: ;
    PUSH32(esp, 0x0069FEDFu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069FEDF: ;
    ecx = MEM32(0x8E8E54);

loc_0069FEE5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC2A4);
    esi = ecx;
    PUSH32(esp, 0x0069FEF2u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069FEF2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069FF0B; /* je: equal / zero */

loc_0069FEF6: ;
    PUSH32(esp, 0x8AC29C);
    ecx = esi;
    PUSH32(esp, 0x0069FF02u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069FF02: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFFC) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069FF0B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFFC) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FF30
 * Original: 0x0069FF30 - 0x0069FF74 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069FF30: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069FF45; /* jne: not equal / not zero */

loc_0069FF3A: ;
    PUSH32(esp, 0x0069FF3Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069FF3F: ;
    ecx = MEM32(0x8E8E54);

loc_0069FF45: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC2B4);
    esi = ecx;
    PUSH32(esp, 0x0069FF52u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069FF52: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069FF6B; /* je: equal / zero */

loc_0069FF56: ;
    PUSH32(esp, 0x8AC2AC);
    ecx = esi;
    PUSH32(esp, 0x0069FF62u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069FF62: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFE8) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069FF6B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFE8) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FF90
 * Original: 0x0069FF90 - 0x0069FFD4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069FF90: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0069FFA5; /* jne: not equal / not zero */

loc_0069FF9A: ;
    PUSH32(esp, 0x0069FF9Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069FF9F: ;
    ecx = MEM32(0x8E8E54);

loc_0069FFA5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC2C4);
    esi = ecx;
    PUSH32(esp, 0x0069FFB2u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_0069FFB2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0069FFCB; /* je: equal / zero */

loc_0069FFB6: ;
    PUSH32(esp, 0x8AC2BC);
    ecx = esi;
    PUSH32(esp, 0x0069FFC2u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_0069FFC2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFF8) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0069FFCB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFF8) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FFF0
 * Original: 0x0069FFF0 - 0x006A0034 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069FFF0: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A0005; /* jne: not equal / not zero */

loc_0069FFFA: ;
    PUSH32(esp, 0x0069FFFFu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_0069FFFF: ;
    ecx = MEM32(0x8E8E54);

loc_006A0005: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC2D4);
    esi = ecx;
    PUSH32(esp, 0x006A0012u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A0012: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A002B; /* je: equal / zero */

loc_006A0016: ;
    PUSH32(esp, 0x8AC2CC);
    ecx = esi;
    PUSH32(esp, 0x006A0022u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A0022: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFF7) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A002B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFF7) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0069FFFF
 * Original: 0x0069FFFF - 0x006A0034 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0069FFFF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0069FFFF: ;
    ecx = MEM32(0x8E8E54);
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC2D4);
    esi = ecx;
    PUSH32(esp, 0x006A0012u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A0012: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A002B; /* je: equal / zero */

loc_006A0016: ;
    PUSH32(esp, 0x8AC2CC);
    ecx = esi;
    PUSH32(esp, 0x006A0022u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A0022: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFF7) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A002B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFF7) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0050
 * Original: 0x006A0050 - 0x006A0094 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0050: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A0065; /* jne: not equal / not zero */

loc_006A005A: ;
    PUSH32(esp, 0x006A005Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A005F: ;
    ecx = MEM32(0x8E8E54);

loc_006A0065: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC2E4);
    esi = ecx;
    PUSH32(esp, 0x006A0072u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A0072: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A008B; /* je: equal / zero */

loc_006A0076: ;
    PUSH32(esp, 0x8AC2DC);
    ecx = esi;
    PUSH32(esp, 0x006A0082u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A0082: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFE9) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A008B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFE9) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A00B0
 * Original: 0x006A00B0 - 0x006A00F4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A00B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A00B0: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A00C5; /* jne: not equal / not zero */

loc_006A00BA: ;
    PUSH32(esp, 0x006A00BFu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A00BF: ;
    ecx = MEM32(0x8E8E54);

loc_006A00C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC2F4);
    esi = ecx;
    PUSH32(esp, 0x006A00D2u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A00D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A00EB; /* je: equal / zero */

loc_006A00D6: ;
    PUSH32(esp, 0x8AC2EC);
    ecx = esi;
    PUSH32(esp, 0x006A00E2u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A00E2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFEF) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A00EB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFEF) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0110
 * Original: 0x006A0110 - 0x006A0154 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0110: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A0125; /* jne: not equal / not zero */

loc_006A011A: ;
    PUSH32(esp, 0x006A011Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A011F: ;
    ecx = MEM32(0x8E8E54);

loc_006A0125: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC304);
    esi = ecx;
    PUSH32(esp, 0x006A0132u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A0132: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A014B; /* je: equal / zero */

loc_006A0136: ;
    PUSH32(esp, 0x8AC2FC);
    ecx = esi;
    PUSH32(esp, 0x006A0142u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A0142: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFFE) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A014B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFFE) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0170
 * Original: 0x006A0170 - 0x006A01B4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0170: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A0185; /* jne: not equal / not zero */

loc_006A017A: ;
    PUSH32(esp, 0x006A017Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A017F: ;
    ecx = MEM32(0x8E8E54);

loc_006A0185: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC314);
    esi = ecx;
    PUSH32(esp, 0x006A0192u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A0192: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A01AB; /* je: equal / zero */

loc_006A0196: ;
    PUSH32(esp, 0x8AC30C);
    ecx = esi;
    PUSH32(esp, 0x006A01A2u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A01A2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFEA) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A01AB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFEA) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A01D0
 * Original: 0x006A01D0 - 0x006A0214 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A01D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A01D0: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A01E5; /* jne: not equal / not zero */

loc_006A01DA: ;
    PUSH32(esp, 0x006A01DFu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A01DF: ;
    ecx = MEM32(0x8E8E54);

loc_006A01E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC324);
    esi = ecx;
    PUSH32(esp, 0x006A01F2u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A01F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A020B; /* je: equal / zero */

loc_006A01F6: ;
    PUSH32(esp, 0x8AC31C);
    ecx = esi;
    PUSH32(esp, 0x006A0202u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A0202: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFFA) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A020B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFFA) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0230
 * Original: 0x006A0230 - 0x006A0274 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0230: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A0245; /* jne: not equal / not zero */

loc_006A023A: ;
    PUSH32(esp, 0x006A023Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A023F: ;
    ecx = MEM32(0x8E8E54);

loc_006A0245: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC334);
    esi = ecx;
    PUSH32(esp, 0x006A0252u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A0252: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A026B; /* je: equal / zero */

loc_006A0256: ;
    PUSH32(esp, 0x8AC32C);
    ecx = esi;
    PUSH32(esp, 0x006A0262u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A0262: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFF9) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A026B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFF9) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0290
 * Original: 0x006A0290 - 0x006A02D4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0290: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A02A5; /* jne: not equal / not zero */

loc_006A029A: ;
    PUSH32(esp, 0x006A029Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A029F: ;
    ecx = MEM32(0x8E8E54);

loc_006A02A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC344);
    esi = ecx;
    PUSH32(esp, 0x006A02B2u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A02B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A02CB; /* je: equal / zero */

loc_006A02B6: ;
    PUSH32(esp, 0x8AC33C);
    ecx = esi;
    PUSH32(esp, 0x006A02C2u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A02C2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFF1) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A02CB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFF1) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A02F0
 * Original: 0x006A02F0 - 0x006A0334 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A02F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A02F0: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A0305; /* jne: not equal / not zero */

loc_006A02FA: ;
    PUSH32(esp, 0x006A02FFu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A02FF: ;
    ecx = MEM32(0x8E8E54);

loc_006A0305: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC354);
    esi = ecx;
    PUSH32(esp, 0x006A0312u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A0312: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A032B; /* je: equal / zero */

loc_006A0316: ;
    PUSH32(esp, 0x8AC34C);
    ecx = esi;
    PUSH32(esp, 0x006A0322u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A0322: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFF5) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A032B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFF5) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0350
 * Original: 0x006A0350 - 0x006A0394 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0350: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A0365; /* jne: not equal / not zero */

loc_006A035A: ;
    PUSH32(esp, 0x006A035Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A035F: ;
    ecx = MEM32(0x8E8E54);

loc_006A0365: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC364);
    esi = ecx;
    PUSH32(esp, 0x006A0372u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A0372: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A038B; /* je: equal / zero */

loc_006A0376: ;
    PUSH32(esp, 0x8AC35C);
    ecx = esi;
    PUSH32(esp, 0x006A0382u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A0382: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFEC) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A038B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFEC) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A03B0
 * Original: 0x006A03B0 - 0x006A03F4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A03B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A03B0: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A03C5; /* jne: not equal / not zero */

loc_006A03BA: ;
    PUSH32(esp, 0x006A03BFu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A03BF: ;
    ecx = MEM32(0x8E8E54);

loc_006A03C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC374);
    esi = ecx;
    PUSH32(esp, 0x006A03D2u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A03D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A03EB; /* je: equal / zero */

loc_006A03D6: ;
    PUSH32(esp, 0x8AC36C);
    ecx = esi;
    PUSH32(esp, 0x006A03E2u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A03E2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFF3) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A03EB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFF3) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0410
 * Original: 0x006A0410 - 0x006A0454 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0410: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A0425; /* jne: not equal / not zero */

loc_006A041A: ;
    PUSH32(esp, 0x006A041Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A041F: ;
    ecx = MEM32(0x8E8E54);

loc_006A0425: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC384);
    esi = ecx;
    PUSH32(esp, 0x006A0432u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A0432: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A044B; /* je: equal / zero */

loc_006A0436: ;
    PUSH32(esp, 0x8AC37C);
    ecx = esi;
    PUSH32(esp, 0x006A0442u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A0442: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFF6) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A044B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFF6) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0470
 * Original: 0x006A0470 - 0x006A04B4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0470: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A0485; /* jne: not equal / not zero */

loc_006A047A: ;
    PUSH32(esp, 0x006A047Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A047F: ;
    ecx = MEM32(0x8E8E54);

loc_006A0485: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC394);
    esi = ecx;
    PUSH32(esp, 0x006A0492u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A0492: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A04AB; /* je: equal / zero */

loc_006A0496: ;
    PUSH32(esp, 0x8AC38C);
    ecx = esi;
    PUSH32(esp, 0x006A04A2u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A04A2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFFB) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A04AB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFFB) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A04D0
 * Original: 0x006A04D0 - 0x006A0514 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A04D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A04D0: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A04E5; /* jne: not equal / not zero */

loc_006A04DA: ;
    PUSH32(esp, 0x006A04DFu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A04DF: ;
    ecx = MEM32(0x8E8E54);

loc_006A04E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC3A4);
    esi = ecx;
    PUSH32(esp, 0x006A04F2u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A04F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A050B; /* je: equal / zero */

loc_006A04F6: ;
    PUSH32(esp, 0x8AC39C);
    ecx = esi;
    PUSH32(esp, 0x006A0502u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A0502: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFEB) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A050B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFEB) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0530
 * Original: 0x006A0530 - 0x006A0574 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0530: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A0545; /* jne: not equal / not zero */

loc_006A053A: ;
    PUSH32(esp, 0x006A053Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A053F: ;
    ecx = MEM32(0x8E8E54);

loc_006A0545: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC3B4);
    esi = ecx;
    PUSH32(esp, 0x006A0552u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A0552: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A056B; /* je: equal / zero */

loc_006A0556: ;
    PUSH32(esp, 0x8AC3AC);
    ecx = esi;
    PUSH32(esp, 0x006A0562u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A0562: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFEE) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A056B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFEE) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0590
 * Original: 0x006A0590 - 0x006A05D4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0590: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A05A5; /* jne: not equal / not zero */

loc_006A059A: ;
    PUSH32(esp, 0x006A059Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A059F: ;
    ecx = MEM32(0x8E8E54);

loc_006A05A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC3C4);
    esi = ecx;
    PUSH32(esp, 0x006A05B2u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A05B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A05CB; /* je: equal / zero */

loc_006A05B6: ;
    PUSH32(esp, 0x8AC3BC);
    ecx = esi;
    PUSH32(esp, 0x006A05C2u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A05C2: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFF2) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A05CB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFF2) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A05F0
 * Original: 0x006A05F0 - 0x006A0634 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A05F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A05F0: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A0605; /* jne: not equal / not zero */

loc_006A05FA: ;
    PUSH32(esp, 0x006A05FFu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A05FF: ;
    ecx = MEM32(0x8E8E54);

loc_006A0605: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC3D4);
    esi = ecx;
    PUSH32(esp, 0x006A0612u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A0612: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A062B; /* je: equal / zero */

loc_006A0616: ;
    PUSH32(esp, 0x8AC3CC);
    ecx = esi;
    PUSH32(esp, 0x006A0622u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A0622: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFED) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A062B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFED) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0650
 * Original: 0x006A0650 - 0x006A0694 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0650: ;
    ecx = MEM32(0x8E8E54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A0665; /* jne: not equal / not zero */

loc_006A065A: ;
    PUSH32(esp, 0x006A065Fu); RECOMP_ABI_CALL(0x0001A6E6u, sub_0001A6E6); /* call 0x0001A6E6 */

loc_006A065F: ;
    ecx = MEM32(0x8E8E54);

loc_006A0665: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC3E4);
    esi = ecx;
    PUSH32(esp, 0x006A0672u); RECOMP_ABI_CALL(0x00013F35u, sub_00013F35); /* call 0x00013F35 */

loc_006A0672: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A068B; /* je: equal / zero */

loc_006A0676: ;
    PUSH32(esp, 0x8AC3DC);
    ecx = esi;
    PUSH32(esp, 0x006A0682u); RECOMP_ABI_CALL(0x00034F78u, sub_00034F78); /* call 0x00034F78 */

loc_006A0682: ;
    SET_LO8(eax, 1);
    MEM8(0x8EFFF0) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A068B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8EFFF0) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A06B0
 * Original: 0x006A06B0 - 0x006A06F4 (68 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A06B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A06B0: ;
    ecx = MEM32(0x8E8D34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_006A06C5; /* jne: not equal / not zero */

loc_006A06BA: ;
    PUSH32(esp, 0x006A06BFu); RECOMP_ABI_CALL(0x000202B2u, sub_000202B2); /* call 0x000202B2 */

loc_006A06BF: ;
    ecx = MEM32(0x8E8D34);

loc_006A06C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8AC474);
    esi = ecx;
    PUSH32(esp, 0x006A06D2u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A06D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A06EB; /* je: equal / zero */

loc_006A06D6: ;
    PUSH32(esp, 0x8AC46C);
    ecx = esi;
    PUSH32(esp, 0x006A06E2u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A06E2: ;
    SET_LO8(eax, 1);
    MEM8(0x8F0003) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_006A06EB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x8F0003) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0710
 * Original: 0x006A0710 - 0x006A077C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0710: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A074D; /* jne: not equal / not zero */

loc_006A071E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A074D: ;
    PUSH32(esp, 0x8AC4BC);
    esi = ecx;
    PUSH32(esp, 0x006A0759u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0759: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0773; /* je: equal / zero */

loc_006A075D: ;
    PUSH32(esp, 0x8AC4B4);
    ecx = esi;
    PUSH32(esp, 0x006A0769u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A0769: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0014) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0773: ;
    POP32(esp, esi);
    MEM8(0x8F0014) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A07A0
 * Original: 0x006A07A0 - 0x006A080C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A07A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A07A0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A07DD; /* jne: not equal / not zero */

loc_006A07AE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A07DD: ;
    PUSH32(esp, 0x8AC4CC);
    esi = ecx;
    PUSH32(esp, 0x006A07E9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A07E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0803; /* je: equal / zero */

loc_006A07ED: ;
    PUSH32(esp, 0x8AC4C4);
    ecx = esi;
    PUSH32(esp, 0x006A07F9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A07F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F000D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0803: ;
    POP32(esp, esi);
    MEM8(0x8F000D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0830
 * Original: 0x006A0830 - 0x006A089C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0830: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A086D; /* jne: not equal / not zero */

loc_006A083E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A086D: ;
    PUSH32(esp, 0x8AC4DC);
    esi = ecx;
    PUSH32(esp, 0x006A0879u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0879: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0893; /* je: equal / zero */

loc_006A087D: ;
    PUSH32(esp, 0x8AC4D4);
    ecx = esi;
    PUSH32(esp, 0x006A0889u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A0889: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0012) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0893: ;
    POP32(esp, esi);
    MEM8(0x8F0012) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A08C0
 * Original: 0x006A08C0 - 0x006A092C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A08C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A08C0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A08FD; /* jne: not equal / not zero */

loc_006A08CE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A08FD: ;
    PUSH32(esp, 0x8AC4EC);
    esi = ecx;
    PUSH32(esp, 0x006A0909u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0909: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0923; /* je: equal / zero */

loc_006A090D: ;
    PUSH32(esp, 0x8AC4E4);
    ecx = esi;
    PUSH32(esp, 0x006A0919u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A0919: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0029) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0923: ;
    POP32(esp, esi);
    MEM8(0x8F0029) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0950
 * Original: 0x006A0950 - 0x006A09BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0950: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A098D; /* jne: not equal / not zero */

loc_006A095E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A098D: ;
    PUSH32(esp, 0x8AC4FC);
    esi = ecx;
    PUSH32(esp, 0x006A0999u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0999: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A09B3; /* je: equal / zero */

loc_006A099D: ;
    PUSH32(esp, 0x8AC4F4);
    ecx = esi;
    PUSH32(esp, 0x006A09A9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A09A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0030) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A09B3: ;
    POP32(esp, esi);
    MEM8(0x8F0030) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A09E0
 * Original: 0x006A09E0 - 0x006A0A4C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A09E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A09E0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A0A1D; /* jne: not equal / not zero */

loc_006A09EE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A0A1D: ;
    PUSH32(esp, 0x8AC50C);
    esi = ecx;
    PUSH32(esp, 0x006A0A29u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0A29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0A43; /* je: equal / zero */

loc_006A0A2D: ;
    PUSH32(esp, 0x8AC504);
    ecx = esi;
    PUSH32(esp, 0x006A0A39u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A0A39: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F000F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0A43: ;
    POP32(esp, esi);
    MEM8(0x8F000F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0A70
 * Original: 0x006A0A70 - 0x006A0ADC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0A70: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A0AAD; /* jne: not equal / not zero */

loc_006A0A7E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A0AAD: ;
    PUSH32(esp, 0x8AC51C);
    esi = ecx;
    PUSH32(esp, 0x006A0AB9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0AB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0AD3; /* je: equal / zero */

loc_006A0ABD: ;
    PUSH32(esp, 0x8AC514);
    ecx = esi;
    PUSH32(esp, 0x006A0AC9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A0AC9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0021) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0AD3: ;
    POP32(esp, esi);
    MEM8(0x8F0021) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0B00
 * Original: 0x006A0B00 - 0x006A0B6C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0B00: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A0B3D; /* jne: not equal / not zero */

loc_006A0B0E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A0B3D: ;
    PUSH32(esp, 0x8AC52C);
    esi = ecx;
    PUSH32(esp, 0x006A0B49u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0B49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0B63; /* je: equal / zero */

loc_006A0B4D: ;
    PUSH32(esp, 0x8AC524);
    ecx = esi;
    PUSH32(esp, 0x006A0B59u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A0B59: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F002C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0B63: ;
    POP32(esp, esi);
    MEM8(0x8F002C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0B90
 * Original: 0x006A0B90 - 0x006A0BFC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0B90: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A0BCD; /* jne: not equal / not zero */

loc_006A0B9E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A0BCD: ;
    PUSH32(esp, 0x8AC53C);
    esi = ecx;
    PUSH32(esp, 0x006A0BD9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0BD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0BF3; /* je: equal / zero */

loc_006A0BDD: ;
    PUSH32(esp, 0x8AC534);
    ecx = esi;
    PUSH32(esp, 0x006A0BE9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A0BE9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0019) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0BF3: ;
    POP32(esp, esi);
    MEM8(0x8F0019) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0C20
 * Original: 0x006A0C20 - 0x006A0C8C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0C20: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A0C5D; /* jne: not equal / not zero */

loc_006A0C2E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A0C5D: ;
    PUSH32(esp, 0x8AC54C);
    esi = ecx;
    PUSH32(esp, 0x006A0C69u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0C69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0C83; /* je: equal / zero */

loc_006A0C6D: ;
    PUSH32(esp, 0x8AC544);
    ecx = esi;
    PUSH32(esp, 0x006A0C79u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A0C79: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0023) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0C83: ;
    POP32(esp, esi);
    MEM8(0x8F0023) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0CB0
 * Original: 0x006A0CB0 - 0x006A0D1C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0CB0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A0CED; /* jne: not equal / not zero */

loc_006A0CBE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A0CED: ;
    PUSH32(esp, 0x8AC55C);
    esi = ecx;
    PUSH32(esp, 0x006A0CF9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0CF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0D13; /* je: equal / zero */

loc_006A0CFD: ;
    PUSH32(esp, 0x8AC554);
    ecx = esi;
    PUSH32(esp, 0x006A0D09u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A0D09: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F000C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0D13: ;
    POP32(esp, esi);
    MEM8(0x8F000C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0D40
 * Original: 0x006A0D40 - 0x006A0DAC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0D40: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A0D7D; /* jne: not equal / not zero */

loc_006A0D4E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A0D7D: ;
    PUSH32(esp, 0x8AC56C);
    esi = ecx;
    PUSH32(esp, 0x006A0D89u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0D89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0DA3; /* je: equal / zero */

loc_006A0D8D: ;
    PUSH32(esp, 0x8AC564);
    ecx = esi;
    PUSH32(esp, 0x006A0D99u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A0D99: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0026) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0DA3: ;
    POP32(esp, esi);
    MEM8(0x8F0026) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0DD0
 * Original: 0x006A0DD0 - 0x006A0E3C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0DD0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A0E0D; /* jne: not equal / not zero */

loc_006A0DDE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A0E0D: ;
    PUSH32(esp, 0x8AC57C);
    esi = ecx;
    PUSH32(esp, 0x006A0E19u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0E19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0E33; /* je: equal / zero */

loc_006A0E1D: ;
    PUSH32(esp, 0x8AC574);
    ecx = esi;
    PUSH32(esp, 0x006A0E29u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A0E29: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F001C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0E33: ;
    POP32(esp, esi);
    MEM8(0x8F001C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0E60
 * Original: 0x006A0E60 - 0x006A0ECC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0E60: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A0E9D; /* jne: not equal / not zero */

loc_006A0E6E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A0E9D: ;
    PUSH32(esp, 0x8AC58C);
    esi = ecx;
    PUSH32(esp, 0x006A0EA9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0EA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0EC3; /* je: equal / zero */

loc_006A0EAD: ;
    PUSH32(esp, 0x8AC584);
    ecx = esi;
    PUSH32(esp, 0x006A0EB9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A0EB9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F002B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0EC3: ;
    POP32(esp, esi);
    MEM8(0x8F002B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0EF0
 * Original: 0x006A0EF0 - 0x006A0F5C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0EF0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A0F2D; /* jne: not equal / not zero */

loc_006A0EFE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A0F2D: ;
    PUSH32(esp, 0x8AC59C);
    esi = ecx;
    PUSH32(esp, 0x006A0F39u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0F39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0F53; /* je: equal / zero */

loc_006A0F3D: ;
    PUSH32(esp, 0x8AC594);
    ecx = esi;
    PUSH32(esp, 0x006A0F49u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A0F49: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0015) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0F53: ;
    POP32(esp, esi);
    MEM8(0x8F0015) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A0F80
 * Original: 0x006A0F80 - 0x006A0FEC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A0F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A0F80: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A0FBD; /* jne: not equal / not zero */

loc_006A0F8E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A0FBD: ;
    PUSH32(esp, 0x8AC5AC);
    esi = ecx;
    PUSH32(esp, 0x006A0FC9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A0FC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A0FE3; /* je: equal / zero */

loc_006A0FCD: ;
    PUSH32(esp, 0x8AC5A4);
    ecx = esi;
    PUSH32(esp, 0x006A0FD9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A0FD9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F001F) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A0FE3: ;
    POP32(esp, esi);
    MEM8(0x8F001F) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1010
 * Original: 0x006A1010 - 0x006A107C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1010: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A104D; /* jne: not equal / not zero */

loc_006A101E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A104D: ;
    PUSH32(esp, 0x8AC5BC);
    esi = ecx;
    PUSH32(esp, 0x006A1059u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A1059: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1073; /* je: equal / zero */

loc_006A105D: ;
    PUSH32(esp, 0x8AC5B4);
    ecx = esi;
    PUSH32(esp, 0x006A1069u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A1069: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F000E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1073: ;
    POP32(esp, esi);
    MEM8(0x8F000E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A10A0
 * Original: 0x006A10A0 - 0x006A110C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A10A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A10A0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A10DD; /* jne: not equal / not zero */

loc_006A10AE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A10DD: ;
    PUSH32(esp, 0x8AC5CC);
    esi = ecx;
    PUSH32(esp, 0x006A10E9u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A10E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1103; /* je: equal / zero */

loc_006A10ED: ;
    PUSH32(esp, 0x8AC5C4);
    ecx = esi;
    PUSH32(esp, 0x006A10F9u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A10F9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0011) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1103: ;
    POP32(esp, esi);
    MEM8(0x8F0011) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1130
 * Original: 0x006A1130 - 0x006A119C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1130: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A116D; /* jne: not equal / not zero */

loc_006A113E: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A116D: ;
    PUSH32(esp, 0x8AC5DC);
    esi = ecx;
    PUSH32(esp, 0x006A1179u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A1179: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1193; /* je: equal / zero */

loc_006A117D: ;
    PUSH32(esp, 0x8AC5D4);
    ecx = esi;
    PUSH32(esp, 0x006A1189u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A1189: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0028) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1193: ;
    POP32(esp, esi);
    MEM8(0x8F0028) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A11C0
 * Original: 0x006A11C0 - 0x006A122C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A11C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A11C0: ;
    ecx = MEM32(0x8E8D54);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A11FD; /* jne: not equal / not zero */

loc_006A11CE: ;
    ecx = 0x8E8D38;
    MEM32(0x8E8D38) = ebx;
    MEM32(0x8E8D40) = ebx;
    MEM32(0x8E8D3C) = ebx;
    MEM32(0x8E8D44) = ebx;
    MEM32(0x8E8D4C) = ebx;
    MEM32(0x8E8D48) = ebx;
    MEM32(0x8E8D54) = ecx;

loc_006A11FD: ;
    PUSH32(esp, 0x8AC5EC);
    esi = ecx;
    PUSH32(esp, 0x006A1209u); RECOMP_ABI_CALL(0x00021A22u, sub_00021A22); /* call 0x00021A22 */

loc_006A1209: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1223; /* je: equal / zero */

loc_006A120D: ;
    PUSH32(esp, 0x8AC5E4);
    ecx = esi;
    PUSH32(esp, 0x006A1219u); RECOMP_ABI_CALL(0x00035E8Cu, sub_00035E8C); /* call 0x00035E8C */

loc_006A1219: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F002A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1223: ;
    POP32(esp, esi);
    MEM8(0x8F002A) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1250
 * Original: 0x006A1250 - 0x006A12BC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1250: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A128D; /* jne: not equal / not zero */

loc_006A125E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A128D: ;
    PUSH32(esp, 0x8AC5FC);
    esi = ecx;
    PUSH32(esp, 0x006A1299u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1299: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A12B3; /* je: equal / zero */

loc_006A129D: ;
    PUSH32(esp, 0x8AC5F4);
    ecx = esi;
    PUSH32(esp, 0x006A12A9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A12A9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F001E) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A12B3: ;
    POP32(esp, esi);
    MEM8(0x8F001E) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A12E0
 * Original: 0x006A12E0 - 0x006A134C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A12E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A12E0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A131D; /* jne: not equal / not zero */

loc_006A12EE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A131D: ;
    PUSH32(esp, 0x8AC60C);
    esi = ecx;
    PUSH32(esp, 0x006A1329u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1329: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1343; /* je: equal / zero */

loc_006A132D: ;
    PUSH32(esp, 0x8AC604);
    ecx = esi;
    PUSH32(esp, 0x006A1339u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1339: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0027) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1343: ;
    POP32(esp, esi);
    MEM8(0x8F0027) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1370
 * Original: 0x006A1370 - 0x006A13DC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1370: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A13AD; /* jne: not equal / not zero */

loc_006A137E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A13AD: ;
    PUSH32(esp, 0x8AC61C);
    esi = ecx;
    PUSH32(esp, 0x006A13B9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A13B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A13D3; /* je: equal / zero */

loc_006A13BD: ;
    PUSH32(esp, 0x8AC614);
    ecx = esi;
    PUSH32(esp, 0x006A13C9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A13C9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0009) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A13D3: ;
    POP32(esp, esi);
    MEM8(0x8F0009) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1400
 * Original: 0x006A1400 - 0x006A146C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1400: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A143D; /* jne: not equal / not zero */

loc_006A140E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A143D: ;
    PUSH32(esp, 0x8AC62C);
    esi = ecx;
    PUSH32(esp, 0x006A1449u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1449: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1463; /* je: equal / zero */

loc_006A144D: ;
    PUSH32(esp, 0x8AC624);
    ecx = esi;
    PUSH32(esp, 0x006A1459u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1459: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F000B) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1463: ;
    POP32(esp, esi);
    MEM8(0x8F000B) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1490
 * Original: 0x006A1490 - 0x006A14FC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1490: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A14CD; /* jne: not equal / not zero */

loc_006A149E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A14CD: ;
    PUSH32(esp, 0x8AC63C);
    esi = ecx;
    PUSH32(esp, 0x006A14D9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A14D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A14F3; /* je: equal / zero */

loc_006A14DD: ;
    PUSH32(esp, 0x8AC634);
    ecx = esi;
    PUSH32(esp, 0x006A14E9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A14E9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0008) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A14F3: ;
    POP32(esp, esi);
    MEM8(0x8F0008) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1520
 * Original: 0x006A1520 - 0x006A158C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1520: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A155D; /* jne: not equal / not zero */

loc_006A152E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A155D: ;
    PUSH32(esp, 0x8AC64C);
    esi = ecx;
    PUSH32(esp, 0x006A1569u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1569: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1583; /* je: equal / zero */

loc_006A156D: ;
    PUSH32(esp, 0x8AC644);
    ecx = esi;
    PUSH32(esp, 0x006A1579u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1579: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0018) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1583: ;
    POP32(esp, esi);
    MEM8(0x8F0018) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A15B0
 * Original: 0x006A15B0 - 0x006A161C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A15B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A15B0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A15ED; /* jne: not equal / not zero */

loc_006A15BE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A15ED: ;
    PUSH32(esp, 0x8AC65C);
    esi = ecx;
    PUSH32(esp, 0x006A15F9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A15F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1613; /* je: equal / zero */

loc_006A15FD: ;
    PUSH32(esp, 0x8AC654);
    ecx = esi;
    PUSH32(esp, 0x006A1609u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1609: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0013) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1613: ;
    POP32(esp, esi);
    MEM8(0x8F0013) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1640
 * Original: 0x006A1640 - 0x006A16AC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1640: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A167D; /* jne: not equal / not zero */

loc_006A164E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A167D: ;
    PUSH32(esp, 0x8AC66C);
    esi = ecx;
    PUSH32(esp, 0x006A1689u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1689: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A16A3; /* je: equal / zero */

loc_006A168D: ;
    PUSH32(esp, 0x8AC664);
    ecx = esi;
    PUSH32(esp, 0x006A1699u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1699: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F001D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A16A3: ;
    POP32(esp, esi);
    MEM8(0x8F001D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A16D0
 * Original: 0x006A16D0 - 0x006A173C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A16D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A16D0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A170D; /* jne: not equal / not zero */

loc_006A16DE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A170D: ;
    PUSH32(esp, 0x8AC67C);
    esi = ecx;
    PUSH32(esp, 0x006A1719u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1719: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1733; /* je: equal / zero */

loc_006A171D: ;
    PUSH32(esp, 0x8AC674);
    ecx = esi;
    PUSH32(esp, 0x006A1729u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1729: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0022) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1733: ;
    POP32(esp, esi);
    MEM8(0x8F0022) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A1760
 * Original: 0x006A1760 - 0x006A17CC (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A1760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A1760: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A179D; /* jne: not equal / not zero */

loc_006A176E: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A179D: ;
    PUSH32(esp, 0x8AC68C);
    esi = ecx;
    PUSH32(esp, 0x006A17A9u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A17A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A17C3; /* je: equal / zero */

loc_006A17AD: ;
    PUSH32(esp, 0x8AC684);
    ecx = esi;
    PUSH32(esp, 0x006A17B9u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A17B9: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F0004) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A17C3: ;
    POP32(esp, esi);
    MEM8(0x8F0004) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_006A17F0
 * Original: 0x006A17F0 - 0x006A185C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006A17F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_006A17F0: ;
    ecx = MEM32(0x8E8D34);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_006A182D; /* jne: not equal / not zero */

loc_006A17FE: ;
    ecx = 0x8E8D18;
    MEM32(0x8E8D18) = ebx;
    MEM32(0x8E8D20) = ebx;
    MEM32(0x8E8D1C) = ebx;
    MEM32(0x8E8D24) = ebx;
    MEM32(0x8E8D2C) = ebx;
    MEM32(0x8E8D28) = ebx;
    MEM32(0x8E8D34) = ecx;

loc_006A182D: ;
    PUSH32(esp, 0x8AC69C);
    esi = ecx;
    PUSH32(esp, 0x006A1839u); RECOMP_ABI_CALL(0x0001BEF1u, sub_0001BEF1); /* call 0x0001BEF1 */

loc_006A1839: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_006A1853; /* je: equal / zero */

loc_006A183D: ;
    PUSH32(esp, 0x8AC694);
    ecx = esi;
    PUSH32(esp, 0x006A1849u); RECOMP_ABI_CALL(0x00018599u, sub_00018599); /* call 0x00018599 */

loc_006A1849: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(0x8F002D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_006A1853: ;
    POP32(esp, esi);
    MEM8(0x8F002D) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
